/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2022 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */

#include "../../../../../inc/MarlinConfigPre.h"

#if HAS_GRAPHICAL_TFT

#include <stdint.h>

// NotoSans Medium Latin Extended-A 26pt, capital 'A' heigth: 19px, width: 100%, range: 0x0100-0x017f
extern const uint8_t NotoSans_Medium_Latin_Extended_A_19[11379] = {
  130,19,0,1,127,1,25,249, // unifont_t
  // 0x0100  Ā
  17,23,115,17,0,0,0,127,255,64,0,0,191,255,64,0,0,21,85,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x0101  ā
  12,19,57,15,1,255,7,255,244,11,255,244,1,85,80,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x0102  Ă
  17,25,125,17,0,0,0,80,1,64,0,0,176,7,128,0,0,63,255,0,0,0,31,252,0,0,0,0,0,0,0,0,0,0,0,0,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,
  // 0x0103  ă
  12,21,63,15,1,255,5,0,20,11,64,120,3,255,240,1,255,192,0,0,0,0,4,0,7,255,224,15,255,252,10,0,190,0,0,63,0,0,63,0,21,191,11,255,255,63,229,127,190,0,63,252,0,63,252,0,127,190,1,255,63,255,239,31,254,31,0,0,0,
  // 0x0104  Ą
  17,25,125,17,0,250,0,2,160,0,0,0,7,244,0,0,0,15,252,0,0,0,15,188,0,0,0,47,62,0,0,0,62,47,0,0,0,125,31,64,0,0,188,15,128,0,0,248,11,192,0,1,244,7,208,0,3,240,3,240,0,3,255,255,240,0,11,255,255,248,0,15,234,170,252,0,31,128,0,189,0,47,0,0,126,0,63,0,0,63,0,125,0,0,47,64,252,0,0,15,192,0,0,0,30,0,0,0,0,60,0,0,0,0,180,0,0,0,0,184,0,0,0,0,127,192,0,0,0,31,128,
  // 0x0105  ą
  13,21,84,15,1,250,0,4,0,0,7,255,224,0,15,255,252,0,10,0,190,0,0,0,63,0,0,0,63,0,0,21,191,0,11,255,255,0,63,229,127,0,190,0,63,0,252,0,63,0,252,0,127,0,190,1,255,0,63,255,239,0,31,254,31,0,0,0,45,0,0,0,116,0,0,0,240,0,0,0,240,0,0,0,255,64,0,0,47,64,
  // 0x0106  Ć
  15,26,104,16,1,255,0,0,31,192,0,0,63,0,0,0,188,0,0,1,240,0,0,0,64,0,0,0,0,0,0,6,254,64,0,191,255,244,2,255,171,240,11,244,0,80,31,192,0,0,47,64,0,0,63,0,0,0,62,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,63,0,0,0,63,0,0,0,47,128,0,0,15,224,0,0,7,253,5,176,1,255,255,240,0,47,255,224,0,0,16,0,
  // 0x0107  ć
  11,21,63,13,1,255,0,2,248,0,7,224,0,15,128,0,62,0,0,16,0,0,0,0,1,255,248,11,255,248,47,208,96,63,0,0,126,0,0,189,0,0,188,0,0,188,0,0,189,0,0,126,0,0,63,0,0,47,208,40,15,255,248,1,255,244,0,0,0,
  // 0x0108  Ĉ
  15,26,104,16,1,255,0,3,248,0,0,11,253,0,0,47,111,0,0,124,7,192,0,0,0,64,0,0,0,0,0,6,254,64,0,191,255,244,2,255,171,240,11,244,0,80,31,192,0,0,47,64,0,0,63,0,0,0,62,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,63,0,0,0,63,0,0,0,47,128,0,0,15,224,0,0,7,253,5,176,1,255,255,240,0,47,255,224,0,0,16,0,
  // 0x0109  ĉ
  11,21,63,13,1,255,0,127,0,0,255,192,3,227,224,15,128,184,4,0,4,0,0,0,1,255,248,11,255,248,47,208,96,63,0,0,126,0,0,189,0,0,188,0,0,188,0,0,189,0,0,126,0,0,63,0,0,47,208,40,15,255,248,1,255,244,0,0,0,
  // 0x010a  Ċ
  15,26,104,16,1,255,0,0,64,0,0,2,240,0,0,2,244,0,0,0,224,0,0,0,0,0,0,0,0,0,0,6,254,64,0,191,255,244,2,255,171,240,11,244,0,80,31,192,0,0,47,64,0,0,63,0,0,0,62,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,63,0,0,0,63,0,0,0,47,128,0,0,15,224,0,0,7,253,5,176,1,255,255,240,0,47,255,224,0,0,16,0,
  // 0x010b  ċ
  11,21,63,13,1,255,0,4,0,0,63,0,0,63,0,0,45,0,0,0,0,0,0,0,1,255,248,11,255,248,47,208,96,63,0,0,126,0,0,189,0,0,188,0,0,188,0,0,189,0,0,126,0,0,63,0,0,47,208,40,15,255,248,1,255,244,0,0,0,
  // 0x010c  Č
  15,26,104,16,1,255,0,184,3,208,0,63,15,128,0,15,254,0,0,3,252,0,0,0,80,0,0,0,0,0,0,6,254,64,0,191,255,244,2,255,171,240,11,244,0,80,31,192,0,0,47,64,0,0,63,0,0,0,62,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,126,0,0,0,63,0,0,0,63,0,0,0,47,128,0,0,15,224,0,0,7,253,5,176,1,255,255,240,0,47,255,224,0,0,16,0,
  // 0x010d  č
  11,21,63,13,1,255,15,0,124,7,210,240,1,255,192,0,191,64,0,20,0,0,0,0,1,255,248,11,255,248,47,208,96,63,0,0,126,0,0,189,0,0,188,0,0,188,0,0,189,0,0,126,0,0,63,0,0,47,208,40,15,255,248,1,255,244,0,0,0,
  // 0x010e  Ď
  16,25,100,19,2,0,3,208,31,0,1,244,188,0,0,127,244,0,0,47,208,0,0,5,0,0,0,0,0,0,106,169,64,0,191,255,253,0,191,255,255,128,189,0,47,224,189,0,3,244,189,0,1,252,189,0,0,252,189,0,0,189,189,0,0,189,189,0,0,125,189,0,0,189,189,0,0,189,189,0,0,252,189,0,1,252,189,0,3,244,189,0,15,240,190,86,255,192,191,255,254,0,191,255,144,0,
  // 0x010f  ď
  18,21,105,16,1,255,0,0,11,131,208,0,0,15,199,192,0,0,15,203,128,0,0,15,207,0,0,0,15,196,0,0,0,15,192,0,2,255,139,192,0,15,255,255,192,0,47,192,127,192,0,63,0,31,192,0,126,0,15,192,0,189,0,15,192,0,188,0,11,192,0,188,0,11,192,0,189,0,15,192,0,126,0,15,192,0,63,0,31,192,0,47,192,127,192,0,15,255,251,192,0,2,255,135,192,0,0,0,0,0,0,
  // 0x0110  Đ
  18,19,95,19,0,0,2,170,148,0,0,7,255,255,208,0,7,255,255,248,0,7,208,2,254,0,7,208,0,63,64,7,208,0,31,192,7,208,0,15,192,7,208,0,11,208,27,229,64,11,208,127,255,224,7,208,127,255,224,11,208,7,208,0,11,208,7,208,0,15,192,7,208,0,31,192,7,208,0,63,64,7,208,0,255,0,7,229,111,252,0,7,255,255,224,0,7,255,249,0,0,
  // 0x0111  đ
  15,21,84,16,1,255,0,0,11,128,0,0,15,192,0,26,175,228,0,63,255,252,0,21,95,212,0,0,15,192,1,255,79,192,11,255,235,192,47,213,191,192,63,0,47,192,126,0,15,192,189,0,15,192,189,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,251,192,2,255,135,192,0,0,0,0,
  // 0x0112  Ē
  11,23,69,14,2,0,15,255,224,15,255,240,5,85,64,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x0113  ē
  13,19,76,15,1,255,7,255,244,0,11,255,244,0,1,85,80,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x0114  Ĕ
  11,25,75,14,2,0,4,0,80,14,0,240,15,255,208,2,255,128,0,0,0,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x0115  ĕ
  13,21,84,15,1,255,5,0,20,0,11,64,120,0,3,255,240,0,1,255,192,0,0,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x0116  Ė
  11,25,75,14,2,0,0,16,0,0,125,0,0,189,0,0,40,0,0,0,0,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x0117  ė
  13,21,84,15,1,255,0,4,0,0,0,63,0,0,0,63,0,0,0,29,0,0,0,0,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x0118  Ę
  11,25,75,14,2,250,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,0,1,224,0,3,192,0,11,64,0,11,128,0,7,252,0,1,248,
  // 0x0119  ę
  13,20,80,15,1,250,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,254,0,0,0,184,0,0,0,240,0,0,2,208,0,0,3,208,0,0,2,254,0,0,0,190,0,
  // 0x011a  Ě
  11,25,75,14,2,0,46,0,180,15,195,224,3,255,128,0,255,0,0,20,0,0,0,0,106,170,168,191,255,252,191,255,252,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,191,255,244,191,255,244,190,170,160,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x011b  ě
  13,21,84,15,1,255,15,64,124,0,3,210,240,0,1,255,208,0,0,191,64,0,0,20,0,0,0,0,0,0,1,255,224,0,11,255,252,0,31,128,126,0,63,0,47,0,125,0,31,64,126,85,111,128,191,255,255,128,190,170,170,64,189,0,0,0,126,0,0,0,63,0,0,0,31,208,6,0,11,255,255,0,1,255,253,0,0,1,0,0,
  // 0x011c  Ĝ
  16,26,104,19,1,255,0,1,253,0,0,3,255,0,0,15,207,192,0,62,2,240,0,16,0,16,0,0,0,0,0,6,191,144,0,127,255,254,2,255,234,252,11,248,0,4,15,208,0,0,47,128,0,0,63,0,0,0,62,0,0,0,126,0,0,0,125,0,63,255,126,0,63,255,126,0,21,127,63,0,0,63,63,0,0,63,47,128,0,63,15,224,0,63,7,253,64,127,1,255,255,255,0,47,255,249,0,0,16,0,
  // 0x011d  ĝ
  13,27,108,16,1,249,0,63,128,0,0,191,208,0,2,246,240,0,7,192,124,0,0,0,4,0,0,0,0,0,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,31,128,41,0,127,0,47,255,254,0,27,255,244,0,0,0,0,0,
  // 0x011e  Ğ
  16,26,104,19,1,255,0,20,0,80,0,45,1,224,0,15,255,192,0,7,255,0,0,0,0,0,0,0,0,0,0,6,191,144,0,127,255,254,2,255,234,252,11,248,0,4,15,208,0,0,47,128,0,0,63,0,0,0,62,0,0,0,126,0,0,0,125,0,63,255,126,0,63,255,126,0,21,127,63,0,0,63,63,0,0,63,47,128,0,63,15,224,0,63,7,253,64,127,1,255,255,255,0,47,255,249,0,0,16,0,
  // 0x011f  ğ
  13,27,108,16,1,249,1,0,20,0,7,128,60,0,3,255,244,0,0,255,208,0,0,0,0,0,0,0,0,0,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,31,128,41,0,127,0,47,255,254,0,27,255,244,0,0,0,0,0,
  // 0x0120  Ġ
  16,26,104,19,1,255,0,0,16,0,0,0,252,0,0,0,252,0,0,0,116,0,0,0,0,0,0,0,0,0,0,6,191,144,0,127,255,254,2,255,234,252,11,248,0,4,15,208,0,0,47,128,0,0,63,0,0,0,62,0,0,0,126,0,0,0,125,0,63,255,126,0,63,255,126,0,21,127,63,0,0,63,63,0,0,63,47,128,0,63,15,224,0,63,7,253,64,127,1,255,255,255,0,47,255,249,0,0,16,0,
  // 0x0121  ġ
  13,27,108,16,1,249,0,4,0,0,0,47,0,0,0,47,64,0,0,14,0,0,0,0,0,0,0,0,0,0,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,31,128,41,0,127,0,47,255,254,0,27,255,244,0,0,0,0,0,
  // 0x0122  Ģ
  16,25,100,19,1,250,0,6,191,144,0,127,255,254,2,255,234,252,11,248,0,4,15,208,0,0,47,128,0,0,63,0,0,0,62,0,0,0,126,0,0,0,125,0,63,255,126,0,63,255,126,0,21,127,63,0,0,63,63,0,0,63,47,128,0,63,15,224,0,63,7,253,64,127,1,255,255,255,0,47,255,249,0,0,16,0,0,0,20,0,0,0,188,0,0,0,244,0,0,0,240,0,0,1,192,0,
  // 0x0123  ģ
  13,27,108,16,1,249,0,3,128,0,0,15,64,0,0,31,0,0,0,63,0,0,0,4,0,0,0,0,0,0,2,255,135,192,15,255,251,192,47,192,127,192,63,0,31,192,126,0,15,192,189,0,15,192,188,0,11,192,188,0,11,192,189,0,11,192,125,0,15,192,63,0,31,192,47,128,127,192,15,255,255,192,2,255,143,192,0,0,15,192,0,0,15,192,0,0,31,128,41,0,127,0,47,255,254,0,27,255,244,0,0,0,0,0,
  // 0x0124  Ĥ
  15,25,100,19,2,0,0,15,208,0,0,63,244,0,0,188,188,0,2,240,31,0,0,0,1,0,0,0,0,0,104,0,0,104,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,191,255,255,252,191,255,255,252,190,170,170,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,189,0,0,252,
  // 0x0125  ĥ
  16,26,104,16,255,0,3,244,0,0,15,252,0,0,63,63,0,0,184,11,192,0,64,0,64,0,0,0,0,0,2,224,0,0,3,240,0,0,3,240,0,0,3,240,0,0,3,240,0,0,3,240,0,0,3,242,255,208,3,251,255,244,3,254,2,252,3,248,0,252,3,240,0,189,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,3,240,0,125,
  // 0x0126  Ħ
  20,19,95,19,0,0,6,128,0,6,128,11,208,0,15,192,11,208,0,15,192,175,250,170,175,233,255,255,255,255,253,91,229,85,95,212,11,208,0,15,192,11,208,0,15,192,11,255,255,255,192,11,255,255,255,192,11,234,170,175,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,11,208,0,15,192,
  // 0x0127  ħ
  15,20,80,16,0,0,11,128,0,0,15,192,0,0,111,234,144,0,255,255,240,0,95,213,80,0,15,192,0,0,15,193,169,0,15,223,255,192,15,254,175,224,15,240,3,240,15,208,2,240,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,15,192,1,244,
  // 0x0128  Ĩ
  10,25,75,9,0,0,0,0,64,63,129,208,255,255,192,224,191,64,64,0,0,0,0,0,42,170,0,63,255,0,11,249,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,63,255,0,63,255,0,
  // 0x0129  ĩ
  10,20,60,7,255,0,0,0,64,63,129,208,255,255,192,208,191,64,64,0,0,0,0,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,
  // 0x012a  Ī
  9,23,69,9,0,0,127,255,64,127,255,128,21,85,0,0,0,0,42,170,0,63,255,0,11,249,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,63,255,0,63,255,0,
  // 0x012b  ī
  9,18,54,7,255,0,127,255,64,127,255,128,21,85,0,0,0,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,
  // 0x012c  Ĭ
  9,25,75,9,0,0,80,1,64,116,7,128,63,255,0,31,253,0,0,0,0,0,0,0,42,170,0,63,255,0,11,249,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,63,255,0,63,255,0,
  // 0x012d  ĭ
  9,20,60,7,255,0,80,1,64,180,7,128,63,255,0,31,252,0,0,0,0,0,0,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,3,240,0,
  // 0x012e  Į
  7,25,50,9,1,250,170,168,255,252,47,228,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,255,252,255,252,0,240,3,192,7,192,7,192,3,252,1,188,
  // 0x012f  į
  5,26,52,7,1,250,4,0,63,0,63,0,29,0,0,0,0,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,63,0,45,0,180,0,240,0,240,0,255,64,47,64,
  // 0x0130  İ
  7,25,50,9,1,0,1,0,11,192,15,192,7,128,0,0,0,0,170,168,255,252,47,228,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,192,255,252,255,252,
  // 0x0131  ı
  3,14,14,7,2,0,252,252,252,252,252,252,252,252,252,252,252,252,252,252,
  // 0x0132  Ĳ
  14,25,100,17,1,250,170,168,2,128,255,252,7,208,47,228,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,15,192,7,208,255,252,7,208,255,252,7,208,0,0,11,208,0,0,15,192,0,5,111,192,0,15,255,0,0,11,248,0,0,0,0,0,
  // 0x0133  ĳ
  10,27,81,14,2,249,16,0,64,252,3,240,252,3,240,116,1,224,0,0,0,0,0,0,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,252,3,240,0,3,240,0,3,240,0,3,240,0,7,224,1,255,208,1,255,64,0,0,0,
  // 0x0134  Ĵ
  10,31,93,8,254,250,0,254,0,2,255,64,11,203,192,47,1,240,0,0,16,0,0,0,0,104,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,188,0,0,252,0,87,248,0,255,240,0,255,128,0,0,0,0,
  // 0x0135  ĵ
  10,27,81,7,254,249,1,253,0,3,255,0,15,207,192,46,2,240,16,0,16,0,0,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,1,248,0,191,240,0,191,208,0,0,0,0,
  // 0x0136  Ķ
  14,25,100,16,2,250,104,0,2,160,189,0,15,208,189,0,63,64,189,0,190,0,189,1,248,0,189,7,240,0,189,15,192,0,189,63,0,0,189,253,0,0,191,255,0,0,191,255,64,0,191,15,192,0,189,7,240,0,189,2,248,0,189,0,253,0,189,0,127,0,189,0,47,128,189,0,15,208,189,0,3,240,0,0,0,0,0,5,0,0,0,31,64,0,0,47,0,0,0,60,0,0,0,40,0,0,
  // 0x0137  ķ
  12,26,78,15,2,250,184,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,190,252,2,248,252,11,224,252,31,128,252,126,0,253,252,0,255,248,0,255,254,0,254,63,64,252,15,192,252,7,224,252,2,248,252,0,253,252,0,127,0,0,0,0,20,0,0,188,0,0,244,0,0,240,0,1,192,0,
  // 0x0138  ĸ
  12,14,42,15,2,0,252,0,190,252,1,248,252,7,240,252,15,192,252,63,0,252,253,0,254,252,0,255,254,0,255,63,64,252,15,192,252,7,240,252,2,248,252,0,253,252,0,63,
  // 0x0139  Ĺ
  11,25,75,14,2,0,7,240,0,15,192,0,47,0,0,124,0,0,16,0,0,0,0,0,104,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x013a  ĺ
  6,26,52,7,2,0,11,224,15,192,63,0,184,0,0,0,0,0,184,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,
  // 0x013b  Ļ
  11,25,75,14,2,250,104,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,0,0,0,0,21,0,0,61,0,0,124,0,0,180,0,0,160,0,
  // 0x013c  ļ
  3,26,26,7,2,250,184,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,252,0,20,124,184,240,208,
  // 0x013d  Ľ
  11,19,57,14,2,0,104,0,40,189,0,124,189,0,184,189,0,240,189,0,144,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x013e  ľ
  8,20,40,7,2,0,184,61,252,124,252,184,252,240,252,64,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,
  // 0x013f  Ŀ
  11,19,57,14,2,0,104,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,189,0,64,189,3,224,189,3,240,189,2,208,189,0,0,189,0,0,189,0,0,189,0,0,189,0,0,190,85,84,191,255,252,191,255,252,
  // 0x0140  ŀ
  7,20,40,8,2,0,184,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,16,252,248,252,252,252,180,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,
  // 0x0141  Ł
  13,19,76,14,0,0,6,128,0,0,11,208,0,0,11,208,0,0,11,208,0,0,11,208,0,0,11,208,0,0,11,208,0,0,11,215,192,0,11,255,192,0,11,254,0,0,31,240,0,0,191,208,0,0,63,208,0,0,11,208,0,0,11,208,0,0,11,208,0,0,11,229,85,64,11,255,255,192,11,255,255,192,
  // 0x0142  ł
  7,20,40,7,0,0,11,128,15,192,15,192,15,192,15,192,15,192,15,192,15,192,15,248,15,252,15,240,191,192,255,192,95,192,15,192,15,192,15,192,15,192,15,192,15,192,
  // 0x0143  Ń
  16,25,100,20,2,0,0,0,63,0,0,0,189,0,0,1,244,0,0,3,208,0,0,1,0,0,0,0,0,0,106,0,0,41,191,128,0,62,191,192,0,62,191,240,0,62,191,244,0,62,188,252,0,62,188,190,0,62,188,63,64,62,188,31,192,62,188,11,224,62,188,3,240,62,188,1,252,62,188,0,253,62,188,0,63,62,188,0,47,190,188,0,15,254,188,0,7,254,188,0,2,254,188,0,0,254,
  // 0x0144  ń
  13,20,80,16,2,0,0,3,244,0,0,11,208,0,0,31,64,0,0,61,0,0,0,16,0,0,0,1,0,0,244,191,244,0,251,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,
  // 0x0145  Ņ
  16,25,100,20,2,250,106,0,0,41,191,128,0,62,191,192,0,62,191,240,0,62,191,244,0,62,188,252,0,62,188,190,0,62,188,63,64,62,188,31,192,62,188,11,224,62,188,3,240,62,188,1,252,62,188,0,253,62,188,0,63,62,188,0,47,190,188,0,15,254,188,0,7,254,188,0,2,254,188,0,0,254,0,0,0,0,0,1,80,0,0,3,224,0,0,3,192,0,0,7,128,0,0,10,0,0,
  // 0x0146  ņ
  13,21,84,16,2,250,0,1,0,0,244,191,244,0,251,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,0,0,0,0,0,21,0,0,0,62,0,0,0,61,0,0,0,120,0,0,0,96,0,0,
  // 0x0147  Ň
  16,25,100,20,2,0,1,224,11,128,0,188,62,0,0,47,252,0,0,15,240,0,0,1,64,0,0,0,0,0,106,0,0,41,191,128,0,62,191,192,0,62,191,240,0,62,191,244,0,62,188,252,0,62,188,190,0,62,188,63,64,62,188,31,192,62,188,11,224,62,188,3,240,62,188,1,252,62,188,0,253,62,188,0,63,62,188,0,47,190,188,0,15,254,188,0,7,254,188,0,2,254,188,0,0,254,
  // 0x0148  ň
  13,20,80,16,2,0,31,0,184,0,11,195,240,0,2,255,192,0,0,255,0,0,0,20,0,0,0,1,0,0,244,191,244,0,251,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,
  // 0x0149  ŉ
  17,19,95,19,0,0,26,0,0,0,0,63,0,0,0,0,62,0,0,0,0,61,0,0,0,0,124,0,1,0,0,184,184,127,248,0,176,190,255,254,0,0,191,128,127,0,0,191,0,47,64,0,189,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,0,188,0,31,64,
  // 0x014a  Ŋ
  16,25,100,20,2,250,106,0,0,41,191,128,0,62,191,192,0,62,191,240,0,62,190,248,0,62,188,253,0,62,188,127,0,62,188,47,128,62,188,15,208,62,188,7,240,62,188,2,248,62,188,0,253,62,188,0,127,62,188,0,47,190,188,0,15,254,188,0,3,254,188,0,2,254,188,0,0,254,188,0,0,62,0,0,0,62,0,0,0,62,0,0,85,252,0,0,191,248,0,0,191,208,0,0,0,0,
  // 0x014b  ŋ
  13,22,88,16,2,249,0,1,0,0,244,191,244,0,251,255,253,0,255,128,191,0,254,0,63,0,252,0,47,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,252,0,31,64,0,0,31,64,0,0,31,64,0,0,47,0,0,0,63,0,0,11,254,0,0,11,248,0,0,0,0,0,
  // 0x014c  Ō
  18,24,120,20,1,255,0,47,255,192,0,0,63,255,192,0,0,5,85,64,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x014d  ō
  14,19,76,16,1,255,3,255,252,0,3,255,252,0,1,85,80,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x014e  Ŏ
  18,26,130,20,1,255,0,20,0,64,0,0,60,2,208,0,0,31,255,192,0,0,11,254,0,0,0,0,0,0,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x014f  ŏ
  14,21,84,16,1,255,1,0,4,0,3,128,60,0,3,255,244,0,0,191,224,0,0,0,0,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x0150  Ő
  18,26,130,20,1,255,0,11,211,240,0,0,15,135,208,0,0,62,15,64,0,0,120,45,0,0,0,0,16,0,0,0,0,0,0,0,0,10,254,64,0,0,191,255,244,0,3,255,171,253,0,15,240,0,127,0,31,192,0,31,128,63,64,0,15,192,63,0,0,11,208,126,0,0,7,224,126,0,0,3,224,126,0,0,3,240,126,0,0,3,240,126,0,0,3,224,63,0,0,7,224,63,0,0,11,208,47,128,0,15,192,15,208,0,63,64,7,249,2,254,0,1,255,255,248,0,0,47,255,208,0,0,0,0,0,0,
  // 0x0151  ő
  14,21,84,16,1,255,0,252,62,0,2,244,252,0,3,209,240,0,11,67,192,0,4,1,0,0,0,0,0,0,1,255,244,0,11,255,253,0,47,208,127,64,63,0,15,192,126,0,11,192,189,0,7,208,188,0,7,208,188,0,7,208,125,0,7,208,126,0,11,192,63,0,15,192,31,208,127,64,11,255,254,0,1,255,244,0,0,0,0,0,
  // 0x0152  Œ
  22,20,120,24,1,255,0,10,250,170,170,160,0,255,255,255,255,240,3,255,171,255,255,240,15,240,0,248,0,0,31,192,0,248,0,0,63,64,0,248,0,0,63,0,0,248,0,0,126,0,0,248,0,0,126,0,0,255,255,208,125,0,0,255,255,208,126,0,0,254,170,128,126,0,0,248,0,0,63,0,0,248,0,0,63,0,0,248,0,0,47,128,0,248,0,0,15,208,0,248,0,0,7,249,6,249,85,80,1,255,255,255,255,240,0,47,255,255,255,240,0,0,0,0,0,0,
  // 0x0153  œ
  23,15,90,25,1,255,1,255,224,31,254,0,11,255,252,127,255,192,47,192,127,248,7,224,63,0,31,240,2,240,125,0,15,224,1,244,189,0,11,229,86,248,188,0,11,255,255,248,188,0,11,234,170,164,189,0,11,208,0,0,126,0,15,224,0,0,63,0,31,240,0,0,31,192,127,253,0,96,11,255,252,127,255,240,1,255,224,11,255,208,0,0,0,0,16,0,
  // 0x0154  Ŕ
  14,25,100,16,2,0,0,3,244,0,0,7,224,0,0,15,128,0,0,62,0,0,0,16,0,0,0,0,0,0,106,169,64,0,191,255,244,0,191,255,254,0,189,0,127,0,189,0,47,64,189,0,31,128,189,0,31,128,189,0,47,64,189,0,191,0,191,255,252,0,191,255,208,0,190,91,208,0,189,3,240,0,189,1,248,0,189,0,189,0,189,0,63,0,189,0,47,128,189,0,15,208,189,0,7,240,
  // 0x0155  ŕ
  9,20,60,11,2,0,0,47,64,0,126,0,0,248,0,3,224,0,1,0,0,0,1,0,244,127,128,249,255,64,255,229,0,255,0,0,253,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,
  // 0x0156  Ŗ
  14,25,100,16,2,250,106,169,64,0,191,255,244,0,191,255,254,0,189,0,127,0,189,0,47,64,189,0,31,128,189,0,31,128,189,0,47,64,189,0,191,0,191,255,252,0,191,255,208,0,190,91,208,0,189,3,240,0,189,1,248,0,189,0,189,0,189,0,63,0,189,0,47,128,189,0,15,208,189,0,7,240,0,0,0,0,0,5,0,0,0,15,64,0,0,31,0,0,0,45,0,0,0,40,0,0,
  // 0x0157  ŗ
  9,21,63,11,2,250,0,1,0,244,127,128,249,255,64,255,229,0,255,0,0,253,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,0,0,0,20,0,0,124,0,0,184,0,0,240,0,0,208,0,0,
  // 0x0158  Ř
  14,25,100,16,2,0,31,0,124,0,7,210,240,0,2,255,192,0,0,191,64,0,0,20,0,0,0,0,0,0,106,169,64,0,191,255,244,0,191,255,254,0,189,0,127,0,189,0,47,64,189,0,31,128,189,0,31,128,189,0,47,64,189,0,191,0,191,255,252,0,191,255,208,0,190,91,208,0,189,3,240,0,189,1,248,0,189,0,189,0,189,0,63,0,189,0,47,128,189,0,15,208,189,0,7,240,
  // 0x0159  ř
  9,20,60,11,2,0,240,7,192,125,47,0,31,252,0,11,244,0,1,64,0,0,1,0,244,127,128,249,255,64,255,229,0,255,0,0,253,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,252,0,0,
  // 0x015a  Ś
  12,26,78,14,1,255,0,2,244,0,7,224,0,15,128,0,62,0,0,16,0,0,0,0,1,191,144,11,255,254,47,234,253,63,0,4,125,0,0,125,0,0,127,0,0,63,192,0,15,249,0,3,255,208,0,111,248,0,2,253,0,0,127,0,0,63,0,0,47,0,0,63,185,1,253,191,255,248,111,255,208,0,0,0,
  // 0x015b  ś
  11,21,63,13,1,255,0,15,208,0,31,128,0,62,0,0,248,0,0,64,0,0,16,0,11,255,224,63,255,240,189,0,144,188,0,0,190,0,0,63,224,0,15,254,0,1,255,208,0,11,240,0,2,244,0,1,244,160,3,240,191,255,224,127,255,64,0,64,0,
  // 0x015c  Ŝ
  12,26,78,14,1,255,0,127,0,0,255,192,3,227,224,15,128,184,4,0,4,0,0,0,1,191,144,11,255,254,47,234,253,63,0,4,125,0,0,125,0,0,127,0,0,63,192,0,15,249,0,3,255,208,0,111,248,0,2,253,0,0,127,0,0,63,0,0,47,0,0,63,185,1,253,191,255,248,111,255,208,0,0,0,
  // 0x015d  ŝ
  11,21,63,13,1,255,1,252,0,7,255,0,15,143,128,61,3,224,16,0,16,0,16,0,11,255,224,63,255,240,189,0,144,188,0,0,190,0,0,63,224,0,15,254,0,1,255,208,0,11,240,0,2,244,0,1,244,160,3,240,191,255,224,127,255,64,0,64,0,
  // 0x015e  Ş
  12,26,78,14,1,249,1,191,144,11,255,254,47,234,253,63,0,4,125,0,0,125,0,0,127,0,0,63,192,0,15,249,0,3,255,208,0,111,248,0,2,253,0,0,127,0,0,63,0,0,47,0,0,63,185,1,253,191,255,248,111,255,208,0,124,0,0,184,0,0,111,0,0,15,64,1,111,0,3,253,0,0,0,0,
  // 0x015f  ş
  11,22,66,13,1,249,0,16,0,11,255,224,63,255,240,189,0,144,188,0,0,190,0,0,63,224,0,15,254,0,1,255,208,0,11,240,0,2,244,0,1,244,160,3,240,191,255,224,127,255,64,0,240,0,0,248,0,0,126,0,0,31,0,1,126,0,7,252,0,0,0,0,
  // 0x0160  Š
  12,26,78,14,1,255,15,0,124,7,210,240,1,255,192,0,191,64,0,20,0,0,0,0,1,191,144,11,255,254,47,234,253,63,0,4,125,0,0,125,0,0,127,0,0,63,192,0,15,249,0,3,255,208,0,111,248,0,2,253,0,0,127,0,0,63,0,0,47,0,0,63,185,1,253,191,255,248,111,255,208,0,0,0,
  // 0x0161  š
  11,21,63,13,1,255,60,1,240,31,75,192,11,255,0,2,253,0,0,80,0,0,16,0,11,255,224,63,255,240,189,0,144,188,0,0,190,0,0,63,224,0,15,254,0,1,255,208,0,11,240,0,2,244,0,1,244,160,3,240,191,255,224,127,255,64,0,64,0,
  // 0x0162  Ţ
  15,26,104,15,0,249,106,170,170,160,191,255,255,244,191,255,255,240,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,11,0,0,0,15,128,0,0,7,240,0,0,0,240,0,0,22,240,0,0,127,192,0,0,0,0,0,
  // 0x0163  ţ
  10,24,72,10,0,249,2,192,0,3,192,0,7,192,0,47,255,192,191,255,192,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,192,0,11,208,0,7,240,0,3,255,208,0,255,208,0,60,0,0,189,0,0,47,0,0,15,64,1,111,64,3,254,0,0,0,0,
  // 0x0164  Ť
  15,25,100,15,0,0,3,192,31,0,1,244,188,0,0,127,240,0,0,47,208,0,0,5,0,0,0,0,0,0,106,170,170,160,191,255,255,244,191,255,255,240,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,
  // 0x0165  ť
  13,21,84,10,0,255,0,0,11,128,0,0,15,128,0,0,15,0,2,192,30,0,3,192,4,0,7,192,0,0,47,255,192,0,191,255,192,0,11,192,0,0,11,192,0,0,11,192,0,0,11,192,0,0,11,192,0,0,11,192,0,0,11,192,0,0,11,192,0,0,11,208,0,0,7,240,0,0,3,255,208,0,0,255,208,0,0,0,0,0,
  // 0x0166  Ŧ
  15,19,76,15,0,0,106,170,170,160,191,255,255,244,191,255,255,240,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,6,175,234,0,15,255,255,64,11,255,255,64,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,0,15,128,0,
  // 0x0167  ŧ
  10,18,54,10,0,255,2,192,0,3,192,0,7,192,0,47,255,192,191,255,192,11,192,0,11,192,0,11,192,0,127,255,192,127,255,192,11,192,0,11,192,0,11,192,0,11,208,0,7,240,0,3,255,208,0,255,208,0,0,0,
  // 0x0168  Ũ
  15,26,104,19,2,255,0,0,1,0,0,254,7,64,3,255,255,0,3,130,253,0,1,0,0,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x0169  ũ
  12,21,63,16,2,255,0,0,4,7,244,44,15,255,248,44,15,240,0,0,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x016a  Ū
  15,24,96,19,2,255,1,255,254,0,1,255,254,0,0,85,84,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x016b  ū
  12,19,57,16,2,255,11,255,240,15,255,240,1,85,80,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x016c  Ŭ
  15,26,104,19,2,255,1,64,5,0,2,208,30,0,0,255,252,0,0,127,244,0,0,0,0,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x016d  ŭ
  12,21,63,16,2,255,5,0,16,15,0,180,7,255,224,2,255,128,0,0,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x016e  Ů
  15,28,112,19,2,255,0,1,0,0,0,47,224,0,0,56,116,0,0,112,52,0,0,56,180,0,0,31,224,0,0,0,0,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x016f  ů
  12,23,69,16,2,255,0,20,0,0,255,64,2,195,192,2,193,192,2,215,192,0,255,64,0,0,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x0170  Ű
  15,26,104,19,2,255,0,126,47,64,0,252,62,0,1,240,184,0,3,193,224,0,1,0,0,0,0,0,0,0,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,253,0,0,0,0,0,
  // 0x0171  ű
  12,21,63,16,2,255,2,240,252,3,226,244,15,131,208,30,15,64,0,4,0,0,0,0,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,47,252,0,63,252,0,127,191,1,255,63,255,239,15,255,15,0,0,0,
  // 0x0172  Ų
  15,25,100,19,2,250,104,0,0,164,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,188,0,0,252,126,0,1,248,63,0,3,240,47,208,31,224,11,255,255,128,1,255,255,0,0,0,60,0,0,0,120,0,0,0,244,0,0,0,244,0,0,0,191,128,0,0,47,64,
  // 0x0173  ų
  13,20,80,16,2,250,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,47,0,252,0,63,0,252,0,127,0,191,1,255,0,63,255,239,0,15,255,15,0,0,0,60,0,0,0,180,0,0,0,240,0,0,0,240,0,0,0,255,64,0,0,47,0,
  // 0x0174  Ŵ
  24,25,150,24,0,0,0,0,11,240,0,0,0,0,31,248,0,0,0,0,62,126,0,0,0,0,244,15,128,0,0,0,64,0,0,0,0,0,0,0,0,0,104,0,2,144,0,26,189,0,11,240,0,63,126,0,15,240,0,62,63,0,15,244,0,125,47,0,31,188,0,188,31,64,47,124,0,252,15,128,62,61,0,248,15,192,61,62,1,244,11,192,188,47,2,240,7,208,248,31,3,240,3,224,244,15,67,224,3,241,240,15,199,208,2,242,240,11,203,192,1,247,224,3,223,192,0,251,208,3,239,128,0,255,192,2,255,64,0,191,192,1,255,0,0,127,64,0,254,0,0,63,0,0,253,0,
  // 0x0175  ŵ
  21,20,120,21,0,0,0,0,127,64,0,0,0,0,255,192,0,0,0,3,243,240,0,0,0,15,128,188,0,0,0,4,0,4,0,0,0,0,0,0,0,0,188,0,63,0,15,128,125,0,127,64,47,64,62,0,255,192,63,0,47,0,247,192,62,0,31,65,243,208,125,0,15,130,227,224,188,0,15,195,210,240,252,0,11,195,192,240,248,0,7,203,192,245,244,0,3,219,128,186,240,0,3,239,64,126,224,0,2,255,0,63,208,0,1,254,0,63,192,0,0,253,0,31,192,0,
  // 0x0176  Ŷ
  15,25,100,15,0,0,0,15,208,0,0,63,240,0,0,252,252,0,2,224,47,0,1,0,1,0,0,0,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x0177  ŷ
  14,27,108,14,0,249,0,63,128,0,0,191,208,0,2,246,240,0,7,192,124,0,1,0,4,0,0,0,0,0,252,0,7,224,126,0,15,192,63,0,15,192,47,64,31,64,15,128,63,0,15,192,62,0,7,208,188,0,3,224,252,0,2,240,244,0,0,246,240,0,0,251,224,0,0,127,208,0,0,63,192,0,0,47,128,0,0,47,0,0,0,63,0,0,0,125,0,0,1,252,0,0,191,240,0,0,191,192,0,0,0,0,0,0,
  // 0x0178  Ÿ
  15,24,96,15,0,0,0,244,60,0,0,244,125,0,0,160,40,0,0,0,0,0,0,0,0,0,104,0,0,168,126,0,1,248,63,0,3,240,31,128,7,208,15,192,15,192,7,224,47,64,2,240,63,0,0,248,189,0,0,189,252,0,0,63,240,0,0,47,224,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,0,15,192,0,
  // 0x0179  Ź
  13,25,100,15,1,0,0,2,248,0,0,3,240,0,0,15,192,0,0,46,0,0,0,0,0,0,0,0,0,0,106,170,170,64,255,255,255,192,191,255,255,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,254,85,85,64,255,255,255,192,255,255,255,192,
  // 0x017a  ź
  11,20,60,12,1,0,0,15,208,0,47,64,0,125,0,0,244,0,0,64,0,0,0,0,191,255,240,191,255,240,0,7,240,0,15,192,0,47,64,0,126,0,0,252,0,2,244,0,7,224,0,15,192,0,63,0,0,190,0,0,255,255,244,255,255,244,
  // 0x017b  Ż
  13,25,100,15,1,0,0,4,0,0,0,63,0,0,0,63,0,0,0,30,0,0,0,0,0,0,0,0,0,0,106,170,170,64,255,255,255,192,191,255,255,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,254,85,85,64,255,255,255,192,255,255,255,192,
  // 0x017c  ż
  11,20,60,12,1,0,0,16,0,0,248,0,1,248,0,0,176,0,0,0,0,0,0,0,191,255,240,191,255,240,0,7,240,0,15,192,0,47,64,0,126,0,0,252,0,2,244,0,7,224,0,15,192,0,63,0,0,190,0,0,255,255,244,255,255,244,
  // 0x017d  Ž
  13,25,100,15,1,0,15,64,124,0,3,225,244,0,1,255,208,0,0,127,128,0,0,5,0,0,0,0,0,0,106,170,170,64,255,255,255,192,191,255,255,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,189,0,0,1,248,0,0,3,240,0,0,11,208,0,0,31,128,0,0,63,0,0,0,254,85,85,64,255,255,255,192,255,255,255,192,
  // 0x017e  ž
  11,20,60,12,1,0,124,2,224,47,15,192,11,255,0,3,252,0,0,80,0,0,0,0,191,255,240,191,255,240,0,7,240,0,15,192,0,47,64,0,126,0,0,252,0,2,244,0,7,224,0,15,192,0,63,0,0,190,0,0,255,255,244,255,255,244,
  // 0x017f  ſ
  8,20,40,9,2,0,6,249,63,253,127,88,188,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,252,0,
};

#endif // HAS_GRAPHICAL_TFT
