/**
 * Common Data Types
 * Common Data Types for Service Based Interfaces. © 2022, 3GPP Organizational
 * Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.2.7
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "TrafficProfile.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::common {

TrafficProfile::TrafficProfile() {}

void TrafficProfile::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool TrafficProfile::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool TrafficProfile::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "TrafficProfile" : pathPrefix;

  if (!m_value.validate(msg)) {
    success = false;
  }
  return success;
}

bool TrafficProfile::operator==(const TrafficProfile& rhs) const {
  return

      getValue() == rhs.getValue();
}

bool TrafficProfile::operator!=(const TrafficProfile& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const TrafficProfile& o) {
  j = nlohmann::json();
  to_json(j, o.m_value);
}

void from_json(const nlohmann::json& j, TrafficProfile& o) {
  from_json(j, o.m_value);
}

TrafficProfile_anyOf TrafficProfile::getValue() const {
  return m_value;
}

void TrafficProfile::setValue(TrafficProfile_anyOf value) {
  m_value = value;
}

TrafficProfile_anyOf::eTrafficProfile_anyOf TrafficProfile::getEnumValue()
    const {
  return m_value.getValue();
}

void TrafficProfile::setEnumValue(
    TrafficProfile_anyOf::eTrafficProfile_anyOf value) {
  m_value.setValue(value);
}

}  // namespace oai::model::common