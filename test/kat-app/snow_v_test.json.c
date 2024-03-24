/*****************************************************************************
 Copyright (c) 2023, Intel Corporation

 Redistribution and use in source and binary forms, with or without
 modification, are permitted provided that the following conditions are met:

     * Redistributions of source code must retain the above copyright notice,
       this list of conditions and the following disclaimer.
     * Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
     * Neither the name of Intel Corporation nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
 FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*****************************************************************************/

/* SNOW-V */
#include "cipher_test.h"

const struct cipher_test snow_v_test_json[] = {
        { 128, 256, 1,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x69\xca\x6d\xaf\x9a\xe3\xb7\x2d\xb1\x34\xa8\x5a\x83\x7e\x41\x9d\xec\x08\xaa\xd3\x9d\x7b"
          "\x0f\x00\x9b\x60\xb2\x8c\x53\x43\x00\xed\x84\xab\xf5\x94\xfb\x08\xa7\xf1\xf3\xa2\xdf\x18"
          "\xe6\x17\x68\x3b\x48\x1f\xa3\x78\x07\x9d\xcf\x04\xdb\x53\xb5\xd6\x29\xa9\xeb\x9d\x03\x1c"
          "\x15\x9d\xcc\xd0\xa5\x0c\x4d\x5d\xbf\x51\x15\xd8\x70\x39\xc0\xd0\x3c\xa1\x37\x0c\x19\x40"
          "\x03\x47\xa0\xb4\xd2\xe9\xdb\xe5\xcb\xca\x60\x82\x14\xa2\x65\x82\xcf\x68\x09\x16\xb3\x45"
          "\x13\x21\x95\x4f\xdf\x30\x84\xaf\x02\xf6\xa8\xe2\x48\x1d\xe6\xbf\x82\x79",
          1, 1024 },
        { 128, 256, 2,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x30\x76\x09\xfb\x10\x10\x12\x54\x4b\xc1\x75\xe3\x17\xfb\x25\xff\x33\x0d\x0d\xe2\x5a\xf6"
          "\xaa\xd1\x05\x05\xb8\x9b\x1e\x09\xa8\xec\xdd\x46\x72\xcc\xbb\x98\xc7\xf2\xc4\xe2\x4a\xf5"
          "\x27\x28\x36\xc8\x7c\xc7\x3a\x81\x76\xb3\x9c\xe9\x30\x3b\x3e\x76\x4e\x9b\xe3\xe7\x48\xf7"
          "\x65\x1a\x7c\x7e\x81\x3f\xd5\x24\x90\x23\x1e\x56\xf7\xc1\x44\xe4\x38\xe7\x77\x11\xa6\xb0"
          "\xba\xfb\x60\x45\x0c\x62\xd7\xd9\xb9\x24\x1d\x12\x44\xfc\xb4\x9d\xa1\xe5\x2b\x80\x13\xde"
          "\xcd\xd4\x86\x04\xff\xfc\x62\x67\x6e\x70\x3b\x3a\xb8\x49\xcb\xa6\xea\x09",
          1, 1024 },
        { 128, 256, 3,
          "\x50\x51\x52\x53\x54\x55\x56\x57\x58\x59\x5a\x5b\x5c\x5d\x5e\x5f\x0a\x1a\x2a\x3a\x4a\x5a"
          "\x6a\x7a\x8a\x9a\xaa\xba\xca\xda\xea\xfa",
          "\x01\x23\x45\x67\x89\xab\xcd\xef\xfe\xdc\xba\x98\x76\x54\x32\x10",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xaa\x81\xea\xfb\x8b\x86\x16\xce\x3e\x5c\xe2\x22\x24\x61\xc5\x0a\x6a\xb4\x48\x77\x56\xde"
          "\x4b\xd3\x1c\x90\x4f\x3d\x97\x8a\xfe\x56\x33\x4f\x10\xdd\xdf\x2b\x95\x31\x76\x9a\x71\x05"
          "\x0b\xe4\x38\x5f\xc2\xb6\x19\x2c\x7a\x85\x7b\xe8\xb4\xfc\x28\xb7\x09\xf0\x8f\x11\xf2\x06"
          "\x49\xe2\xee\xf2\x49\x80\xf8\x6c\x4c\x11\x36\x41\xfe\xd2\xf3\xf6\xfa\x2b\x91\x95\x12\x06"
          "\xb8\x01\xdb\x15\x46\x65\x17\xa6\x33\x0a\xdd\xa6\xb3\x5b\x26\x5e\xfd\x72\x2e\x86\x77\xb4"
          "\x8b\xfc\x15\xb4\x41\x18\xde\x52\xd0\x73\xb0\xad\x0f\xe7\x59\x4d\x62\x91",
          1, 1024 },
        { 128, 256, 4,
          "\x67\xc6\x69\x73\x51\xff\x4a\xec\x29\xcd\xba\xab\xf2\xfb\xe3\x46\x7c\xc2\x54\xf8\x1b\xe8"
          "\xe7\x8d\x76\x5a\x2e\x63\x33\x9f\xc9\x9a",
          "\x66\x32\x0d\xb7\x31\x58\xa3\x5a\x25\x5d\x05\x17\x58\xe9\x5e\xd4", "", "", 1, 0 },
        { 128, 256, 5,
          "\x67\xc6\x69\x73\x51\xff\x4a\xec\x29\xcd\xba\xab\xf2\xfb\xe3\x46\x7c\xc2\x54\xf8\x1b\xe8"
          "\xe7\x8d\x76\x5a\x2e\x63\x33\x9f\xc9\x9a",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "", "", 1, 0 },
        { 128, 256, 6,
          "\x67\xc6\x69\x73\x51\xff\x4a\xec\x29\xcd\xba\xab\xf2\xfb\xe3\x46\x7c\xc2\x54\xf8\x1b\xe8"
          "\xe7\x8d\x76\x5a\x2e\x63\x33\x9f\xc9\x9a",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "", "", 1, 0 },
        { 128, 256, 7,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x66\x32\x0d\xb7\x31\x58\xa3\x5a\x25\x5d\x05\x17\x58\xe9\x5e\xd4", "", "", 1, 0 },
        { 128, 256, 8,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "", "", 1, 0 },
        { 128, 256, 9,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x66\x32\x0d\xb7\x31\x58\xa3\x5a\x25\x5d\x05\x17\x58\xe9\x5e\xd4", "", "", 1, 0 },
        { 128, 256, 10,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "", "", 1, 0 },
        { 128, 256, 11,
          "\xab\xb2\xcd\xc6\x9b\xb4\x54\x11\x0e\x82\x74\x41\x21\x3d\xdc\x87\x70\xe9\x3e\xa1\x41\xe1"
          "\xfc\x67\x3e\x01\x7e\x97\xea\xdc\x6b\x96",
          "\x8f\x38\x5c\x2a\xec\xb0\x3b\xfb\x32\xaf\x3c\x54\xec\x18\xdb\x5c", "\x89", "\x12", 1,
          8 },
        { 128, 256, 12,
          "\xab\xb2\xcd\xc6\x9b\xb4\x54\x11\x0e\x82\x74\x41\x21\x3d\xdc\x87\x70\xe9\x3e\xa1\x41\xe1"
          "\xfc\x67\x3e\x01\x7e\x97\xea\xdc\x6b\x96",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x89", "\x03", 1,
          8 },
        { 128, 256, 13,
          "\xab\xb2\xcd\xc6\x9b\xb4\x54\x11\x0e\x82\x74\x41\x21\x3d\xdc\x87\x70\xe9\x3e\xa1\x41\xe1"
          "\xfc\x67\x3e\x01\x7e\x97\xea\xdc\x6b\x96",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x89", "\x35", 1,
          8 },
        { 128, 256, 14,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x8f\x38\x5c\x2a\xec\xb0\x3b\xfb\x32\xaf\x3c\x54\xec\x18\xdb\x5c", "\x89", "\x0e", 1,
          8 },
        { 128, 256, 15,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x89", "\xe0", 1,
          8 },
        { 128, 256, 16,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x8f\x38\x5c\x2a\xec\xb0\x3b\xfb\x32\xaf\x3c\x54\xec\x18\xdb\x5c", "\x89", "\x2a", 1,
          8 },
        { 128, 256, 17,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x89", "\xb9", 1,
          8 },
        { 128, 256, 18,
          "\x02\x1a\xfe\x43\xfb\xfa\xaa\x3a\xfb\x29\xd1\xe6\x05\x3c\x7c\x94\x75\xd8\xbe\x61\x89\xf9"
          "\x5c\xbb\xa8\x99\x0f\x95\xb1\xeb\xf1\xb3",
          "\x05\xef\xf7\x00\xe9\xa1\x3a\xe5\xca\x0b\xcb\xd0\x48\x47\x64\xbd", "\xd4\xb6",
          "\x46\xde", 1, 16 },
        { 128, 256, 19,
          "\x02\x1a\xfe\x43\xfb\xfa\xaa\x3a\xfb\x29\xd1\xe6\x05\x3c\x7c\x94\x75\xd8\xbe\x61\x89\xf9"
          "\x5c\xbb\xa8\x99\x0f\x95\xb1\xeb\xf1\xb3",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\xd4\xb6",
          "\x70\xe9", 1, 16 },
        { 128, 256, 20,
          "\x02\x1a\xfe\x43\xfb\xfa\xaa\x3a\xfb\x29\xd1\xe6\x05\x3c\x7c\x94\x75\xd8\xbe\x61\x89\xf9"
          "\x5c\xbb\xa8\x99\x0f\x95\xb1\xeb\xf1\xb3",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\xd4\xb6",
          "\xab\x8b", 1, 16 },
        { 128, 256, 21,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x05\xef\xf7\x00\xe9\xa1\x3a\xe5\xca\x0b\xcb\xd0\x48\x47\x64\xbd", "\xd4\xb6",
          "\xbc\xd6", 1, 16 },
        { 128, 256, 22,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\xd4\xb6",
          "\xbd\x7c", 1, 16 },
        { 128, 256, 23,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x05\xef\xf7\x00\xe9\xa1\x3a\xe5\xca\x0b\xcb\xd0\x48\x47\x64\xbd", "\xd4\xb6",
          "\x7a\x47", 1, 16 },
        { 128, 256, 24,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\xd4\xb6",
          "\xe4\xc0", 1, 16 },
        { 128, 256, 25,
          "\x1f\x23\x1e\xa8\x1c\x7b\x64\xc5\x14\x73\x5a\xc5\x5e\x4b\x79\x63\x3b\x70\x64\x24\x11\x9e"
          "\x09\xdc\xaa\xd4\xac\xf2\x1b\x10\xaf\x3b",
          "\x33\xcd\xe3\x50\x48\x47\x15\x5c\xbb\x6f\x22\x19\xba\x9b\x7d\xf5", "\x83\x67\xd8",
          "\xd3\x15\x8d", 1, 24 },
        { 128, 256, 26,
          "\x1f\x23\x1e\xa8\x1c\x7b\x64\xc5\x14\x73\x5a\xc5\x5e\x4b\x79\x63\x3b\x70\x64\x24\x11\x9e"
          "\x09\xdc\xaa\xd4\xac\xf2\x1b\x10\xaf\x3b",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x83\x67\xd8",
          "\x8c\x30\x1f", 1, 24 },
        { 128, 256, 27,
          "\x1f\x23\x1e\xa8\x1c\x7b\x64\xc5\x14\x73\x5a\xc5\x5e\x4b\x79\x63\x3b\x70\x64\x24\x11\x9e"
          "\x09\xdc\xaa\xd4\xac\xf2\x1b\x10\xaf\x3b",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x83\x67\xd8",
          "\x3e\x43\x7d", 1, 24 },
        { 128, 256, 28,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x33\xcd\xe3\x50\x48\x47\x15\x5c\xbb\x6f\x22\x19\xba\x9b\x7d\xf5", "\x83\x67\xd8",
          "\x6e\xdd\x4a", 1, 24 },
        { 128, 256, 29,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x83\x67\xd8",
          "\xea\xad\xb5", 1, 24 },
        { 128, 256, 30,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x33\xcd\xe3\x50\x48\x47\x15\x5c\xbb\x6f\x22\x19\xba\x9b\x7d\xf5", "\x83\x67\xd8",
          "\xb3\xd5\xa1", 1, 24 },
        { 128, 256, 31,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x83\x67\xd8",
          "\xb3\x11\xd1", 1, 24 },
        { 128, 256, 32,
          "\x0b\xe1\x1a\x1c\x7f\x23\xf8\x29\xf8\xa4\x1b\x13\xb5\xca\x4e\xe8\x98\x32\x38\xe0\x79\x4d"
          "\x3d\x34\xbc\x5f\x4e\x77\xfa\xcb\x6c\x05",
          "\xac\x86\x21\x2b\xaa\x1a\x55\xa2\xbe\x70\xb5\x73\x3b\x04\x5c\xd3", "\x77\x09\xd1\xa5",
          "\x16\x4c\x52\xa5", 1, 32 },
        { 128, 256, 33,
          "\x0b\xe1\x1a\x1c\x7f\x23\xf8\x29\xf8\xa4\x1b\x13\xb5\xca\x4e\xe8\x98\x32\x38\xe0\x79\x4d"
          "\x3d\x34\xbc\x5f\x4e\x77\xfa\xcb\x6c\x05",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x77\x09\xd1\xa5",
          "\x41\x1c\xe0\xe4", 1, 32 },
        { 128, 256, 34,
          "\x0b\xe1\x1a\x1c\x7f\x23\xf8\x29\xf8\xa4\x1b\x13\xb5\xca\x4e\xe8\x98\x32\x38\xe0\x79\x4d"
          "\x3d\x34\xbc\x5f\x4e\x77\xfa\xcb\x6c\x05",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x77\x09\xd1\xa5",
          "\x70\x3d\x33\xd6", 1, 32 },
        { 128, 256, 35,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xac\x86\x21\x2b\xaa\x1a\x55\xa2\xbe\x70\xb5\x73\x3b\x04\x5c\xd3", "\x77\x09\xd1\xa5",
          "\xae\xb6\x70\x05", 1, 32 },
        { 128, 256, 36,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00", "\x77\x09\xd1\xa5",
          "\x1e\xc3\xbc\x0a", 1, 32 },
        { 128, 256, 37,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xac\x86\x21\x2b\xaa\x1a\x55\xa2\xbe\x70\xb5\x73\x3b\x04\x5c\xd3", "\x77\x09\xd1\xa5",
          "\x96\x19\xac\xd2", 1, 32 },
        { 128, 256, 38,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff", "\x77\x09\xd1\xa5",
          "\x47\x7f\xd8\x5e", 1, 32 },
        { 128, 256, 39,
          "\x36\x94\xb3\xaf\xe2\xf0\xe4\x9e\x4f\x32\x15\x49\xfd\x82\x4e\xa9\x08\x70\xd4\xb2\x8a\x29"
          "\x54\x48\x9a\x0a\xbc\xd5\x0e\x18\xa8\x44",
          "\xac\x5b\xf3\x8e\x4c\xd7\x2d\x9b\x09\x42\xe5\x06\xc4\x33\xaf\xcd",
          "\xcd\x16\x68\xba\xac", "\xd4\x61\x94\x70\x87", 1, 40 },
        { 128, 256, 40,
          "\x36\x94\xb3\xaf\xe2\xf0\xe4\x9e\x4f\x32\x15\x49\xfd\x82\x4e\xa9\x08\x70\xd4\xb2\x8a\x29"
          "\x54\x48\x9a\x0a\xbc\xd5\x0e\x18\xa8\x44",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xcd\x16\x68\xba\xac", "\x0a\x61\x65\x53\x74", 1, 40 },
        { 128, 256, 41,
          "\x36\x94\xb3\xaf\xe2\xf0\xe4\x9e\x4f\x32\x15\x49\xfd\x82\x4e\xa9\x08\x70\xd4\xb2\x8a\x29"
          "\x54\x48\x9a\x0a\xbc\xd5\x0e\x18\xa8\x44",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xcd\x16\x68\xba\xac", "\x6c\x12\x44\x15\x4d", 1, 40 },
        { 128, 256, 42,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xac\x5b\xf3\x8e\x4c\xd7\x2d\x9b\x09\x42\xe5\x06\xc4\x33\xaf\xcd",
          "\xcd\x16\x68\xba\xac", "\x02\x78\xe0\xce\xed", 1, 40 },
        { 128, 256, 43,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xcd\x16\x68\xba\xac", "\xa4\xdc\x05\x15\x36", 1, 40 },
        { 128, 256, 44,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xac\x5b\xf3\x8e\x4c\xd7\x2d\x9b\x09\x42\xe5\x06\xc4\x33\xaf\xcd",
          "\xcd\x16\x68\xba\xac", "\xbb\xce\x3a\x68\x13", 1, 40 },
        { 128, 256, 45,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xcd\x16\x68\xba\xac", "\xfd\x60\x61\x41\xbc", 1, 40 },
        { 128, 256, 46,
          "\xa3\x84\x7f\x2d\xad\xd4\x76\x47\xde\x32\x1c\xec\x4a\xc4\x30\xf6\x20\x23\x85\x6c\xfb\xb2"
          "\x07\x04\xf4\xec\x0b\xb9\x20\xba\x86\xc3",
          "\x3e\x05\xf1\xec\xd9\x67\x33\xb7\x99\x50\xa3\xe3\x14\xd3\xd9\x34",
          "\x08\xcf\x61\xc9\xc3\x80", "\xcd\x4a\x37\x9b\xc4\x8b", 1, 48 },
        { 128, 256, 47,
          "\xa3\x84\x7f\x2d\xad\xd4\x76\x47\xde\x32\x1c\xec\x4a\xc4\x30\xf6\x20\x23\x85\x6c\xfb\xb2"
          "\x07\x04\xf4\xec\x0b\xb9\x20\xba\x86\xc3",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x08\xcf\x61\xc9\xc3\x80", "\x23\x46\x9f\xcd\x94\xd4", 1, 48 },
        { 128, 256, 48,
          "\xa3\x84\x7f\x2d\xad\xd4\x76\x47\xde\x32\x1c\xec\x4a\xc4\x30\xf6\x20\x23\x85\x6c\xfb\xb2"
          "\x07\x04\xf4\xec\x0b\xb9\x20\xba\x86\xc3",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x08\xcf\x61\xc9\xc3\x80", "\xba\xf1\x73\xa1\x57\x58", 1, 48 },
        { 128, 256, 49,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x3e\x05\xf1\xec\xd9\x67\x33\xb7\x99\x50\xa3\xe3\x14\xd3\xd9\x34",
          "\x08\xcf\x61\xc9\xc3\x80", "\xed\x78\x21\x2b\x90\xa3", 1, 48 },
        { 128, 256, 50,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x08\xcf\x61\xc9\xc3\x80", "\x61\x05\x0c\x66\x59\x63", 1, 48 },
        { 128, 256, 51,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x3e\x05\xf1\xec\xd9\x67\x33\xb7\x99\x50\xa3\xe3\x14\xd3\xd9\x34",
          "\x08\xcf\x61\xc9\xc3\x80", "\x92\x9a\xd1\x31\x54\x33", 1, 48 },
        { 128, 256, 52,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x08\xcf\x61\xc9\xc3\x80", "\x38\xb9\x68\x32\xd3\x90", 1, 48 },
        { 128, 256, 53,
          "\xf7\x5e\xa0\xf2\x10\xa8\xf6\x05\x94\x01\xbe\xb4\xbc\x44\x78\xfa\x49\x69\xe6\x23\xd0\x1a"
          "\xda\x69\x6a\x7e\x4c\x7e\x51\x25\xb3\x48",
          "\x84\x53\x3a\x94\xfb\x31\x99\x90\x32\x57\x44\xee\x9b\xbc\xe9\xe5",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\xbf\xc8\x9e\x4c\xcf\x93\x3e", 1, 56 },
        { 128, 256, 54,
          "\xf7\x5e\xa0\xf2\x10\xa8\xf6\x05\x94\x01\xbe\xb4\xbc\x44\x78\xfa\x49\x69\xe6\x23\xd0\x1a"
          "\xda\x69\x6a\x7e\x4c\x7e\x51\x25\xb3\x48",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\x90\xfb\x35\x72\xf3\x45\x99", 1, 56 },
        { 128, 256, 55,
          "\xf7\x5e\xa0\xf2\x10\xa8\xf6\x05\x94\x01\xbe\xb4\xbc\x44\x78\xfa\x49\x69\xe6\x23\xd0\x1a"
          "\xda\x69\x6a\x7e\x4c\x7e\x51\x25\xb3\x48",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\x0c\xbc\x6e\x7c\x67\xa7\x49", 1, 56 },
        { 128, 256, 56,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x84\x53\x3a\x94\xfb\x31\x99\x90\x32\x57\x44\xee\x9b\xbc\xe9\xe5",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\xd6\xb0\xe9\xb6\x89\x0c\xd0", 1, 56 },
        { 128, 256, 57,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\x6b\x4d\x0c\xd3\x89\x81\x29", 1, 56 },
        { 128, 256, 58,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x84\x53\x3a\x94\xfb\x31\x99\x90\x32\x57\x44\xee\x9b\xbc\xe9\xe5",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\xe2\xfe\x73\x01\x6a\xfe\x53", 1, 56 },
        { 128, 256, 59,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x02\x87\x61\x7c\x13\x62\x9e", "\x32\xf1\x68\x87\x03\x72\x8c", 1, 56 },
        { 128, 256, 60,
          "\x25\xcf\x08\xf5\xe9\xe2\x5e\x53\x60\xaa\xd2\xb2\xd0\x85\xfa\x54\xd8\x35\xe8\xd4\x66\x82"
          "\x64\x98\xd9\xa8\x87\x75\x65\x70\x5a\x8a",
          "\x3f\x62\x80\x29\x44\xde\x7c\xa5\x89\x4e\x57\x59\xd3\x51\xad\xac",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x34\x6c\xaa\xc1\xa3\x38\xad\x4e", 1, 64 },
        { 128, 256, 61,
          "\x25\xcf\x08\xf5\xe9\xe2\x5e\x53\x60\xaa\xd2\xb2\xd0\x85\xfa\x54\xd8\x35\xe8\xd4\x66\x82"
          "\x64\x98\xd9\xa8\x87\x75\x65\x70\x5a\x8a",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x11\x9b\x07\x7a\x35\x62\xb7\x71", 1, 64 },
        { 128, 256, 62,
          "\x25\xcf\x08\xf5\xe9\xe2\x5e\x53\x60\xaa\xd2\xb2\xd0\x85\xfa\x54\xd8\x35\xe8\xd4\x66\x82"
          "\x64\x98\xd9\xa8\x87\x75\x65\x70\x5a\x8a",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x6a\xd5\xae\xcf\x9a\xb0\xa7\x9f", 1, 64 },
        { 128, 256, 63,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x3f\x62\x80\x29\x44\xde\x7c\xa5\x89\x4e\x57\x59\xd3\x51\xad\xac",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x01\xcb\x4f\x84\x1a\xdd\x1e\x20", 1, 64 },
        { 128, 256, 64,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x68\x87\x9d\xaf\x8a\x68\xd0\xe2", 1, 64 },
        { 128, 256, 65,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x3f\x62\x80\x29\x44\xde\x7c\xa5\x89\x4e\x57\x59\xd3\x51\xad\xac",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\xa3\x4a\x7d\xdc\xb2\x9d\xab\xf3", 1, 64 },
        { 128, 256, 66,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x01\x4d\xf0\x00\x10\x8b\x67\xcf", "\x31\x3b\xf9\xfb\x00\x9b\x75\x9b", 1, 64 },
        { 128, 256, 67,
          "\x86\x95\x80\xec\x17\xe4\x85\xf1\x8c\x0c\x66\xf1\x7c\xc0\x7c\xbb\x22\xfc\xe4\x66\xda\x61"
          "\x0b\x63\xaf\x62\xbc\x83\xb4\x69\x2f\x3a",
          "\xff\xaf\x27\x16\x93\xac\x07\x1f\xb8\x6d\x11\x34\x2d\x8d\xef\x4f",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\xcd\x39\xb4\x9c\xdf\x0c\x8a\xae\x75", 1, 72 },
        { 128, 256, 68,
          "\x86\x95\x80\xec\x17\xe4\x85\xf1\x8c\x0c\x66\xf1\x7c\xc0\x7c\xbb\x22\xfc\xe4\x66\xda\x61"
          "\x0b\x63\xaf\x62\xbc\x83\xb4\x69\x2f\x3a",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\x09\xe6\xdb\x40\x1a\x5d\xf1\xbc\x3a", 1, 72 },
        { 128, 256, 69,
          "\x86\x95\x80\xec\x17\xe4\x85\xf1\x8c\x0c\x66\xf1\x7c\xc0\x7c\xbb\x22\xfc\xe4\x66\xda\x61"
          "\x0b\x63\xaf\x62\xbc\x83\xb4\x69\x2f\x3a",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\x13\xdb\x04\xcc\xdb\xd5\x09\x2e\xf9", 1, 72 },
        { 128, 256, 70,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\xff\xaf\x27\x16\x93\xac\x07\x1f\xb8\x6d\x11\x34\x2d\x8d\xef\x4f",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\xfa\x27\x86\x2d\x1b\x12\x7d\x2f\x8b", 1, 72 },
        { 128, 256, 71,
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00"
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00\x00",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\x64\x12\x90\x24\x8c\x21\x16\x89\x52", 1, 72 },
        { 128, 256, 72,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xaf\x27\x16\x93\xac\x07\x1f\xb8\x6d\x11\x34\x2d\x8d\xef\x4f",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\x7a\x88\x66\xab\x26\xbc\xff\x20\xb1", 1, 72 },
        { 128, 256, 73,
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff"
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff\xff",
          "\x0d\xd8\xfd\x8b\x16\xc2\xa1\xa4\xe3", "\x3d\xae\xf4\x70\x06\xd2\xb3\xf0\xa8", 1, 72 },
        { 0, 0, 0, NULL, NULL, NULL, NULL, 0, 0 }
};