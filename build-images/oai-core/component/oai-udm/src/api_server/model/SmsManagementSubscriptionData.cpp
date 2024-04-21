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
 * Nudm_SDM
 * Nudm Subscriber Data Management Service. � 2019, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "SmsManagementSubscriptionData.h"

namespace oai {
namespace udm {
namespace model {

SmsManagementSubscriptionData::SmsManagementSubscriptionData() {
  m_SupportedFeatures        = "";
  m_SupportedFeaturesIsSet   = false;
  m_MtSmsSubscribed          = false;
  m_MtSmsSubscribedIsSet     = false;
  m_MtSmsBarringAll          = false;
  m_MtSmsBarringAllIsSet     = false;
  m_MtSmsBarringRoaming      = false;
  m_MtSmsBarringRoamingIsSet = false;
  m_MoSmsSubscribed          = false;
  m_MoSmsSubscribedIsSet     = false;
  m_MoSmsBarringAll          = false;
  m_MoSmsBarringAllIsSet     = false;
  m_MoSmsBarringRoaming      = false;
  m_MoSmsBarringRoamingIsSet = false;
  m_SharedSmsMngDataIdsIsSet = false;
  m_TraceDataIsSet           = false;
}

SmsManagementSubscriptionData::~SmsManagementSubscriptionData() {}

void SmsManagementSubscriptionData::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const SmsManagementSubscriptionData& o) {
  j = nlohmann::json();
  if (o.supportedFeaturesIsSet())
    j["supportedFeatures"] = o.m_SupportedFeatures;
  if (o.mtSmsSubscribedIsSet()) j["mtSmsSubscribed"] = o.m_MtSmsSubscribed;
  if (o.mtSmsBarringAllIsSet()) j["mtSmsBarringAll"] = o.m_MtSmsBarringAll;
  if (o.mtSmsBarringRoamingIsSet())
    j["mtSmsBarringRoaming"] = o.m_MtSmsBarringRoaming;
  if (o.moSmsSubscribedIsSet()) j["moSmsSubscribed"] = o.m_MoSmsSubscribed;
  if (o.moSmsBarringAllIsSet()) j["moSmsBarringAll"] = o.m_MoSmsBarringAll;
  if (o.moSmsBarringRoamingIsSet())
    j["moSmsBarringRoaming"] = o.m_MoSmsBarringRoaming;
  if (o.sharedSmsMngDataIdsIsSet())
    j["sharedSmsMngDataIds"] = o.m_SharedSmsMngDataIds;
  if (o.traceDataIsSet()) j["traceData"] = o.m_TraceData;
}

void from_json(const nlohmann::json& j, SmsManagementSubscriptionData& o) {
  if (j.find("supportedFeatures") != j.end()) {
    j.at("supportedFeatures").get_to(o.m_SupportedFeatures);
    o.m_SupportedFeaturesIsSet = true;
  }
  if (j.find("mtSmsSubscribed") != j.end()) {
    j.at("mtSmsSubscribed").get_to(o.m_MtSmsSubscribed);
    o.m_MtSmsSubscribedIsSet = true;
  }
  if (j.find("mtSmsBarringAll") != j.end()) {
    j.at("mtSmsBarringAll").get_to(o.m_MtSmsBarringAll);
    o.m_MtSmsBarringAllIsSet = true;
  }
  if (j.find("mtSmsBarringRoaming") != j.end()) {
    j.at("mtSmsBarringRoaming").get_to(o.m_MtSmsBarringRoaming);
    o.m_MtSmsBarringRoamingIsSet = true;
  }
  if (j.find("moSmsSubscribed") != j.end()) {
    j.at("moSmsSubscribed").get_to(o.m_MoSmsSubscribed);
    o.m_MoSmsSubscribedIsSet = true;
  }
  if (j.find("moSmsBarringAll") != j.end()) {
    j.at("moSmsBarringAll").get_to(o.m_MoSmsBarringAll);
    o.m_MoSmsBarringAllIsSet = true;
  }
  if (j.find("moSmsBarringRoaming") != j.end()) {
    j.at("moSmsBarringRoaming").get_to(o.m_MoSmsBarringRoaming);
    o.m_MoSmsBarringRoamingIsSet = true;
  }
  if (j.find("sharedSmsMngDataIds") != j.end()) {
    j.at("sharedSmsMngDataIds").get_to(o.m_SharedSmsMngDataIds);
    o.m_SharedSmsMngDataIdsIsSet = true;
  }
  if (j.find("traceData") != j.end()) {
    j.at("traceData").get_to(o.m_TraceData);
    o.m_TraceDataIsSet = true;
  }
}

std::string SmsManagementSubscriptionData::getSupportedFeatures() const {
  return m_SupportedFeatures;
}
void SmsManagementSubscriptionData::setSupportedFeatures(
    std::string const& value) {
  m_SupportedFeatures      = value;
  m_SupportedFeaturesIsSet = true;
}
bool SmsManagementSubscriptionData::supportedFeaturesIsSet() const {
  return m_SupportedFeaturesIsSet;
}
void SmsManagementSubscriptionData::unsetSupportedFeatures() {
  m_SupportedFeaturesIsSet = false;
}
bool SmsManagementSubscriptionData::isMtSmsSubscribed() const {
  return m_MtSmsSubscribed;
}
void SmsManagementSubscriptionData::setMtSmsSubscribed(bool const value) {
  m_MtSmsSubscribed      = value;
  m_MtSmsSubscribedIsSet = true;
}
bool SmsManagementSubscriptionData::mtSmsSubscribedIsSet() const {
  return m_MtSmsSubscribedIsSet;
}
void SmsManagementSubscriptionData::unsetMtSmsSubscribed() {
  m_MtSmsSubscribedIsSet = false;
}
bool SmsManagementSubscriptionData::isMtSmsBarringAll() const {
  return m_MtSmsBarringAll;
}
void SmsManagementSubscriptionData::setMtSmsBarringAll(bool const value) {
  m_MtSmsBarringAll      = value;
  m_MtSmsBarringAllIsSet = true;
}
bool SmsManagementSubscriptionData::mtSmsBarringAllIsSet() const {
  return m_MtSmsBarringAllIsSet;
}
void SmsManagementSubscriptionData::unsetMtSmsBarringAll() {
  m_MtSmsBarringAllIsSet = false;
}
bool SmsManagementSubscriptionData::isMtSmsBarringRoaming() const {
  return m_MtSmsBarringRoaming;
}
void SmsManagementSubscriptionData::setMtSmsBarringRoaming(bool const value) {
  m_MtSmsBarringRoaming      = value;
  m_MtSmsBarringRoamingIsSet = true;
}
bool SmsManagementSubscriptionData::mtSmsBarringRoamingIsSet() const {
  return m_MtSmsBarringRoamingIsSet;
}
void SmsManagementSubscriptionData::unsetMtSmsBarringRoaming() {
  m_MtSmsBarringRoamingIsSet = false;
}
bool SmsManagementSubscriptionData::isMoSmsSubscribed() const {
  return m_MoSmsSubscribed;
}
void SmsManagementSubscriptionData::setMoSmsSubscribed(bool const value) {
  m_MoSmsSubscribed      = value;
  m_MoSmsSubscribedIsSet = true;
}
bool SmsManagementSubscriptionData::moSmsSubscribedIsSet() const {
  return m_MoSmsSubscribedIsSet;
}
void SmsManagementSubscriptionData::unsetMoSmsSubscribed() {
  m_MoSmsSubscribedIsSet = false;
}
bool SmsManagementSubscriptionData::isMoSmsBarringAll() const {
  return m_MoSmsBarringAll;
}
void SmsManagementSubscriptionData::setMoSmsBarringAll(bool const value) {
  m_MoSmsBarringAll      = value;
  m_MoSmsBarringAllIsSet = true;
}
bool SmsManagementSubscriptionData::moSmsBarringAllIsSet() const {
  return m_MoSmsBarringAllIsSet;
}
void SmsManagementSubscriptionData::unsetMoSmsBarringAll() {
  m_MoSmsBarringAllIsSet = false;
}
bool SmsManagementSubscriptionData::isMoSmsBarringRoaming() const {
  return m_MoSmsBarringRoaming;
}
void SmsManagementSubscriptionData::setMoSmsBarringRoaming(bool const value) {
  m_MoSmsBarringRoaming      = value;
  m_MoSmsBarringRoamingIsSet = true;
}
bool SmsManagementSubscriptionData::moSmsBarringRoamingIsSet() const {
  return m_MoSmsBarringRoamingIsSet;
}
void SmsManagementSubscriptionData::unsetMoSmsBarringRoaming() {
  m_MoSmsBarringRoamingIsSet = false;
}
std::vector<std::string>&
SmsManagementSubscriptionData::getSharedSmsMngDataIds() {
  return m_SharedSmsMngDataIds;
}
bool SmsManagementSubscriptionData::sharedSmsMngDataIdsIsSet() const {
  return m_SharedSmsMngDataIdsIsSet;
}
void SmsManagementSubscriptionData::unsetSharedSmsMngDataIds() {
  m_SharedSmsMngDataIdsIsSet = false;
}
oai::model::common::TraceData SmsManagementSubscriptionData::getTraceData()
    const {
  return m_TraceData;
}
void SmsManagementSubscriptionData::setTraceData(
    oai::model::common::TraceData const& value) {
  m_TraceData      = value;
  m_TraceDataIsSet = true;
}
bool SmsManagementSubscriptionData::traceDataIsSet() const {
  return m_TraceDataIsSet;
}
void SmsManagementSubscriptionData::unsetTraceData() {
  m_TraceDataIsSet = false;
}

}  // namespace model
}  // namespace udm
}  // namespace oai
