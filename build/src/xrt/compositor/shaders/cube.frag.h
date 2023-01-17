	// 8.13.3559
	 #pragma once
const uint32_t shaders_cube_frag[] = {
	0x07230203,0x00010000,0x00080008,0x00000038,0x00000000,0x00020011,0x00000001,0x0006000b,
	0x00000001,0x4c534c47,0x6474732e,0x3035342e,0x00000000,0x0003000e,0x00000000,0x00000001,
	0x0007000f,0x00000004,0x00000004,0x6e69616d,0x00000000,0x0000000b,0x0000002e,0x00030010,
	0x00000004,0x00000007,0x00030003,0x00000002,0x000001cc,0x00040005,0x00000004,0x6e69616d,
	0x00000000,0x00050005,0x00000009,0x67617266,0x6f6f635f,0x00006472,0x00030005,0x0000000b,
	0x00007675,0x00050005,0x00000017,0x77656976,0x7269645f,0x00000000,0x00060005,0x0000001c,
	0x6e617254,0x726f6673,0x6974616d,0x00006e6f,0x00040006,0x0000001c,0x00000000,0x0070766d,
	0x00050006,0x0000001c,0x00000001,0x7366666f,0x00007465,0x00050006,0x0000001c,0x00000002,
	0x65747865,0x0000746e,0x00050006,0x0000001c,0x00000003,0x70696c66,0x0000795f,0x00030005,
	0x0000001e,0x006f6275,0x00050005,0x0000002e,0x5f74756f,0x6f6c6f63,0x00000072,0x00040005,
	0x00000032,0x65627563,0x00000000,0x00040047,0x0000000b,0x0000001e,0x00000000,0x00040048,
	0x0000001c,0x00000000,0x00000005,0x00050048,0x0000001c,0x00000000,0x00000023,0x00000000,
	0x00050048,0x0000001c,0x00000000,0x00000007,0x00000010,0x00050048,0x0000001c,0x00000001,
	0x00000023,0x00000040,0x00050048,0x0000001c,0x00000002,0x00000023,0x00000048,0x00050048,
	0x0000001c,0x00000003,0x00000023,0x00000050,0x00030047,0x0000001c,0x00000002,0x00040047,
	0x0000001e,0x00000022,0x00000000,0x00040047,0x0000001e,0x00000021,0x00000000,0x00040047,
	0x0000002e,0x0000001e,0x00000000,0x00040047,0x00000032,0x00000022,0x00000000,0x00040047,
	0x00000032,0x00000021,0x00000001,0x00020013,0x00000002,0x00030021,0x00000003,0x00000002,
	0x00030016,0x00000006,0x00000020,0x00040017,0x00000007,0x00000006,0x00000002,0x00040020,
	0x00000008,0x00000007,0x00000007,0x00040020,0x0000000a,0x00000001,0x00000007,0x0004003b,
	0x0000000a,0x0000000b,0x00000001,0x0004002b,0x00000006,0x00000010,0x40000000,0x0004002b,
	0x00000006,0x00000012,0x3f800000,0x00040017,0x00000015,0x00000006,0x00000004,0x00040020,
	0x00000016,0x00000007,0x00000015,0x00040018,0x00000018,0x00000015,0x00000004,0x00040015,
	0x00000019,0x00000020,0x00000001,0x00040017,0x0000001a,0x00000019,0x00000002,0x00040015,
	0x0000001b,0x00000020,0x00000000,0x0006001e,0x0000001c,0x00000018,0x0000001a,0x0000001a,
	0x0000001b,0x00040020,0x0000001d,0x00000002,0x0000001c,0x0004003b,0x0000001d,0x0000001e,
	0x00000002,0x0004002b,0x00000019,0x0000001f,0x00000000,0x00040020,0x00000020,0x00000002,
	0x00000018,0x0004002b,0x0000001b,0x00000023,0x00000000,0x00040020,0x00000024,0x00000007,
	0x00000006,0x0004002b,0x0000001b,0x00000027,0x00000001,0x00040020,0x0000002d,0x00000003,
	0x00000015,0x0004003b,0x0000002d,0x0000002e,0x00000003,0x00090019,0x0000002f,0x00000006,
	0x00000003,0x00000000,0x00000000,0x00000000,0x00000001,0x00000000,0x0003001b,0x00000030,
	0x0000002f,0x00040020,0x00000031,0x00000000,0x00000030,0x0004003b,0x00000031,0x00000032,
	0x00000000,0x00040017,0x00000034,0x00000006,0x00000003,0x00050036,0x00000002,0x00000004,
	0x00000000,0x00000003,0x000200f8,0x00000005,0x0004003b,0x00000008,0x00000009,0x00000007,
	0x0004003b,0x00000016,0x00000017,0x00000007,0x0004003d,0x00000007,0x0000000c,0x0000000b,
	0x00050051,0x00000006,0x0000000d,0x0000000c,0x00000000,0x00050051,0x00000006,0x0000000e,
	0x0000000c,0x00000001,0x00050050,0x00000007,0x0000000f,0x0000000d,0x0000000e,0x0005008e,
	0x00000007,0x00000011,0x0000000f,0x00000010,0x00050050,0x00000007,0x00000013,0x00000012,
	0x00000012,0x00050083,0x00000007,0x00000014,0x00000011,0x00000013,0x0003003e,0x00000009,
	0x00000014,0x00050041,0x00000020,0x00000021,0x0000001e,0x0000001f,0x0004003d,0x00000018,
	0x00000022,0x00000021,0x00050041,0x00000024,0x00000025,0x00000009,0x00000023,0x0004003d,
	0x00000006,0x00000026,0x00000025,0x00050041,0x00000024,0x00000028,0x00000009,0x00000027,
	0x0004003d,0x00000006,0x00000029,0x00000028,0x00070050,0x00000015,0x0000002a,0x00000026,
	0x00000029,0x00000012,0x00000012,0x00050091,0x00000015,0x0000002b,0x00000022,0x0000002a,
	0x0006000c,0x00000015,0x0000002c,0x00000001,0x00000045,0x0000002b,0x0003003e,0x00000017,
	0x0000002c,0x0004003d,0x00000030,0x00000033,0x00000032,0x0004003d,0x00000015,0x00000035,
	0x00000017,0x0008004f,0x00000034,0x00000036,0x00000035,0x00000035,0x00000000,0x00000001,
	0x00000002,0x00050057,0x00000015,0x00000037,0x00000033,0x00000036,0x0003003e,0x0000002e,
	0x00000037,0x000100fd,0x00010038
};