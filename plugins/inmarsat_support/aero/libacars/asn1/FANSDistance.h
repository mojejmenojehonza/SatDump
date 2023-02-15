/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSDistance_H_
#define	_FANSDistance_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSDistanceNm.h"
#include "FANSDistanceKm.h"
#include "constr_CHOICE.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum FANSDistance_PR {
	FANSDistance_PR_NOTHING,	/* No components present */
	FANSDistance_PR_distanceNm,
	FANSDistance_PR_distanceKm
} FANSDistance_PR;

/* FANSDistance */
typedef struct FANSDistance {
	FANSDistance_PR present;
	union FANSDistance_u {
		FANSDistanceNm_t	 distanceNm;
		FANSDistanceKm_t	 distanceKm;
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} FANSDistance_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSDistance;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSDistance_H_ */
#include "asn_internal.h"
