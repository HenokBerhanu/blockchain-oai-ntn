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
 * Nudm_UECM
 * Nudm Context Management Service. � 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ContextInfo.h"

namespace oai {
namespace udm {
namespace model {

ContextInfo::ContextInfo() {
  m_OrigHeadersIsSet = false;
}

ContextInfo::~ContextInfo() {}

void ContextInfo::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const ContextInfo& o) {
  j = nlohmann::json();
  if (o.origHeadersIsSet() || !o.m_OrigHeaders.empty())
    j["origHeaders"] = o.m_OrigHeaders;
}

void from_json(const nlohmann::json& j, ContextInfo& o) {
  if (j.find("origHeaders") != j.end()) {
    j.at("origHeaders").get_to(o.m_OrigHeaders);
    o.m_OrigHeadersIsSet = true;
  }
}

std::vector<std::string>& ContextInfo::getOrigHeaders() {
  return m_OrigHeaders;
}
void ContextInfo::setOrigHeaders(std::vector<std::string> const& value) {
  m_OrigHeaders      = value;
  m_OrigHeadersIsSet = true;
}
bool ContextInfo::origHeadersIsSet() const {
  return m_OrigHeadersIsSet;
}
void ContextInfo::unsetOrigHeaders() {
  m_OrigHeadersIsSet = false;
}

}  // namespace model
}  // namespace udm
}  // namespace oai
