static const uint8_t fs_font_distance_field_glsl[1019] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xdb, 0x03, 0x00, 0x00, 0x76, // Color..........v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, // 4 v_color0;.vary
	0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ing highp vec4 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // orm lowp sampler
	0x43, 0x75, 0x62, 0x65, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, // Cube s_texColor;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x67, 0x62, //   lowp float rgb
	0x61, 0x5f, 0x31, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, // a_1[4];.  lowp v
	0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, // ec4 tmpvar_2;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // tmpvar_2 = textu
	0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // reCube (s_texCol
	0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // or, v_texcoord0.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x69, 0x6e, // xyz);.  highp in
	0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // t tmpvar_3;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, // pvar_3 = int(((v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, // _texcoord0.w * 4
	0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, // .0) + 0.5));.  r
	0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // gba_1[0] = tmpva
	0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, // r_2.z;.  rgba_1[
	0x31, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, // 1] = tmpvar_2.y;
	0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x74, // .  rgba_1[2] = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, // mpvar_2.x;.  rgb
	0x61, 0x5f, 0x31, 0x5b, 0x33, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // a_1[3] = tmpvar_
	0x32, 0x2e, 0x77, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // 2.w;.  highp vec
	0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // 3 tmpvar_4;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, 0x76, 0x5f, // pvar_4 = dFdx(v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, // texcoord0.xyz);.
	0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, //   highp vec3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_5;.  tmpvar_
	0x35, 0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x79, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // 5 = dFdy(v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, // ord0.xyz);.  hig
	0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // hp float tmpvar_
	0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, // 6;.  tmpvar_6 = 
	0x28, 0x38, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x28, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, // (8.0 * (sqrt(.  
	0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2c, //   dot (tmpvar_4,
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, //  tmpvar_4).  ) +
	0x20, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, //  sqrt(.    dot (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // tmpvar_5, tmpvar
	0x5f, 0x35, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, // _5).  )));.  hig
	0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, // hp float edge0_7
	0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x30, // ;.  edge0_7 = (0
	0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, // .5 - tmpvar_6);.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, //   lowp float tmp
	0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_8;.  tmpvar_
	0x38, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x72, 0x67, 0x62, // 8 = clamp (((rgb
	0x61, 0x5f, 0x31, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5d, 0x20, 0x2d, 0x20, // a_1[tmpvar_3] - 
	0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, // edge0_7) / (.   
	0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, //  (0.5 + tmpvar_6
	0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, 0x29, // ).   - edge0_7))
	0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, // , 0.0, 1.0);.  l
	0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // owp vec4 tmpvar_
	0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x78, 0x79, // 9;.  tmpvar_9.xy
	0x7a, 0x20, 0x3d, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, // z = v_color0.xyz
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x77, 0x20, 0x3d, // ;.  tmpvar_9.w =
	0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x28, //  (v_color0.w * (
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, // tmpvar_8 * (tmpv
	0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x33, 0x2e, 0x30, // ar_8 * .    (3.0
	0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, 0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, //  - (2.0 * tmpvar
	0x5f, 0x38, 0x29, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, // _8)).  )));.  gl
	0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, // _FragColor = tmp
	0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // var_9;.}...
};
static const uint8_t fs_font_distance_field_dx9[746] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xcc, 0x02, 0x00, 0x03, 0xff, // Color0..........
	0xff, 0xfe, 0xff, 0x20, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, // ... .CTAB....S..
	0x00, 0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, // ................
	0x00, 0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, // .L...0..........
	0x00, 0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // .<.......s_texCo
	0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, // lor.............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, // .....ps_3_0.Micr
	0x6f, 0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, // osoft (R) HLSL S
	0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, // hader Compiler 1
	0x30, 0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, // 0.1..Q..........
	0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, // @...?.......?Q..
	0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, // ................
	0xc0, 0x00, 0x00, 0x40, 0xc0, 0x51, 0x00, 0x00, 0x05, 0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, // ...@.Q..........
	0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0x40, 0x1f, 0x00, 0x00, // A...?......@@...
	0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, // ................
	0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, // ................
	0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, // ................
	0xa0, 0x00, 0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, // ...U............
	0x80, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, // .X.........U....
	0xa0, 0x00, 0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, // ................
	0x80, 0x00, 0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, // ...U.X..........
	0x80, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, // ................
	0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, // .......U........
	0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, // .........X......
	0x80, 0x00, 0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, 0x00, 0x00, 0xaa, 0xa0, 0x42, 0x00, 0x00, // .............B..
	0x03, 0x01, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, // ................
	0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xc6, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, // ................
	0x02, 0x00, 0x00, 0x0e, 0x80, 0x01, 0x00, 0x90, 0x91, 0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0e, // ................
	0x80, 0x00, 0x00, 0xe4, 0x80, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0xf9, // ................
	0x80, 0x00, 0x00, 0xf9, 0x80, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, // ...............U
	0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x5b, 0x00, 0x00, // ...........U.[..
	0x02, 0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x90, 0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x04, // ................
	0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, // ................
	0x80, 0x00, 0x00, 0xaa, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, // ................
	0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0xaa, // ...........U....
	0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, // ...........U....
	0xa1, 0x02, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, // ...U...........U
	0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, // .......U........
	0x80, 0x00, 0x00, 0xaa, 0x81, 0x00, 0x00, 0xe4, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, // ................
	0x80, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x11, 0x80, 0x00, 0x00, 0x55, // ...U...........U
	0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, // ................
	0x80, 0x02, 0x00, 0xaa, 0xa0, 0x02, 0x00, 0xff, 0xa0, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, // ................
	0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, // ................
	0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x08, // .......U........
	0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xff, 0x90, 0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, // ................
	0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, 0x00,                                     // ..........
};
static const uint8_t fs_font_distance_field_dx11[1053] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0xfc, 0x03, 0x44, 0x58, 0x42, // Color0.......DXB
	0x43, 0x9a, 0xd6, 0x47, 0xb1, 0x98, 0xc8, 0x0f, 0x79, 0xab, 0x0a, 0x57, 0x47, 0xee, 0xac, 0xc0, // C..G....y..WG...
	0xfe, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, // .............,..
	0x00, 0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, // .........ISGNl..
	0x00, 0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........P......
	0x00, 0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, // ................
	0x00, 0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // ................
	0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........b......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, // ................
	0x00, 0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, // .SV_POSITION.COL
	0x4f, 0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, // OR.TEXCOORD..OSG
	0x4e, 0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, // N,........... ..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, // .....SV_TARGET..
	0xab, 0x53, 0x48, 0x44, 0x52, 0x20, 0x03, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, // .SHDR ...@......
	0x00, 0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, // .Z....`......X0.
	0x04, 0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, // ..p......UU..b..
	0x03, 0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, // .........b......
	0x00, 0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....e.... .....
	0x00, 0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, // .h.......i......
	0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, // .........E......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, // .....F.......F~.
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // ......`......6..
	0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, // ..0 .........*..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, // .....6....0 ....
	0x00, 0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, // .............6..
	0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // ..0 ............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, // .....6....0 ....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, // .....:.......2..
	0x09, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, // .........:......
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@.....@.@.....
	0x3f, 0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, // ?...............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // .....6..........
	0x00, 0x0a, 0x30, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ..0 ............
	0x00, 0x36, 0x00, 0x00, 0x06, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, // .6..............
	0x80, 0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0xe2, 0x00, 0x10, // .A..............
	0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....V..........
	0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, // ."..............
	0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, // .............r..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, // .....F..........
	0x07, 0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, // .B.......F......
	0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x05, 0x62, 0x00, 0x10, // .F.......K...b..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .....V..........
	0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ."..............
	0x00, 0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x42, 0x00, 0x10, // .*.......2...B..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // .........A......
	0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, // ..@.....A.@.....
	0x3f, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, // ?2..."..........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, // ......@.....A.@.
	0x00, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ....?....2......
	0x00, 0xa6, 0x0a, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, // .....A.......F..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0a, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ........."......
	0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, // ..@.....?...?...
	0x3f, 0x00, 0x00, 0x80, 0x3f, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, // ?...?........8 .
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, // .........2..."..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, // ..............@.
	0x00, 0x00, 0x00, 0x00, 0xc0, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x38, 0x00, 0x00, // ......@....@@8..
	0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, // .........8......
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, // .....8.... .....
	0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, // .........:......
	0x00, 0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, // .6...r ......F..
	0x00, 0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                   // .....>.......
};
static const uint8_t fs_font_distance_field_mtl[1539] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0xf4, 0x05, 0x00, 0x00, 0x75, 0x73, // FSH...........us
	0x69, 0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, // ing namespace me
	0x74, 0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, // tal;.struct xlat
	0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, // MtlShaderInput {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, // .  float4 v_colo
	0x72, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x74, // r0;.  float4 v_t
	0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, // excoord0;.};.str
	0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, // uct xlatMtlShade
	0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x68, 0x61, 0x6c, 0x66, // rOutput {.  half
	0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, // 4 gl_FragColor;.
	0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.struct xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, // lShaderUniform {
	0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, 0x78, 0x6c, 0x61, // .};.fragment xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x78, 0x6c, //  xlatMtlMain (xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, // atMtlShaderInput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, 0x67, 0x65, 0x5f, //  _mtl_i [[stage_
	0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, 0x74, 0x20, 0x78, // in]], constant x
	0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, // latMtlShaderUnif
	0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, 0x5b, 0x62, 0x75, // orm& _mtl_u [[bu
	0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, 0x20, 0x20, 0x20, // ffer(0)]].  ,   
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x63, 0x75, 0x62, 0x65, 0x3c, 0x66, 0x6c, 0x6f, 0x61, // texturecube<floa
	0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, // t> s_texColor [[
	0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, 0x61, // texture(0)]], sa
	0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, // mpler _mtlsmp_s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, 0x6c, // texColor [[sampl
	0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, 0x61, // er(0)]]).{.  xla
	0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, // tMtlShaderOutput
	0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x61, 0x6c, 0x66, 0x20, //  _mtl_o;.  half 
	0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x61, 0x6c, // rgba_1[4];.  hal
	0x66, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x30, 0x3b, // f4 tmpvar_2 = 0;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x68, 0x61, // .  tmpvar_2 = ha
	0x6c, 0x66, 0x34, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, // lf4(s_texColor.s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, // ample(_mtlsmp_s_
	0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, // texColor, (float
	0x33, 0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, // 3)(_mtl_i.v_texc
	0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, // oord0.xyz)));.  
	0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x30, // int tmpvar_3 = 0
	0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x20, 0x3d, 0x20, 0x69, // ;.  tmpvar_3 = i
	0x6e, 0x74, 0x28, 0x28, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, // nt(((_mtl_i.v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, // xcoord0.w * 4.0)
	0x20, 0x2b, 0x20, 0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, //  + 0.5));.  rgba
	0x5f, 0x31, 0x5b, 0x30, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, // _1[0] = tmpvar_2
	0x2e, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, // .z;.  rgba_1[1] 
	0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, // = tmpvar_2.y;.  
	0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, // rgba_1[2] = tmpv
	0x61, 0x72, 0x5f, 0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, // ar_2.x;.  rgba_1
	0x5b, 0x33, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, // [3] = tmpvar_2.w
	0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // ;.  float3 tmpva
	0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // r_4 = 0;.  tmpva
	0x72, 0x5f, 0x34, 0x20, 0x3d, 0x20, 0x64, 0x66, 0x64, 0x78, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, // r_4 = dfdx(_mtl_
	0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, // i.v_texcoord0.xy
	0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x33, 0x20, 0x74, 0x6d, 0x70, // z);.  float3 tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, // var_5 = 0;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x64, 0x66, 0x64, 0x79, 0x28, 0x2d, 0x5f, 0x6d, // var_5 = dfdy(-_m
	0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // tl_i.v_texcoord0
	0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, // .xyz);.  float t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, // mpvar_6 = 0;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x38, 0x2e, 0x30, 0x20, 0x2a, // mpvar_6 = (8.0 *
	0x20, 0x28, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, //  (sqrt(.    dot 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // (tmpvar_4, tmpva
	0x72, 0x5f, 0x34, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, 0x20, 0x73, 0x71, 0x72, 0x74, 0x28, // r_4).  ) + sqrt(
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .    dot (tmpvar
	0x5f, 0x35, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x0a, 0x20, 0x20, // _5, tmpvar_5).  
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x65, 0x64, 0x67, // )));.  float edg
	0x65, 0x30, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, 0x67, 0x65, // e0_7 = 0;.  edge
	0x30, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, 0x6d, 0x70, // 0_7 = (0.5 - tmp
	0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, // var_6);.  float 
	0x65, 0x64, 0x67, 0x65, 0x31, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x65, // edge1_8 = 0;.  e
	0x64, 0x67, 0x65, 0x31, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2b, 0x20, // dge1_8 = (0.5 + 
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x61, 0x6c, // tmpvar_6);.  hal
	0x66, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, // f tmpvar_9 = 0;.
	0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x3d, 0x20, 0x63, 0x6c, 0x61, //   tmpvar_9 = cla
	0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, 0x28, 0x28, 0x66, 0x6c, 0x6f, // mp (((half)((flo
	0x61, 0x74, 0x29, 0x28, 0x28, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, 0x28, 0x28, 0x66, 0x6c, 0x6f, // at)(((half)((flo
	0x61, 0x74, 0x29, 0x28, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x74, 0x6d, 0x70, 0x76, 0x61, // at)(rgba_1[tmpva
	0x72, 0x5f, 0x33, 0x5d, 0x29, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, // r_3]) - edge0_7)
	0x29, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x65, 0x64, 0x67, 0x65, 0x31, 0x5f, 0x38, 0x20, 0x2d, 0x20, // )) / (edge1_8 - 
	0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, 0x29, 0x29, 0x2c, 0x20, 0x28, 0x68, 0x61, 0x6c, // edge0_7))), (hal
	0x66, 0x29, 0x30, 0x2e, 0x30, 0x2c, 0x20, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, 0x31, 0x2e, 0x30, // f)0.0, (half)1.0
	0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x61, 0x6c, 0x66, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // );.  half4 tmpva
	0x72, 0x5f, 0x31, 0x30, 0x20, 0x3d, 0x20, 0x30, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, // r_10 = 0;.  tmpv
	0x61, 0x72, 0x5f, 0x31, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x68, 0x61, 0x6c, 0x66, // ar_10.xyz = half
	0x33, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // 3(_mtl_i.v_color
	0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // 0.xyz);.  tmpvar
	0x5f, 0x31, 0x30, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, 0x28, // _10.w = ((half)(
	0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, // _mtl_i.v_color0.
	0x77, 0x20, 0x2a, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x29, 0x28, 0x28, 0x74, 0x6d, 0x70, // w * (float)((tmp
	0x76, 0x61, 0x72, 0x5f, 0x39, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // var_9 * (tmpvar_
	0x39, 0x20, 0x2a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, // 9 * .    ((half)
	0x28, 0x33, 0x2e, 0x30, 0x29, 0x20, 0x2d, 0x20, 0x28, 0x28, 0x68, 0x61, 0x6c, 0x66, 0x29, 0x28, // (3.0) - ((half)(
	0x32, 0x2e, 0x30, 0x29, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x29, // 2.0) * tmpvar_9)
	0x29, 0x0a, 0x20, 0x20, 0x29, 0x29, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, // ).  )))));.  _mt
	0x6c, 0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, // l_o.gl_FragColor
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x30, 0x3b, 0x0a, 0x20, 0x20, //  = tmpvar_10;.  
	0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, // return _mtl_o;.}
	0x0a, 0x0a, 0x00,                                                                               // ...
};
extern const uint8_t* fs_font_distance_field_pssl;
extern const uint32_t fs_font_distance_field_pssl_size;