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

#ifndef _PDU_SESSION_RESOURCE_SETUP_ITEM_SU_RES_H_
#define _PDU_SESSION_RESOURCE_SETUP_ITEM_SU_RES_H_

#include "PduSessionId.hpp"

extern "C" {
#include "Ngap_PDUSessionResourceSetupItemSURes.h"
}

namespace ngap {

class PduSessionResourceSetupItemSURes {
 public:
  PduSessionResourceSetupItemSURes();
  virtual ~PduSessionResourceSetupItemSURes();

  void set(
      const PduSessionId& pdu_session_id,
      const OCTET_STRING_t& pdu_session_resource_setup_response_transfer);
  void get(
      PduSessionId& pdu_session_id,
      OCTET_STRING_t& pdu_session_resource_setup_response_transfer) const;

  bool encode(Ngap_PDUSessionResourceSetupItemSURes_t&
                  pdu_session_resource_setup_item_su_res);
  bool decode(const Ngap_PDUSessionResourceSetupItemSURes_t&
                  pdu_session_resource_setup_item_su_res);

 private:
  PduSessionId pdu_session_id_;                                  // Mandatory
  OCTET_STRING_t pdu_session_resource_setup_response_transfer_;  // Mandatory
};

}  // namespace ngap

#endif
