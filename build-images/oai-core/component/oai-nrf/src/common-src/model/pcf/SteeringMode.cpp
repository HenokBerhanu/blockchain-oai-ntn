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

#include "SteeringMode.h"
#include "Helpers.h"

#include <sstream>

namespace oai::model::pcf {

SteeringMode::SteeringMode() {
  m_ActiveIsSet   = false;
  m_StandbyIsSet  = false;
  m_r_3gLoad      = 0;
  m_r_3gLoadIsSet = false;
  m_PrioAccIsSet  = false;
}

void SteeringMode::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::model::common::helpers::ValidationException(msg.str());
  }
}

bool SteeringMode::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool SteeringMode::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "SteeringMode" : pathPrefix;

  if (r3gLoadIsSet()) {
    const int32_t& value               = m_r_3gLoad;
    const std::string currentValuePath = _pathPrefix + ".r3gLoad";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  return success;
}

bool SteeringMode::operator==(const SteeringMode& rhs) const {
  return

      (getSteerModeValue() == rhs.getSteerModeValue()) &&

      ((!activeIsSet() && !rhs.activeIsSet()) ||
       (activeIsSet() && rhs.activeIsSet() &&
        getActive() == rhs.getActive())) &&

      ((!standbyIsSet() && !rhs.standbyIsSet()) ||
       (standbyIsSet() && rhs.standbyIsSet() &&
        getStandby() == rhs.getStandby())) &&

      ((!r3gLoadIsSet() && !rhs.r3gLoadIsSet()) ||
       (r3gLoadIsSet() && rhs.r3gLoadIsSet() &&
        getR3gLoad() == rhs.getR3gLoad())) &&

      ((!prioAccIsSet() && !rhs.prioAccIsSet()) ||
       (prioAccIsSet() && rhs.prioAccIsSet() &&
        getPrioAcc() == rhs.getPrioAcc()))

          ;
}

bool SteeringMode::operator!=(const SteeringMode& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const SteeringMode& o) {
  j                   = nlohmann::json();
  j["steerModeValue"] = o.m_SteerModeValue;
  if (o.activeIsSet()) j["active"] = o.m_Active;
  if (o.standbyIsSet()) j["standby"] = o.m_Standby;
  if (o.r3gLoadIsSet()) j["3gLoad"] = o.m_r_3gLoad;
  if (o.prioAccIsSet()) j["prioAcc"] = o.m_PrioAcc;
}

void from_json(const nlohmann::json& j, SteeringMode& o) {
  j.at("steerModeValue").get_to(o.m_SteerModeValue);
  if (j.find("active") != j.end()) {
    j.at("active").get_to(o.m_Active);
    o.m_ActiveIsSet = true;
  }
  if (j.find("standby") != j.end()) {
    j.at("standby").get_to(o.m_Standby);
    o.m_StandbyIsSet = true;
  }
  if (j.find("3gLoad") != j.end()) {
    j.at("3gLoad").get_to(o.m_r_3gLoad);
    o.m_r_3gLoadIsSet = true;
  }
  if (j.find("prioAcc") != j.end()) {
    j.at("prioAcc").get_to(o.m_PrioAcc);
    o.m_PrioAccIsSet = true;
  }
}

oai::model::pcf::SteerModeValue SteeringMode::getSteerModeValue() const {
  return m_SteerModeValue;
}
void SteeringMode::setSteerModeValue(
    oai::model::pcf::SteerModeValue const& value) {
  m_SteerModeValue = value;
}
oai::model::common::AccessType SteeringMode::getActive() const {
  return m_Active;
}
void SteeringMode::setActive(oai::model::common::AccessType const& value) {
  m_Active      = value;
  m_ActiveIsSet = true;
}
bool SteeringMode::activeIsSet() const {
  return m_ActiveIsSet;
}
void SteeringMode::unsetActive() {
  m_ActiveIsSet = false;
}
oai::model::common::AccessTypeRm SteeringMode::getStandby() const {
  return m_Standby;
}
void SteeringMode::setStandby(oai::model::common::AccessTypeRm const& value) {
  m_Standby      = value;
  m_StandbyIsSet = true;
}
bool SteeringMode::standbyIsSet() const {
  return m_StandbyIsSet;
}
void SteeringMode::unsetStandby() {
  m_StandbyIsSet = false;
}
int32_t SteeringMode::getR3gLoad() const {
  return m_r_3gLoad;
}
void SteeringMode::setR3gLoad(int32_t const value) {
  m_r_3gLoad      = value;
  m_r_3gLoadIsSet = true;
}
bool SteeringMode::r3gLoadIsSet() const {
  return m_r_3gLoadIsSet;
}
void SteeringMode::unsetr_3gLoad() {
  m_r_3gLoadIsSet = false;
}
oai::model::common::AccessType SteeringMode::getPrioAcc() const {
  return m_PrioAcc;
}
void SteeringMode::setPrioAcc(oai::model::common::AccessType const& value) {
  m_PrioAcc      = value;
  m_PrioAccIsSet = true;
}
bool SteeringMode::prioAccIsSet() const {
  return m_PrioAccIsSet;
}
void SteeringMode::unsetPrioAcc() {
  m_PrioAccIsSet = false;
}

}  // namespace oai::model::pcf
