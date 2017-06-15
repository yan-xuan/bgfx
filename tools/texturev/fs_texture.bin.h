static const uint8_t fs_texture_glsl[315] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, // Color.......u_pa
	0x72, 0x61, 0x6d, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x0c, 0x01, 0x00, 0x00, 0x76, 0x61, // rams..........va
	0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // rying highp vec4
	0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, 0x69, //  v_color0;.varyi
	0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x32, 0x20, 0x76, 0x5f, // ng highp vec2 v_
	0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, // texcoord0;.unifo
	0x72, 0x6d, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x20, 0x73, 0x5f, 0x74, // rm sampler2D s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, // exColor;.uniform
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, //  highp vec4 u_pa
	0x72, 0x61, 0x6d, 0x73, 0x3b, 0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, // rams;.void main 
	0x28, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, // ().{.  lowp vec4
	0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, //  tmpvar_1;.  tmp
	0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, // var_1 = texture2
	0x44, 0x4c, 0x6f, 0x64, 0x20, 0x20, 0x20, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, // DLod    (s_texCo
	0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, // lor, v_texcoord0
	0x2c, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x3b, 0x0a, 0x20, // , u_params.x);. 
	0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, //  gl_FragColor = 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x31, 0x20, 0x2a, 0x20, 0x76, 0x5f, 0x63, 0x6f, // (tmpvar_1 * v_co
	0x6c, 0x6f, 0x72, 0x30, 0x29, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                               // lor0);.}...
};
static const uint8_t fs_texture_spv[3544] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0xbc, 0x0d, 0x03, 0x02, 0x23, 0x07, 0x00, // ams..........#..
	0x00, 0x01, 0x00, 0x01, 0x00, 0x08, 0x00, 0x6f, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, // .......ob.......
	0x00, 0x02, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, // ...............G
	0x4c, 0x53, 0x4c, 0x2e, 0x73, 0x74, 0x64, 0x2e, 0x34, 0x35, 0x30, 0x00, 0x00, 0x00, 0x00, 0x0e, // LSL.std.450.....
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x08, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x77, // .......main....w
	0x0e, 0x00, 0x00, 0x74, 0x14, 0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x10, 0x00, 0x03, 0x00, 0x1f, // ...t............
	0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x03, 0x00, 0x03, 0x00, 0x05, 0x00, 0x00, 0x00, 0xf4, // ................
	0x01, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x6d, 0x61, 0x69, 0x6e, 0x00, // ...........main.
	0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0x61, 0x09, 0x00, 0x00, 0x42, 0x67, 0x66, 0x78, 0x53, // .......a...BgfxS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x61, // ampler2D.......a
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x6d, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // .......m_sampler
	0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x61, 0x09, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x6d, // .......a.......m
	0x5f, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x10, 0x00, 0xce, // _texture........
	0x14, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x44, // ...bgfxTexture2D
	0x4c, 0x6f, 0x64, 0x28, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x2d, 0x42, 0x67, 0x66, 0x78, 0x53, // Lod(struct-BgfxS
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x32, 0x44, 0x2d, 0x70, 0x31, 0x2d, 0x74, 0x32, 0x31, 0x31, // ampler2D-p1-t211
	0x3b, 0x76, 0x66, 0x32, 0x3b, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x27, // ;vf2;f1;.......'
	0x0e, 0x00, 0x00, 0x5f, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x00, 0x05, // ..._sampler.....
	0x00, 0x04, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x5f, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x00, 0x00, 0x05, // ......._coord...
	0x00, 0x04, 0x00, 0x2e, 0x12, 0x00, 0x00, 0x5f, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x00, 0x00, 0x05, // ......._level...
	0x00, 0x06, 0x00, 0x35, 0x13, 0x00, 0x00, 0x76, 0x65, 0x63, 0x34, 0x5f, 0x73, 0x70, 0x6c, 0x61, // ...5...vec4_spla
	0x74, 0x28, 0x66, 0x31, 0x3b, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x5f, // t(f1;.........._
	0x78, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0x16, 0x0e, 0x00, 0x00, 0x40, 0x6d, 0x61, 0x69, 0x6e, // x..........@main
	0x28, 0x76, 0x66, 0x34, 0x3b, 0x76, 0x66, 0x32, 0x3b, 0x76, 0x66, 0x34, 0x3b, 0x00, 0x00, 0x05, // (vf4;vf2;vf4;...
	0x00, 0x05, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, // ...nb..v_color0.
	0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x8f, 0x41, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, // ........A..v_tex
	0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0x67, // coord0......J..g
	0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, // l_FragData_0_...
	0x00, 0x05, 0x00, 0x43, 0x12, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // ...C...s_texColo
	0x72, 0x00, 0x00, 0x05, 0x00, 0x07, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, // r..........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x53, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x00, 0x00, 0x00, 0x05, // ColorSampler....
	0x00, 0x07, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, // .......s_texColo
	0x72, 0x54, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xa0, // rTexture........
	0x11, 0x00, 0x00, 0x62, 0x67, 0x66, 0x78, 0x5f, 0x56, 0x6f, 0x69, 0x64, 0x46, 0x72, 0x61, 0x67, // ...bgfx_VoidFrag
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9d, 0x5d, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, // ........]..param
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x18, 0x0e, 0x00, 0x00, 0x63, 0x6f, 0x6c, 0x6f, 0x72, // ...........color
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x84, 0x01, 0x00, 0x00, 0x24, 0x47, 0x6c, 0x6f, 0x62, // ...........$Glob
	0x61, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, // al.............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x52, 0x65, 0x63, 0x74, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, // _viewRect.......
	0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x54, 0x65, 0x78, // .......u_viewTex
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x75, // el.............u
	0x5f, 0x76, 0x69, 0x65, 0x77, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x03, // _view...........
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x00, 0x00, 0x00, 0x06, // ...u_invView....
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x72, 0x6f, // ...........u_pro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x75, // j..............u
	0x5f, 0x69, 0x6e, 0x76, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, // _invProj........
	0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x76, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, // .......u_viewPro
	0x6a, 0x00, 0x00, 0x06, 0x00, 0x07, 0x00, 0x84, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x75, // j..............u
	0x5f, 0x69, 0x6e, 0x76, 0x56, 0x69, 0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x00, 0x00, 0x06, // _invViewProj....
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, // ...........u_mod
	0x65, 0x6c, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x75, // el.............u
	0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, 0x65, 0x77, 0x00, 0x06, 0x00, 0x07, 0x00, 0x84, // _modelView......
	0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x6d, 0x6f, 0x64, 0x65, 0x6c, 0x56, 0x69, // .......u_modelVi
	0x65, 0x77, 0x50, 0x72, 0x6f, 0x6a, 0x00, 0x06, 0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x0b, // ewProj..........
	0x00, 0x00, 0x00, 0x75, 0x5f, 0x61, 0x6c, 0x70, 0x68, 0x61, 0x52, 0x65, 0x66, 0x34, 0x00, 0x06, // ...u_alphaRef4..
	0x00, 0x06, 0x00, 0x84, 0x01, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, // ...........u_par
	0x61, 0x6d, 0x73, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x03, 0x00, 0x42, 0x13, 0x00, 0x00, 0x00, // ams........B....
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x0d, 0x57, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, // ........W..param
	0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x91, 0x37, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, // ........7..param
	0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0xfa, 0x41, 0x00, 0x00, 0x76, 0x5f, 0x63, 0x6f, 0x6c, // ........A..v_col
	0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x76, // or0........w...v
	0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x05, 0x00, 0x03, // _color0.........
	0x3c, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x00, 0x05, // <..v_texcoord0..
	0x00, 0x05, 0x00, 0x74, 0x14, 0x00, 0x00, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, // ...t...v_texcoor
	0x64, 0x30, 0x00, 0x05, 0x00, 0x06, 0x00, 0xce, 0x1c, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, // d0.........gl_Fr
	0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, 0x5f, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xc9, // agData_0_.......
	0x47, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0xab, // G..param........
	0x55, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x04, 0x00, 0x9a, // U..param........
	0x16, 0x00, 0x00, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x00, 0x00, 0x00, 0x05, 0x00, 0x06, 0x00, 0xd1, // ...param........
	0x0d, 0x00, 0x00, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x44, 0x61, 0x74, 0x61, 0x5f, 0x30, // ...gl_FragData_0
	0x5f, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, // _..G......."....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, // ...G.......!....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x22, 0x00, 0x00, 0x00, 0x00, // ...G......."....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x21, 0x00, 0x00, 0x00, 0x00, // ...G.......!....
	0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x2b, 0x03, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x40, // ...G...+.......@
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x01, // .......H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, // ...#.......H....
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x48, // .......#... ...H
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x03, // ...`...H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x05, // .......H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x20, 0x01, 0x00, 0x00, 0x48, // .......#... ...H
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x60, 0x01, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x07, // ...`...H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xa0, 0x01, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x04, // ...H............
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0xa0, 0x09, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x09, // .......H........
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x48, 0x00, 0x04, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, // ...........H....
	0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0xe0, 0x09, 0x00, 0x00, 0x48, // .......#.......H
	0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x10, // ................
	0x00, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x23, // ...H...........#
	0x00, 0x00, 0x00, 0x20, 0x0a, 0x00, 0x00, 0x48, 0x00, 0x05, 0x00, 0x84, 0x01, 0x00, 0x00, 0x0c, // ... ...H........
	0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x00, 0x30, 0x0a, 0x00, 0x00, 0x47, 0x00, 0x03, 0x00, 0x84, // ...#...0...G....
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x42, 0x13, 0x00, 0x00, 0x22, // .......G...B..."
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x1e, // .......G...w....
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0x74, 0x14, 0x00, 0x00, 0x1e, // .......G...t....
	0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x47, 0x00, 0x04, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x1e, // .......G........
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x02, 0x00, 0x08, 0x00, 0x00, 0x00, 0x21, // ...............!
	0x00, 0x03, 0x00, 0x02, 0x05, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x02, 0x00, 0xfc, // ................
	0x01, 0x00, 0x00, 0x16, 0x00, 0x03, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x19, // ........... ....
	0x00, 0x09, 0x00, 0x96, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x1e, 0x00, 0x04, 0x00, 0x61, 0x09, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x96, // .......a........
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x61, // ... ...........a
	0x09, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x13, // ... ............
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x0d, // ... ............
	0x00, 0x00, 0x00, 0x17, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x04, // ................
	0x00, 0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0x89, 0x04, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1b, // ...!............
	0x00, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x21, 0x00, 0x04, 0x00, 0xef, // ...........!....
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9a, // ........... ....
	0x02, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x21, 0x00, 0x06, 0x00, 0x69, // ...........!...i
	0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x90, 0x02, 0x00, 0x00, 0x9a, // ................
	0x02, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x43, 0x12, 0x00, 0x00, 0x00, // ...;.......C....
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x79, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xfc, // ... ...y........
	0x01, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x79, 0x04, 0x00, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x00, // ...;...y........
	0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x13, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, // ... ............
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x13, 0x03, 0x00, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x00, // ...;............
	0x00, 0x00, 0x00, 0x15, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x01, // ........... ....
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0e, 0x0a, 0x00, 0x00, 0x01, // ...+............
	0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x00, // ...+............
	0x00, 0x00, 0x00, 0x1b, 0x00, 0x03, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x96, 0x00, 0x00, 0x00, 0x2b, // ...............+
	0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, // ................
	0x00, 0x04, 0x00, 0x65, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x15, // ...e............
	0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2b, // ....... .......+
	0x00, 0x04, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x1c, // .......j... ....
	0x00, 0x04, 0x00, 0x2b, 0x03, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x6a, 0x0a, 0x00, 0x00, 0x1e, // ...+...e...j....
	0x00, 0x0f, 0x00, 0x84, 0x01, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x65, // ...............e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...e...e...e...e
	0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x2b, 0x03, 0x00, 0x00, 0x65, 0x00, 0x00, 0x00, 0x65, // ...e...+...e...e
	0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x01, // ........... ....
	0x04, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x84, 0x01, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x01, // ...........;....
	0x04, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0c, // ...B.......+....
	0x00, 0x00, 0x00, 0x2f, 0x0a, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x2b, 0x00, 0x04, 0x00, 0x0b, // .../.......+....
	0x00, 0x00, 0x00, 0x0a, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x8b, // ........... ....
	0x02, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9b, // ........... ....
	0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9b, // ...........;....
	0x02, 0x00, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x91, // ...w....... ....
	0x02, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x91, // ...........;....
	0x02, 0x00, 0x00, 0x74, 0x14, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x20, 0x00, 0x04, 0x00, 0x9c, // ...t....... ....
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9c, // ...........;....
	0x02, 0x00, 0x00, 0xd1, 0x0d, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, // ...........6....
	0x00, 0x00, 0x00, 0x1f, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0xf8, // ................
	0x00, 0x02, 0x00, 0x53, 0x61, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0xc9, // ...Sa..;........
	0x47, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0xab, // G......;........
	0x55, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x9a, // U......;........
	0x16, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x21, // .......=.......!
	0x43, 0x00, 0x00, 0xb2, 0x0c, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x96, 0x00, 0x00, 0x00, 0x02, // C......=........
	0x33, 0x00, 0x00, 0xee, 0x0e, 0x00, 0x00, 0x50, 0x00, 0x05, 0x00, 0x61, 0x09, 0x00, 0x00, 0x12, // 3......P...a....
	0x20, 0x00, 0x00, 0x21, 0x43, 0x00, 0x00, 0x02, 0x33, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x43, //  ..!C...3..>...C
	0x12, 0x00, 0x00, 0x12, 0x20, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xfa, // .... ..=........
	0x41, 0x00, 0x00, 0x77, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x03, // A..w...=........
	0x3c, 0x00, 0x00, 0x74, 0x14, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xc9, 0x47, 0x00, 0x00, 0xfa, // <..t...>....G...
	0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xab, 0x55, 0x00, 0x00, 0x03, 0x3c, 0x00, 0x00, 0x39, // A..>....U...<..9
	0x00, 0x07, 0x00, 0x08, 0x00, 0x00, 0x00, 0xbd, 0x26, 0x00, 0x00, 0x16, 0x0e, 0x00, 0x00, 0xc9, // ........&.......
	0x47, 0x00, 0x00, 0xab, 0x55, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x1d, // G...U......=....
	0x00, 0x00, 0x00, 0xce, 0x1c, 0x00, 0x00, 0x9a, 0x16, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0xd1, // ...........>....
	0x0d, 0x00, 0x00, 0xce, 0x1c, 0x00, 0x00, 0xfd, 0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x36, // ...........8...6
	0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xce, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x89, // ................
	0x04, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x1b, 0x00, 0x00, 0x00, 0x27, 0x0e, 0x00, 0x00, 0x37, // ...7.......'...7
	0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x8a, // ...........7....
	0x02, 0x00, 0x00, 0x2e, 0x12, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x24, 0x54, 0x00, 0x00, 0x41, // ...........$T..A
	0x00, 0x05, 0x00, 0x13, 0x03, 0x00, 0x00, 0xc0, 0x1c, 0x00, 0x00, 0x27, 0x0e, 0x00, 0x00, 0x0e, // ...........'....
	0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x96, 0x00, 0x00, 0x00, 0x6d, 0x29, 0x00, 0x00, 0xc0, // ...=.......m)...
	0x1c, 0x00, 0x00, 0x41, 0x00, 0x05, 0x00, 0x79, 0x04, 0x00, 0x00, 0xe4, 0x55, 0x00, 0x00, 0x27, // ...A...y....U..'
	0x0e, 0x00, 0x00, 0x0b, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0xfc, 0x01, 0x00, 0x00, 0xf2, // .......=........
	0x4e, 0x00, 0x00, 0xe4, 0x55, 0x00, 0x00, 0x56, 0x00, 0x05, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x32, // N...U..V.......2
	0x39, 0x00, 0x00, 0x6d, 0x29, 0x00, 0x00, 0xf2, 0x4e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, // 9..m)...N..=....
	0x00, 0x00, 0x00, 0xcd, 0x19, 0x00, 0x00, 0xe7, 0x15, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, // ...........=....
	0x00, 0x00, 0x00, 0x3d, 0x3e, 0x00, 0x00, 0x2e, 0x12, 0x00, 0x00, 0x58, 0x00, 0x07, 0x00, 0x1d, // ...=>......X....
	0x00, 0x00, 0x00, 0x11, 0x1c, 0x00, 0x00, 0x32, 0x39, 0x00, 0x00, 0xcd, 0x19, 0x00, 0x00, 0x02, // .......29.......
	0x00, 0x00, 0x00, 0x3d, 0x3e, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x11, 0x1c, 0x00, 0x00, 0x38, // ...=>..........8
	0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x00, // ...6.......5....
	0x00, 0x00, 0x00, 0xef, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x8a, 0x02, 0x00, 0x00, 0xdd, // .......7........
	0x0e, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0x2e, 0x5f, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, // ........_..=....
	0x00, 0x00, 0x00, 0xe0, 0x5b, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, // ....[......=....
	0x00, 0x00, 0x00, 0x25, 0x53, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, // ...%S......=....
	0x00, 0x00, 0x00, 0xc5, 0x3d, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, // ....=......=....
	0x00, 0x00, 0x00, 0xd8, 0x3d, 0x00, 0x00, 0xdd, 0x0e, 0x00, 0x00, 0x50, 0x00, 0x07, 0x00, 0x1d, // ....=......P....
	0x00, 0x00, 0x00, 0x56, 0x5b, 0x00, 0x00, 0xe0, 0x5b, 0x00, 0x00, 0x25, 0x53, 0x00, 0x00, 0xc5, // ...V[...[..%S...
	0x3d, 0x00, 0x00, 0xd8, 0x3d, 0x00, 0x00, 0xfe, 0x00, 0x02, 0x00, 0x56, 0x5b, 0x00, 0x00, 0x38, // =...=......V[..8
	0x00, 0x01, 0x00, 0x36, 0x00, 0x05, 0x00, 0x08, 0x00, 0x00, 0x00, 0x16, 0x0e, 0x00, 0x00, 0x00, // ...6............
	0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x6e, // ...i...7.......n
	0x62, 0x00, 0x00, 0x37, 0x00, 0x03, 0x00, 0x90, 0x02, 0x00, 0x00, 0x8f, 0x41, 0x00, 0x00, 0x37, // b..7........A..7
	0x00, 0x03, 0x00, 0x9a, 0x02, 0x00, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0xf8, 0x00, 0x02, 0x00, 0xc0, // ........J.......
	0x53, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x9d, 0x5d, 0x00, 0x00, 0x07, // S..;........]...
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x90, 0x02, 0x00, 0x00, 0x0d, 0x57, 0x00, 0x00, 0x07, // ...;........W...
	0x00, 0x00, 0x00, 0x3b, 0x00, 0x04, 0x00, 0x8a, 0x02, 0x00, 0x00, 0x91, 0x37, 0x00, 0x00, 0x07, // ...;........7...
	0x00, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x9d, 0x5d, 0x00, 0x00, 0x0c, 0x0a, 0x00, 0x00, 0x39, // ...>....]......9
	0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xa0, 0x11, 0x00, 0x00, 0x35, 0x13, 0x00, 0x00, 0x9d, // ...........5....
	0x5d, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x13, 0x00, 0x00, 0x00, 0x6f, 0x41, 0x00, 0x00, 0x8f, // ]..=.......oA...
	0x41, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x0d, 0x57, 0x00, 0x00, 0x6f, 0x41, 0x00, 0x00, 0x41, // A..>....W..oA..A
	0x00, 0x06, 0x00, 0x8b, 0x02, 0x00, 0x00, 0x3d, 0x42, 0x00, 0x00, 0x42, 0x13, 0x00, 0x00, 0x2f, // .......=B..B.../
	0x0a, 0x00, 0x00, 0x0a, 0x0a, 0x00, 0x00, 0x3d, 0x00, 0x04, 0x00, 0x0d, 0x00, 0x00, 0x00, 0xd6, // .......=........
	0x1f, 0x00, 0x00, 0x3d, 0x42, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x91, 0x37, 0x00, 0x00, 0xd6, // ...=B..>....7...
	0x1f, 0x00, 0x00, 0x39, 0x00, 0x07, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x18, 0x0e, 0x00, 0x00, 0xce, // ...9............
	0x14, 0x00, 0x00, 0x43, 0x12, 0x00, 0x00, 0x0d, 0x57, 0x00, 0x00, 0x91, 0x37, 0x00, 0x00, 0x3d, // ...C....W...7..=
	0x00, 0x04, 0x00, 0x1d, 0x00, 0x00, 0x00, 0xba, 0x5b, 0x00, 0x00, 0x6e, 0x62, 0x00, 0x00, 0x85, // ........[..nb...
	0x00, 0x05, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x3b, 0x34, 0x00, 0x00, 0x18, 0x0e, 0x00, 0x00, 0xba, // .......;4.......
	0x5b, 0x00, 0x00, 0x3e, 0x00, 0x03, 0x00, 0x8c, 0x4a, 0x00, 0x00, 0x3b, 0x34, 0x00, 0x00, 0xfd, // [..>....J..;4...
	0x00, 0x01, 0x00, 0x38, 0x00, 0x01, 0x00, 0x00,                                                 // ...8....
};
static const uint8_t fs_texture_dx9[353] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x02, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, // FSH........s_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, // Color0......u_pa
	0x72, 0x61, 0x6d, 0x73, 0x12, 0x01, 0x00, 0x00, 0x01, 0x00, 0x34, 0x01, 0x00, 0x03, 0xff, 0xff, // rams......4.....
	0xfe, 0xff, 0x2c, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x83, 0x00, 0x00, 0x00, // ..,.CTAB........
	0x00, 0x03, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, // ................
	0x7c, 0x00, 0x00, 0x00, 0x44, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // |...D...........
	0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, // P.......`.......
	0x01, 0x00, 0x00, 0x00, 0x6c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x73, 0x5f, 0x74, 0x65, // ....l.......s_te
	0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0c, 0x00, 0x01, 0x00, 0x01, 0x00, // xColor..........
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, // ........u_params
	0x00, 0xab, 0xab, 0xab, 0x01, 0x00, 0x03, 0x00, 0x01, 0x00, 0x04, 0x00, 0x01, 0x00, 0x00, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x31, 0x30, // ader Compiler 10
	0x2e, 0x31, 0x00, 0xab, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x3f, // .1..Q..........?
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x00, 0x00, 0x02, // ................
	0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, // ................
	0x01, 0x00, 0x03, 0x90, 0x1f, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x90, 0x00, 0x08, 0x0f, 0xa0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x07, 0x80, 0x01, 0x00, 0xd0, 0xa0, 0x01, 0x00, 0xc4, 0x90, // ................
	0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x08, 0x80, 0x00, 0x00, 0x00, 0xa0, 0x5f, 0x00, 0x00, 0x03, // ............_...
	0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x08, 0xe4, 0xa0, 0x05, 0x00, 0x00, 0x03, // ................
	0x00, 0x08, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, // ................
	0x00,                                                                                           // .
};
static const uint8_t fs_texture_dx11[444] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x02, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x12, 0x00, 0x00, 0x00, 0x01, 0x00, 0x0a, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, // ams.......s_texC
	0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x01, 0x00, 0x00, 0x01, 0x00, 0x8c, 0x01, 0x44, 0x58, 0x42, 0x43, // olor0.......DXBC
	0xb9, 0x1c, 0x87, 0x4c, 0x82, 0x98, 0xc2, 0x74, 0x81, 0x9e, 0xa8, 0x24, 0xac, 0xbe, 0xee, 0x7b, // ...L...t...$...{
	0x01, 0x00, 0x00, 0x00, 0x8c, 0x01, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x03, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x44, 0x52, 0xb0, 0x00, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // SHDR....@...,...
	0x59, 0x00, 0x00, 0x04, 0x46, 0x8e, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, // Y...F. .........
	0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x18, 0x00, 0x04, // Z....`......X...
	0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // .p......UU..b...
	0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0x32, 0x10, 0x10, 0x00, // ........b...2...
	0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x01, 0x00, 0x00, 0x00, 0x48, 0x00, 0x00, 0x0c, 0xf2, 0x00, 0x10, 0x00, // h.......H.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, // ....F.......F~..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x80, 0x20, 0x00, // .....`........ .
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0xf2, 0x20, 0x10, 0x00, // ........8.... ..
	0x00, 0x00, 0x00, 0x00, 0x46, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x1e, 0x10, 0x00, // ....F.......F...
	0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x10, 0x00,                         // ....>.......
};
static const uint8_t fs_texture_mtl[650] =
{
	0x46, 0x53, 0x48, 0x04, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x08, 0x75, 0x5f, 0x70, 0x61, 0x72, // FSH........u_par
	0x61, 0x6d, 0x73, 0x02, 0x01, 0x00, 0x00, 0x01, 0x00, 0x6c, 0x02, 0x00, 0x00, 0x75, 0x73, 0x69, // ams......l...usi
	0x6e, 0x67, 0x20, 0x6e, 0x61, 0x6d, 0x65, 0x73, 0x70, 0x61, 0x63, 0x65, 0x20, 0x6d, 0x65, 0x74, // ng namespace met
	0x61, 0x6c, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, // al;.struct xlatM
	0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, // tlShaderInput {.
	0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, //   float4 v_color
	0x30, 0x3b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, 0x20, 0x76, 0x5f, 0x74, 0x65, // 0;.  float2 v_te
	0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, // xcoord0;.};.stru
	0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, // ct xlatMtlShader
	0x4f, 0x75, 0x74, 0x70, 0x75, 0x74, 0x20, 0x7b, 0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, // Output {.  float
	0x34, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, 0x0a, // 4 gl_FragColor;.
	0x7d, 0x3b, 0x0a, 0x73, 0x74, 0x72, 0x75, 0x63, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, // };.struct xlatMt
	0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, 0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x20, 0x7b, // lShaderUniform {
	0x0a, 0x20, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x34, 0x20, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, // .  float4 u_para
	0x6d, 0x73, 0x3b, 0x0a, 0x7d, 0x3b, 0x0a, 0x66, 0x72, 0x61, 0x67, 0x6d, 0x65, 0x6e, 0x74, 0x20, // ms;.};.fragment 
	0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, // xlatMtlShaderOut
	0x70, 0x75, 0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x4d, 0x61, 0x69, 0x6e, 0x20, // put xlatMtlMain 
	0x28, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x49, 0x6e, // (xlatMtlShaderIn
	0x70, 0x75, 0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x20, 0x5b, 0x5b, 0x73, 0x74, 0x61, // put _mtl_i [[sta
	0x67, 0x65, 0x5f, 0x69, 0x6e, 0x5d, 0x5d, 0x2c, 0x20, 0x63, 0x6f, 0x6e, 0x73, 0x74, 0x61, 0x6e, // ge_in]], constan
	0x74, 0x20, 0x78, 0x6c, 0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x55, // t xlatMtlShaderU
	0x6e, 0x69, 0x66, 0x6f, 0x72, 0x6d, 0x26, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x75, 0x20, 0x5b, // niform& _mtl_u [
	0x5b, 0x62, 0x75, 0x66, 0x66, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x0a, 0x20, 0x20, 0x2c, // [buffer(0)]].  ,
	0x20, 0x20, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x32, 0x64, 0x3c, 0x66, 0x6c, 0x6f, //    texture2d<flo
	0x61, 0x74, 0x3e, 0x20, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, // at> s_texColor [
	0x5b, 0x74, 0x65, 0x78, 0x74, 0x75, 0x72, 0x65, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x2c, 0x20, 0x73, // [texture(0)]], s
	0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, // ampler _mtlsmp_s
	0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x5b, 0x5b, 0x73, 0x61, 0x6d, 0x70, // _texColor [[samp
	0x6c, 0x65, 0x72, 0x28, 0x30, 0x29, 0x5d, 0x5d, 0x29, 0x0a, 0x7b, 0x0a, 0x20, 0x20, 0x78, 0x6c, // ler(0)]]).{.  xl
	0x61, 0x74, 0x4d, 0x74, 0x6c, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x4f, 0x75, 0x74, 0x70, 0x75, // atMtlShaderOutpu
	0x74, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x20, 0x20, 0x5f, 0x6d, 0x74, 0x6c, // t _mtl_o;.  _mtl
	0x5f, 0x6f, 0x2e, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x20, // _o.gl_FragColor 
	0x3d, 0x20, 0x28, 0x73, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2e, 0x73, 0x61, // = (s_texColor.sa
	0x6d, 0x70, 0x6c, 0x65, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x73, 0x6d, 0x70, 0x5f, 0x73, 0x5f, 0x74, // mple(_mtlsmp_s_t
	0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x2c, 0x20, 0x28, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x32, // exColor, (float2
	0x29, 0x28, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, // )(_mtl_i.v_texco
	0x6f, 0x72, 0x64, 0x30, 0x29, 0x2c, 0x20, 0x6c, 0x65, 0x76, 0x65, 0x6c, 0x28, 0x5f, 0x6d, 0x74, // ord0), level(_mt
	0x6c, 0x5f, 0x75, 0x2e, 0x75, 0x5f, 0x70, 0x61, 0x72, 0x61, 0x6d, 0x73, 0x2e, 0x78, 0x29, 0x29, // l_u.u_params.x))
	0x20, 0x2a, 0x20, 0x5f, 0x6d, 0x74, 0x6c, 0x5f, 0x69, 0x2e, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, //  * _mtl_i.v_colo
	0x72, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x65, 0x74, 0x75, 0x72, 0x6e, 0x20, 0x5f, 0x6d, // r0);.  return _m
	0x74, 0x6c, 0x5f, 0x6f, 0x3b, 0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                     // tl_o;.}...
};
extern const uint8_t* fs_texture_pssl;
extern const uint32_t fs_texture_pssl_size;