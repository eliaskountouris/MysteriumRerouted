#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT_tkl_ansi_elias( \
    K00,      K02, K03, K04, K05, K06, K07, K08, K09,      K0B, K0C, K0D, K0E, K0F, K0G, K0H, \
    K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D,      K1F, K1G, K1H, \
    K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D,      K2F, K2G, K2H, \
    K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B,      K3D,                     \
    K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A,           K4D,           K4G,      \
	K50, K51, K52,                K56,           K59, K5A,      K5C,      K5E, K5F, K5G, K5H  \
) \
{ \
    { K00, _x_, K02, K03, K04, K05, K06, K07, K08, K09, _x_, K0B, K0C, K0D, K0E, K0F, K0G, K0H }, \
    { K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, _x_, K1F, K1G, K1H }, \
    { K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, _x_, K2F, K2G, K2H }, \
    { K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, _x_, K3D, _x_, _x_, _x_, _x_ }, \
    { K40, K41, K42, K43, K44, K45, K46, K47, K48, K49, K4A, _x_, _x_, K4D, _x_, _x_, K4G, _x_ }, \
    { K50, K51, K52, _x_, _x_, _x_, K56, _x_, _x_, K59, K5A, _x_, K5C, _x_, K5E, K5F, K5G, K5H }  \
}


