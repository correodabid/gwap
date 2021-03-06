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

#include "gwquery.h"
#include "gwap.h"

/**
 * GWQUERY
 * 
 * Class constructor
 * 
 * @param dAddr Destination address
 * @param rId Register id
 */
GWQUERY::GWQUERY(uint8_t *dAddr, uint8_t rId)
{
  memcpy(address, dAddr, sizeof(address));
  function = GWAPFUNCT_QRY;
  regId = rId;
  value.data = NULL;
  value.length = 0;
  value.type = GWDTYPE_OTHER;
}

