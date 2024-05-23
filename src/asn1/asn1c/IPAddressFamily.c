/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IPAddrAndASCertExtn"
 * 	found in "rfc3779.asn1"
 * 	`asn1c -Werror -fcompound-names -fwide-types -D asn1/asn1c -no-gen-PER -no-gen-example`
 */

#include "asn1/asn1c/IPAddressFamily.h"

static int
memb_addressFamily_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const OCTET_STRING_t *st = (const OCTET_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	size = st->size;
	
	if((size >= 2 && size <= 3)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

asn_TYPE_member_t asn_MBR_IPAddressFamily_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct IPAddressFamily, addressFamily),
		(ASN_TAG_CLASS_UNIVERSAL | (4 << 2)),
		0,
		&asn_DEF_OCTET_STRING,
		NULL,
		{ NULL, NULL,  memb_addressFamily_constraint_1 },
		NULL, NULL, /* No default value */
		"addressFamily"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct IPAddressFamily, ipAddressChoice),
		-1 /* Ambiguous tag (CHOICE?) */,
		0,
		&asn_DEF_IPAddressChoice,
		NULL,
		{ NULL, NULL, NULL },
		NULL, NULL, /* No default value */
		"ipAddressChoice"
		},
};
static const ber_tlv_tag_t asn_DEF_IPAddressFamily_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_IPAddressFamily_tag2el_1[] = {
    { (ASN_TAG_CLASS_UNIVERSAL | (4 << 2)), 0, 0, 0 }, /* addressFamily */
    { (ASN_TAG_CLASS_UNIVERSAL | (5 << 2)), 1, 0, 0 }, /* inherit */
    { (ASN_TAG_CLASS_UNIVERSAL | (16 << 2)), 1, 0, 0 } /* addressesOrRanges */
};
asn_SEQUENCE_specifics_t asn_SPC_IPAddressFamily_specs_1 = {
	sizeof(struct IPAddressFamily),
	offsetof(struct IPAddressFamily, _asn_ctx),
	asn_MAP_IPAddressFamily_tag2el_1,
	3,	/* Count of tags in the map */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_IPAddressFamily = {
	"IPAddressFamily",
	"IPAddressFamily",
	&asn_OP_SEQUENCE,
	asn_DEF_IPAddressFamily_tags_1,
	sizeof(asn_DEF_IPAddressFamily_tags_1)
		/sizeof(asn_DEF_IPAddressFamily_tags_1[0]), /* 1 */
	asn_DEF_IPAddressFamily_tags_1,	/* Same as above */
	sizeof(asn_DEF_IPAddressFamily_tags_1)
		/sizeof(asn_DEF_IPAddressFamily_tags_1[0]), /* 1 */
	{ NULL, NULL, SEQUENCE_constraint },
	asn_MBR_IPAddressFamily_1,
	2,	/* Elements count */
	&asn_SPC_IPAddressFamily_specs_1	/* Additional specs */
};
