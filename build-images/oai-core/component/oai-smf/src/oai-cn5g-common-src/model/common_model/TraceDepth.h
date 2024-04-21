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
 * TraceDepth.h
 *
 *
 */

#ifndef TraceDepth_H_
#define TraceDepth_H_

#include "TraceDepth_anyOf.h"
#include <nlohmann/json.hpp>

namespace oai::model::common {

/// <summary>
///
/// </summary>
class TraceDepth {
 public:
  TraceDepth();
  virtual ~TraceDepth() = default;

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

  bool operator==(const TraceDepth& rhs) const;
  bool operator!=(const TraceDepth& rhs) const;

  /////////////////////////////////////////////
  /// TraceDepth members

  TraceDepth_anyOf getValue() const;
  void setValue(TraceDepth_anyOf value);
  TraceDepth_anyOf::eTraceDepth_anyOf getEnumValue() const;
  void setEnumValue(TraceDepth_anyOf::eTraceDepth_anyOf value);
  friend void to_json(nlohmann::json& j, const TraceDepth& o);
  friend void from_json(const nlohmann::json& j, TraceDepth& o);
  friend void to_json(nlohmann::json& j, const TraceDepth_anyOf& o);
  friend void from_json(const nlohmann::json& j, TraceDepth_anyOf& o);

 protected:
  TraceDepth_anyOf m_value;
};

}  // namespace oai::model::common

#endif /* TraceDepth_H_ */
