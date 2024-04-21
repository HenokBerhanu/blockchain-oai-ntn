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
 * Nudr_DataRepository API OpenAPI file
 * Unified Data Repository Service. © 2020, 3GPP Organizational Partners (ARIB,
 * ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Amf3GppAccessRegistration.h
 *
 *
 */

#ifndef Amf3GppAccessRegistration_H_
#define Amf3GppAccessRegistration_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

#include "BackupAmfInfo.h"
#include "ContextInfo.h"
#include "EpsInterworkingInfo.h"
#include "Guami.h"
#include "ImsVoPs.h"
#include "RatType.h"
#include "ServiceName.h"
#include "VgmlcAddress.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class Amf3GppAccessRegistration {
 public:
  Amf3GppAccessRegistration();
  virtual ~Amf3GppAccessRegistration();

  void validate();

  /////////////////////////////////////////////
  /// Amf3GppAccessRegistration members

  /// <summary>
  ///
  /// </summary>
  std::string getAmfInstanceId() const;
  void setAmfInstanceId(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  std::string getSupportedFeatures() const;
  void setSupportedFeatures(std::string const& value);
  bool supportedFeaturesIsSet() const;
  void unsetSupportedFeatures();
  /// <summary>
  ///
  /// </summary>
  bool isPurgeFlag() const;
  void setPurgeFlag(bool const value);
  bool purgeFlagIsSet() const;
  void unsetPurgeFlag();
  /// <summary>
  ///
  /// </summary>
  std::string getPei() const;
  void setPei(std::string const& value);
  bool peiIsSet() const;
  void unsetPei();
  /// <summary>
  ///
  /// </summary>
  ImsVoPs getImsVoPs() const;
  void setImsVoPs(ImsVoPs const& value);
  bool imsVoPsIsSet() const;
  void unsetImsVoPs();
  /// <summary>
  ///
  /// </summary>
  std::string getDeregCallbackUri() const;
  void setDeregCallbackUri(std::string const& value);
  /// <summary>
  ///
  /// </summary>
  oai::model::nrf::ServiceName getAmfServiceNameDereg() const;
  void setAmfServiceNameDereg(oai::model::nrf::ServiceName const& value);
  bool amfServiceNameDeregIsSet() const;
  void unsetAmfServiceNameDereg();
  /// <summary>
  ///
  /// </summary>
  std::string getPcscfRestorationCallbackUri() const;
  void setPcscfRestorationCallbackUri(std::string const& value);
  bool pcscfRestorationCallbackUriIsSet() const;
  void unsetPcscfRestorationCallbackUri();
  /// <summary>
  ///
  /// </summary>
  oai::model::nrf::ServiceName getAmfServiceNamePcscfRest() const;
  void setAmfServiceNamePcscfRest(oai::model::nrf::ServiceName const& value);
  bool amfServiceNamePcscfRestIsSet() const;
  void unsetAmfServiceNamePcscfRest();
  /// <summary>
  ///
  /// </summary>
  bool isInitialRegistrationInd() const;
  void setInitialRegistrationInd(bool const value);
  bool initialRegistrationIndIsSet() const;
  void unsetInitialRegistrationInd();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Guami getGuami() const;
  void setGuami(oai::model::common::Guami const& value);
  /// <summary>
  ///
  /// </summary>
  std::vector<oai::model::common::BackupAmfInfo>& getBackupAmfInfo();
  void setBackupAmfInfo(
      std::vector<oai::model::common::BackupAmfInfo> const& value);
  bool backupAmfInfoIsSet() const;
  void unsetBackupAmfInfo();
  /// <summary>
  ///
  /// </summary>
  bool isDrFlag() const;
  void setDrFlag(bool const value);
  bool drFlagIsSet() const;
  void unsetDrFlag();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::RatType getRatType() const;
  void setRatType(oai::model::common::RatType const& value);
  /// <summary>
  ///
  /// </summary>
  bool isUrrpIndicator() const;
  void setUrrpIndicator(bool const value);
  bool urrpIndicatorIsSet() const;
  void unsetUrrpIndicator();
  /// <summary>
  ///
  /// </summary>
  std::string getAmfEeSubscriptionId() const;
  void setAmfEeSubscriptionId(std::string const& value);
  bool amfEeSubscriptionIdIsSet() const;
  void unsetAmfEeSubscriptionId();
  /// <summary>
  ///
  /// </summary>
  EpsInterworkingInfo getEpsInterworkingInfo() const;
  void setEpsInterworkingInfo(EpsInterworkingInfo const& value);
  bool epsInterworkingInfoIsSet() const;
  void unsetEpsInterworkingInfo();
  /// <summary>
  ///
  /// </summary>
  bool isUeSrvccCapability() const;
  void setUeSrvccCapability(bool const value);
  bool ueSrvccCapabilityIsSet() const;
  void unsetUeSrvccCapability();
  /// <summary>
  ///
  /// </summary>
  std::string getRegistrationTime() const;
  void setRegistrationTime(std::string const& value);
  bool registrationTimeIsSet() const;
  void unsetRegistrationTime();
  /// <summary>
  ///
  /// </summary>
  VgmlcAddress getVgmlcAddress() const;
  void setVgmlcAddress(VgmlcAddress const& value);
  bool vgmlcAddressIsSet() const;
  void unsetVgmlcAddress();
  /// <summary>
  ///
  /// </summary>
  ContextInfo getContextInfo() const;
  void setContextInfo(ContextInfo const& value);
  bool contextInfoIsSet() const;
  void unsetContextInfo();
  /// <summary>
  ///
  /// </summary>
  bool isNoEeSubscriptionInd() const;
  void setNoEeSubscriptionInd(bool const value);
  bool noEeSubscriptionIndIsSet() const;
  void unsetNoEeSubscriptionInd();

  friend void to_json(nlohmann::json& j, const Amf3GppAccessRegistration& o);
  friend void from_json(const nlohmann::json& j, Amf3GppAccessRegistration& o);

 protected:
  std::string m_AmfInstanceId;

  std::string m_SupportedFeatures;
  bool m_SupportedFeaturesIsSet;
  bool m_PurgeFlag;
  bool m_PurgeFlagIsSet;
  std::string m_Pei;
  bool m_PeiIsSet;
  ImsVoPs m_ImsVoPs;
  bool m_ImsVoPsIsSet;
  std::string m_DeregCallbackUri;

  oai::model::nrf::ServiceName m_AmfServiceNameDereg;
  bool m_AmfServiceNameDeregIsSet;
  std::string m_PcscfRestorationCallbackUri;
  bool m_PcscfRestorationCallbackUriIsSet;
  oai::model::nrf::ServiceName m_AmfServiceNamePcscfRest;
  bool m_AmfServiceNamePcscfRestIsSet;
  bool m_InitialRegistrationInd;
  bool m_InitialRegistrationIndIsSet;
  oai::model::common::Guami m_Guami;

  std::vector<oai::model::common::BackupAmfInfo> m_BackupAmfInfo;
  bool m_BackupAmfInfoIsSet;
  bool m_DrFlag;
  bool m_DrFlagIsSet;
  oai::model::common::RatType m_RatType;

  bool m_UrrpIndicator;
  bool m_UrrpIndicatorIsSet;
  std::string m_AmfEeSubscriptionId;
  bool m_AmfEeSubscriptionIdIsSet;
  EpsInterworkingInfo m_EpsInterworkingInfo;
  bool m_EpsInterworkingInfoIsSet;
  bool m_UeSrvccCapability;
  bool m_UeSrvccCapabilityIsSet;
  std::string m_RegistrationTime;
  bool m_RegistrationTimeIsSet;
  VgmlcAddress m_VgmlcAddress;
  bool m_VgmlcAddressIsSet;
  ContextInfo m_ContextInfo;
  bool m_ContextInfoIsSet;
  bool m_NoEeSubscriptionInd;
  bool m_NoEeSubscriptionIndIsSet;
};

}  // namespace oai::udr::model

#endif /* Amf3GppAccessRegistration_H_ */
