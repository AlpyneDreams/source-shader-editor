#pragma once

#ifdef SHADER_EDITOR_DLL_PORTAL2
#include <ctype.h>

const uint32 INVALID_LOCALIZE_STRING_INDEX = (uint32)-1;
inline bool V_isalnum(char c) { return isalnum( (unsigned char)c ) != 0; }
#endif

#ifndef max
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#endif

#ifndef min
#define min(a,b)            (((a) < (b)) ? (a) : (b))
#endif

#ifndef clamp
#define clamp( val, min, max ) ( ((val) > (max)) ? (max) : ( ((val) < (min)) ? (min) : (val) ) )
#endif

// for SWARM etc
#ifndef INVALID_LOCALIZE_STRING_INDEX
#define INVALID_LOCALIZE_STRING_INDEX INVALID_STRING_INDEX
#endif

#ifndef V_isalnum
#define V_isalnum isalnum
#endif