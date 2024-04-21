/**
 * NSSF NS Selection
 * NSSF Network Slice Selection Service. © 2021, 3GPP Organizational Partners
 * (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 2.1.2
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "ConfiguredSnssai.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace nssf_server {
namespace model {

ConfiguredSnssai::ConfiguredSnssai() {
  m_MappedHomeSnssaiIsSet = false;
}

void ConfiguredSnssai::validate() const {
  std::stringstream msg;
  // if (!validate(msg))
  // {
  //     throw oai::nssf_server::helpers::ValidationException(msg.str());
  // }
}

bool ConfiguredSnssai::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool ConfiguredSnssai::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "ConfiguredSnssai" : pathPrefix;

  return success;
}

bool ConfiguredSnssai::operator==(const ConfiguredSnssai& rhs) const {
  return

      (getConfiguredSnssai() == rhs.getConfiguredSnssai()) &&

      ((!mappedHomeSnssaiIsSet() && !rhs.mappedHomeSnssaiIsSet()) ||
       (mappedHomeSnssaiIsSet() && rhs.mappedHomeSnssaiIsSet() &&
        getMappedHomeSnssai() == rhs.getMappedHomeSnssai()))

          ;
}

bool ConfiguredSnssai::operator!=(const ConfiguredSnssai& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const ConfiguredSnssai& o) {
  j                     = nlohmann::json();
  j["configuredSnssai"] = o.m_ConfiguredSnssai;
  if (o.mappedHomeSnssaiIsSet()) j["mappedHomeSnssai"] = o.m_MappedHomeSnssai;
}

void from_json(const nlohmann::json& j, ConfiguredSnssai& o) {
  j.at("configuredSnssai").get_to(o.m_ConfiguredSnssai);
  if (j.find("mappedHomeSnssai") != j.end()) {
    j.at("mappedHomeSnssai").get_to(o.m_MappedHomeSnssai);
    o.m_MappedHomeSnssaiIsSet = true;
  }
}

oai::model::common::Snssai ConfiguredSnssai::getConfiguredSnssai() const {
  return m_ConfiguredSnssai;
}
void ConfiguredSnssai::setConfiguredSnssai(
    oai::model::common::Snssai const& value) {
  m_ConfiguredSnssai = value;
}
oai::model::common::Snssai ConfiguredSnssai::getMappedHomeSnssai() const {
  return m_MappedHomeSnssai;
}
void ConfiguredSnssai::setMappedHomeSnssai(
    oai::model::common::Snssai const& value) {
  m_MappedHomeSnssai      = value;
  m_MappedHomeSnssaiIsSet = true;
}
bool ConfiguredSnssai::mappedHomeSnssaiIsSet() const {
  return m_MappedHomeSnssaiIsSet;
}
void ConfiguredSnssai::unsetMappedHomeSnssai() {
  m_MappedHomeSnssaiIsSet = false;
}

}  // namespace model
}  // namespace nssf_server
}  // namespace oai