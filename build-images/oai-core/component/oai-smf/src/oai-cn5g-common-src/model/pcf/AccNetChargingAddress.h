/**
 * Npcf_SMPolicyControl API
 * Session Management Policy Control Service © 2023, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.9
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * AccNetChargingAddress.h
 *
 * Describes the network entity within the access network performing charging
 */

#ifndef AccNetChargingAddress_H_
#define AccNetChargingAddress_H_

#include <string>
#include "Ipv6Addr.h"
#include <nlohmann/json.hpp>

namespace oai::model::pcf {

/// <summary>
/// Describes the network entity within the access network performing charging
/// </summary>
class AccNetChargingAddress {
 public:
  AccNetChargingAddress();
  virtual ~AccNetChargingAddress() = default;

  /// <summary>
  /// Validate the current data in the model. Throws a ValidationException on
  /// failure.
  /// </summary>
  void validate() const;

  /// <summary>
  /// Validate the current data in the model. Returns false on error and writes
  /// an error message into the given stringstream.
  /// </summary>
  bool validate(std::stringstream& msg) const;

  /// <summary>
  /// Helper overload for validate. Used when one model stores another model and
  /// calls it's validate. Not meant to be called outside that case.
  /// </summary>
  bool validate(std::stringstream& msg, const std::string& pathPrefix) const;

  bool operator==(const AccNetChargingAddress& rhs) const;
  bool operator!=(const AccNetChargingAddress& rhs) const;

  /////////////////////////////////////////////
  /// AccNetChargingAddress members

  /// <summary>
  ///
  /// </summary>
  std::string getAnChargIpv4Addr() const;
  void setAnChargIpv4Addr(std::string const& value);
  bool anChargIpv4AddrIsSet() const;
  void unsetAnChargIpv4Addr();
  /// <summary>
  ///
  /// </summary>
  oai::model::common::Ipv6Addr getAnChargIpv6Addr() const;
  void setAnChargIpv6Addr(oai::model::common::Ipv6Addr const& value);
  bool anChargIpv6AddrIsSet() const;
  void unsetAnChargIpv6Addr();

  friend void to_json(nlohmann::json& j, const AccNetChargingAddress& o);
  friend void from_json(const nlohmann::json& j, AccNetChargingAddress& o);

 protected:
  std::string m_AnChargIpv4Addr;
  bool m_AnChargIpv4AddrIsSet;
  oai::model::common::Ipv6Addr m_AnChargIpv6Addr;
  bool m_AnChargIpv6AddrIsSet;
};

}  // namespace oai::model::pcf

#endif /* AccNetChargingAddress_H_ */
