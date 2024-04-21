/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */

/*
 * NFInstanceIDDocumentApiImpl.h
 *
 *
 */

#ifndef NF_INSTANCE_ID_DOCUMENT_API_IMPL_H_
#define NF_INSTANCE_ID_DOCUMENT_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <NFInstanceIDDocumentApi.h>

#include <pistache/optional.h>

#include "NFProfile.h"
#include "PatchItem.h"
#include "ProblemDetails.h"
#include "nrf_app.hpp"
#include <string>
#include <vector>

namespace oai {
namespace nrf {
namespace api {

using namespace oai::model::nrf;
using namespace oai::nrf::app;

class NFInstanceIDDocumentApiImpl
    : public oai::nrf::api::NFInstanceIDDocumentApi {
 public:
  NFInstanceIDDocumentApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, nrf_app* nrf_app_inst,
      std::string address);
  ~NFInstanceIDDocumentApiImpl() {}

  void deregister_nf_instance(
      const std::string& nfInstanceID,
      Pistache::Http::ResponseWriter& response);
  void get_nf_instance(
      const std::string& nfInstanceID,
      Pistache::Http::ResponseWriter& response);
  void register_nf_instance(
      const std::string& nfInstanceID, const NFProfile& nFProfile,
      const Pistache::Optional<Pistache::Http::Header::Raw>& contentEncoding,
      Pistache::Http::ResponseWriter& response);
  void update_nf_instance(
      const std::string& nfInstanceID,
      const std::vector<oai::model::common::PatchItem>& patchItem,
      Pistache::Http::ResponseWriter& response);

 private:
  nrf_app* m_nrf_app;
  std::string m_address;
};

}  // namespace api
}  // namespace nrf
}  // namespace oai

#endif
