/**
 * 3gpp-mo-lcs-notify
 * API for UE updated location information notification. © 2021, 3GPP
 * Organizational Partners (ARIB, ATIS, CCSA, ETSI, TSDSI, TTA, TTC). All rights
 * reserved.
 *
 * The version of the OpenAPI document: 1.0.1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * EllipsoidArc.h
 *
 *
 */

#ifndef EllipsoidArc_H_
#define EllipsoidArc_H_

#include <nlohmann/json.hpp>

#include "EllipsoidArc_allOf.h"
#include "GADShape.h"
#include "GeographicalCoordinates.h"
#include "SupportedGADShapes.h"

namespace oai::nef::model {

/// <summary>
///
/// </summary>
class EllipsoidArc {
 public:
  EllipsoidArc();
  virtual ~EllipsoidArc() = default;

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

  bool operator==(const EllipsoidArc& rhs) const;
  bool operator!=(const EllipsoidArc& rhs) const;

  /////////////////////////////////////////////
  /// EllipsoidArc members

  /// <summary>
  ///
  /// </summary>
  SupportedGADShapes getShape() const;
  void setShape(SupportedGADShapes const& value);
  /// <summary>
  ///
  /// </summary>
  GeographicalCoordinates getPoint() const;
  void setPoint(GeographicalCoordinates const& value);
  /// <summary>
  ///
  /// </summary>
  int32_t getInnerRadius() const;
  void setInnerRadius(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  float getUncertaintyRadius() const;
  void setUncertaintyRadius(float const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getOffsetAngle() const;
  void setOffsetAngle(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getIncludedAngle() const;
  void setIncludedAngle(int32_t const value);
  /// <summary>
  ///
  /// </summary>
  int32_t getConfidence() const;
  void setConfidence(int32_t const value);

  friend void to_json(nlohmann::json& j, const EllipsoidArc& o);
  friend void from_json(const nlohmann::json& j, EllipsoidArc& o);

 protected:
  SupportedGADShapes m_Shape;

  GeographicalCoordinates m_Point;

  int32_t m_InnerRadius;

  float m_UncertaintyRadius;

  int32_t m_OffsetAngle;

  int32_t m_IncludedAngle;

  int32_t m_Confidence;
};

}  // namespace oai::nef::model

#endif /* EllipsoidArc_H_ */