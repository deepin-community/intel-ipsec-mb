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

/* KASUMI F9 UIA1,  */
#include "mac_test.h"

const struct mac_test kasumi_f9_json[] = {
        /* Vectors from 3GPP */
        { 128, 32, 1, "\x2b\xd6\x45\x9f\x82\xc5\xb3\x00\x95\x2c\x49\x10\x48\x81\xff\x48",
          "\x38\xa6\xf0\x56\x05\xd2\xec\x49\x6b\x22\x77\x37\x29\x6f\x39\x3c\x80\x79\x35\x3e\xdc\x87"
          "\xe2\xe8\x05\xd2\xec\x49\xa4\xf2\xd8\xe2",
          "\xf6\x3b\xd7\x2c", 1, 256, "", 0 },
        { 128, 32, 2, "\xd4\x2f\x68\x24\x28\x20\x1c\xaf\xcd\x9f\x97\x94\x5e\x6d\xe7\xb7",
          "\x3e\xdc\x87\xe2\xa4\xf2\xd8\xe2\xb5\x92\x43\x84\x32\x8a\x4a\xe0\x0b\x73\x71\x09\xf8\xb6"
          "\xc8\xdd\x2b\x4d\xb6\x3d\xd5\x33\x98\x1c\xeb\x19\xaa\xd5\x2a\x5b\x2b\xc3",
          "\xa9\xda\xf1\xff", 1, 320, "", 0 },
        { 128, 32, 3, "\xc7\x36\xc6\xaa\xb2\x2b\xff\xf9\x1e\x26\x98\xd2\xe2\x2a\xd5\x7e",
          "\x14\x79\x3e\x41\x03\x97\xe8\xfd\xd0\xa7\xd4\x63\xdf\x9f\xb2\xb2\x78\x83\x3f\xa0\x2e\x23"
          "\x5a\xa1\x72\xbd\x97\x0c\x14\x73\xe1\x29\x07\xfb\x64\x8b\x65\x99\xaa\xa0\xb2\x4a\x03\x86"
          "\x65\x42\x2b\x20\xa4\x99\x27\x6a\x50\x42\x70\x09\xc0",
          "\xdd\x7d\xfa\xdd", 1, 456, "", 0 },
        { 128, 32, 4, "\x7e\x5e\x94\x43\x1e\x11\xd7\x38\x28\xd7\x39\xcc\x6c\xed\x45\x73",
          "\x36\xaf\x61\x44\x98\x38\xf0\x3a\xb3\xd3\xc9\x17\x0a\x4e\x16\x32\xf6\x0f\x86\x10\x13\xd2"
          "\x2d\x84\xb7\x26\xb6\xa2\x78\xd8\x02\xd1\xee\xaf\x13\x21\xba\x59\x29\xdf",
          "\x2b\xee\xf3\xac", 1, 320, "", 0 },
        { 128, 32, 5, "\xfd\xb9\xcf\xdf\x28\x93\x6c\xc4\x83\xa3\x18\x69\xd8\x1b\x8f\xab",
          "\x36\xaf\x61\x44\x98\x38\xf0\x3a\x59\x32\xbc\x0a\xce\x2b\x0a\xba\x33\xd8\xac\x18\x8a\xc5"
          "\x4f\x34\x6f\xad\x10\xbf\x9d\xee\x29\x20\xb4\x3b\xd0\xc5\x3a\x91\x5c\xb7\xdf\x6c\xaa\x72"
          "\x05\x3a\xbf\xf3\x80",
          "\x15\x37\xd3\x16", 1, 392, "", 0 },
        { 128, 32, 6, "\x68\x32\xa6\x5c\xff\x44\x73\x62\x1e\xbd\xd4\xba\x26\xa9\x21\xfe",
          "\x36\xaf\x61\x44\x98\x38\xf0\x3a\xd3\xc5\x38\x39\x62\x68\x20\x71\x77\x65\x66\x76\x20\x32"
          "\x38\x37\x63\x62\x40\x98\x1b\xa6\x82\x4c\x1b\xfb\x1a\xb4\x85\x47\x20\x29\xb7\x1d\x80\x8c"
          "\xe3\x3e\x2c\xc3\xc0\xb5\xfc\x1f\x3d\xe8\xa6\xdc\x80",
          "\x8b\x2d\x57\x0f", 1, 456, "", 0 },
        { 128, 32, 7, "\xd3\x41\x9b\xe8\x21\x08\x7a\xcd\x02\x12\x3a\x92\x48\x03\x33\x59",
          "\xc7\x59\x0e\xa9\x57\xd5\xdf\x7d\xbb\xb0\x57\x03\x88\x09\x49\x6b\xcf\xf8\x6d\x6f\xbc\x8c"
          "\xe5\xb1\x35\xa0\x6b\x16\x60\x54\xf2\xd5\x65\xbe\x8a\xce\x75\xdc\x85\x1e\x0b\xcd\xd8\xf0"
          "\x71\x41\xc4\x95\x87\x2f\xb5\xd8\xc0\xc6\x6a\x8b\x6d\xa5\x56\x66\x3e\x4e\x46\x12\x05\xd8"
          "\x45\x80\xbe\xe5\xbc\x7e\x80",
          "\x02\x15\x81\x70", 1, 584, "", 0 },
        { 128, 32, 8, "\x83\xfd\x23\xa2\x44\xa7\x4c\xf3\x58\xda\x30\x19\xf1\x72\x26\x35",
          "\x36\xaf\x61\x44\x4f\x30\x2a\xd2\x35\xc6\x87\x16\x63\x3c\x66\xfb\x75\x0c\x26\x68\x65\xd5"
          "\x3c\x11\xea\x05\xb1\xe9\xfa\x49\xc8\x39\x8d\x48\xe1\xef\xa5\x90\x9d\x39\x47\x90\x28\x37"
          "\xf5\xae\x96\xd5\xa0\x5b\xc8\xd6\x1c\xa8\xdb\xef\x1b\x13\xa4\xb4\xab\xfe\x4f\xb1\x00\x60"
          "\x45\xb6\x74\xbb\x54\x72\x93\x04\xc3\x82\xbe\x53\xa5\xaf\x05\x55\x61\x76\xf6\xea\xa2\xef"
          "\x1d\x05\xe4\xb0\x83\x18\x1e\xe6\x74\xcd\xa5\xa4\x85\xf7\x4d\x7a\xc0",
          "\x95\xae\x41\xba", 1, 840, "", 0 },
        { 128, 32, 9, "\xf4\xeb\xec\x69\xe7\x3e\xaf\x2e\xb2\xcf\x6a\xf4\xb3\x12\x0f\xfd",
          "\x29\x6f\x39\x3c\x6b\x22\x77\x37\x10\xbf\xff\x83\x9e\x0c\x71\x65\x8d\xbb\x2d\x17\x07\xe1"
          "\x45\x72\x4f\x41\xc1\x6f\x48\xbf\x40\x3c\x3b\x18\xe3\x8f\xd5\xd1\x66\x3b\x6f\x6d\x90\x01"
          "\x93\xe3\xce\xa8\xbb\x4f\x1b\x4f\x5b\xe8\x22\x03\x22\x32\xa7\x8d\x7d\x75\x23\x8d\x5e\x6d"
          "\xae\xcd\x3b\x43\x22\xcf\x59\xbc\x7e\xa8\x4a\xb1\x88\x11\xb5\xbf\xb7\xbc\x55\x3f\x4f\xe4"
          "\x44\x78\xce\x28\x7a\x14\x87\x99\x90\xd1\x8d\x12\xca\x79\xd2\xc8\x55\x14\x90\x21\xcd\x5c"
          "\xe8\xca\x03\x71\xca\x04\xfc\xce\x14\x3e\x3d\x7c\xfe\xe9\x45\x85\xb5\x88\x5c\xac\x46\x06"
          "\x8b\xc0",
          "\xc3\x83\x83\x9d", 1, 1072, "", 0 },
        { 128, 32, 10, "\x5d\x0a\x80\xd8\x13\x4a\xe1\x96\x77\x82\x4b\x67\x1e\x83\x8a\xf4",
          "\x78\x27\xfa\xb2\xa5\x6c\x6c\xa2\x70\xde\xdf\x2d\xc4\x2c\x5c\xbd\x3a\x96\xf8\xa0\xb1\x14"
          "\x18\xb3\x60\x8d\x57\x33\x60\x4a\x2c\xd3\x6a\xab\xc7\x0c\xe3\x19\x3b\xb5\x15\x3b\xe2\xd3"
          "\xc0\x6d\xfd\xb2\xd1\x6e\x9c\x35\x71\x58\xbe\x6a\x41\xd6\xb8\x61\xe4\x91\xdb\x3f\xbf\xeb"
          "\x51\x8e\xfc\xf0\x48\xd7\xd5\x89\x53\x73\x0f\xf3\x0c\x9e\xc4\x70\xff\xcd\x66\x3d\xc3\x42"
          "\x01\xc3\x6a\xdd\xc0\x11\x1c\x35\xb3\x8a\xfe\xe7\xcf\xdb\x58\x2e\x37\x31\xf8\xb4\xba\xa8"
          "\xd1\xa8\x9c\x06\xe8\x11\x99\xa9\x71\x62\x27\xbe\x34\x4e\xfc\xb4\x36\xdd\xd0\xf0\x96\xc0"
          "\x64\xc3\xb5\xe2\xc3\x99\x99\x3f\xc7\x73\x94\xf9\xe0\x97\x20\xa8\x11\x85\x0e\xf2\x3b\x2e"
          "\xe0\x5d\x9e\x61\x73\x60\x9d\x86\xe1\xc0\xc1\x8e\xa5\x1a\x01\x2a\x00\xbb\x41\x3b\x9c\xb8"
          "\x18\x8a\x70\x3c\xd6\xba\xe3\x1c\xc6\x7b\x34\xb1\xb0\x00\x19\xe6\xa2\xb2\xa6\x90\xf0\x26"
          "\x71\xfe\x7c\x9e\xf8\xde\xc0\x09\x4e\x53\x37\x63\x47\x8d\x58\xd2\xc5\xf5\xb8\x27\xa0\x14"
          "\x8c\x59\x48\xa9\x69\x31\xac\xf8\x4f\x46\x5a\x64\xe6\x2c\xe7\x40\x07\xe9\x91\xe3\x7e\xa8"
          "\x23\xfa\x0f\xb2\x19\x23\xb7\x99\x05\xb7\x33\xb6\x31\xe6\xc7\xd6\x86\x0a\x38\x31\xac\x35"
          "\x1a\x9c\x73\x0c\x52\xff\x72\xd9\xd3\x08\xee\xdb\xab\x21\xfd\xe1\x43\xa0\xea\x17\xe2\x3e"
          "\xdc\x1f\x74\xcb\xb3\x63\x8a\x20\x33\xaa\xa1\x54\x64\xea\xa7\x33\x38\x5d\xbb\xeb\x6f\xd7"
          "\x35\x09\xb8\x57\xe6\xa4\x19\xdc\xa1\xd8\x90\x7a\xf9\x77\xfb\xac\x4d\xfa\x35\xef",
          "\x3a\xe4\xbf\xf3", 1, 2624, "", 0 },
        { 128, 32, 101, "\x2b\xd6\x45\x9f\x82\xc5\xb3\x00\x95\x2c\x49\x10\x48\x81\xff\x48",
          "\x6b\x22\x77\x37\x29\x6f\x39\x3c\x80\x79\x35\x3e\xdc\x87\xe2\xe8\x05\xd2\xec\x49\xa4\xf2"
          "\xd8\xe0",
          "\xf6\x3b\xd7\x2c", 1, 189, "\x00\x38\xa6\xf0\x56\x05\xd2\xec\x49", 72 },
        { 128, 32, 102, "\xd4\x2f\x68\x24\x28\x20\x1c\xaf\xcd\x9f\x97\x94\x5e\x6d\xe7\xb7",
          "\xb5\x92\x43\x84\x32\x8a\x4a\xe0\x0b\x73\x71\x09\xf8\xb6\xc8\xdd\x2b\x4d\xb6\x3d\xd5\x33"
          "\x98\x1c\xeb\x19\xaa\xd5\x2a\x5b\x2b\xc0",
          "\xa9\xda\xf1\xff", 1, 254, "\x01\x3e\xdc\x87\xe2\xa4\xf2\xd8\xe2", 72 },
        { 128, 32, 103, "\xfd\xb9\xcf\xdf\x28\x93\x6c\xc4\x83\xa3\x18\x69\xd8\x1b\x8f\xab",
          "\x59\x32\xbc\x0a\xce\x2b\x0a\xba\x33\xd8\xac\x18\x8a\xc5\x4f\x34\x6f\xad\x10\xbf\x9d\xee"
          "\x29\x20\xb4\x3b\xd0\xc5\x3a\x91\x5c\xb7\xdf\x6c\xaa\x72\x05\x3a\xbf\xf2",
          "\x15\x37\xd3\x16", 1, 319, "\x01\x36\xaf\x61\x44\x98\x38\xf0\x3a", 72 },
        { 128, 32, 104, "\xc7\x36\xc6\xaa\xb2\x2b\xff\xf9\x1e\x26\x98\xd2\xe2\x2a\xd5\x7e",
          "\xd0\xa7\xd4\x63\xdf\x9f\xb2\xb2\x78\x83\x3f\xa0\x2e\x23\x5a\xa1\x72\xbd\x97\x0c\x14\x73"
          "\xe1\x29\x07\xfb\x64\x8b\x65\x99\xaa\xa0\xb2\x4a\x03\x86\x65\x42\x2b\x20\xa4\x99\x27\x6a"
          "\x50\x42\x70\x09",
          "\xdd\x7d\xfa\xdd", 1, 384, "\x01\x14\x79\x3e\x41\x03\x97\xe8\xfd", 72 },
        { 128, 32, 105, "\xf4\xeb\xec\x69\xe7\x3e\xaf\x2e\xb2\xcf\x6a\xf4\xb3\x12\x0f\xfd",
          "\x10\xbf\xff\x83\x9e\x0c\x71\x65\x8d\xbb\x2d\x17\x07\xe1\x45\x72\x4f\x41\xc1\x6f\x48\xbf"
          "\x40\x3c\x3b\x18\xe3\x8f\xd5\xd1\x66\x3b\x6f\x6d\x90\x01\x93\xe3\xce\xa8\xbb\x4f\x1b\x4f"
          "\x5b\xe8\x22\x03\x22\x32\xa7\x8d\x7d\x75\x23\x8d\x5e\x6d\xae\xcd\x3b\x43\x22\xcf\x59\xbc"
          "\x7e\xa8\x4a\xb1\x88\x11\xb5\xbf\xb7\xbc\x55\x3f\x4f\xe4\x44\x78\xce\x28\x7a\x14\x87\x99"
          "\x90\xd1\x8d\x12\xca\x79\xd2\xc8\x55\x14\x90\x21\xcd\x5c\xe8\xca\x03\x71\xca\x04\xfc\xce"
          "\x14\x3e\x3d\x7c\xfe\xe9\x45\x85\xb5\x88\x5c\xac\x46\x06\x8b",
          "\xc3\x83\x83\x9d", 1, 1000, "\x01\x29\x6f\x39\x3c\x6b\x22\x77\x37", 72 },
        { 0, 0, 0, NULL, NULL, NULL, 0, 0, NULL, 0 }
};
