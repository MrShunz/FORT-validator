/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IPAddrAndASCertExtn"
 * 	found in "rfc3779.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_IPAddressFamily_H_
#define	_IPAddressFamily_H_

#include "asn1/asn1c/IPAddressChoice.h"
#include "asn1/asn1c/OCTET_STRING.h"
#include "asn1/asn1c/constr_SEQUENCE.h"
#include "asn1/asn1c/constr_TYPE.h"

/* IPAddressFamily */
typedef struct IPAddressFamily {
	OCTET_STRING_t	 addressFamily;
	IPAddressChoice_t	 ipAddressChoice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} IPAddressFamily_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_IPAddressFamily;
extern asn_SEQUENCE_specifics_t asn_SPC_IPAddressFamily_specs_1;
extern asn_TYPE_member_t asn_MBR_IPAddressFamily_1[2];

#endif	/* _IPAddressFamily_H_ */
