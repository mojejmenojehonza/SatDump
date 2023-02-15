/*
 * Generated by asn1c-0.9.28 (http://lionet.info/asn1c)
 * From ASN.1 module "FANSACTwoWayDataLinkCommunications"
 * 	found in "../../../libacars.asn1/fans-cpdlc.asn1"
 * 	`asn1c -fcompound-names -fincludes-quoted -gen-PER`
 */

#ifndef	_FANSReportedWaypointAltitude_H_
#define	_FANSReportedWaypointAltitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "FANSAltitude.h"

#ifdef __cplusplus
extern "C" {
#endif

/* FANSReportedWaypointAltitude */
typedef FANSAltitude_t	 FANSReportedWaypointAltitude_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_FANSReportedWaypointAltitude;
asn_struct_free_f FANSReportedWaypointAltitude_free;
asn_struct_print_f FANSReportedWaypointAltitude_print;
asn_constr_check_f FANSReportedWaypointAltitude_constraint;
ber_type_decoder_f FANSReportedWaypointAltitude_decode_ber;
der_type_encoder_f FANSReportedWaypointAltitude_encode_der;
xer_type_decoder_f FANSReportedWaypointAltitude_decode_xer;
xer_type_encoder_f FANSReportedWaypointAltitude_encode_xer;
per_type_decoder_f FANSReportedWaypointAltitude_decode_uper;
per_type_encoder_f FANSReportedWaypointAltitude_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _FANSReportedWaypointAltitude_H_ */
#include "asn_internal.h"
