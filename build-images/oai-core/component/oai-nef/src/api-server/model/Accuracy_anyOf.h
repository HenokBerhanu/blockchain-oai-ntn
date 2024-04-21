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
/*
 * Accuracy_anyOf.h
 *
 *
 */

#ifndef Accuracy_anyOf_H_
#define Accuracy_anyOf_H_

#include <nlohmann/json.hpp>

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class Accuracy_anyOf {
 public:
  Accuracy_anyOf();
  virtual ~Accuracy_anyOf() = default;

  enum class eAccuracy_anyOf {
    // To have a valid default value.
    // Avoiding name clashes with user defined
    // enum values
    INVALID_VALUE_OPENAPI_GENERATED = 0,
    LOW,
    HIGH
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

  bool operator==(const Accuracy_anyOf& rhs) const;
  bool operator!=(const Accuracy_anyOf& rhs) const;

  /////////////////////////////////////////////
  /// Accuracy_anyOf members

  Accuracy_anyOf::eAccuracy_anyOf getValue() const;
  void setValue(Accuracy_anyOf::eAccuracy_anyOf value);

  friend void to_json(nlohmann::json& j, const Accuracy_anyOf& o);
  friend void from_json(const nlohmann::json& j, Accuracy_anyOf& o);

 protected:
  Accuracy_anyOf::eAccuracy_anyOf m_value =
      Accuracy_anyOf::eAccuracy_anyOf::INVALID_VALUE_OPENAPI_GENERATED;
};

}  // namespace oai::nef::model

#endif /* Accuracy_anyOf_H_ */