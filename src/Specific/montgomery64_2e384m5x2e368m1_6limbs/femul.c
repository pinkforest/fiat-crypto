static void femul(uint64_t out[6], const uint64_t in1[6], const uint64_t in2[6]) {
  { const uint64_t x12 = in1[5];
  { const uint64_t x13 = in1[4];
  { const uint64_t x11 = in1[3];
  { const uint64_t x9 = in1[2];
  { const uint64_t x7 = in1[1];
  { const uint64_t x5 = in1[0];
  { const uint64_t x22 = in2[5];
  { const uint64_t x23 = in2[4];
  { const uint64_t x21 = in2[3];
  { const uint64_t x19 = in2[2];
  { const uint64_t x17 = in2[1];
  { const uint64_t x15 = in2[0];
  { uint64_t x26;  uint64_t x25 = _mulx_u64(x5, x15, &x26);
  { uint64_t x29;  uint64_t x28 = _mulx_u64(x5, x17, &x29);
  { uint64_t x32;  uint64_t x31 = _mulx_u64(x5, x19, &x32);
  { uint64_t x35;  uint64_t x34 = _mulx_u64(x5, x21, &x35);
  { uint64_t x38;  uint64_t x37 = _mulx_u64(x5, x23, &x38);
  { uint64_t x41;  uint64_t x40 = _mulx_u64(x5, x22, &x41);
  { uint64_t x43; uint8_t/*bool*/ x44 = _addcarryx_u64(0x0, x26, x28, &x43);
  { uint64_t x46; uint8_t/*bool*/ x47 = _addcarryx_u64(x44, x29, x31, &x46);
  { uint64_t x49; uint8_t/*bool*/ x50 = _addcarryx_u64(x47, x32, x34, &x49);
  { uint64_t x52; uint8_t/*bool*/ x53 = _addcarryx_u64(x50, x35, x37, &x52);
  { uint64_t x55; uint8_t/*bool*/ x56 = _addcarryx_u64(x53, x38, x40, &x55);
  { uint64_t x58; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x56, x41, &x58);
  { uint64_t x62;  uint64_t x61 = _mulx_u64(x25, 0xffffffffffffffffL, &x62);
  { uint64_t x65;  uint64_t x64 = _mulx_u64(x25, 0xffffffffffffffffL, &x65);
  { uint64_t x68;  uint64_t x67 = _mulx_u64(x25, 0xffffffffffffffffL, &x68);
  { uint64_t x71;  uint64_t x70 = _mulx_u64(x25, 0xffffffffffffffffL, &x71);
  { uint64_t x74;  uint64_t x73 = _mulx_u64(x25, 0xffffffffffffffffL, &x74);
  { uint64_t x77;  uint64_t x76 = _mulx_u64(x25, 0xfffaffffffffffffL, &x77);
  { uint64_t x79; uint8_t/*bool*/ x80 = _addcarryx_u64(0x0, x62, x64, &x79);
  { uint64_t x82; uint8_t/*bool*/ x83 = _addcarryx_u64(x80, x65, x67, &x82);
  { uint64_t x85; uint8_t/*bool*/ x86 = _addcarryx_u64(x83, x68, x70, &x85);
  { uint64_t x88; uint8_t/*bool*/ x89 = _addcarryx_u64(x86, x71, x73, &x88);
  { uint64_t x91; uint8_t/*bool*/ x92 = _addcarryx_u64(x89, x74, x76, &x91);
  { uint64_t x94; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x92, x77, &x94);
  { uint64_t _; uint8_t/*bool*/ x98 = _addcarryx_u64(0x0, x25, x61, &_);
  { uint64_t x100; uint8_t/*bool*/ x101 = _addcarryx_u64(x98, x43, x79, &x100);
  { uint64_t x103; uint8_t/*bool*/ x104 = _addcarryx_u64(x101, x46, x82, &x103);
  { uint64_t x106; uint8_t/*bool*/ x107 = _addcarryx_u64(x104, x49, x85, &x106);
  { uint64_t x109; uint8_t/*bool*/ x110 = _addcarryx_u64(x107, x52, x88, &x109);
  { uint64_t x112; uint8_t/*bool*/ x113 = _addcarryx_u64(x110, x55, x91, &x112);
  { uint64_t x115; uint8_t/*bool*/ x116 = _addcarryx_u64(x113, x58, x94, &x115);
  { uint64_t x119;  uint64_t x118 = _mulx_u64(x7, x15, &x119);
  { uint64_t x122;  uint64_t x121 = _mulx_u64(x7, x17, &x122);
  { uint64_t x125;  uint64_t x124 = _mulx_u64(x7, x19, &x125);
  { uint64_t x128;  uint64_t x127 = _mulx_u64(x7, x21, &x128);
  { uint64_t x131;  uint64_t x130 = _mulx_u64(x7, x23, &x131);
  { uint64_t x134;  uint64_t x133 = _mulx_u64(x7, x22, &x134);
  { uint64_t x136; uint8_t/*bool*/ x137 = _addcarryx_u64(0x0, x119, x121, &x136);
  { uint64_t x139; uint8_t/*bool*/ x140 = _addcarryx_u64(x137, x122, x124, &x139);
  { uint64_t x142; uint8_t/*bool*/ x143 = _addcarryx_u64(x140, x125, x127, &x142);
  { uint64_t x145; uint8_t/*bool*/ x146 = _addcarryx_u64(x143, x128, x130, &x145);
  { uint64_t x148; uint8_t/*bool*/ x149 = _addcarryx_u64(x146, x131, x133, &x148);
  { uint64_t x151; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x149, x134, &x151);
  { uint64_t x154; uint8_t/*bool*/ x155 = _addcarryx_u64(0x0, x100, x118, &x154);
  { uint64_t x157; uint8_t/*bool*/ x158 = _addcarryx_u64(x155, x103, x136, &x157);
  { uint64_t x160; uint8_t/*bool*/ x161 = _addcarryx_u64(x158, x106, x139, &x160);
  { uint64_t x163; uint8_t/*bool*/ x164 = _addcarryx_u64(x161, x109, x142, &x163);
  { uint64_t x166; uint8_t/*bool*/ x167 = _addcarryx_u64(x164, x112, x145, &x166);
  { uint64_t x169; uint8_t/*bool*/ x170 = _addcarryx_u64(x167, x115, x148, &x169);
  { uint64_t x172; uint8_t/*bool*/ x173 = _addcarryx_u64(x170, x116, x151, &x172);
  { uint64_t x176;  uint64_t x175 = _mulx_u64(x154, 0xffffffffffffffffL, &x176);
  { uint64_t x179;  uint64_t x178 = _mulx_u64(x154, 0xffffffffffffffffL, &x179);
  { uint64_t x182;  uint64_t x181 = _mulx_u64(x154, 0xffffffffffffffffL, &x182);
  { uint64_t x185;  uint64_t x184 = _mulx_u64(x154, 0xffffffffffffffffL, &x185);
  { uint64_t x188;  uint64_t x187 = _mulx_u64(x154, 0xffffffffffffffffL, &x188);
  { uint64_t x191;  uint64_t x190 = _mulx_u64(x154, 0xfffaffffffffffffL, &x191);
  { uint64_t x193; uint8_t/*bool*/ x194 = _addcarryx_u64(0x0, x176, x178, &x193);
  { uint64_t x196; uint8_t/*bool*/ x197 = _addcarryx_u64(x194, x179, x181, &x196);
  { uint64_t x199; uint8_t/*bool*/ x200 = _addcarryx_u64(x197, x182, x184, &x199);
  { uint64_t x202; uint8_t/*bool*/ x203 = _addcarryx_u64(x200, x185, x187, &x202);
  { uint64_t x205; uint8_t/*bool*/ x206 = _addcarryx_u64(x203, x188, x190, &x205);
  { uint64_t x208; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x206, x191, &x208);
  { uint64_t _; uint8_t/*bool*/ x212 = _addcarryx_u64(0x0, x154, x175, &_);
  { uint64_t x214; uint8_t/*bool*/ x215 = _addcarryx_u64(x212, x157, x193, &x214);
  { uint64_t x217; uint8_t/*bool*/ x218 = _addcarryx_u64(x215, x160, x196, &x217);
  { uint64_t x220; uint8_t/*bool*/ x221 = _addcarryx_u64(x218, x163, x199, &x220);
  { uint64_t x223; uint8_t/*bool*/ x224 = _addcarryx_u64(x221, x166, x202, &x223);
  { uint64_t x226; uint8_t/*bool*/ x227 = _addcarryx_u64(x224, x169, x205, &x226);
  { uint64_t x229; uint8_t/*bool*/ x230 = _addcarryx_u64(x227, x172, x208, &x229);
  { uint8_t x231 = ((uint8_t)x230 + x173);
  { uint64_t x234;  uint64_t x233 = _mulx_u64(x9, x15, &x234);
  { uint64_t x237;  uint64_t x236 = _mulx_u64(x9, x17, &x237);
  { uint64_t x240;  uint64_t x239 = _mulx_u64(x9, x19, &x240);
  { uint64_t x243;  uint64_t x242 = _mulx_u64(x9, x21, &x243);
  { uint64_t x246;  uint64_t x245 = _mulx_u64(x9, x23, &x246);
  { uint64_t x249;  uint64_t x248 = _mulx_u64(x9, x22, &x249);
  { uint64_t x251; uint8_t/*bool*/ x252 = _addcarryx_u64(0x0, x234, x236, &x251);
  { uint64_t x254; uint8_t/*bool*/ x255 = _addcarryx_u64(x252, x237, x239, &x254);
  { uint64_t x257; uint8_t/*bool*/ x258 = _addcarryx_u64(x255, x240, x242, &x257);
  { uint64_t x260; uint8_t/*bool*/ x261 = _addcarryx_u64(x258, x243, x245, &x260);
  { uint64_t x263; uint8_t/*bool*/ x264 = _addcarryx_u64(x261, x246, x248, &x263);
  { uint64_t x266; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x264, x249, &x266);
  { uint64_t x269; uint8_t/*bool*/ x270 = _addcarryx_u64(0x0, x214, x233, &x269);
  { uint64_t x272; uint8_t/*bool*/ x273 = _addcarryx_u64(x270, x217, x251, &x272);
  { uint64_t x275; uint8_t/*bool*/ x276 = _addcarryx_u64(x273, x220, x254, &x275);
  { uint64_t x278; uint8_t/*bool*/ x279 = _addcarryx_u64(x276, x223, x257, &x278);
  { uint64_t x281; uint8_t/*bool*/ x282 = _addcarryx_u64(x279, x226, x260, &x281);
  { uint64_t x284; uint8_t/*bool*/ x285 = _addcarryx_u64(x282, x229, x263, &x284);
  { uint64_t x287; uint8_t/*bool*/ x288 = _addcarryx_u64(x285, x231, x266, &x287);
  { uint64_t x291;  uint64_t x290 = _mulx_u64(x269, 0xffffffffffffffffL, &x291);
  { uint64_t x294;  uint64_t x293 = _mulx_u64(x269, 0xffffffffffffffffL, &x294);
  { uint64_t x297;  uint64_t x296 = _mulx_u64(x269, 0xffffffffffffffffL, &x297);
  { uint64_t x300;  uint64_t x299 = _mulx_u64(x269, 0xffffffffffffffffL, &x300);
  { uint64_t x303;  uint64_t x302 = _mulx_u64(x269, 0xffffffffffffffffL, &x303);
  { uint64_t x306;  uint64_t x305 = _mulx_u64(x269, 0xfffaffffffffffffL, &x306);
  { uint64_t x308; uint8_t/*bool*/ x309 = _addcarryx_u64(0x0, x291, x293, &x308);
  { uint64_t x311; uint8_t/*bool*/ x312 = _addcarryx_u64(x309, x294, x296, &x311);
  { uint64_t x314; uint8_t/*bool*/ x315 = _addcarryx_u64(x312, x297, x299, &x314);
  { uint64_t x317; uint8_t/*bool*/ x318 = _addcarryx_u64(x315, x300, x302, &x317);
  { uint64_t x320; uint8_t/*bool*/ x321 = _addcarryx_u64(x318, x303, x305, &x320);
  { uint64_t x323; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x321, x306, &x323);
  { uint64_t _; uint8_t/*bool*/ x327 = _addcarryx_u64(0x0, x269, x290, &_);
  { uint64_t x329; uint8_t/*bool*/ x330 = _addcarryx_u64(x327, x272, x308, &x329);
  { uint64_t x332; uint8_t/*bool*/ x333 = _addcarryx_u64(x330, x275, x311, &x332);
  { uint64_t x335; uint8_t/*bool*/ x336 = _addcarryx_u64(x333, x278, x314, &x335);
  { uint64_t x338; uint8_t/*bool*/ x339 = _addcarryx_u64(x336, x281, x317, &x338);
  { uint64_t x341; uint8_t/*bool*/ x342 = _addcarryx_u64(x339, x284, x320, &x341);
  { uint64_t x344; uint8_t/*bool*/ x345 = _addcarryx_u64(x342, x287, x323, &x344);
  { uint8_t x346 = ((uint8_t)x345 + x288);
  { uint64_t x349;  uint64_t x348 = _mulx_u64(x11, x15, &x349);
  { uint64_t x352;  uint64_t x351 = _mulx_u64(x11, x17, &x352);
  { uint64_t x355;  uint64_t x354 = _mulx_u64(x11, x19, &x355);
  { uint64_t x358;  uint64_t x357 = _mulx_u64(x11, x21, &x358);
  { uint64_t x361;  uint64_t x360 = _mulx_u64(x11, x23, &x361);
  { uint64_t x364;  uint64_t x363 = _mulx_u64(x11, x22, &x364);
  { uint64_t x366; uint8_t/*bool*/ x367 = _addcarryx_u64(0x0, x349, x351, &x366);
  { uint64_t x369; uint8_t/*bool*/ x370 = _addcarryx_u64(x367, x352, x354, &x369);
  { uint64_t x372; uint8_t/*bool*/ x373 = _addcarryx_u64(x370, x355, x357, &x372);
  { uint64_t x375; uint8_t/*bool*/ x376 = _addcarryx_u64(x373, x358, x360, &x375);
  { uint64_t x378; uint8_t/*bool*/ x379 = _addcarryx_u64(x376, x361, x363, &x378);
  { uint64_t x381; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x379, x364, &x381);
  { uint64_t x384; uint8_t/*bool*/ x385 = _addcarryx_u64(0x0, x329, x348, &x384);
  { uint64_t x387; uint8_t/*bool*/ x388 = _addcarryx_u64(x385, x332, x366, &x387);
  { uint64_t x390; uint8_t/*bool*/ x391 = _addcarryx_u64(x388, x335, x369, &x390);
  { uint64_t x393; uint8_t/*bool*/ x394 = _addcarryx_u64(x391, x338, x372, &x393);
  { uint64_t x396; uint8_t/*bool*/ x397 = _addcarryx_u64(x394, x341, x375, &x396);
  { uint64_t x399; uint8_t/*bool*/ x400 = _addcarryx_u64(x397, x344, x378, &x399);
  { uint64_t x402; uint8_t/*bool*/ x403 = _addcarryx_u64(x400, x346, x381, &x402);
  { uint64_t x406;  uint64_t x405 = _mulx_u64(x384, 0xffffffffffffffffL, &x406);
  { uint64_t x409;  uint64_t x408 = _mulx_u64(x384, 0xffffffffffffffffL, &x409);
  { uint64_t x412;  uint64_t x411 = _mulx_u64(x384, 0xffffffffffffffffL, &x412);
  { uint64_t x415;  uint64_t x414 = _mulx_u64(x384, 0xffffffffffffffffL, &x415);
  { uint64_t x418;  uint64_t x417 = _mulx_u64(x384, 0xffffffffffffffffL, &x418);
  { uint64_t x421;  uint64_t x420 = _mulx_u64(x384, 0xfffaffffffffffffL, &x421);
  { uint64_t x423; uint8_t/*bool*/ x424 = _addcarryx_u64(0x0, x406, x408, &x423);
  { uint64_t x426; uint8_t/*bool*/ x427 = _addcarryx_u64(x424, x409, x411, &x426);
  { uint64_t x429; uint8_t/*bool*/ x430 = _addcarryx_u64(x427, x412, x414, &x429);
  { uint64_t x432; uint8_t/*bool*/ x433 = _addcarryx_u64(x430, x415, x417, &x432);
  { uint64_t x435; uint8_t/*bool*/ x436 = _addcarryx_u64(x433, x418, x420, &x435);
  { uint64_t x438; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x436, x421, &x438);
  { uint64_t _; uint8_t/*bool*/ x442 = _addcarryx_u64(0x0, x384, x405, &_);
  { uint64_t x444; uint8_t/*bool*/ x445 = _addcarryx_u64(x442, x387, x423, &x444);
  { uint64_t x447; uint8_t/*bool*/ x448 = _addcarryx_u64(x445, x390, x426, &x447);
  { uint64_t x450; uint8_t/*bool*/ x451 = _addcarryx_u64(x448, x393, x429, &x450);
  { uint64_t x453; uint8_t/*bool*/ x454 = _addcarryx_u64(x451, x396, x432, &x453);
  { uint64_t x456; uint8_t/*bool*/ x457 = _addcarryx_u64(x454, x399, x435, &x456);
  { uint64_t x459; uint8_t/*bool*/ x460 = _addcarryx_u64(x457, x402, x438, &x459);
  { uint8_t x461 = ((uint8_t)x460 + x403);
  { uint64_t x464;  uint64_t x463 = _mulx_u64(x13, x15, &x464);
  { uint64_t x467;  uint64_t x466 = _mulx_u64(x13, x17, &x467);
  { uint64_t x470;  uint64_t x469 = _mulx_u64(x13, x19, &x470);
  { uint64_t x473;  uint64_t x472 = _mulx_u64(x13, x21, &x473);
  { uint64_t x476;  uint64_t x475 = _mulx_u64(x13, x23, &x476);
  { uint64_t x479;  uint64_t x478 = _mulx_u64(x13, x22, &x479);
  { uint64_t x481; uint8_t/*bool*/ x482 = _addcarryx_u64(0x0, x464, x466, &x481);
  { uint64_t x484; uint8_t/*bool*/ x485 = _addcarryx_u64(x482, x467, x469, &x484);
  { uint64_t x487; uint8_t/*bool*/ x488 = _addcarryx_u64(x485, x470, x472, &x487);
  { uint64_t x490; uint8_t/*bool*/ x491 = _addcarryx_u64(x488, x473, x475, &x490);
  { uint64_t x493; uint8_t/*bool*/ x494 = _addcarryx_u64(x491, x476, x478, &x493);
  { uint64_t x496; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x494, x479, &x496);
  { uint64_t x499; uint8_t/*bool*/ x500 = _addcarryx_u64(0x0, x444, x463, &x499);
  { uint64_t x502; uint8_t/*bool*/ x503 = _addcarryx_u64(x500, x447, x481, &x502);
  { uint64_t x505; uint8_t/*bool*/ x506 = _addcarryx_u64(x503, x450, x484, &x505);
  { uint64_t x508; uint8_t/*bool*/ x509 = _addcarryx_u64(x506, x453, x487, &x508);
  { uint64_t x511; uint8_t/*bool*/ x512 = _addcarryx_u64(x509, x456, x490, &x511);
  { uint64_t x514; uint8_t/*bool*/ x515 = _addcarryx_u64(x512, x459, x493, &x514);
  { uint64_t x517; uint8_t/*bool*/ x518 = _addcarryx_u64(x515, x461, x496, &x517);
  { uint64_t x521;  uint64_t x520 = _mulx_u64(x499, 0xffffffffffffffffL, &x521);
  { uint64_t x524;  uint64_t x523 = _mulx_u64(x499, 0xffffffffffffffffL, &x524);
  { uint64_t x527;  uint64_t x526 = _mulx_u64(x499, 0xffffffffffffffffL, &x527);
  { uint64_t x530;  uint64_t x529 = _mulx_u64(x499, 0xffffffffffffffffL, &x530);
  { uint64_t x533;  uint64_t x532 = _mulx_u64(x499, 0xffffffffffffffffL, &x533);
  { uint64_t x536;  uint64_t x535 = _mulx_u64(x499, 0xfffaffffffffffffL, &x536);
  { uint64_t x538; uint8_t/*bool*/ x539 = _addcarryx_u64(0x0, x521, x523, &x538);
  { uint64_t x541; uint8_t/*bool*/ x542 = _addcarryx_u64(x539, x524, x526, &x541);
  { uint64_t x544; uint8_t/*bool*/ x545 = _addcarryx_u64(x542, x527, x529, &x544);
  { uint64_t x547; uint8_t/*bool*/ x548 = _addcarryx_u64(x545, x530, x532, &x547);
  { uint64_t x550; uint8_t/*bool*/ x551 = _addcarryx_u64(x548, x533, x535, &x550);
  { uint64_t x553; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x551, x536, &x553);
  { uint64_t _; uint8_t/*bool*/ x557 = _addcarryx_u64(0x0, x499, x520, &_);
  { uint64_t x559; uint8_t/*bool*/ x560 = _addcarryx_u64(x557, x502, x538, &x559);
  { uint64_t x562; uint8_t/*bool*/ x563 = _addcarryx_u64(x560, x505, x541, &x562);
  { uint64_t x565; uint8_t/*bool*/ x566 = _addcarryx_u64(x563, x508, x544, &x565);
  { uint64_t x568; uint8_t/*bool*/ x569 = _addcarryx_u64(x566, x511, x547, &x568);
  { uint64_t x571; uint8_t/*bool*/ x572 = _addcarryx_u64(x569, x514, x550, &x571);
  { uint64_t x574; uint8_t/*bool*/ x575 = _addcarryx_u64(x572, x517, x553, &x574);
  { uint8_t x576 = ((uint8_t)x575 + x518);
  { uint64_t x579;  uint64_t x578 = _mulx_u64(x12, x15, &x579);
  { uint64_t x582;  uint64_t x581 = _mulx_u64(x12, x17, &x582);
  { uint64_t x585;  uint64_t x584 = _mulx_u64(x12, x19, &x585);
  { uint64_t x588;  uint64_t x587 = _mulx_u64(x12, x21, &x588);
  { uint64_t x591;  uint64_t x590 = _mulx_u64(x12, x23, &x591);
  { uint64_t x594;  uint64_t x593 = _mulx_u64(x12, x22, &x594);
  { uint64_t x596; uint8_t/*bool*/ x597 = _addcarryx_u64(0x0, x579, x581, &x596);
  { uint64_t x599; uint8_t/*bool*/ x600 = _addcarryx_u64(x597, x582, x584, &x599);
  { uint64_t x602; uint8_t/*bool*/ x603 = _addcarryx_u64(x600, x585, x587, &x602);
  { uint64_t x605; uint8_t/*bool*/ x606 = _addcarryx_u64(x603, x588, x590, &x605);
  { uint64_t x608; uint8_t/*bool*/ x609 = _addcarryx_u64(x606, x591, x593, &x608);
  { uint64_t x611; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x609, x594, &x611);
  { uint64_t x614; uint8_t/*bool*/ x615 = _addcarryx_u64(0x0, x559, x578, &x614);
  { uint64_t x617; uint8_t/*bool*/ x618 = _addcarryx_u64(x615, x562, x596, &x617);
  { uint64_t x620; uint8_t/*bool*/ x621 = _addcarryx_u64(x618, x565, x599, &x620);
  { uint64_t x623; uint8_t/*bool*/ x624 = _addcarryx_u64(x621, x568, x602, &x623);
  { uint64_t x626; uint8_t/*bool*/ x627 = _addcarryx_u64(x624, x571, x605, &x626);
  { uint64_t x629; uint8_t/*bool*/ x630 = _addcarryx_u64(x627, x574, x608, &x629);
  { uint64_t x632; uint8_t/*bool*/ x633 = _addcarryx_u64(x630, x576, x611, &x632);
  { uint64_t x636;  uint64_t x635 = _mulx_u64(x614, 0xffffffffffffffffL, &x636);
  { uint64_t x639;  uint64_t x638 = _mulx_u64(x614, 0xffffffffffffffffL, &x639);
  { uint64_t x642;  uint64_t x641 = _mulx_u64(x614, 0xffffffffffffffffL, &x642);
  { uint64_t x645;  uint64_t x644 = _mulx_u64(x614, 0xffffffffffffffffL, &x645);
  { uint64_t x648;  uint64_t x647 = _mulx_u64(x614, 0xffffffffffffffffL, &x648);
  { uint64_t x651;  uint64_t x650 = _mulx_u64(x614, 0xfffaffffffffffffL, &x651);
  { uint64_t x653; uint8_t/*bool*/ x654 = _addcarryx_u64(0x0, x636, x638, &x653);
  { uint64_t x656; uint8_t/*bool*/ x657 = _addcarryx_u64(x654, x639, x641, &x656);
  { uint64_t x659; uint8_t/*bool*/ x660 = _addcarryx_u64(x657, x642, x644, &x659);
  { uint64_t x662; uint8_t/*bool*/ x663 = _addcarryx_u64(x660, x645, x647, &x662);
  { uint64_t x665; uint8_t/*bool*/ x666 = _addcarryx_u64(x663, x648, x650, &x665);
  { uint64_t x668; uint8_t/*bool*/ _ = _addcarryx_u64(0x0, x666, x651, &x668);
  { uint64_t _; uint8_t/*bool*/ x672 = _addcarryx_u64(0x0, x614, x635, &_);
  { uint64_t x674; uint8_t/*bool*/ x675 = _addcarryx_u64(x672, x617, x653, &x674);
  { uint64_t x677; uint8_t/*bool*/ x678 = _addcarryx_u64(x675, x620, x656, &x677);
  { uint64_t x680; uint8_t/*bool*/ x681 = _addcarryx_u64(x678, x623, x659, &x680);
  { uint64_t x683; uint8_t/*bool*/ x684 = _addcarryx_u64(x681, x626, x662, &x683);
  { uint64_t x686; uint8_t/*bool*/ x687 = _addcarryx_u64(x684, x629, x665, &x686);
  { uint64_t x689; uint8_t/*bool*/ x690 = _addcarryx_u64(x687, x632, x668, &x689);
  { uint8_t x691 = ((uint8_t)x690 + x633);
  { uint64_t x693; uint8_t/*bool*/ x694 = _subborrow_u64(0x0, x674, 0xffffffffffffffffL, &x693);
  { uint64_t x696; uint8_t/*bool*/ x697 = _subborrow_u64(x694, x677, 0xffffffffffffffffL, &x696);
  { uint64_t x699; uint8_t/*bool*/ x700 = _subborrow_u64(x697, x680, 0xffffffffffffffffL, &x699);
  { uint64_t x702; uint8_t/*bool*/ x703 = _subborrow_u64(x700, x683, 0xffffffffffffffffL, &x702);
  { uint64_t x705; uint8_t/*bool*/ x706 = _subborrow_u64(x703, x686, 0xffffffffffffffffL, &x705);
  { uint64_t x708; uint8_t/*bool*/ x709 = _subborrow_u64(x706, x689, 0xfffaffffffffffffL, &x708);
  { uint64_t _; uint8_t/*bool*/ x712 = _subborrow_u64(x709, x691, 0x0, &_);
  { uint64_t x713 = cmovznz64(x712, x708, x689);
  { uint64_t x714 = cmovznz64(x712, x705, x686);
  { uint64_t x715 = cmovznz64(x712, x702, x683);
  { uint64_t x716 = cmovznz64(x712, x699, x680);
  { uint64_t x717 = cmovznz64(x712, x696, x677);
  { uint64_t x718 = cmovznz64(x712, x693, x674);
  out[0] = x718;
  out[1] = x717;
  out[2] = x716;
  out[3] = x715;
  out[4] = x714;
  out[5] = x713;
  }}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}
}
