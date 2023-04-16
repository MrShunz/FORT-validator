/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "RPKI-ROA"
 * 	found in "rfc6482.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_ASID_H_
#define	_ASID_H_


#include "asn1/asn1c/asn_application.h"

/* Including external dependencies */
#include "asn1/asn1c/INTEGER.h"

#ifdef __cplusplus
extern "C" {
#endif

/* ASID */
typedef INTEGER_t	 ASID_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ASID;
asn_struct_free_f ASID_free;
asn_struct_print_f ASID_print;
asn_constr_check_f ASID_constraint;
ber_type_decoder_f ASID_decode_ber;
der_type_encoder_f ASID_encode_der;
xer_type_decoder_f ASID_decode_xer;
xer_type_encoder_f ASID_encode_xer;
oer_type_decoder_f ASID_decode_oer;
oer_type_encoder_f ASID_encode_oer;

#ifdef __cplusplus
}
#endif

#endif	/* _ASID_H_ */
#include "asn1/asn1c/asn_internal.h"
