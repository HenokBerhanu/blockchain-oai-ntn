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
/*
 * StationaryIndication_anyOf.h
 *
 *
 */

#ifndef StationaryIndication_anyOf_H_
#define StationaryIndication_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class StationaryIndication_anyOf {
 public:
  StationaryIndication_anyOf();
  virtual ~StationaryIndication_anyOf() = default;

  enum class eStationaryIndication_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    STATIONARY,
    MOBILE
  };

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

  bool operator==(const StationaryIndication_anyOf& rhs) const;
  bool operator!=(const StationaryIndication_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// StationaryIndication_anyOf members

  StationaryIndication_anyOf::eStationaryIndication_anyOf getValue() const;
  void setValue(StationaryIndication_anyOf::eStationaryIndication_anyOf value);

  friend void to_json(nlohmann::json& j, const StationaryIndication_anyOf& o);
  friend void from_json(const nlohmann::json& j, StationaryIndication_anyOf& o);

 protected:
  StationaryIndication_anyOf::eStationaryIndication_anyOf m_value =
      StationaryIndication_anyOf::eStationaryIndication_anyOf::
          INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::model::common

#endif /* StationaryIndication_anyOf_H_ */
