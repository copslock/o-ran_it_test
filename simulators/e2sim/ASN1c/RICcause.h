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
 * From ASN.1 module "E2AP-IEs"
 * 	found in "../../asnFiles/e2ap-v031.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -fno-include-deps -findirect-choice -gen-PER -no-gen-OER -D.`
 */

#ifndef	_RICcause_H_
#define	_RICcause_H_


#include "asn_application.h"

/* Including external dependencies */
#include "CauseRadioNetwork.h"
#include "CauseTransport.h"
#include "CauseProtocol.h"
#include "CauseMisc.h"
#include "CauseRIC.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RICcause_PR {
	RICcause_PR_NOTHING,	/* No components present */
	RICcause_PR_radioNetwork,
	RICcause_PR_transport,
	RICcause_PR_protocol,
	RICcause_PR_misc,
	RICcause_PR_ric
	/* Extensions may appear below */
	
} RICcause_PR;

/* RICcause */
typedef struct RICcause {
	RICcause_PR present;
	union RICcause_u {
		CauseRadioNetwork_t	 radioNetwork;
		CauseTransport_t	 transport;
		CauseProtocol_t	 protocol;
		CauseMisc_t	 misc;
		CauseRIC_t	 ric;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RICcause_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RICcause;
extern asn_CHOICE_specifics_t asn_SPC_RICcause_specs_1;
extern asn_TYPE_member_t asn_MBR_RICcause_1[5];
extern asn_per_constraints_t asn_PER_type_RICcause_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _RICcause_H_ */
#include "asn_internal.h"
