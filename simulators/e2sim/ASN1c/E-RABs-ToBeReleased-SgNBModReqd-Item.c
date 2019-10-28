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
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asnFiles/X2AP-PDU-Contents.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#include "E-RABs-ToBeReleased-SgNBModReqd-Item.h"

#include "ProtocolExtensionContainer.h"
static asn_TYPE_member_t asn_MBR_E_RABs_ToBeReleased_SgNBModReqd_Item_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeReleased_SgNBModReqd_Item, e_RAB_ID),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_E_RAB_ID,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"e-RAB-ID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct E_RABs_ToBeReleased_SgNBModReqd_Item, cause),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_Cause,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"cause"
		},
	{ ATF_POINTER, 1, offsetof(struct E_RABs_ToBeReleased_SgNBModReqd_Item, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_170P71,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_E_RABs_ToBeReleased_SgNBModReqd_Item_oms_1[] = { 2 };
static const ber_tlv_tag_t asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_E_RABs_ToBeReleased_SgNBModReqd_Item_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* e-RAB-ID */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* cause */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_E_RABs_ToBeReleased_SgNBModReqd_Item_specs_1 = {
	sizeof(struct E_RABs_ToBeReleased_SgNBModReqd_Item),
	offsetof(struct E_RABs_ToBeReleased_SgNBModReqd_Item, _asn_ctx),
	asn_MAP_E_RABs_ToBeReleased_SgNBModReqd_Item_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_E_RABs_ToBeReleased_SgNBModReqd_Item_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item = {
	"E-RABs-ToBeReleased-SgNBModReqd-Item",
	"E-RABs-ToBeReleased-SgNBModReqd-Item",
	&asn_OP_SEQUENCE,
	asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1,
	sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1[0]), /* 1 */
	asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1,	/* Same as above */
	sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1)
		/sizeof(asn_DEF_E_RABs_ToBeReleased_SgNBModReqd_Item_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_E_RABs_ToBeReleased_SgNBModReqd_Item_1,
	3,	/* Elements count */
	&asn_SPC_E_RABs_ToBeReleased_SgNBModReqd_Item_specs_1	/* Additional specs */
};

