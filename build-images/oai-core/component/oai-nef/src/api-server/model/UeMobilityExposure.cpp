/**
 * 3gpp-analyticsexposure
 * API for Analytics Exposure. © 2021, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.0.3
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

#include "UeMobilityExposure.h"

#include <sstream>

#include "Helpers.h"

namespace oai::nef::model {

UeMobilityExposure::UeMobilityExposure() {
  m_Ts                    = "";
  m_TsIsSet               = false;
  m_RecurringTimeIsSet    = false;
  m_Duration              = 0;
  m_DurationVariance      = 0.0f;
  m_DurationVarianceIsSet = false;
}

void UeMobilityExposure::validate() const {
  std::stringstream msg;
  if (!validate(msg)) {
    throw oai::nef::helpers::ValidationException(msg.str());
  }
}

bool UeMobilityExposure::validate(std::stringstream& msg) const {
  return validate(msg, "");
}

bool UeMobilityExposure::validate(
    std::stringstream& msg, const std::string& pathPrefix) const {
  bool success = true;
  const std::string _pathPrefix =
      pathPrefix.empty() ? "UeMobilityExposure" : pathPrefix;

  /* Duration */ {
    const int32_t& value               = m_Duration;
    const std::string currentValuePath = _pathPrefix + ".duration";

    if (value < 0) {
      success = false;
      msg << currentValuePath << ": must be greater than or equal to 0;";
    }
  }

  /* LocInfo */ {
    const std::vector<UeLocationInfo>& value = m_LocInfo;
    const std::string currentValuePath       = _pathPrefix + ".locInfo";

    if (value.size() < 1) {
      success = false;
      msg << currentValuePath << ": must have at least 1 elements;";
    }
    {  // Recursive validation of array elements
      const std::string oldValuePath = currentValuePath;
      int i                          = 0;
      for (const UeLocationInfo& value : value) {
        const std::string currentValuePath =
            oldValuePath + "[" + std::to_string(i) + "]";

        success = value.validate(msg, currentValuePath + ".locInfo") && success;

        i++;
      }
    }
  }

  return success;
}

bool UeMobilityExposure::operator==(const UeMobilityExposure& rhs) const {
  return

      ((!tsIsSet() && !rhs.tsIsSet()) ||
       (tsIsSet() && rhs.tsIsSet() && getTs() == rhs.getTs())) &&

      ((!recurringTimeIsSet() && !rhs.recurringTimeIsSet()) ||
       (recurringTimeIsSet() && rhs.recurringTimeIsSet() &&
        getRecurringTime() == rhs.getRecurringTime())) &&

      (getDuration() == rhs.getDuration()) &&

      ((!durationVarianceIsSet() && !rhs.durationVarianceIsSet()) ||
       (durationVarianceIsSet() && rhs.durationVarianceIsSet() &&
        getDurationVariance() == rhs.getDurationVariance())) &&

      (getLocInfo() == rhs.getLocInfo())

          ;
}

bool UeMobilityExposure::operator!=(const UeMobilityExposure& rhs) const {
  return !(*this == rhs);
}

void to_json(nlohmann::json& j, const UeMobilityExposure& o) {
  j = nlohmann::json();
  if (o.tsIsSet()) j["ts"] = o.m_Ts;
  if (o.recurringTimeIsSet()) j["recurringTime"] = o.m_RecurringTime;
  j["duration"] = o.m_Duration;
  if (o.durationVarianceIsSet()) j["durationVariance"] = o.m_DurationVariance;
  j["locInfo"] = o.m_LocInfo;
}

void from_json(const nlohmann::json& j, UeMobilityExposure& o) {
  if (j.find("ts") != j.end()) {
    j.at("ts").get_to(o.m_Ts);
    o.m_TsIsSet = true;
  }
  if (j.find("recurringTime") != j.end()) {
    j.at("recurringTime").get_to(o.m_RecurringTime);
    o.m_RecurringTimeIsSet = true;
  }
  j.at("duration").get_to(o.m_Duration);
  if (j.find("durationVariance") != j.end()) {
    j.at("durationVariance").get_to(o.m_DurationVariance);
    o.m_DurationVarianceIsSet = true;
  }
  j.at("locInfo").get_to(o.m_LocInfo);
}

std::string UeMobilityExposure::getTs() const {
  return m_Ts;
}
void UeMobilityExposure::setTs(std::string const& value) {
  m_Ts      = value;
  m_TsIsSet = true;
}
bool UeMobilityExposure::tsIsSet() const {
  return m_TsIsSet;
}
void UeMobilityExposure::unsetTs() {
  m_TsIsSet = false;
}
ScheduledCommunicationTime UeMobilityExposure::getRecurringTime() const {
  return m_RecurringTime;
}
void UeMobilityExposure::setRecurringTime(
    ScheduledCommunicationTime const& value) {
  m_RecurringTime      = value;
  m_RecurringTimeIsSet = true;
}
bool UeMobilityExposure::recurringTimeIsSet() const {
  return m_RecurringTimeIsSet;
}
void UeMobilityExposure::unsetRecurringTime() {
  m_RecurringTimeIsSet = false;
}
int32_t UeMobilityExposure::getDuration() const {
  return m_Duration;
}
void UeMobilityExposure::setDuration(int32_t const value) {
  m_Duration = value;
}
float UeMobilityExposure::getDurationVariance() const {
  return m_DurationVariance;
}
void UeMobilityExposure::setDurationVariance(float const value) {
  m_DurationVariance      = value;
  m_DurationVarianceIsSet = true;
}
bool UeMobilityExposure::durationVarianceIsSet() const {
  return m_DurationVarianceIsSet;
}
void UeMobilityExposure::unsetDurationVariance() {
  m_DurationVarianceIsSet = false;
}
std::vector<UeLocationInfo> UeMobilityExposure::getLocInfo() const {
  return m_LocInfo;
}
void UeMobilityExposure::setLocInfo(std::vector<UeLocationInfo> const& value) {
  m_LocInfo = value;
}

}  // namespace oai::nef::model
