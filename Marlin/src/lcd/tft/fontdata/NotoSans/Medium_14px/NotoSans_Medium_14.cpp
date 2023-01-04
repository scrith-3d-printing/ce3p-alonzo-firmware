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

// NotoSans Medium 19pt, capital 'A' heigth: 14px, width: 100%, range: 0x0020-0x00ff
extern const uint8_t NotoSans_Medium_14[8358] = {
  130,14,32,0,255,0,18,251, // unifont_t
  // 0x0020 " "
  0,0,0,5,0,0,
  // 0x0021  !
  3,15,15,5,1,255,100,184,120,120,120,120,116,52,52,52,0,16,188,184,0,
  // 0x0022  "
  6,6,12,8,1,8,96,144,176,240,176,224,176,224,112,224,16,64,
  // 0x0023  #
  12,14,42,12,0,0,0,32,32,0,176,176,0,240,176,0,224,224,42,250,249,47,255,254,2,194,192,2,194,192,23,215,212,191,255,252,7,71,64,7,7,0,11,11,0,14,14,0,
  // 0x0024  $
  9,17,51,11,1,254,0,64,0,0,192,0,11,249,0,127,255,64,244,193,0,240,192,0,185,192,0,63,224,0,7,254,0,0,239,128,0,195,192,0,199,192,250,255,64,191,248,0,1,192,0,0,192,0,0,0,0,
  // 0x0025  %
  15,15,60,16,1,255,26,0,9,0,127,192,44,0,241,208,56,0,224,224,176,0,208,225,208,0,224,227,193,0,241,215,111,208,127,207,56,240,26,28,116,112,0,56,112,116,0,176,112,116,0,224,116,112,2,192,61,240,3,64,31,208,0,0,0,0,
  // 0x0026  &
  13,15,60,14,1,255,2,164,0,0,15,254,0,0,45,15,0,0,60,11,0,0,45,15,0,0,15,188,0,0,11,240,0,0,47,244,15,0,188,125,30,0,240,31,125,0,240,7,252,0,244,2,244,0,127,175,253,0,31,253,15,64,0,0,0,0,
  // 0x0027  '
  2,6,6,5,1,8,96,176,176,176,112,16,
  // 0x0028  (
  4,17,17,6,1,253,6,14,60,56,180,240,240,240,224,224,240,240,176,120,60,29,15,
  // 0x0029  )
  4,17,17,6,1,253,144,240,56,60,30,15,15,15,15,15,15,15,30,45,60,116,224,
  // 0x002a  *
  9,10,30,10,1,5,1,64,0,2,192,0,2,192,0,146,198,64,255,255,128,7,224,0,15,176,0,45,60,0,44,44,0,0,0,0,
  // 0x002b  +
  9,10,30,11,1,2,0,64,0,1,192,0,1,192,0,1,192,0,86,229,64,255,255,192,1,208,0,1,192,0,1,192,0,1,192,0,
  // 0x002c  ,
  3,5,5,5,1,253,120,180,240,224,64,
  // 0x002d  -
  6,2,4,6,0,4,127,208,63,208,
  // 0x002e  .
  3,4,4,5,1,255,16,188,184,0,
  // 0x002f  /
  7,14,28,7,0,0,0,24,0,56,0,180,0,240,1,224,2,208,3,192,7,128,15,0,15,0,45,0,60,0,120,0,180,0,
  // 0x0030  0
  9,15,45,11,1,255,6,160,0,47,253,0,124,15,0,180,11,64,240,3,192,240,3,192,240,3,192,240,3,192,240,3,192,240,3,192,240,7,128,120,15,64,62,191,0,11,248,0,0,0,0,
  // 0x0031  1
  5,14,28,11,2,0,2,128,15,192,127,192,243,192,67,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,
  // 0x0032  2
  9,14,42,11,1,0,6,164,0,127,254,0,180,31,0,0,11,64,0,11,64,0,15,0,0,30,0,0,124,0,1,240,0,7,192,0,31,0,0,60,0,0,255,255,192,255,255,192,
  // 0x0033  3
  9,15,45,11,1,255,26,164,0,191,254,0,160,31,64,0,11,64,0,11,64,0,31,0,15,248,0,15,253,0,0,15,64,0,7,192,0,7,192,0,11,128,250,191,0,191,248,0,0,0,0,
  // 0x0034  4
  11,14,42,11,0,0,0,6,64,0,15,128,0,63,128,0,187,128,0,231,128,3,199,128,11,7,128,30,7,128,60,7,128,190,175,228,191,255,248,0,7,128,0,7,128,0,7,128,
  // 0x0035  5
  9,15,45,11,1,255,42,170,0,63,255,0,56,0,0,120,0,0,116,0,0,121,80,0,191,253,0,21,111,64,0,11,128,0,7,192,0,7,192,0,15,64,250,191,0,191,248,0,0,0,0,
  // 0x0036  6
  9,15,45,11,1,255,0,170,0,11,255,0,47,0,0,60,0,0,180,0,0,241,164,0,251,255,0,252,11,128,240,3,192,240,3,192,240,3,192,120,7,128,63,175,0,11,253,0,0,0,0,
  // 0x0037  7
  10,14,42,11,0,0,42,170,160,127,255,240,0,1,240,0,2,208,0,3,192,0,11,64,0,15,0,0,46,0,0,60,0,0,120,0,0,240,0,1,240,0,3,208,0,7,192,0,
  // 0x0038  8
  9,15,45,11,1,255,6,164,0,63,255,0,184,15,64,180,7,128,180,11,64,62,46,0,15,248,0,31,253,0,124,31,64,240,7,192,240,3,192,240,7,192,190,111,64,31,253,0,0,0,0,
  // 0x0039  9
  9,15,45,11,1,255,6,160,0,63,253,0,184,31,0,240,7,128,240,3,192,240,3,192,244,11,192,126,191,192,31,227,192,0,7,128,0,11,64,0,31,0,38,252,0,63,224,0,0,0,0,
  // 0x003a  :
  3,12,12,5,1,255,16,188,184,0,0,0,0,0,16,188,184,0,
  // 0x003b  ;
  3,14,14,5,1,253,16,188,184,0,0,0,0,0,0,184,240,240,208,64,
  // 0x003c  <
  9,10,30,11,1,2,0,0,64,0,7,192,0,126,64,7,224,0,126,0,0,248,0,0,47,128,0,2,253,0,0,31,192,0,1,128,
  // 0x003d  =
  9,6,18,11,1,4,85,85,64,255,255,192,0,0,0,0,0,0,170,170,128,255,255,192,
  // 0x003e  >
  9,10,30,11,1,2,64,0,0,244,0,0,127,64,0,6,244,0,0,47,64,0,11,192,1,190,0,31,208,0,253,0,0,128,0,0,
  // 0x003f  ?
  8,15,30,9,0,255,26,160,191,253,32,31,0,15,0,15,0,61,0,248,3,208,7,128,7,64,0,0,1,0,11,192,11,128,0,0,
  // 0x0040  @
  15,16,64,17,1,254,0,6,144,0,0,255,255,0,7,208,7,208,30,0,0,240,60,11,248,52,112,125,124,60,176,240,60,44,224,224,60,44,224,208,60,44,224,224,60,56,176,185,237,176,112,47,139,192,60,0,0,0,31,64,4,0,3,255,253,0,0,26,144,0,
  // 0x0041  A
  12,14,42,12,0,0,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x0042  B
  10,14,42,12,2,0,170,144,0,255,255,0,240,31,192,240,3,192,240,3,192,240,11,128,255,253,0,255,255,64,240,7,192,240,3,208,240,3,208,240,7,192,250,191,128,255,253,0,
  // 0x0043  C
  10,15,45,12,1,255,0,106,128,7,255,240,31,128,96,61,0,0,124,0,0,180,0,0,244,0,0,244,0,0,244,0,0,184,0,0,124,0,0,63,0,0,15,234,240,2,255,224,0,0,0,
  // 0x0044  D
  11,14,42,14,2,0,170,144,0,255,255,0,240,31,192,240,2,240,240,0,244,240,0,184,240,0,120,240,0,120,240,0,120,240,0,244,240,1,240,240,7,224,250,255,128,255,248,0,
  // 0x0045  E
  8,14,28,11,2,0,170,168,255,253,240,0,240,0,240,0,240,0,255,252,255,252,240,0,240,0,240,0,240,0,255,253,255,253,
  // 0x0046  F
  8,14,28,10,2,0,170,168,255,253,240,0,240,0,240,0,240,0,245,84,255,252,245,84,240,0,240,0,240,0,240,0,240,0,
  // 0x0047  G
  12,15,45,14,1,255,0,106,144,7,255,252,31,144,20,62,0,0,124,0,0,180,0,0,244,1,84,244,11,253,244,1,125,184,0,45,124,0,45,63,0,45,15,234,189,2,255,248,0,0,0,
  // 0x0048  H
  11,14,42,14,2,0,144,0,96,240,0,180,240,0,180,240,0,180,240,0,180,240,0,180,255,255,244,255,255,244,240,0,180,240,0,180,240,0,180,240,0,180,240,0,180,240,0,180,
  // 0x0049  I
  6,14,28,7,0,0,42,160,63,240,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,31,144,127,240,
  // 0x004a  J
  6,18,36,6,254,252,0,144,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,240,1,224,3,208,127,192,105,0,
  // 0x004b  K
  10,14,42,12,2,0,144,1,144,240,7,192,240,31,0,240,60,0,240,244,0,243,208,0,251,192,0,255,208,0,245,240,0,240,188,0,240,62,0,240,15,64,240,7,192,240,2,224,
  // 0x004c  L
  8,14,28,10,2,0,144,0,240,0,240,0,240,0,240,0,240,0,240,0,240,0,240,0,240,0,240,0,240,0,255,254,255,254,
  // 0x004d  M
  14,14,56,17,2,0,164,0,2,144,252,0,11,224,253,0,15,224,239,0,30,224,235,0,61,224,231,128,57,224,227,192,177,224,226,208,241,224,224,225,209,224,224,242,193,224,224,183,193,224,224,63,65,224,224,63,1,224,224,30,1,224,
  // 0x004e  N
  11,14,42,15,2,0,164,0,40,252,0,60,254,0,60,239,0,60,231,192,60,227,208,60,224,240,60,224,184,60,224,61,60,224,31,60,224,11,188,224,3,252,224,1,252,224,0,252,
  // 0x004f  O
  13,15,60,15,1,255,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x0050  P
  9,14,42,12,2,0,170,144,0,255,253,0,240,111,0,240,11,128,240,7,128,240,11,128,240,31,0,255,253,0,255,160,0,240,0,0,240,0,0,240,0,0,240,0,0,240,0,0,
  // 0x0051  Q
  13,18,72,15,1,252,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,64,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,3,224,0,0,0,248,0,0,0,62,0,0,0,0,0,
  // 0x0052  R
  10,14,42,12,2,0,170,144,0,255,254,0,240,111,64,240,11,128,240,7,128,240,11,128,240,111,0,255,248,0,250,244,0,240,60,0,240,46,0,240,15,64,240,7,192,240,3,224,
  // 0x0053  S
  9,15,45,10,1,255,6,168,0,63,255,0,188,6,0,240,0,0,244,0,0,189,0,0,47,208,0,7,252,0,0,127,0,0,15,64,0,7,128,0,15,64,250,191,0,191,248,0,0,0,0,
  // 0x0054  T
  11,14,42,11,0,0,106,170,160,255,255,244,0,244,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,0,180,0,
  // 0x0055  U
  12,15,45,14,1,255,36,0,24,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,61,60,0,60,62,0,188,15,235,240,2,255,128,0,0,0,
  // 0x0056  V
  12,14,42,12,0,0,160,0,25,180,0,61,124,0,60,60,0,120,45,0,240,15,0,240,15,2,224,11,131,192,3,195,192,3,203,64,1,223,0,0,255,0,0,253,0,0,124,0,
  // 0x0057  W
  18,14,70,18,0,0,96,0,160,1,144,184,1,240,2,208,124,2,248,3,192,60,3,252,3,192,61,7,172,7,128,46,11,93,11,64,31,15,14,15,0,15,14,15,15,0,11,93,11,30,0,7,108,7,173,0,3,188,3,188,0,3,248,3,252,0,2,244,1,248,0,1,240,0,244,0,
  // 0x0058  X
  11,14,42,12,0,0,100,0,40,61,0,184,31,1,240,11,131,192,3,199,128,1,255,0,0,189,0,0,253,0,1,239,0,3,203,128,11,67,208,31,1,240,60,0,184,184,0,60,
  // 0x0059  Y
  11,14,42,11,0,0,96,0,40,124,0,180,61,0,240,31,2,208,15,71,192,7,207,64,2,239,0,0,252,0,0,184,0,0,120,0,0,120,0,0,120,0,0,120,0,0,120,0,
  // 0x005a  Z
  10,14,42,11,0,0,42,170,160,63,255,240,0,2,224,0,7,192,0,15,64,0,46,0,0,124,0,0,244,0,2,224,0,7,192,0,15,64,0,46,0,0,127,255,240,127,255,240,
  // 0x005b  [
  5,17,34,6,1,253,106,64,191,192,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,180,0,186,64,191,192,
  // 0x005c "\"
  7,14,28,7,0,0,96,0,116,0,60,0,44,0,30,0,15,0,11,64,3,128,3,192,1,208,0,240,0,176,0,120,0,60,
  // 0x005d  ]
  5,17,34,6,0,253,106,64,191,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,3,192,107,192,191,192,
  // 0x005e  ^
  9,9,27,11,1,5,1,128,0,3,208,0,7,240,0,15,52,0,29,44,0,44,13,0,52,11,0,176,3,64,224,2,192,
  // 0x005f  _
  9,2,6,8,0,253,85,85,0,255,255,64,
  // 0x0060  `
  4,4,4,6,1,11,160,120,29,5,
  // 0x0061  a
  9,12,36,11,1,255,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x0062  b
  10,16,48,12,1,255,20,0,0,120,0,0,120,0,0,120,0,0,120,20,0,123,255,64,127,91,192,124,3,208,120,1,224,120,1,240,120,1,240,124,1,224,124,3,208,127,175,192,114,254,0,0,0,0,
  // 0x0063  c
  8,12,24,9,1,255,1,80,31,254,62,88,184,0,240,0,240,0,240,0,244,0,184,0,63,173,11,253,0,0,
  // 0x0064  d
  9,16,48,12,1,255,0,1,64,0,3,192,0,3,192,0,3,192,1,67,192,31,251,192,62,95,192,184,3,192,240,3,192,240,3,192,240,3,192,244,3,192,184,7,192,63,175,192,15,246,192,0,0,0,
  // 0x0065  e
  9,12,36,11,1,255,1,80,0,15,253,0,61,31,64,180,7,128,244,7,192,255,255,192,245,85,64,244,0,0,120,0,0,63,155,64,11,255,64,0,0,0,
  // 0x0066  f
  8,15,30,7,0,0,0,100,3,253,11,128,15,0,15,64,191,248,31,80,15,0,15,0,15,0,15,0,15,0,15,0,15,0,15,0,
  // 0x0067  g
  9,16,48,12,1,251,1,64,0,31,250,192,62,95,192,184,3,192,240,3,192,240,2,192,240,2,192,244,3,192,184,3,192,62,111,192,15,247,192,0,3,192,0,3,192,36,15,128,127,255,0,5,148,0,
  // 0x0068  h
  10,15,45,12,1,0,20,0,0,120,0,0,120,0,0,120,0,0,120,20,0,122,255,64,127,91,192,124,3,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,
  // 0x0069  i
  3,14,14,5,1,0,120,120,0,0,120,120,120,120,120,120,120,120,120,120,
  // 0x006a  j
  5,19,38,5,255,251,7,128,7,128,0,0,0,0,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,15,64,255,0,100,0,
  // 0x006b  k
  9,15,45,11,1,0,20,0,0,120,0,0,120,0,0,120,0,0,120,0,0,120,11,128,120,46,0,120,184,0,122,224,0,127,208,0,126,240,0,120,124,0,120,46,0,120,15,64,120,7,192,
  // 0x006c  l
  3,15,15,5,1,0,20,120,120,120,120,120,120,120,120,120,120,120,120,120,120,
  // 0x006d  m
  16,11,44,18,1,0,0,84,1,64,119,255,47,248,127,95,245,124,124,3,208,45,120,3,192,46,120,3,192,30,120,3,192,30,120,3,192,30,120,3,192,30,120,3,192,30,120,3,192,30,
  // 0x006e  n
  10,11,33,12,1,0,0,20,0,119,255,64,127,91,192,124,3,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,
  // 0x006f  o
  10,12,36,12,1,255,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x0070  p
  10,16,48,12,1,251,0,84,0,119,255,64,127,91,192,124,3,208,120,1,224,120,1,240,120,1,240,124,2,224,124,3,208,127,175,192,122,254,0,120,0,0,120,0,0,120,0,0,120,0,0,36,0,0,
  // 0x0071  q
  9,16,48,12,1,251,1,64,0,31,250,192,62,95,192,184,3,192,240,3,192,240,3,192,240,3,192,244,3,192,184,7,192,62,111,192,15,247,192,0,3,192,0,3,192,0,3,192,0,3,192,0,1,128,
  // 0x0072  r
  7,11,22,8,1,0,0,20,118,248,127,148,125,0,124,0,120,0,120,0,120,0,120,0,120,0,120,0,
  // 0x0073  s
  8,12,24,9,1,255,5,64,127,252,244,88,240,0,253,0,47,208,2,252,0,61,0,45,229,188,191,240,0,0,
  // 0x0074  t
  7,14,28,7,0,255,5,0,15,0,15,0,191,248,31,80,15,0,15,0,15,0,15,0,15,0,15,0,15,148,7,248,0,0,
  // 0x0075  u
  10,11,33,12,1,255,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,3,208,124,7,208,63,175,208,31,249,208,0,0,0,
  // 0x0076  v
  10,10,30,10,0,0,180,1,224,120,3,208,60,3,192,45,7,128,15,15,0,15,15,0,7,109,0,3,252,0,2,248,0,1,244,0,
  // 0x0077  w
  15,11,44,15,0,0,16,1,0,20,180,11,192,60,120,15,208,120,60,14,224,180,60,44,240,240,29,60,176,240,14,56,117,224,15,116,58,192,11,176,63,192,7,224,31,128,3,208,15,64,
  // 0x0078  x
  10,10,30,10,0,0,60,3,208,31,11,128,11,143,0,3,253,0,1,248,0,2,252,0,7,238,0,15,15,64,46,3,192,124,2,224,
  // 0x0079  y
  10,15,45,10,0,251,180,1,224,124,3,208,60,3,192,30,7,128,15,15,0,11,79,0,7,157,0,3,252,0,1,248,0,0,244,0,0,240,0,1,224,0,7,192,0,191,64,0,100,0,0,
  // 0x007a  z
  9,10,30,9,0,0,63,255,0,21,111,0,0,61,0,0,184,0,1,240,0,3,192,0,11,64,0,30,0,0,62,170,0,127,255,64,
  // 0x007b  {
  7,17,34,7,0,253,0,20,2,248,3,208,3,128,3,128,3,128,7,128,31,64,189,0,111,0,7,128,3,128,3,128,3,128,3,192,3,244,0,184,
  // 0x007c  |
  2,20,20,10,4,251,16,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,176,96,
  // 0x007d  }
  7,17,34,7,0,253,36,0,127,0,15,64,7,64,7,128,7,128,7,128,3,208,0,252,2,244,7,128,7,128,7,128,7,128,11,64,47,0,120,0,
  // 0x007e  ~
  9,3,9,11,1,5,127,128,128,235,255,192,0,42,0,
  // 0x007f - 0x009f  Control Characters
  255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,255,
  // 0x00a0 " "
  0,0,0,5,0,0,
  // 0x00a1  Â¡
  3,15,15,5,1,252,16,188,188,16,0,52,52,116,116,120,120,120,184,184,84,
  // 0x00a2  Â¢
  8,15,30,11,1,255,0,96,0,176,7,255,31,155,61,0,60,0,120,0,120,0,124,0,60,0,47,150,11,255,0,180,0,176,0,0,
  // 0x00a3  Â£
  11,14,42,11,0,0,0,106,64,2,255,224,7,192,64,7,128,0,11,64,0,11,64,0,47,234,0,127,255,0,11,64,0,11,64,0,11,64,0,15,0,0,127,255,240,127,255,244,
  // 0x00a4  Â¤
  9,9,27,11,1,2,97,66,64,127,255,64,61,30,0,52,7,0,48,7,0,56,11,0,62,127,0,187,251,64,0,1,0,
  // 0x00a5  Â¥
  11,14,42,11,0,0,100,0,100,60,0,240,45,1,224,15,3,192,11,71,64,3,207,0,2,237,0,10,254,128,15,255,192,0,180,0,10,254,128,10,254,128,0,180,0,0,180,0,
  // 0x00a6  Â¦
  2,20,20,10,4,251,16,176,176,176,176,176,176,112,0,0,0,0,112,176,176,176,176,176,176,96,
  // 0x00a7  Â§
  8,16,32,10,1,255,5,144,63,252,180,4,180,0,62,64,63,240,176,124,176,29,184,29,63,188,6,248,0,61,0,29,229,124,191,224,0,0,
  // 0x00a8  Â¨
  5,3,6,11,3,11,225,192,225,192,0,0,
  // 0x00a9  Â©
  14,15,60,16,1,255,0,106,128,0,7,213,188,0,29,0,11,0,52,47,210,192,160,245,64,208,209,208,0,160,194,192,0,112,194,192,0,112,193,192,0,112,160,224,0,160,112,127,208,192,44,5,67,64,11,64,46,0,1,255,224,0,0,0,0,0,
  // 0x00aa  Âª
  6,7,14,7,0,7,26,128,41,240,0,112,47,240,112,112,117,240,46,32,
  // 0x00ab  Â«
  8,8,16,10,1,1,7,7,31,31,60,60,240,240,244,244,60,60,15,15,6,7,
  // 0x00ac  Â¬
  9,6,18,11,1,2,85,85,64,255,255,192,0,2,192,0,2,192,0,2,192,0,1,128,
  // 0x00ad  Â­
  6,2,4,6,0,4,127,208,63,208,
  // 0x00ae  Â®
  14,15,60,16,1,255,0,106,128,0,7,213,188,0,29,0,11,0,52,191,130,192,160,181,224,208,208,176,224,160,192,177,224,112,192,191,128,112,192,179,128,112,160,177,208,160,112,176,176,192,44,80,23,64,11,64,46,0,1,255,224,0,0,0,0,0,
  // 0x00af  Â¯
  10,2,6,10,0,14,255,255,208,170,170,144,
  // 0x00b0  Â°
  6,7,14,8,1,7,26,64,122,224,224,112,208,112,240,176,63,192,0,0,
  // 0x00b1  Â±
  9,12,36,11,1,0,0,128,0,1,192,0,1,192,0,1,192,0,171,234,128,255,255,192,1,192,0,1,192,0,1,192,0,0,128,0,170,170,128,255,255,192,
  // 0x00b2  Â²
  6,9,18,7,0,7,47,208,36,240,0,176,0,224,3,128,14,0,61,80,191,240,0,0,
  // 0x00b3  Â³
  6,9,18,7,0,7,63,208,32,240,0,176,11,192,6,224,0,112,64,176,127,208,0,0,
  // 0x00b4  Â´
  4,4,4,6,1,11,25,61,180,64,
  // 0x00b5  Âµ
  10,15,45,12,1,251,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,124,3,208,127,175,208,123,248,208,120,0,0,120,0,0,120,0,0,120,0,0,36,0,0,
  // 0x00b6  Â¶
  10,18,54,12,1,253,1,85,64,47,255,224,127,248,160,255,248,160,255,248,160,255,248,160,255,248,160,191,248,160,63,248,160,31,248,160,0,40,160,0,40,160,0,40,160,0,40,160,0,40,160,0,40,160,0,40,160,0,16,64,
  // 0x00b7  Â·
  3,4,4,5,1,5,16,188,184,0,
  // 0x00b8  Â¸
  4,5,5,4,0,251,56,61,11,174,100,
  // 0x00b9  Â¹
  4,9,9,7,1,7,31,191,143,15,15,15,15,15,0,
  // 0x00ba  Âº
  7,7,14,7,0,7,6,128,61,176,112,52,112,56,112,52,61,176,11,128,
  // 0x00bb  Â»
  8,8,16,10,1,1,160,160,184,184,61,45,15,15,15,15,61,61,180,180,160,160,
  // 0x00bc  Â¼
  14,14,56,15,1,0,9,0,24,0,126,0,56,0,222,0,176,0,14,0,208,0,14,3,192,0,14,7,64,0,14,14,15,64,14,44,31,64,9,52,55,64,0,240,215,64,1,210,199,64,3,131,255,208,11,1,91,128,14,0,7,64,
  // 0x00bd  Â½
  15,14,56,15,0,0,2,64,9,0,31,64,28,0,119,64,56,0,3,64,176,0,3,64,208,0,3,67,193,0,3,71,111,224,3,78,20,116,2,108,0,116,0,52,0,240,0,176,2,192,1,208,11,0,3,128,46,80,11,0,63,244,
  // 0x00be  Â¾
  15,14,56,15,0,0,26,128,1,128,122,224,3,64,0,176,15,0,1,224,29,0,31,192,56,0,0,176,176,0,0,112,208,240,186,243,195,240,42,71,74,240,0,14,28,240,0,44,52,240,0,56,127,252,0,240,21,244,1,208,0,240,
  // 0x00bf  Â¿
  8,15,30,9,0,252,0,64,1,240,1,240,0,64,0,0,0,240,0,224,3,208,15,64,60,0,120,0,180,0,125,6,47,255,6,164,
  // 0x00c0  Ã
  12,18,54,12,0,0,1,160,0,0,244,0,0,44,0,0,5,0,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c1  Ã
  12,18,54,12,0,0,0,2,128,0,11,128,0,30,0,0,20,0,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c2  Ã‚
  12,18,54,12,0,0,0,40,0,0,191,0,2,211,192,1,0,80,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c3  Ãƒ
  12,17,51,12,0,0,2,244,160,3,175,208,1,1,0,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c4  Ã„
  12,17,51,12,0,0,1,194,192,1,211,192,0,0,0,0,40,0,0,126,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c5  Ã…
  12,17,51,12,0,0,0,40,0,0,171,0,0,195,64,0,191,0,0,127,0,0,191,0,0,247,64,1,227,192,3,195,192,3,193,224,11,64,240,15,234,244,31,255,248,45,0,60,60,0,45,120,0,31,244,0,15,
  // 0x00c6  Ã†
  16,14,56,17,0,0,0,6,170,170,0,15,255,255,0,45,184,0,0,60,120,0,0,180,120,0,0,240,120,0,2,224,127,254,3,192,127,254,7,234,248,0,15,255,248,0,30,0,120,0,61,0,120,0,124,0,127,255,244,0,127,255,
  // 0x00c7  Ã‡
  10,19,57,12,1,251,0,106,128,7,255,240,31,128,96,61,0,0,124,0,0,180,0,0,244,0,0,244,0,0,244,0,0,184,0,0,124,0,0,63,0,0,15,234,240,2,255,224,0,60,0,0,46,0,0,11,0,0,175,0,0,100,0,
  // 0x00c8  Ãˆ
  8,18,36,11,2,0,25,0,15,0,3,128,0,64,170,168,255,253,240,0,240,0,240,0,240,0,255,252,255,252,240,0,240,0,240,0,240,0,255,253,255,253,
  // 0x00c9  Ã‰
  8,18,36,11,2,0,0,100,0,240,3,192,1,0,170,168,255,253,240,0,240,0,240,0,240,0,255,252,255,252,240,0,240,0,240,0,240,0,255,253,255,253,
  // 0x00ca  ÃŠ
  8,18,36,11,2,0,6,128,15,224,60,116,80,4,170,168,255,253,240,0,240,0,240,0,240,0,255,252,255,252,240,0,240,0,240,0,240,0,255,253,255,253,
  // 0x00cb  Ã‹
  8,17,34,11,2,0,56,52,60,116,0,0,170,168,255,253,240,0,240,0,240,0,240,0,255,252,255,252,240,0,240,0,240,0,240,0,255,253,255,253,
  // 0x00cc  ÃŒ
  6,18,36,7,0,0,40,0,46,0,11,64,1,64,42,160,63,240,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,31,144,127,240,
  // 0x00cd  Ã
  6,18,36,7,0,0,0,160,1,224,3,128,5,0,42,160,63,240,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,31,144,127,240,
  // 0x00ce  ÃŽ
  7,18,36,7,0,0,6,64,47,192,120,240,80,20,42,160,63,240,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,31,144,127,240,
  // 0x00cf  Ã
  6,17,34,7,0,0,116,176,116,176,0,0,42,160,63,240,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,11,64,31,144,127,240,
  // 0x00d0  Ã
  13,14,56,14,0,0,10,169,0,0,15,255,240,0,15,1,252,0,15,0,47,0,15,0,15,64,15,0,11,128,111,168,7,128,127,252,7,128,15,0,7,128,15,0,15,64,15,0,31,0,15,0,126,0,15,175,248,0,15,255,128,0,
  // 0x00d1  Ã‘
  11,17,51,15,2,0,7,225,192,14,191,64,4,5,0,164,0,40,252,0,60,254,0,60,239,0,60,231,192,60,227,208,60,224,240,60,224,184,60,224,61,60,224,31,60,224,11,188,224,3,252,224,1,252,224,0,252,
  // 0x00d2  Ã’
  13,19,76,15,1,255,0,160,0,0,0,184,0,0,0,29,0,0,0,5,0,0,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x00d3  Ã“
  13,19,76,15,1,255,0,1,144,0,0,7,192,0,0,15,0,0,0,20,0,0,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x00d4  Ã”
  13,19,76,15,1,255,0,25,0,0,0,127,64,0,1,226,192,0,1,64,80,0,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x00d5  Ã•
  13,18,72,15,1,255,1,248,112,0,3,175,224,0,1,1,64,0,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x00d6  Ã–
  13,18,72,15,1,255,0,209,192,0,0,226,192,0,0,0,0,0,0,174,64,0,11,255,244,0,47,64,125,0,61,0,31,0,120,0,15,64,180,0,11,128,244,0,7,128,244,0,7,128,180,0,7,128,184,0,11,128,124,0,15,0,62,0,62,0,15,234,252,0,2,255,224,0,0,0,0,0,
  // 0x00d7  Ã—
  9,9,27,11,1,2,32,2,0,120,15,64,30,61,0,7,244,0,3,240,0,15,184,0,61,30,0,180,7,64,0,0,0,
  // 0x00d8  Ã˜
  13,15,60,15,1,255,0,174,78,0,11,255,253,0,47,64,189,0,61,0,255,0,120,2,207,64,180,7,139,128,244,15,7,128,244,44,7,192,244,116,7,128,184,240,11,128,127,192,15,0,63,64,62,0,31,234,252,0,62,255,224,0,4,0,0,0,
  // 0x00d9  Ã™
  12,19,57,14,1,255,1,144,0,0,244,0,0,60,0,0,4,0,36,0,24,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,61,60,0,60,62,0,188,15,235,240,2,255,128,0,0,0,
  // 0x00da  Ãš
  12,19,57,14,1,255,0,2,128,0,15,64,0,45,0,0,20,0,36,0,24,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,61,60,0,60,62,0,188,15,235,240,2,255,128,0,0,0,
  // 0x00db  Ã›
  12,19,57,14,1,255,0,40,0,0,255,0,2,215,128,1,0,64,36,0,24,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,61,60,0,60,62,0,188,15,235,240,2,255,128,0,0,0,
  // 0x00dc  Ãœ
  12,18,54,14,1,255,2,195,128,2,195,128,0,0,0,36,0,24,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,45,124,0,61,60,0,60,62,0,188,15,235,240,2,255,128,0,0,0,
  // 0x00dd  Ã
  11,18,54,11,0,0,0,6,64,0,31,0,0,60,0,0,16,0,96,0,40,124,0,180,61,0,240,31,2,208,15,71,192,7,207,64,2,239,0,0,252,0,0,184,0,0,120,0,0,120,0,0,120,0,0,120,0,0,120,0,
  // 0x00de  Ãž
  9,14,42,12,2,0,144,0,0,240,0,0,245,0,0,255,252,0,245,191,0,240,15,128,240,7,128,240,11,128,240,15,64,250,190,0,255,244,0,240,0,0,240,0,0,240,0,0,
  // 0x00df  ÃŸ
  11,16,48,12,1,255,1,84,0,31,255,128,61,7,192,120,2,208,120,3,192,120,15,64,120,60,0,120,60,0,120,63,0,120,15,208,120,1,240,120,0,184,120,0,120,120,229,244,120,191,208,0,0,0,
  // 0x00e0  Ã 
  9,16,48,11,1,255,10,0,0,11,128,0,2,208,0,0,80,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e1  Ã¡
  9,16,48,11,1,255,0,25,0,0,124,0,0,240,0,1,64,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e2  Ã¢
  9,16,48,11,1,255,1,144,0,7,244,0,30,44,0,20,5,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e3  Ã£
  9,15,45,11,1,255,31,135,0,58,254,0,16,20,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e4  Ã¤
  9,15,45,11,1,255,13,28,0,13,44,0,0,0,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e5  Ã¥
  9,17,51,11,1,255,1,144,0,7,116,0,9,40,0,7,180,0,1,64,0,1,80,0,47,253,0,41,31,0,0,11,64,0,11,64,47,255,64,189,11,64,240,11,64,240,15,64,249,191,64,63,227,64,0,0,0,
  // 0x00e6  Ã¦
  15,12,48,17,1,255,1,80,21,0,63,252,255,208,36,47,209,240,0,15,128,120,0,15,64,120,47,255,255,252,189,15,85,80,240,15,64,0,240,31,192,0,249,186,249,180,63,224,191,240,0,0,0,0,
  // 0x00e7  Ã§
  8,16,32,9,1,251,1,80,31,254,62,88,184,0,240,0,240,0,240,0,244,0,184,0,63,173,11,253,1,192,1,240,0,116,6,240,2,64,
  // 0x00e8  Ã¨
  9,16,48,11,1,255,10,0,0,11,128,0,1,208,0,0,80,0,1,80,0,15,253,0,61,31,64,180,7,128,244,7,192,255,255,192,245,85,64,244,0,0,120,0,0,63,155,64,11,255,64,0,0,0,
  // 0x00e9  Ã©
  9,16,48,11,1,255,0,25,0,0,124,0,0,240,0,1,64,0,1,80,0,15,253,0,61,31,64,180,7,128,244,7,192,255,255,192,245,85,64,244,0,0,120,0,0,63,155,64,11,255,64,0,0,0,
  // 0x00ea  Ãª
  9,16,48,11,1,255,1,144,0,7,244,0,30,44,0,20,5,0,1,80,0,15,253,0,61,31,64,180,7,128,244,7,192,255,255,192,245,85,64,244,0,0,120,0,0,63,155,64,11,255,64,0,0,0,
  // 0x00eb  Ã«
  9,15,45,11,1,255,13,28,0,14,44,0,0,0,0,1,80,0,15,253,0,61,31,64,180,7,128,244,7,192,255,255,192,245,85,64,244,0,0,120,0,0,63,155,64,11,255,64,0,0,0,
  // 0x00ec  Ã¬
  4,15,15,5,0,0,160,124,30,5,0,30,30,30,30,30,30,30,30,30,30,
  // 0x00ed  Ã­
  5,15,30,5,1,0,6,64,31,0,60,0,16,0,0,0,120,0,120,0,120,0,120,0,120,0,120,0,120,0,120,0,120,0,120,0,
  // 0x00ee  Ã®
  7,15,30,5,255,0,6,64,31,208,56,180,80,20,0,0,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,7,128,
  // 0x00ef  Ã¯
  6,14,28,5,0,0,225,192,225,208,0,0,0,0,30,0,30,0,30,0,30,0,30,0,30,0,30,0,30,0,30,0,30,0,
  // 0x00f0  Ã°
  10,16,48,12,1,255,1,0,0,7,219,0,1,253,0,7,253,0,10,15,0,0,7,128,11,251,192,63,175,208,184,3,208,240,2,224,240,1,224,240,2,208,184,3,192,62,111,128,11,253,0,0,0,0,
  // 0x00f1  Ã±
  10,14,42,12,1,0,11,211,64,29,255,0,20,4,0,0,20,0,119,255,64,127,91,192,124,3,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,120,2,208,
  // 0x00f2  Ã²
  10,16,48,12,1,255,6,64,0,3,192,0,0,224,0,0,16,0,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x00f3  Ã³
  10,16,48,12,1,255,0,25,0,0,60,0,0,176,0,0,64,0,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x00f4  Ã´
  10,16,48,12,1,255,1,160,0,3,248,0,15,30,0,20,1,0,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x00f5  Ãµ
  10,15,45,12,1,255,15,211,64,45,255,0,16,20,0,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x00f6  Ã¶
  10,15,45,12,1,255,15,13,0,15,13,0,0,0,0,1,80,0,31,254,0,62,95,128,184,3,192,240,2,208,240,2,224,240,2,224,244,2,208,120,3,192,63,175,128,11,253,0,0,0,0,
  // 0x00f7  Ã·
  9,9,27,11,1,2,2,208,0,2,208,0,0,0,0,85,85,64,255,255,192,0,0,0,1,128,0,2,208,0,1,128,0,
  // 0x00f8  Ã¸
  10,12,36,12,1,255,1,81,64,31,255,192,62,95,128,184,31,192,240,58,208,240,242,224,241,210,224,247,130,208,127,3,192,63,175,128,127,253,0,16,0,0,
  // 0x00f9  Ã¹
  10,16,48,12,1,255,6,64,0,3,192,0,0,240,0,0,16,0,0,0,0,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,3,208,124,7,208,63,175,208,31,249,208,0,0,0,
  // 0x00fa  Ãº
  10,16,48,12,1,255,0,10,0,0,61,0,0,180,0,0,64,0,0,0,0,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,3,208,124,7,208,63,175,208,31,249,208,0,0,0,
  // 0x00fb  Ã»
  10,16,48,12,1,255,0,160,0,3,252,0,11,30,0,4,1,0,0,0,0,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,3,208,124,7,208,63,175,208,31,249,208,0,0,0,
  // 0x00fc  Ã¼
  10,15,45,12,1,255,11,14,0,11,14,0,0,0,0,0,0,0,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,2,208,184,3,208,124,7,208,63,175,208,31,249,208,0,0,0,
  // 0x00fd  Ã½
  10,20,60,10,0,251,0,10,0,0,61,0,0,180,0,0,80,0,0,0,0,180,1,224,124,3,208,60,3,192,30,7,128,15,15,0,11,79,0,7,157,0,3,252,0,1,248,0,0,244,0,0,240,0,1,224,0,7,192,0,191,64,0,100,0,0,
  // 0x00fe  Ã¾
  10,20,60,12,1,251,20,0,0,120,0,0,120,0,0,120,0,0,120,20,0,122,255,64,127,91,192,124,2,208,120,1,224,120,1,240,120,1,240,124,1,224,124,3,208,127,175,192,122,254,0,120,0,0,120,0,0,120,0,0,120,0,0,36,0,0,
  // 0x00ff  Ã¿
  10,19,57,10,0,251,11,14,0,11,14,0,0,0,0,0,0,0,180,1,224,124,3,208,60,3,192,30,7,128,15,15,0,11,79,0,7,157,0,3,252,0,1,248,0,0,244,0,0,240,0,1,224,0,7,192,0,191,64,0,100,0,0,
};

#endif // HAS_GRAPHICAL_TFT
