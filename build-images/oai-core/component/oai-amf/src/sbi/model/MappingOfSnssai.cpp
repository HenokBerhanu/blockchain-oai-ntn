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

#include "MappingOfSnssai.h"
#include "Helpers.h"

#include <sstream>

namespace oai {
namespace amf {
namespace model {

MappingOfSnssai::MappingOfSnssai() {}

void MappingOfSnssai::validate() const {
  std::stringstream msg;
  // if (!validate(msg))
  // {
  //     throw oai::nssf_server::helpers::ValidationException(msg.str());
  // }
}

bool MappingOfSnssai::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool MappingOfSnssai::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "MappingOfSnssai" : pathPrefix;

  return success;
}

bool MappingOfSnssai::operator==(const MappingOfSnssai& rhs) const {
  return

      (getServingSnssai() == rhs.getServingSnssai()) &&

      (getHomeSnssai() == rhs.getHomeSnssai())

          ;
}

bool MappingOfSnssai::operator!=(const MappingOfSnssai& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const MappingOfSnssai& o) {
  j                  = nlohmann::json();
  j["servingSnssai"] = o.m_ServingSnssai;
  j["homeSnssai"]    = o.m_HomeSnssai;
}

void from_json(const nlohmann::json& j, MappingOfSnssai& o) {
  j.at("servingSnssai").get_to(o.m_ServingSnssai);
  j.at("homeSnssai").get_to(o.m_HomeSnssai);
}

oai::model::common::Snssai MappingOfSnssai::getServingSnssai() const {
  return m_ServingSnssai;
}
void MappingOfSnssai::setServingSnssai(
    oai::model::common::Snssai const& value) {
  m_ServingSnssai = value;
}
oai::model::common::Snssai MappingOfSnssai::getHomeSnssai() const {
  return m_HomeSnssai;
}
void MappingOfSnssai::setHomeSnssai(oai::model::common::Snssai const& value) {
  m_HomeSnssai = value;
}

}  // namespace model
}  // namespace amf
}  // namespace oai
