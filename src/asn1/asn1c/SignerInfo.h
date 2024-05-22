/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CryptographicMessageSyntax2004"
 * 	found in "rfc5652-12.1.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#ifndef	_SignerInfo_H_
#define	_SignerInfo_H_

#include "asn1/asn1c/CMSVersion.h"
#include "asn1/asn1c/DigestAlgorithmIdentifier.h"
#include "asn1/asn1c/SignatureAlgorithmIdentifier.h"
#include "asn1/asn1c/SignatureValue.h"
#include "asn1/asn1c/SignedAttributes.h"
#include "asn1/asn1c/SignerIdentifier.h"
#include "asn1/asn1c/UnsignedAttributes.h"
#include "asn1/asn1c/constr_SEQUENCE.h"
#include "asn1/asn1c/constr_TYPE.h"

/* Forward declarations */
struct SignedAttributes;
struct UnsignedAttributes;

/* SignerInfo */
typedef struct SignerInfo {
	CMSVersion_t	 version;
	SignerIdentifier_t	 sid;
	DigestAlgorithmIdentifier_t	 digestAlgorithm;
	struct SignedAttributes	*signedAttrs	/* OPTIONAL */;
	SignatureAlgorithmIdentifier_t	 signatureAlgorithm;
	SignatureValue_t	 signature;
	struct UnsignedAttributes	*unsignedAttrs	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SignerInfo_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SignerInfo;
extern asn_SEQUENCE_specifics_t asn_SPC_SignerInfo_specs_1;
extern asn_TYPE_member_t asn_MBR_SignerInfo_1[7];

#endif	/* _SignerInfo_H_ */
