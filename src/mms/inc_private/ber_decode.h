/*
 *  ber_decode.h
 *
 *  Copyright 2013 Michael Zillgith
 *
 *  This file is part of libIEC61850.
 *
 *  libIEC61850 is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  libIEC61850 is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with libIEC61850.  If not, see <http://www.gnu.org/licenses/>.
 *
 *  See COPYING file for the complete license text.
 */

#ifndef BER_DECODER_H_
#define BER_DECODER_H_

#include "libiec61850_platform_includes.h"

int
BerDecoder_decodeLength(uint8_t* buffer, int* length, int bufPos, int maxBufPos);
char*
BerDecoder_decodeString(uint8_t* buffer, int strlen, int bufPos, int maxBufPos);

uint32_t
BerDecoder_decodeUint32(uint8_t* buffer, int intlen, int bufPos);

float
BerDecoder_decodeFloat(uint8_t* buffer, int bufPos);

double
BerDecoder_decodeDouble(uint8_t* buffer, int bufPos);

bool
BerDecoder_decodeBoolean(uint8_t* buffer, int bufPos);

#endif /* BER_DECODER_H_ */
