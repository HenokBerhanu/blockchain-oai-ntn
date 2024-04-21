/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NGAP-CommonDataTypes"
 * 	found in "asn.1/Common Definitions.asn1"
 * 	`asn1c -pdu=all -fcompound-names -fno-include-deps -findirect-choice
 * -gen-PER -D src`
 */

#ifndef _Ngap_Criticality_H_
#define _Ngap_Criticality_H_

#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum Ngap_Criticality {
  Ngap_Criticality_reject = 0,
  Ngap_Criticality_ignore = 1,
  Ngap_Criticality_notify = 2
} e_Ngap_Criticality;

/* Ngap_Criticality */
typedef long Ngap_Criticality_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_Ngap_Criticality_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_Ngap_Criticality;
extern const asn_INTEGER_specifics_t asn_SPC_Ngap_Criticality_specs_1;
asn_struct_free_f Ngap_Criticality_free;
asn_struct_print_f Ngap_Criticality_print;
asn_constr_check_f Ngap_Criticality_constraint;
ber_type_decoder_f Ngap_Criticality_decode_ber;
der_type_encoder_f Ngap_Criticality_encode_der;
xer_type_decoder_f Ngap_Criticality_decode_xer;
xer_type_encoder_f Ngap_Criticality_encode_xer;
oer_type_decoder_f Ngap_Criticality_decode_oer;
oer_type_encoder_f Ngap_Criticality_encode_oer;
per_type_decoder_f Ngap_Criticality_decode_uper;
per_type_encoder_f Ngap_Criticality_encode_uper;
per_type_decoder_f Ngap_Criticality_decode_aper;
per_type_encoder_f Ngap_Criticality_encode_aper;

#ifdef __cplusplus
}
#endif

#endif /* _Ngap_Criticality_H_ */
#include <asn_internal.h>
