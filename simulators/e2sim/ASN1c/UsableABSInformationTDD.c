/*****************************************************************************
#                                                                            *
# Copyright 2019 AT&T Intellectual Property                                  *
#                                                                            *
# Licensed under the Apache License, Version 2.0 (the "License");            *
# you may not use this file except in compliance with the License.           *
# You may obtain a copy of the License at                                    *
#                                                                            *
#      http://www.apache.org/licenses/LICENSE-2.0                            *
#                                                                            *
# Unless required by applicable law or agreed to in writing, software        *
# distributed under the License is distributed on an "AS IS" BASIS,          *
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.   *
# See the License for the specific language governing permissions and        *
# limitations under the License.                                             *
#                                                                            *
******************************************************************************/

/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asnFiles/X2AP-IEs.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "UsableABSInformationTDD.h"

#include "ProtocolExtensionContainer.h"
static int
memb_usaable_abs_pattern_info_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 1 && size <= 70)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_usaable_abs_pattern_info_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  7,  7,  1,  70 }	/* (SIZE(1..70,...)) */,
	0, 0	/* No PER value map */
};
asn_TYPE_member_t asn_MBR_UsableABSInformationTDD_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct UsableABSInformationTDD, usaable_abs_pattern_info),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_usaable_abs_pattern_info_constr_2,  memb_usaable_abs_pattern_info_constraint_1 },
		0, 0, /* No default value */
		"usaable-abs-pattern-info"
		},
	{ ATF_POINTER, 1, offsetof(struct UsableABSInformationTDD, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_170P219,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_UsableABSInformationTDD_oms_1[] = { 1 };
static const ber_tlv_tag_t asn_DEF_UsableABSInformationTDD_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_UsableABSInformationTDD_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* usaable-abs-pattern-info */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* iE-Extensions */
};
asn_SEQUENCE_specifics_t asn_SPC_UsableABSInformationTDD_specs_1 = {
	sizeof(struct UsableABSInformationTDD),
	offsetof(struct UsableABSInformationTDD, _asn_ctx),
	asn_MAP_UsableABSInformationTDD_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_UsableABSInformationTDD_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	2,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_UsableABSInformationTDD = {
	"UsableABSInformationTDD",
	"UsableABSInformationTDD",
	&asn_OP_SEQUENCE,
	asn_DEF_UsableABSInformationTDD_tags_1,
	sizeof(asn_DEF_UsableABSInformationTDD_tags_1)
		/sizeof(asn_DEF_UsableABSInformationTDD_tags_1[0]), /* 1 */
	asn_DEF_UsableABSInformationTDD_tags_1,	/* Same as above */
	sizeof(asn_DEF_UsableABSInformationTDD_tags_1)
		/sizeof(asn_DEF_UsableABSInformationTDD_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_UsableABSInformationTDD_1,
	2,	/* Elements count */
	&asn_SPC_UsableABSInformationTDD_specs_1	/* Additional specs */
};

