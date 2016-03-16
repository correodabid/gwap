/**
 * Copyright (c) 2016 panStamp <contact@panstamp.com>
 * 
 * This file is part of the panStamp project.
 * 
 * panStamp  is free software; you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * any later version.
 * 
 * panStamp is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public License
 * along with panStamp; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 
 * USA
 * 
 * Author: Daniel Berenguer
 * Creation date: 03/11/2016
 */

#ifndef _NVOLAT_H
#define _NVOLAT_H

/**
 * EEPROM/Infomem addresses
 */
#define NVOLAT_SIGNATURE          0x00   // 2-byte register
#define NVOLAT_FREQ_CHANNEL       0x02   // 1-byte register
#define NVOLAT_SYNC_WORD          0x03   // 2-byte register
#define NVOLAT_TX_INTERVAL        0x05   // 2-byte register
#define NVOLAT_FIRST_CUSTOM       0x20

// Signature
#define NVOLAT_SIGNATURE_HIGH     0xAB
#define NVOLAT_SIGNATURE_LOW      0xCD

#endif

