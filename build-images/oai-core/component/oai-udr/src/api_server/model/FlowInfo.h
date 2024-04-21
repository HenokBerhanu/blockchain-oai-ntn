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
 * FlowInfo.h
 *
 *
 */

#ifndef FlowInfo_H_
#define FlowInfo_H_

#include <nlohmann/json.hpp>
#include <string>
#include <vector>

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class FlowInfo {
 public:
  FlowInfo();
  virtual ~FlowInfo();

  void validate();

  /////////////////////////////////////////////
  /// FlowInfo members

  /// <summary>
  /// Indicates the IP flow.
  /// </summary>
  int32_t getFlowId() const;
  void setFlowId(int32_t const value);
  /// <summary>
  /// Indicates the packet filters of the IP flow. Refer to subclause 5.3.8 of
  /// 3GPP TS 29.214 for encoding. It shall contain UL and/or DL IP flow
  /// description.
  /// </summary>
  std::vector<std::string>& getFlowDescriptions();
  void setFlowDescriptions(std::vector<std::string> const& value);
  bool flowDescriptionsIsSet() const;
  void unsetFlowDescriptions();

  friend void to_json(nlohmann::json& j, const FlowInfo& o);
  friend void from_json(const nlohmann::json& j, FlowInfo& o);

 protected:
  int32_t m_FlowId;

  std::vector<std::string> m_FlowDescriptions;
  bool m_FlowDescriptionsIsSet;
};

}  // namespace oai::udr::model

#endif /* FlowInfo_H_ */