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
/**
 * Nudm_EE
 * Nudm Event Exposure Service. © 2021, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.0-alpha.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ReachabilityForSmsConfiguration_anyOf.h"
#include "Helpers.h"
#include <stdexcept>
#include <sstream>

namespace oai::udm::model {

ReachabilityForSmsConfiguration_anyOf::ReachabilityForSmsConfiguration_anyOf() {

}

void ReachabilityForSmsConfiguration_anyOf::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool ReachabilityForSmsConfiguration_anyOf::validate(
    std::stringstream& msg) const {
  return validate(msg, "");
}

bool ReachabilityForSmsConfiguration_anyOf::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ReachabilityForSmsConfiguration_anyOf" : pathPrefix;

  if (m_value == ReachabilityForSmsConfiguration_anyOf::
                     eReachabilityForSmsConfiguration_anyOf::
                         INVALID_VALUE_OPENAPI_GENERATED) {
    success = false;
    msg << _pathPrefix << ": has no value;";
  }

  return success;
}

bool ReachabilityForSmsConfiguration_anyOf::operator==(
    const ReachabilityForSmsConfiguration_anyOf& rhs) const {
  return getValue() == rhs.getValue()

      ;
}

bool ReachabilityForSmsConfiguration_anyOf::operator!=(
    const ReachabilityForSmsConfiguration_anyOf& rhs) const {
  return !(*this == rhs);
}

void to_json(
    nlohmann::json& j, const ReachabilityForSmsConfiguration_anyOf& o) {
  j = nlohmann::json();

  switch (o.getValue()) {
    case ReachabilityForSmsConfiguration_anyOf::
        eReachabilityForSmsConfiguration_anyOf::INVALID_VALUE_OPENAPI_GENERATED:
      j = "INVALID_VALUE_OPENAPI_GENERATED";
      break;
    case ReachabilityForSmsConfiguration_anyOf::
        eReachabilityForSmsConfiguration_anyOf::NAS:
      j = "REACHABILITY_FOR_SMS_OVER_NAS";
      break;
    case ReachabilityForSmsConfiguration_anyOf::
        eReachabilityForSmsConfiguration_anyOf::IP:
      j = "REACHABILITY_FOR_SMS_OVER_IP";
      break;
  }
}

void from_json(
    const nlohmann::json& j, ReachabilityForSmsConfiguration_anyOf& o) {
  auto s = j.get<std::string>();
  if (s == "REACHABILITY_FOR_SMS_OVER_NAS") {
    o.setValue(ReachabilityForSmsConfiguration_anyOf::
                   eReachabilityForSmsConfiguration_anyOf::NAS);
  } else if (s == "REACHABILITY_FOR_SMS_OVER_IP") {
    o.setValue(ReachabilityForSmsConfiguration_anyOf::
                   eReachabilityForSmsConfiguration_anyOf::IP);
  } else {
    std::stringstream ss;
    ss << "Unexpected value " << s << " in json"
       << " cannot be converted to enum of type"
       << " ReachabilityForSmsConfiguration_anyOf::"
          "eReachabilityForSmsConfiguration_anyOf";
    throw std::invalid_argument(ss.str());
  }
}

ReachabilityForSmsConfiguration_anyOf::eReachabilityForSmsConfiguration_anyOf
ReachabilityForSmsConfiguration_anyOf::getValue() const {
  return m_value;
}
void ReachabilityForSmsConfiguration_anyOf::setValue(
    ReachabilityForSmsConfiguration_anyOf::
        eReachabilityForSmsConfiguration_anyOf value) {
  m_value = value;
}

}  // namespace oai::udm::model
