/*
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 * file except in compliance with the License. You may obtain a copy of the
 * License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

#include "ServiceReject.hpp"

#include "NasHelper.hpp"

using namespace nas;

//------------------------------------------------------------------------------
ServiceReject::ServiceReject()
    : NasMmPlainHeader(EPD_5GS_MM_MSG, SERVICE_REJECT) {
  ie_pdu_session_status = std::nullopt;
  ie_t3346_value        = std::nullopt;
  ie_eap_message        = std::nullopt;
  ie_t3448_value        = std::nullopt;
}

//------------------------------------------------------------------------------
ServiceReject::~ServiceReject() {}

//------------------------------------------------------------------------------
void ServiceReject::SetHeader(uint8_t security_header_type) {
  NasMmPlainHeader::SetSecurityHeaderType(security_header_type);
}

//------------------------------------------------------------------------------
void ServiceReject::Set5gmmCause(uint8_t value) {
  ie_5gmm_cause.SetValue(value);
}

//------------------------------------------------------------------------------
uint8_t ServiceReject::Get5GMmCause() {
  return ie_5gmm_cause.GetValue();
}

//------------------------------------------------------------------------------
void ServiceReject::SetPduSessionStatus(uint16_t value) {
  ie_pdu_session_status = std::make_optional<PduSessionStatus>(value);
}

//------------------------------------------------------------------------------
void ServiceReject::SetT3346Value(uint8_t value) {
  ie_t3346_value = std::make_optional<GprsTimer2>(kT3346Value, value);
}

//------------------------------------------------------------------------------
void ServiceReject::SetEapMessage(bstring eap) {
  ie_eap_message = std::make_optional<EapMessage>(kIeiEapMessage, eap);
}

//------------------------------------------------------------------------------
void ServiceReject::SetT3448Value(uint8_t unit, uint8_t value) {
  ie_t3448_value =
      std::make_optional<GprsTimer3>(kIeiGprsTimer3T3448, unit, value);
}

//------------------------------------------------------------------------------
int ServiceReject::Encode(uint8_t* buf, int len) {
  Logger::nas_mm().debug("Encoding Service Reject message");
  int encoded_size    = 0;
  int encoded_ie_size = 0;
  // Header
  if ((encoded_ie_size = NasMmPlainHeader::Encode(buf, len)) ==
      KEncodeDecodeError) {
    Logger::nas_mm().error("Encoding NAS Header error");
    return KEncodeDecodeError;
  }
  encoded_size += encoded_ie_size;

  // 5GMM cause
  if ((encoded_ie_size = NasHelper::Encode(
           ie_5gmm_cause, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // PDU session status
  if ((encoded_ie_size =
           NasHelper::Encode(ie_pdu_session_status, buf, len, encoded_size)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // T3346 value
  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3346_value, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // EAP message
  if ((encoded_ie_size = NasHelper::Encode(
           ie_eap_message, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  // T3448 value
  if ((encoded_ie_size = NasHelper::Encode(
           ie_t3448_value, buf, len, encoded_size)) == KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  Logger::nas_mm().debug(
      "Encoded Service Reject message len (%d)", encoded_size);
  return encoded_size;
}

//------------------------------------------------------------------------------
int ServiceReject::Decode(uint8_t* buf, int len) {
  Logger::nas_mm().debug("Decoding RegistrationAccept message");
  int decoded_size    = 0;
  int decoded_ie_size = 0;

  // Header
  decoded_ie_size = NasMmPlainHeader::Decode(buf, len);
  if (decoded_ie_size == KEncodeDecodeError) {
    Logger::nas_mm().error("Decoding NAS Header error");
    return KEncodeDecodeError;
  }
  decoded_size += decoded_ie_size;

  // 5GMM Cause
  if ((decoded_ie_size =
           NasHelper::Decode(ie_5gmm_cause, buf, len, decoded_size, false)) ==
      KEncodeDecodeError) {
    return KEncodeDecodeError;
  }

  Logger::nas_mm().debug("Decoded_size (%d)", decoded_size);

  // Decode other IEs
  uint8_t octet = 0x00;
  DECODE_U8_VALUE(buf + decoded_size, octet);
  Logger::nas_mm().debug("First option IEI (0x%x)", octet);

  while ((octet != 0x0)) {
    Logger::nas_mm().debug("Decoding IEI 0x%x", octet);
    switch (octet) {
      case kIeiPduSessionStatus: {
        Logger::nas_mm().debug("Decoding IEI 0x%x", kIeiPduSessionStatus);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_pdu_session_status, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf + decoded_size, octet);
        Logger::nas_mm().debug("Next IEI (0x%x)", octet);
      } break;

      case kT3346Value: {
        Logger::nas_mm().debug("Decoding IEI 0x5F: T3346 Value");
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3346_value, kT3346Value, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf + decoded_size, octet);
        Logger::nas_mm().debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiEapMessage: {
        Logger::nas_mm().debug("Decoding IEI (0x78)");
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_eap_message, buf, len, decoded_size, true)) ==
            KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf + decoded_size, octet);
        Logger::nas_mm().debug("Next IEI (0x%x)", octet);
      } break;

      case kIeiGprsTimer3T3448: {
        Logger::nas_mm().debug("Decoding IEI 0x%x", kIeiGprsTimer3T3448);
        if ((decoded_ie_size = NasHelper::Decode(
                 ie_t3448_value, kIeiGprsTimer3T3448, buf, len, decoded_size,
                 true)) == KEncodeDecodeError) {
          return KEncodeDecodeError;
        }
        DECODE_U8_VALUE(buf + decoded_size, octet);
        Logger::nas_mm().debug("Next IEI (0x%x)", octet);
      } break;

      default: {
        Logger::nas_mm().warn("Unknown IEI 0x%x, stop decoding...", octet);
        // Stop decoding
        octet = 0x00;
      } break;
    }
  }
  Logger::nas_mm().debug(
      "Decoded Service Reject message len (%d)", decoded_size);
  return decoded_size;
}
