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
 * MulticastAccessControl.h
 *
 *
 */

#ifndef MulticastAccessControl_H_
#define MulticastAccessControl_H_

#include <nlohmann/json.hpp>
#include <string>

#include "AccessRightStatus.h"
#include "Ipv6Addr.h"

namespace oai::udr::model {

/// <summary>
///
/// </summary>
class MulticastAccessControl {
 public:
  MulticastAccessControl();
  virtual ~MulticastAccessControl();

  void validate();

  /////////////////////////////////////////////
  /// MulticastAccessControl members

  /// <summary>
  ///
  /// </summary>
  std::string getSrcIpv4Addr() const;
  void setSrcIpv4Addr(std::string const& value);
  bool srcIpv4AddrIsSet() const;
  void unsetSrcIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ipv6Addr getSrcIpv6Addr() const;
  void setSrcIpv6Addr(oai::model::common::Ipv6Addr const& value);
  bool srcIpv6AddrIsSet() const;
  void unsetSrcIpv6Addr();
  /// <summary>
  ///
  /// </summary>
  std::string getMulticastV4Addr() const;
  void setMulticastV4Addr(std::string const& value);
  bool multicastV4AddrIsSet() const;
  void unsetMulticastV4Addr();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ipv6Addr getMulticastV6Addr() const;
  void setMulticastV6Addr(oai::model::common::Ipv6Addr const& value);
  bool multicastV6AddrIsSet() const;
  void unsetMulticastV6Addr();
  /// <summary>
  ///
  /// </summary>
  AccessRightStatus getAccStatus() const;
  void setAccStatus(AccessRightStatus const& value);

  friend void to_json(nlohmann::json& j, const MulticastAccessControl& o);
  friend void from_json(const nlohmann::json& j, MulticastAccessControl& o);

 protected:
  std::string m_SrcIpv4Addr;
  bool m_SrcIpv4AddrIsSet;
  oai::model::common::Ipv6Addr m_SrcIpv6Addr;
  bool m_SrcIpv6AddrIsSet;
  std::string m_MulticastV4Addr;
  bool m_MulticastV4AddrIsSet;
  oai::model::common::Ipv6Addr m_MulticastV6Addr;
  bool m_MulticastV6AddrIsSet;
  AccessRightStatus m_AccStatus;
};

}  // namespace oai::udr::model

#endif /* MulticastAccessControl_H_ */
