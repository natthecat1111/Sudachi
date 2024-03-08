// SPDX-FileCopyrightText: 2023 yuzu Emulator Project
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#include <cstdint>
#include <map>
#include <vector>

namespace NxTzdb {

// clang-format off
const static std::map<const char*, const std::vector<uint8_t>> america_indiana = 
{
{"Indianapolis",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xca, 0x57, 0x22, 0x80, 0xff, 0xff, 0xff,
0xff, 0xca, 0xd8, 0x47, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x23,
0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x75, 0xf3, 0x00, 0xff,
0xff, 0xff, 0xff, 0xd4, 0x40, 0xeb, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0xd5, 0x00, 0xff, 0xff, 0xff, 0xff,
0xd6, 0x20, 0xcd, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd7, 0x35, 0xb7, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd8, 0x00, 0xaf,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xd9, 0x15, 0x99, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xe0, 0x91, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xda, 0xfe, 0xb5, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xc0, 0x73, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xdc,
0xde, 0x97, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xa9, 0x90, 0x70, 0xff, 0xff, 0xff, 0xff, 0xde, 0xbe, 0x79, 0x80,
0xff, 0xff, 0xff, 0xff, 0xdf, 0x89, 0x72, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x9e, 0x5b, 0x80, 0xff, 0xff, 0xff,
0xff, 0xe1, 0x69, 0x54, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e, 0x3d, 0x80, 0xff, 0xff, 0xff, 0xff, 0xe3, 0x49,
0x36, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x5e, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xf2, 0x16, 0xf0, 0xff,
0xff, 0xff, 0xff, 0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xb8, 0x1c, 0xf0, 0xff, 0xff, 0xff, 0xff,
0xff, 0xa7, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1,
0xe0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x43, 0x60, 0x00, 0x00,
0x00, 0x00, 0x45, 0xf3, 0xa8, 0xf0, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x02, 0x05, 0x06,
0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0xff, 0xff, 0xaf, 0x3a, 0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff,
0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff,
0xb9, 0xb0, 0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x18, 0x4c, 0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43,
0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54, 0x00, 0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00,
0x0a, 0x45, 0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31,
0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Knox",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5d, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55,
0xd5, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd6, 0x20, 0xcd, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd7, 0x35, 0xb7, 0x00, 0xff,
0xff, 0xff, 0xff, 0xd8, 0x00, 0xaf, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd9, 0x15, 0x99, 0x00, 0xff, 0xff, 0xff, 0xff,
0xd9, 0xe0, 0x91, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xda, 0xfe, 0xb5, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xc0, 0x73,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xde, 0x97, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xa9, 0x90, 0x70, 0xff, 0xff,
0xff, 0xff, 0xde, 0xbe, 0x79, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x89, 0x72, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe0,
0x9e, 0x5b, 0x80, 0xff, 0xff, 0xff, 0xff, 0xe1, 0x69, 0x54, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e, 0x3d, 0x80,
0xff, 0xff, 0xff, 0xff, 0xe3, 0x49, 0x36, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x5e, 0x1f, 0x80, 0xff, 0xff, 0xff,
0xff, 0xe5, 0x57, 0x3c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x37,
0x1e, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xf2, 0x16, 0xf0, 0xff,
0xff, 0xff, 0xff, 0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8, 0xf0, 0xff, 0xff, 0xff, 0xff,
0xeb, 0xe6, 0xe2, 0x00, 0xff, 0xff, 0xff, 0xff, 0xec, 0xd6, 0xc4, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xed, 0xc6, 0xc4,
0x00, 0xff, 0xff, 0xff, 0xff, 0xee, 0xbf, 0xe1, 0x70, 0xff, 0xff, 0xff, 0xff, 0xef, 0xaf, 0xe0, 0x80, 0xff, 0xff,
0xff, 0xff, 0xf0, 0x9f, 0xc3, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x8f, 0xc2, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf4,
0x5f, 0x87, 0x70, 0xff, 0xff, 0xff, 0xff, 0xfa, 0xf8, 0x67, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xe8, 0x49, 0xf0,
0xff, 0xff, 0xff, 0xff, 0xfc, 0xd8, 0x49, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc8, 0x2b, 0xf0, 0xff, 0xff, 0xff,
0xff, 0xfe, 0xb8, 0x2b, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa8, 0x0d, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98,
0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xef, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x77, 0xef, 0x00, 0x00,
0x00, 0x00, 0x00, 0x03, 0x71, 0x0c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x04, 0x61, 0x0b, 0x80, 0x00, 0x00, 0x00, 0x00,
0x05, 0x50, 0xee, 0x70, 0x00, 0x00, 0x00, 0x00, 0x06, 0x40, 0xed, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x30, 0xd0,
0x70, 0x00, 0x00, 0x00, 0x00, 0x07, 0x8d, 0x27, 0x80, 0x00, 0x00, 0x00, 0x00, 0x09, 0x10, 0xb2, 0x70, 0x00, 0x00,
0x00, 0x00, 0x09, 0xad, 0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf0, 0x94, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b,
0xe0, 0x93, 0x80, 0x00, 0x00, 0x00, 0x00, 0x0c, 0xd9, 0xb0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xc0, 0x75, 0x80,
0x00, 0x00, 0x00, 0x00, 0x0e, 0xb9, 0x92, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xa9, 0x92, 0x00, 0x00, 0x00, 0x00,
0x00, 0x10, 0x99, 0x74, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x11, 0x89, 0x74, 0x00, 0x00, 0x00, 0x00, 0x00, 0x12, 0x79,
0x56, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x13, 0x69, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x59, 0x38, 0xf0, 0x00,
0x00, 0x00, 0x00, 0x15, 0x49, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x16, 0x39, 0x1a, 0xf0, 0x00, 0x00, 0x00, 0x00,
0x17, 0x29, 0x1a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x22, 0x37, 0x70, 0x00, 0x00, 0x00, 0x00, 0x19, 0x08, 0xfc,
0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x02, 0x19, 0x70, 0x00, 0x00, 0x00, 0x00, 0x1a, 0xf2, 0x18, 0x80, 0x00, 0x00,
0x00, 0x00, 0x1b, 0xe1, 0xfb, 0x70, 0x00, 0x00, 0x00, 0x00, 0x1c, 0xd1, 0xfa, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1d,
0xc1, 0xdd, 0x70, 0x00, 0x00, 0x00, 0x00, 0x1e, 0xb1, 0xdc, 0x80, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xa1, 0xbf, 0x70,
0x00, 0x00, 0x00, 0x00, 0x20, 0x76, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x21, 0x81, 0xa1, 0x70, 0x00, 0x00, 0x00,
0x00, 0x22, 0x55, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x6a, 0xbd, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x24, 0x35,
0xd3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x4a, 0x9f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x26, 0x15, 0xb5, 0x00, 0x00,
0x00, 0x00, 0x00, 0x27, 0x2a, 0x81, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x27, 0xfe, 0xd1, 0x80, 0x00, 0x00, 0x00, 0x00,
0x29, 0x0a, 0x63, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x51,
0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xb7, 0x00, 0x02, 0x01, 0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0xff, 0xff, 0xae, 0xca, 0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04,
0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff,
0xff, 0xb9, 0xb0, 0x00, 0x14, 0x4c, 0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57,
0x54, 0x00, 0x43, 0x50, 0x54, 0x00, 0x45, 0x53, 0x54, 0x00, 0x0a, 0x43, 0x53, 0x54, 0x36, 0x43, 0x44, 0x54, 0x2c,
0x4d, 0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Marengo",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xdc, 0xde,
0x97, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xa9, 0x90, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e, 0x3d, 0x80, 0xff,
0xff, 0xff, 0xff, 0xe3, 0x49, 0x36, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x5e, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff,
0xe5, 0x29, 0x18, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x12, 0x34,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xf2, 0x16, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xeb,
0xe6, 0xe2, 0x00, 0xff, 0xff, 0xff, 0xff, 0xec, 0xb1, 0xda, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xed, 0xc6, 0xc4, 0x00,
0xff, 0xff, 0xff, 0xff, 0xee, 0x91, 0xbc, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xef, 0xaf, 0xe0, 0x80, 0xff, 0xff, 0xff,
0xff, 0xfe, 0xb8, 0x1c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97,
0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x77, 0xe0, 0xf0, 0x00,
0x00, 0x00, 0x00, 0x03, 0x70, 0xfe, 0x60, 0x00, 0x00, 0x00, 0x00, 0x04, 0x60, 0xfd, 0x70, 0x00, 0x00, 0x00, 0x00,
0x05, 0x50, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x06, 0x40, 0xdf, 0x70, 0x00, 0x00, 0x00, 0x00, 0x07, 0x30, 0xc2,
0x60, 0x00, 0x00, 0x00, 0x00, 0x07, 0x8d, 0x19, 0x70, 0x00, 0x00, 0x00, 0x00, 0x09, 0x10, 0xb2, 0x70, 0x00, 0x00,
0x00, 0x00, 0x09, 0xad, 0x94, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf0, 0x86, 0x60, 0x00, 0x00, 0x00, 0x00, 0x44,
0x2f, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x43, 0x60, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xa8, 0xf0,
0x02, 0x01, 0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x01, 0x05, 0x06,
0x05, 0x06, 0x05, 0x06, 0xff, 0xff, 0xaf, 0x0d, 0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab,
0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0,
0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x18, 0x4c, 0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54,
0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54, 0x00, 0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00, 0x0a, 0x45,
0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31,
0x2e, 0x30, 0x0a, }},
{"Petersburg",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00,
0x00, 0x06, 0x00, 0x00, 0x00, 0x18, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x67,
0x3d, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x29, 0x18, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff,
0xff, 0xff, 0xff, 0xe7, 0x12, 0x34, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff,
0xe8, 0xf2, 0x16, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xe6, 0xe2, 0x00, 0xff, 0xff, 0xff, 0xff, 0xec, 0xb1, 0xda, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xed, 0xc6, 0xc4, 0x00, 0xff, 0xff, 0xff, 0xff, 0xee, 0x91, 0xbc, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xef,
0xaf, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x9f, 0xc3, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x8f, 0xc2, 0x80,
0xff, 0xff, 0xff, 0xff, 0xf2, 0x7f, 0xa5, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x6f, 0xa4, 0x80, 0xff, 0xff, 0xff,
0xff, 0xf4, 0x5f, 0x87, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x4f, 0x86, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf6, 0x3f,
0x69, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x2f, 0x68, 0x80, 0xff, 0xff, 0xff, 0xff, 0xfa, 0x08, 0x67, 0xf0, 0xff,
0xff, 0xff, 0xff, 0xfa, 0xf8, 0x67, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xe8, 0x49, 0xf0, 0xff, 0xff, 0xff, 0xff,
0xfc, 0xd8, 0x49, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc8, 0x2b, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xb8, 0x2b,
0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa8, 0x0d, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x98, 0x0d, 0x00, 0x00, 0x00,
0x00, 0x00, 0x01, 0x87, 0xef, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x02, 0x77, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03,
0x71, 0x0c, 0x70, 0x00, 0x00, 0x00, 0x00, 0x04, 0x61, 0x0b, 0x80, 0x00, 0x00, 0x00, 0x00, 0x05, 0x50, 0xee, 0x70,
0x00, 0x00, 0x00, 0x00, 0x06, 0x40, 0xed, 0x80, 0x00, 0x00, 0x00, 0x00, 0x07, 0x30, 0xd0, 0x70, 0x00, 0x00, 0x00,
0x00, 0x07, 0x8d, 0x27, 0x80, 0x00, 0x00, 0x00, 0x00, 0x09, 0x10, 0xb2, 0x70, 0x00, 0x00, 0x00, 0x00, 0x09, 0xad,
0xa3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0xf0, 0x94, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0b, 0xe0, 0x93, 0x80, 0x00,
0x00, 0x00, 0x00, 0x0c, 0xd9, 0xb0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xc0, 0x75, 0x80, 0x00, 0x00, 0x00, 0x00,
0x0e, 0xb9, 0x92, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x51,
0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x2d, 0x6d, 0xf0, 0x02, 0x01,
0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x05, 0x01, 0x02, 0x01, 0x05, 0xff, 0xff, 0xae,
0x2d, 0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0,
0x01, 0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x14, 0x4c, 0x4d, 0x54, 0x00, 0x43,
0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54, 0x00, 0x45, 0x53, 0x54, 0x00,
0x0a, 0x45, 0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31,
0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Tell_City",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x25, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x67,
0x3d, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x29, 0x18, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff,
0xff, 0xff, 0xff, 0xe7, 0x12, 0x34, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff,
0xe8, 0xf2, 0x16, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xe6, 0xe2, 0x00, 0xff, 0xff, 0xff, 0xff, 0xec, 0xb1, 0xda, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xed, 0xc6, 0xc4, 0x00, 0xff, 0xff, 0xff, 0xff, 0xee, 0x91, 0xbc, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xef,
0xaf, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x9f, 0xc3, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x8f, 0xc2, 0x80,
0xff, 0xff, 0xff, 0xff, 0xf2, 0x7f, 0xa5, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf3, 0x6f, 0xa4, 0x80, 0xff, 0xff, 0xff,
0xff, 0xf4, 0x5f, 0x87, 0x70, 0xff, 0xff, 0xff, 0xff, 0xf5, 0x4f, 0x86, 0x80, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xe8,
0x49, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xfc, 0xd8, 0x49, 0x00, 0xff, 0xff, 0xff, 0xff, 0xfd, 0xc8, 0x2b, 0xf0, 0xff,
0xff, 0xff, 0xff, 0xfe, 0xb8, 0x2b, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x97, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76,
0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x51, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xb7, 0x00, 0x02, 0x01,
0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x02, 0x01, 0x02, 0x06, 0x05, 0x06, 0x05, 0x01, 0x02, 0x01, 0xff, 0xff, 0xae,
0xa9, 0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0,
0x01, 0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01,
0x18, 0x4c, 0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50,
0x54, 0x00, 0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00, 0x0a, 0x43, 0x53, 0x54, 0x36, 0x43, 0x44, 0x54, 0x2c,
0x4d, 0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Vevay",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e,
0x3d, 0x80, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xb8, 0x1c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xe0, 0x00,
0x00, 0x00, 0x00, 0x00, 0x97, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00,
0x02, 0x77, 0xe0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x70, 0xfe, 0x60, 0x00, 0x00, 0x00, 0x00, 0x04, 0x60, 0xfd,
0x70, 0x00, 0x00, 0x00, 0x00, 0x05, 0x50, 0xe0, 0x60, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00,
0x00, 0x00, 0x45, 0x44, 0x43, 0x60, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xa8, 0xf0, 0x02, 0x01, 0x02, 0x01, 0x02,
0x03, 0x04, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0x05, 0x06, 0xff, 0xff, 0xb0, 0x40,
0x00, 0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01,
0x0c, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x18,
0x4c, 0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54,
0x00, 0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00, 0x0a, 0x45, 0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d,
0x33, 0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Vincennes",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x75,
0xf3, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x40, 0xeb, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x9e, 0x5b, 0x80, 0xff,
0xff, 0xff, 0xff, 0xe1, 0x69, 0x54, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e, 0x3d, 0x80, 0xff, 0xff, 0xff, 0xff,
0xe3, 0x49, 0x36, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x67, 0x3d, 0xe0, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x29, 0x18,
0x70, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x12, 0x34, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xf2, 0x16, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xea,
0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xe6, 0xe2, 0x00,
0xff, 0xff, 0xff, 0xff, 0xec, 0xb1, 0xda, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xed, 0xc6, 0xc4, 0x00, 0xff, 0xff, 0xff,
0xff, 0xee, 0xbf, 0xe1, 0x70, 0xff, 0xff, 0xff, 0xff, 0xef, 0xaf, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf0, 0x71,
0x9e, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xf1, 0x8f, 0xc2, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x7f, 0xa5, 0x70, 0xff,
0xff, 0xff, 0xff, 0xf3, 0x6f, 0xa4, 0x80, 0xff, 0xff, 0xff, 0xff, 0xf4, 0x5f, 0x87, 0x70, 0xff, 0xff, 0xff, 0xff,
0xf5, 0x4f, 0x86, 0x80, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xb8, 0x1c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0xff,
0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0xfe, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1, 0xe0, 0x00, 0x00,
0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x44, 0x51, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45,
0xf3, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x2d, 0x6d, 0xf0, 0x02, 0x01, 0x02, 0x01, 0x02, 0x03, 0x04, 0x02,
0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x01, 0x02, 0x01, 0x05, 0xff, 0xff, 0xad, 0xf1, 0x00,
0x00, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x0c,
0xff, 0xff, 0xb9, 0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x18, 0x4c,
0x4d, 0x54, 0x00, 0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54, 0x00,
0x45, 0x53, 0x54, 0x00, 0x45, 0x44, 0x54, 0x00, 0x0a, 0x45, 0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x33,
0x2e, 0x32, 0x2e, 0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
{"Winamac",
{0x54, 0x5a, 0x69, 0x66, 0x32, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00, 0x00,
0x00, 0x07, 0x00, 0x00, 0x00, 0x1c, 0xff, 0xff, 0xff, 0xff, 0x5e, 0x03, 0xfe, 0xa0, 0xff, 0xff, 0xff, 0xff, 0x9e,
0xa6, 0x2c, 0x80, 0xff, 0xff, 0xff, 0xff, 0x9f, 0xba, 0xf9, 0x70, 0xff, 0xff, 0xff, 0xff, 0xa0, 0x86, 0x0e, 0x80,
0xff, 0xff, 0xff, 0xff, 0xa1, 0x9a, 0xdb, 0x70, 0xff, 0xff, 0xff, 0xff, 0xcb, 0x88, 0xfe, 0x80, 0xff, 0xff, 0xff,
0xff, 0xd2, 0x23, 0xf4, 0x70, 0xff, 0xff, 0xff, 0xff, 0xd2, 0x61, 0x09, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd3, 0x75,
0xf3, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd4, 0x40, 0xeb, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd5, 0x55, 0xd5, 0x00, 0xff,
0xff, 0xff, 0xff, 0xd6, 0x20, 0xcd, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd7, 0x35, 0xb7, 0x00, 0xff, 0xff, 0xff, 0xff,
0xd8, 0x00, 0xaf, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xd9, 0x15, 0x99, 0x00, 0xff, 0xff, 0xff, 0xff, 0xd9, 0xe0, 0x91,
0xf0, 0xff, 0xff, 0xff, 0xff, 0xda, 0xfe, 0xb5, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdb, 0xc0, 0x73, 0xf0, 0xff, 0xff,
0xff, 0xff, 0xdc, 0xde, 0x97, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdd, 0xa9, 0x90, 0x70, 0xff, 0xff, 0xff, 0xff, 0xde,
0xbe, 0x79, 0x80, 0xff, 0xff, 0xff, 0xff, 0xdf, 0x89, 0x72, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x9e, 0x5b, 0x80,
0xff, 0xff, 0xff, 0xff, 0xe1, 0x69, 0x54, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe2, 0x7e, 0x3d, 0x80, 0xff, 0xff, 0xff,
0xff, 0xe3, 0x49, 0x36, 0x70, 0xff, 0xff, 0xff, 0xff, 0xe4, 0x5e, 0x1f, 0x80, 0xff, 0xff, 0xff, 0xff, 0xe5, 0x57,
0x3c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xe6, 0x47, 0x3c, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe7, 0x37, 0x1e, 0xf0, 0xff,
0xff, 0xff, 0xff, 0xe8, 0x27, 0x1e, 0x00, 0xff, 0xff, 0xff, 0xff, 0xe8, 0xf2, 0x16, 0xf0, 0xff, 0xff, 0xff, 0xff,
0xea, 0x07, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xea, 0xd1, 0xf8, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xeb, 0xe6, 0xe2,
0x00, 0xff, 0xff, 0xff, 0xff, 0xec, 0xb1, 0xda, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xed, 0xc6, 0xc4, 0x00, 0xff, 0xff,
0xff, 0xff, 0xee, 0x91, 0xbc, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xef, 0xaf, 0xe0, 0x80, 0xff, 0xff, 0xff, 0xff, 0xfe,
0xb8, 0x1c, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xa7, 0xff, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x97, 0xfe, 0xf0,
0x00, 0x00, 0x00, 0x00, 0x01, 0x87, 0xe1, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x44, 0x2f, 0x76, 0x70, 0x00, 0x00, 0x00,
0x00, 0x45, 0x44, 0x51, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0xf3, 0xb7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x2d,
0x5f, 0xe0, 0x02, 0x01, 0x02, 0x01, 0x02, 0x03, 0x04, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01,
0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02, 0x01, 0x02,
0x01, 0x02, 0x05, 0x06, 0x05, 0x06, 0x05, 0x01, 0x02, 0x06, 0x05, 0xff, 0xff, 0xae, 0xcf, 0x00, 0x00, 0xff, 0xff,
0xb9, 0xb0, 0x01, 0x04, 0xff, 0xff, 0xab, 0xa0, 0x00, 0x08, 0xff, 0xff, 0xb9, 0xb0, 0x01, 0x0c, 0xff, 0xff, 0xb9,
0xb0, 0x01, 0x10, 0xff, 0xff, 0xb9, 0xb0, 0x00, 0x14, 0xff, 0xff, 0xc7, 0xc0, 0x01, 0x18, 0x4c, 0x4d, 0x54, 0x00,
0x43, 0x44, 0x54, 0x00, 0x43, 0x53, 0x54, 0x00, 0x43, 0x57, 0x54, 0x00, 0x43, 0x50, 0x54, 0x00, 0x45, 0x53, 0x54,
0x00, 0x45, 0x44, 0x54, 0x00, 0x0a, 0x45, 0x53, 0x54, 0x35, 0x45, 0x44, 0x54, 0x2c, 0x4d, 0x33, 0x2e, 0x32, 0x2e,
0x30, 0x2c, 0x4d, 0x31, 0x31, 0x2e, 0x31, 0x2e, 0x30, 0x0a, }},
};
// clang-format on

} // namespace NxTzdb