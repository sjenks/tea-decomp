// TEACON.exe — application module "main"
// 24 functions, 0x00401000..0x00411910. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_0042a16f = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00416344();
  FUN_004156e0();
  FUN_00416348();
  FUN_0041fd38((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0042a114;
  _DAT_0042a173 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0042785c((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  FUN_00401012   (71 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_0042a16f = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00416344();
  FUN_004156e0();
  FUN_00416348();
  FUN_0041fd38((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0042a114;
  _DAT_0042a173 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0042785c((int)ppuVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *param_1)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00431f88 = FUN_00401140();
  _DAT_00431f88 = _DAT_00431f88 + 0x1c;
  *param_1 = 0x82727349;
  param_1[1] = &DAT_00431f74;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  FUN_00401140   (15 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall FUN_00401140(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  FUN_00401150   (85 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
void __stdcall FUN_00401150(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42a830);
  std::string::string_from_cstr(0x434260,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  std::string::string_from_cstr(0x434270,(uint *)"\\Crossword Man\\TEA Crossword Helper 2.11");
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  FUN_004011a8   (290 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
void __stdcall FUN_004011a8(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42a844);
  if (DAT_00434278 != 0) {
    if (*(int *)(DAT_00434278 + -0xc) != -1) {
      piVar2 = (int *)(DAT_00434278 + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040123b;
    }
    operator_delete();
    DAT_00434278 = 0;
  }
LAB_0040123b:
  if (DAT_00434268 != 0) {
    if (*(int *)(DAT_00434268 + -0xc) != -1) {
      piVar2 = (int *)(DAT_00434268 + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004012ba;
    }
    operator_delete();
    DAT_00434268 = 0;
  }
LAB_004012ba:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004012cc  main   (12873 bytes)   [analysis]
//   console entry: parses options, loads the profile, compiles the pattern, streams matches (references the usage/banner strings)
//   written in code as main_
/* WARNING: Removing unreachable block (ram,0x00402c4e) */
/* WARNING: Removing unreachable block (ram,0x004016eb) */
/* WARNING: Removing unreachable block (ram,0x0040139e) */
/* WARNING: Removing unreachable block (ram,0x004013ee) */
/* WARNING: Removing unreachable block (ram,0x0040179d) */
/* WARNING: Removing unreachable block (ram,0x00403144) */
/* WARNING: Removing unreachable block (ram,0x0040133d) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffb474 : 0x0040134b */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __stdcall main_(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined3 extraout_var;
  char cVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  uint local_5734 [252];
  undefined1 *local_5344;
  undefined4 local_5334;
  undefined4 local_5324;
  undefined4 local_5314;
  undefined4 local_5304;
  undefined4 local_52f4;
  undefined4 local_52e4;
  undefined4 local_52d4;
  undefined4 local_52c4;
  undefined4 local_52b4;
  undefined4 local_52a4;
  undefined4 local_5294;
  undefined4 local_5284;
  undefined4 local_5274;
  uint *local_5264;
  uint *local_5254;
  undefined4 local_5244;
  undefined4 local_5234;
  undefined4 local_5224;
  undefined4 local_5214;
  undefined4 local_5204;
  undefined1 *local_51f4;
  uint local_51ec [15];
  undefined1 *local_51b0;
  uint local_51a8 [68];
  undefined4 local_5098;
  undefined4 local_5088;
  undefined1 *local_5078;
  undefined1 *local_5068;
  int local_5060;
  undefined1 *local_505c;
  undefined4 local_5058;
  byte *local_5054;
  byte *local_5050;
  byte *local_504c;
  undefined1 *local_5048;
  undefined4 local_5044;
  char *local_5040;
  char *local_503c;
  int *local_5038;
  undefined1 *local_5034;
  undefined4 local_5030;
  uint *local_502c;
  uint *local_5028;
  uint *local_5024;
  undefined1 *local_5020;
  undefined4 local_501c;
  uint *local_5018;
  uint *local_5014;
  uint *local_5010;
  undefined1 *local_500c;
  undefined4 local_5008;
  int local_5004;
  int local_5000;
  int *local_4ffc;
  undefined1 *local_4ff8;
  undefined4 local_4ff4;
  undefined1 *local_4ff0;
  undefined1 *local_4fec;
  int *local_4fe8;
  undefined1 *local_4fe4;
  undefined4 local_4fe0;
  uint *local_4fdc;
  uint *local_4fd8;
  uint *local_4fd4;
  undefined1 *local_4fd0;
  undefined4 local_4fcc;
  uint *local_4fc8;
  uint *local_4fc4;
  uint *local_4fc0;
  undefined1 *local_4fbc;
  undefined4 local_4fb8;
  uint *local_4fb4;
  uint *local_4fb0;
  uint *local_4fac;
  int local_4fa8;
  undefined1 *local_4fa4;
  undefined4 local_4fa0;
  byte *local_4f9c;
  byte *local_4f98;
  byte *local_4f94;
  undefined1 *local_4f90;
  undefined4 local_4f8c;
  char *local_4f88;
  char *local_4f84;
  int *local_4f80;
  undefined1 *local_4f7c;
  undefined4 local_4f78;
  uint *local_4f74;
  uint *local_4f70;
  uint *local_4f6c;
  undefined1 *local_4f68;
  undefined4 local_4f64;
  uint *local_4f60;
  uint *local_4f5c;
  uint *local_4f58;
  undefined1 *local_4f54;
  undefined4 local_4f50;
  int local_4f4c;
  int local_4f48;
  int *local_4f44;
  undefined1 *local_4f40;
  undefined4 local_4f3c;
  undefined1 *local_4f38;
  undefined1 *local_4f34;
  int *local_4f30;
  undefined1 *local_4f2c;
  undefined4 local_4f28;
  uint *local_4f24;
  uint *local_4f20;
  uint *local_4f1c;
  undefined1 *local_4f18;
  undefined4 local_4f14;
  uint *local_4f10;
  uint *local_4f0c;
  uint *local_4f08;
  undefined1 *local_4f04;
  undefined4 local_4f00;
  int local_4efc;
  int local_4ef8;
  int *local_4ef4;
  char *local_4ef0;
  uint local_4eec;
  uint *local_4ee8;
  uint *local_4ee4;
  char *local_4ed8;
  undefined4 local_4ed4;
  int local_4ed0;
  int local_4ecc;
  char local_4ec5;
  int local_4ec4;
  undefined1 *local_4ec0;
  undefined4 local_4ebc;
  int local_4eb8;
  int local_4eb4;
  int *local_4eb0;
  uint *local_4eac;
  char local_4ea5;
  int local_4ea4;
  uint local_4ea0;
  undefined1 *local_4e9c;
  undefined1 *local_4e98;
  undefined4 local_4e94;
  int local_4e90;
  undefined1 *local_4e8c;
  undefined4 local_4e88;
  byte *local_4e84;
  byte *local_4e80;
  byte *local_4e7c;
  undefined1 *local_4e78;
  undefined4 local_4e74;
  char *local_4e70;
  char *local_4e6c;
  int *local_4e68;
  undefined1 *local_4e64;
  undefined4 local_4e60;
  uint *local_4e5c;
  uint *local_4e58;
  uint *local_4e54;
  undefined1 *local_4e50;
  undefined4 local_4e4c;
  uint *local_4e48;
  uint *local_4e44;
  uint *local_4e40;
  undefined1 *local_4e3c;
  undefined4 local_4e38;
  int local_4e34;
  int local_4e30;
  int *local_4e2c;
  undefined1 *local_4e28;
  undefined4 local_4e24;
  undefined1 *local_4e20;
  undefined1 *local_4e1c;
  uint local_4e18;
  undefined4 local_4e14;
  undefined1 *local_4e10;
  undefined1 *local_4e0c;
  undefined4 local_4e08;
  int local_4e04;
  undefined1 *local_4e00;
  undefined4 local_4dfc;
  byte *local_4df8;
  byte *local_4df4;
  byte *local_4df0;
  undefined1 *local_4dec;
  undefined4 local_4de8;
  char *local_4de4;
  char *local_4de0;
  int *local_4ddc;
  undefined1 *local_4dd8;
  undefined4 local_4dd4;
  uint *local_4dd0;
  uint *local_4dcc;
  uint *local_4dc8;
  undefined1 *local_4dc4;
  undefined4 local_4dc0;
  uint *local_4dbc;
  uint *local_4db8;
  uint *local_4db4;
  undefined1 *local_4db0;
  undefined4 local_4dac;
  int local_4da8;
  int local_4da4;
  int *local_4da0;
  int local_4d9c;
  undefined4 *local_4d98;
  undefined1 *local_4d94;
  undefined4 local_4d90;
  int local_4d8c;
  int local_4d88;
  int *local_4d84;
  undefined4 *local_4d80;
  undefined4 *local_4d7c;
  uint local_4d78;
  int local_4d74;
  int *local_4d70;
  int *local_4d6c;
  uint local_4d68;
  int *local_4d64;
  int local_4d60;
  undefined4 local_4d5c;
  undefined4 local_4d58;
  int local_4d54;
  int local_4d48;
  int local_4d44;
  undefined1 *local_4d40;
  undefined4 local_4d3c;
  byte *local_4d38;
  byte *local_4d34;
  byte *local_4d30;
  undefined1 *local_4d2c;
  undefined4 local_4d28;
  char *local_4d24;
  char *local_4d20;
  int *local_4d1c;
  undefined1 *local_4d18;
  undefined4 local_4d14;
  uint *local_4d10;
  uint *local_4d0c;
  uint *local_4d08;
  undefined1 *local_4d04;
  undefined4 local_4d00;
  uint *local_4cfc;
  uint *local_4cf8;
  uint *local_4cf4;
  undefined1 *local_4cf0;
  undefined4 local_4cec;
  int local_4ce8;
  int local_4ce4;
  char *local_4ce0;
  char *local_4cdc;
  char *local_4cd8;
  char *local_4cd4;
  char *local_4cd0;
  char *local_4ccc;
  char *local_4cc8;
  int local_4cc4;
  int local_4cb8;
  int local_4cb4;
  int local_4cb0;
  uint *local_4cac;
  uint *local_4ca8;
  uint local_4ca4;
  undefined1 *local_4ca0;
  int *local_4c9c;
  uint *local_4c98;
  uint local_4c94;
  uint *local_4c90;
  undefined1 *local_4c8c;
  uint *local_4c88;
  undefined4 local_4c84;
  undefined1 *local_4c80;
  undefined4 local_4c7c;
  int local_4c78;
  int local_4c74;
  int *local_4c70;
  undefined1 *local_4c64;
  undefined4 local_4c60;
  int local_4c5c;
  int local_4c58;
  int *local_4c54;
  undefined1 *local_4c48;
  undefined4 local_4c44;
  undefined1 *local_4c40;
  undefined1 *local_4c3c;
  int *local_4c38;
  undefined1 *local_4c34;
  undefined4 local_4c30;
  undefined1 *local_4c2c;
  undefined1 *local_4c28;
  int *local_4c24;
  undefined1 *local_4c20;
  undefined4 local_4c1c;
  int local_4c18;
  int local_4c14;
  int *local_4c10;
  undefined1 *local_4c04;
  undefined1 *local_4c00;
  undefined4 local_4bfc;
  int local_4bf8;
  undefined1 local_4bf1;
  int local_4bf0;
  int local_4bec;
  undefined1 *local_4be8;
  undefined1 *local_4be4;
  undefined4 local_4be0;
  uint *local_4bdc;
  DWORD local_4bd8;
  int local_4bd4;
  undefined1 *local_4bd0;
  undefined4 local_4bcc;
  byte *local_4bc8;
  byte *local_4bc4;
  byte *local_4bc0;
  undefined1 *local_4bbc;
  undefined4 local_4bb8;
  char *local_4bb4;
  char *local_4bb0;
  int *local_4bac;
  undefined1 *local_4ba8;
  undefined1 *local_4ba4;
  undefined4 local_4ba0;
  undefined1 *local_4b9c;
  undefined1 *local_4b98;
  undefined4 local_4b94;
  undefined4 local_4b90;
  undefined4 local_4b8c;
  undefined4 local_4b88;
  undefined2 local_4b78;
  int local_4b6c;
  undefined1 local_4b64 [8];
  int local_4b5c;
  undefined1 local_4b54 [8];
  uint *local_4b4c;
  undefined4 local_4b44 [14];
  undefined4 local_4b0c [258];
  uint local_4704 [2940];
  undefined4 uStackY_1914;
  undefined1 *puVar7;
  undefined1 local_300 [8];
  int local_2f8;
  undefined1 local_2f0 [8];
  uint *local_2e8;
  int local_2e0;
  undefined1 local_2dc [8];
  int local_2d4;
  undefined1 local_2cc [8];
  int local_2c4;
  undefined1 local_2bc [8];
  int local_2b4;
  undefined1 local_2ac [8];
  int local_2a4;
  undefined1 local_29c [8];
  undefined1 *local_294;
  char local_28c [8];
  undefined1 local_284 [16];
  undefined1 local_274 [8];
  undefined1 *local_26c;
  undefined1 local_264 [8];
  int local_25c;
  undefined1 local_254 [8];
  uint *local_24c;
  undefined1 local_244 [8];
  uint *local_23c;
  undefined1 local_234 [16];
  undefined1 local_224 [16];
  int local_214;
  int local_74;
  int local_70;
  undefined1 local_44 [8];
  char *local_3c;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined4 local_24;
  int local_20;
  int local_1c;
  int local_c;
  int local_8;
  
  iVar3 = 5;
  do {
    local_8 = iVar3;
    iVar3 = local_8 + -1;
  } while (local_8 + -1 != 0);
  __InitExceptBlockLDTC(0x42ae08);
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  local_4b8c = 0x40;
  local_4b90 = 1;
  local_24 = 0x40;
  local_4b94 = 0;
  local_4b98 = &DAT_0042fac0;
  local_4b9c = local_34;
  local_2c = &DAT_0042fac0;
  local_5068 = &DAT_0042fac0;
  local_4ba0 = 0;
  local_4ba4 = &DAT_0042fac0;
  local_4ba8 = local_44;
  local_3c = &DAT_0042fac0;
  local_5078 = &DAT_0042fac0;
  local_4b6c = local_4b6c + 3;
  local_4b78 = 0x5c;
  FUN_00414ab4((int)local_284,0x434270);
  local_4b6c = local_4b6c + 2;
  local_4b78 = 0x68;
  uVar2 = FUN_00414ea8((int)local_284,(int)local_34,(int)local_44);
  if (((char)uVar2 == '\x02') && (iVar3 = FUN_00414a84(local_2c,local_3c), iVar3 != 0)) {
    local_4b6c = local_4b6c + -2;
    Common::_dtor((int)local_284,2);
    local_4b78 = 0x20;
    local_4bd8 = GetModuleFileNameA((HMODULE)0x0,(LPSTR)local_51a8,0x104);
    local_4b78 = 0x20;
    *(undefined1 *)((int)local_51a8 + local_4bd8) = 0;
    local_4bdc = thunk_strrchr(local_51a8,'\\');
    if (local_4bdc == (uint *)0x0) {
      GH_PIECE(local_51a8[0], 0, undefined1) = 0;
    }
    else {
      *(undefined1 *)((int)local_4bdc + 1) = 0;
    }
    local_4b78 = 0x98;
    TEAViewProfileWindows::Load((int)local_234,0x434260);
    local_4be0 = 0;
    local_4be4 = &DAT_0042fac0;
    local_4be8 = local_244;
    local_23c = (uint *)&DAT_0042fac0;
    local_51b0 = &DAT_0042fac0;
    local_4b6c = local_4b6c + 5;
    local_4bec = 1;
    local_4bf0 = 100;
    local_4bf1 = 0;
    local_4b78 = 0xbc;
    Persist::Persist(local_28c,0x434260,'\0','\0');
    local_4b6c = local_4b6c + 1;
    local_4bf8 = 0;
    do {
      local_4b78 = 200;
      FUN_00421660((undefined1 *)local_51ec,(byte *)"OpenDictionary%d");
      local_4bfc = 0;
      local_4c00 = &DAT_0042fac0;
      local_294 = &DAT_0042fac0;
      local_51f4 = &DAT_0042fac0;
      local_4b6c = local_4b6c + 1;
      local_4b78 = 0xf8;
      local_4c04 = local_29c;
      puVar7 = local_29c;
      std::string::string_from_cstr((int)local_2ac,local_51ec);
      local_4b6c = local_4b6c + 1;
      Persist::QueryValueSized((int)local_28c,(int)local_2ac,(int)puVar7);
      local_4b6c = local_4b6c + -1;
      if (local_2a4 != 0) {
        if (*(int *)(local_2a4 + -0xc) != -1) {
          local_4c10 = (int *)(local_2a4 + -0xc);
          if (local_4c10 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else if (local_4c10 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else {
            *local_4c10 = *local_4c10 + -1;
            iVar3 = *local_4c10 + 1;
          }
          if (iVar3 != 0) goto LAB_0040189f;
        }
        local_4c14 = local_2a4 + -0xc;
        local_4c18 = local_2a4 + -0xc;
        operator_delete();
        local_4c1c = 0;
        local_4c20 = local_2ac;
        local_2a4 = 0;
        local_5204 = 0;
      }
LAB_0040189f:
      local_4b78 = 0xec;
      if (*(int *)(local_294 + -4) == 0) goto code_r0x004018b2;
      if (local_23c[-1] != 0) {
        std::string::replace_fill((int)local_244,local_23c[-1],0,1,0x3b);
      }
      std::string::append((int)local_244,(int)local_29c);
      local_4b6c = local_4b6c + -1;
      if (local_294 != (undefined1 *)0x0) {
        if (*(int *)(local_294 + -0xc) != -1) {
          local_4c38 = (int *)(local_294 + -0xc);
          if (local_4c38 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else if (local_4c38 == &DAT_0042fab4) {
            iVar3 = 1;
          }
          else {
            *local_4c38 = *local_4c38 + -1;
            iVar3 = *local_4c38 + 1;
          }
          if (iVar3 != 0) goto LAB_00401a3a;
        }
        local_4c3c = local_294 + -0xc;
        local_4c40 = local_294 + -0xc;
        operator_delete();
        local_4c44 = 0;
        local_294 = (undefined1 *)0x0;
        local_5224 = 0;
        local_4c48 = local_29c;
      }
LAB_00401a3a:
      local_4bf8 = local_4bf8 + 1;
    } while( true );
  }
  FUN_00420b6c(&DAT_004320a8,(byte *)"Please run the Windows version of TEA first");
  uVar2 = 1;
  local_4b6c = local_4b6c + -2;
  Common::_dtor((int)local_284,2);
  local_4b6c = local_4b6c + -1;
  if (local_3c != (char *)0x0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      local_4bac = (int *)(local_3c + -0xc);
      if (local_4bac == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4bac == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4bac = *local_4bac + -1;
        iVar3 = *local_4bac + 1;
      }
      if (iVar3 != 0) goto LAB_00401522;
    }
    local_4bb0 = local_3c + -0xc;
    local_4bb4 = local_3c + -0xc;
    operator_delete();
    local_4bb8 = 0;
    local_4bbc = local_44;
    local_3c = (char *)0x0;
    local_5088 = 0;
  }
LAB_00401522:
  local_4b6c = local_4b6c + -1;
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      local_4bc0 = local_2c + -0xc;
      if (local_4bc0 == (byte *)&DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4bc0 == (byte *)&DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *(int *)local_4bc0 = *(int *)local_4bc0 + -1;
        iVar3 = *(int *)local_4bc0 + 1;
      }
      if (iVar3 != 0) goto LAB_004015c7;
    }
    local_4bc4 = local_2c + -0xc;
    local_4bc8 = local_2c + -0xc;
    operator_delete();
    local_4bcc = 0;
    local_4bd0 = local_34;
    local_2c = (byte *)0x0;
    local_5098 = 0;
  }
LAB_004015c7:
  local_4b6c = local_4b6c + -1;
  FUN_0040483c(&local_24,local_20,local_1c);
  local_4bd4 = local_20;
  operator_delete();
  *in_FS_OFFSET = local_4b88;
  return uVar2;
code_r0x004018b2:
  local_4b6c = local_4b6c + -1;
  if (local_294 != (undefined1 *)0x0) {
    if (*(int *)(local_294 + -0xc) != -1) {
      local_4c24 = (int *)(local_294 + -0xc);
      if (local_4c24 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4c24 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4c24 = *local_4c24 + -1;
        iVar3 = *local_4c24 + 1;
      }
      if (iVar3 != 0) goto LAB_00401a4b;
    }
    local_4c28 = local_294 + -0xc;
    local_4c2c = local_294 + -0xc;
    operator_delete();
    local_4c30 = 0;
    local_294 = (undefined1 *)0x0;
    local_5214 = 0;
    local_4c34 = local_29c;
  }
LAB_00401a4b:
  piVar6 = &local_4bec;
  local_4b78 = 0x128;
  std::string::string_from_cstr((int)local_2bc,(uint *)"RangeShortest");
  local_4b6c = local_4b6c + 1;
  Persist::QueryValue((int)local_28c,(int)local_2bc,piVar6);
  local_4b6c = local_4b6c + -1;
  if (local_2b4 != 0) {
    if (*(int *)(local_2b4 + -0xc) != -1) {
      local_4c54 = (int *)(local_2b4 + -0xc);
      if (local_4c54 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4c54 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4c54 = *local_4c54 + -1;
        iVar3 = *local_4c54 + 1;
      }
      if (iVar3 != 0) goto LAB_00401b46;
    }
    local_4c58 = local_2b4 + -0xc;
    local_4c5c = local_2b4 + -0xc;
    operator_delete();
    local_4c60 = 0;
    local_4c64 = local_2bc;
    local_2b4 = 0;
    local_5234 = 0;
  }
LAB_00401b46:
  piVar6 = &local_4bf0;
  local_4b78 = 0x140;
  std::string::string_from_cstr((int)local_2cc,(uint *)"RangeLongest");
  local_4b6c = local_4b6c + 1;
  Persist::QueryValue((int)local_28c,(int)local_2cc,piVar6);
  local_4b6c = local_4b6c + -1;
  if (local_2c4 != 0) {
    if (*(int *)(local_2c4 + -0xc) != -1) {
      local_4c70 = (int *)(local_2c4 + -0xc);
      if (local_4c70 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4c70 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4c70 = *local_4c70 + -1;
        iVar3 = *local_4c70 + 1;
      }
      if (iVar3 != 0) goto LAB_00401c47;
    }
    local_4c74 = local_2c4 + -0xc;
    local_4c78 = local_2c4 + -0xc;
    operator_delete();
    local_4c7c = 0;
    local_4c80 = local_2cc;
    local_2c4 = 0;
    local_5244 = 0;
  }
LAB_00401c47:
  local_4b78 = 200;
  local_4b6c = local_4b6c + -1;
  Persist::_dtor((int)local_28c,2);
  local_4b78 = 0x158;
  local_4c84 = 0;
  local_24c = (uint *)0x0;
  if (local_23c[-3] == 0xffffffff || (int)(local_23c[-3] + 1) < 0) {
    local_4c94 = local_23c[-1];
    local_4c9c = std::string::__getRep(local_254,local_4c94,local_4c94);
    local_4ca0 = local_254;
    local_5264 = (uint *)(local_4c9c + 3);
    local_4ca4 = local_4c94;
    local_4ca8 = local_23c;
    local_4cac = local_5264;
    local_4c98 = local_5264;
    local_24c = local_5264;
    memcpy(local_5264,local_23c,local_4c94);
  }
  else {
    local_4c8c = local_254;
    local_4c88 = local_23c;
    local_24c = local_23c;
    local_5254 = local_23c;
    local_4c90 = local_23c + -3;
    if (local_4c90 != &DAT_0042fab4) {
      *local_4c90 = *local_4c90 + 1;
    }
  }
  local_4b6c = local_4b6c + 1;
  iVar3 = 0;
  cVar5 = '\0';
  local_4cb0 = local_4bec;
  local_4cb4 = local_4bf0;
  local_4cb8 = 0;
  local_4b78 = 0x170;
  std::string::string_from_cstr((int)local_264,(uint *)&DAT_0042ab76);
  local_4b6c = local_4b6c + 1;
  local_4b78 = 0x20;
  local_4cc4 = 1;
  if (1 < param_1) {
    do {
      iVar4 = FUN_0041f210(&DAT_0042ab78 /* "/D:" */,*(char **)(param_2 + local_4cc4 * 4),3);
      if (iVar4 == 0) {
        FUN_00416c68((int)local_254,(uint *)(*(int *)(param_2 + local_4cc4 * 4) + 3));
      }
      else {
        iVar4 = FUN_0041f210(&DAT_0042ab7c /* "/H:" */,*(char **)(param_2 + local_4cc4 * 4),3);
        if (iVar4 == 0) {
          FUN_00416c68((int)local_224,(uint *)(*(int *)(param_2 + local_4cc4 * 4) + 3));
        }
        else {
          iVar4 = FUN_0041f210(&DAT_0042ab80 /* "/A:" */,*(char **)(param_2 + local_4cc4 * 4),3);
          if (iVar4 == 0) {
            FUN_00416c68((int)local_234,(uint *)(*(int *)(param_2 + local_4cc4 * 4) + 3));
          }
          else {
            iVar4 = FUN_0041f210(&DAT_0042ab84 /* "/S:" */,*(char **)(param_2 + local_4cc4 * 4),3);
            if (iVar4 == 0) {
              local_4cc8 = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
              local_4cb0 = FUN_00424b58(local_4cc8);
            }
            else {
              iVar4 = FUN_0041f210(&DAT_0042ab88 /* "/L:" */,*(char **)(param_2 + local_4cc4 * 4),3);
              if (iVar4 == 0) {
                local_4ccc = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                local_4cb4 = FUN_00424b58(local_4ccc);
              }
              else {
                iVar4 = FUN_0041f210(&DAT_0042ab8c /* "/N:" */,*(char **)(param_2 + local_4cc4 * 4),3);
                if (iVar4 == 0) {
                  local_4cd0 = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                  local_74 = FUN_00424b58(local_4cd0);
                }
                else {
                  iVar4 = FUN_0041f210(&DAT_0042ab90 /* "/B:" */,*(char **)(param_2 + local_4cc4 * 4),3);
                  if (iVar4 == 0) {
                    local_4cd4 = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                    local_70 = FUN_00424b58(local_4cd4);
                  }
                  else {
                    iVar4 = FUN_0041f210(&DAT_0042ab94 /* "/X:" */,*(char **)(param_2 + local_4cc4 * 4),3);
                    if (iVar4 == 0) {
                      local_4cd8 = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                      DAT_0042c930 = FUN_00424b58(local_4cd8);
                    }
                    else {
                      iVar4 = FUN_0041f210(&DAT_0042ab98 /* "/U:" */,*(char **)(param_2 + local_4cc4 * 4),3);
                      if (iVar4 == 0) {
                        local_4cdc = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                        local_214 = FUN_00424b58(local_4cdc);
                      }
                      else {
                        iVar4 = FUN_0041f210(&DAT_0042ab9c /* "/O:" */,*(char **)(param_2 + local_4cc4 * 4),3);
                        if (iVar4 == 0) {
                          local_4ce0 = (char *)(*(int *)(param_2 + local_4cc4 * 4) + 3);
                          iVar3 = FUN_00424b58(local_4ce0);
                          iVar3 = iVar3 % 5;
                        }
                        else {
                          iVar4 = FUN_0041f178(&DAT_0042aba0,*(char **)(param_2 + local_4cc4 * 4));
                          if (iVar4 == 0) {
                            local_4cb8 = 1;
                          }
                          else {
                            if (**(char **)(param_2 + local_4cc4 * 4) == '/') {
                              uStackY_1914 = 0x402171;
                              FUN_00420b6c(&DAT_004320a8,
                                           (byte *)"TEA Crossword Helper console version 2.11.0, 1 Oct 2011\nCopyright (c) 2011 Crossword Man. All Rights Reserved.\nLicensed to: %s\n\nTEACON [/D:dictionaries] [/H:hash] [/A:at] [/S:shortest] [/L:longest]\n       [/N:annotations] [/B:balances] [/X:variables] [/O:output]\n       [pattern ...]\n\n  /D:dictionaries  Semicolon-separated file list       (default=%s)\n  /H:hash          Hash (#) macro expansion            (default=%s)\n  /A:at            At (@) macro expansion              (default=%s)\n  /S:shortest      Minimum length of result            (default=%d)\n  /L:longest       Maximum length of result            (default=%d)\n  /N:annotations   0 = dictionary annotations omitted  (default=%d)\n                   1 = dictionary annotations shown\n  /B:balances      0 = anagram balances omitted        (default=%d)\n                   1 = anagram balances shown\n  /X:variables     0 = non-exclusive letter variables  (default=%d)\n                   1 = exclusive letter variables\n  /U:ignored       0 = unused punctuation significant  (default=%d)\n                   1 = unused punctuation ignored\n  /O:output        0 = exactly as in dictionary        (default=%d)\n                   1 = as ASCII\n                   2 = as ASCII letters\n                   3 = as ASCII lower case letters\n                   4 = as ASCII upper case letters\n  /Q               Quiet mode (no pattern/comment echoing)\n  pattern ...      TEA patterns to be matched\n\n                   If there are no patterns on the command line,\n                   each line of standard input is assumed to be\n                   a pattern to be matched.\n");
                              uVar2 = 1;
                              local_4b6c = local_4b6c + -1;
                              if (local_25c != 0) {
                                if (*(int *)(local_25c + -0xc) != -1) {
                                  piVar6 = (int *)(local_25c + -0xc);
                                  if (piVar6 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else if (piVar6 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else {
                                    *piVar6 = *piVar6 + -1;
                                    iVar3 = *piVar6 + 1;
                                  }
                                  if (iVar3 != 0) goto LAB_0040221a;
                                }
                                local_4ce4 = local_25c + -0xc;
                                local_4ce8 = local_25c + -0xc;
                                operator_delete();
                                local_4cec = 0;
                                local_4cf0 = local_264;
                                local_25c = 0;
                                local_5274 = 0;
                              }
LAB_0040221a:
                              local_4b78 = 0x20;
                              local_4b6c = local_4b6c + -1;
                              if (local_24c != (uint *)0x0) {
                                if (local_24c[-3] != 0xffffffff) {
                                  local_4cf4 = local_24c + -3;
                                  if (local_4cf4 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else if (local_4cf4 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else {
                                    *local_4cf4 = *local_4cf4 - 1;
                                    iVar3 = *local_4cf4 + 1;
                                  }
                                  if (iVar3 != 0) goto LAB_004022da;
                                }
                                local_4cf8 = local_24c + -3;
                                local_4cfc = local_24c + -3;
                                operator_delete();
                                local_4d00 = 0;
                                local_4d04 = local_254;
                                local_24c = (uint *)0x0;
                                local_5284 = 0;
                              }
LAB_004022da:
                              local_4b6c = local_4b6c + -1;
                              if (local_23c != (uint *)0x0) {
                                if (local_23c[-3] != 0xffffffff) {
                                  local_4d08 = local_23c + -3;
                                  if (local_4d08 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else if (local_4d08 == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else {
                                    *local_4d08 = *local_4d08 - 1;
                                    iVar3 = *local_4d08 + 1;
                                  }
                                  if (iVar3 != 0) goto LAB_00402394;
                                }
                                local_4d0c = local_23c + -3;
                                local_4d10 = local_23c + -3;
                                operator_delete();
                                local_4d14 = 0;
                                local_4d18 = local_244;
                                local_23c = (uint *)0x0;
                                local_5294 = 0;
                              }
LAB_00402394:
                              local_4b6c = local_4b6c + -4;
                              TEAViewProfileWindows::_dtor((int)local_234,2);
                              local_4b6c = local_4b6c + -1;
                              if (local_3c != (char *)0x0) {
                                if (*(int *)(local_3c + -0xc) != -1) {
                                  local_4d1c = (int *)(local_3c + -0xc);
                                  if (local_4d1c == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else if (local_4d1c == &DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else {
                                    *local_4d1c = *local_4d1c + -1;
                                    iVar3 = *local_4d1c + 1;
                                  }
                                  if (iVar3 != 0) goto LAB_0040244e;
                                }
                                local_4d20 = local_3c + -0xc;
                                local_4d24 = local_3c + -0xc;
                                operator_delete();
                                local_4d28 = 0;
                                local_4d2c = local_44;
                                local_3c = (char *)0x0;
                                local_52a4 = 0;
                              }
LAB_0040244e:
                              local_4b6c = local_4b6c + -1;
                              if (local_2c != (byte *)0x0) {
                                if (*(int *)(local_2c + -0xc) != -1) {
                                  local_4d30 = local_2c + -0xc;
                                  if (local_4d30 == (byte *)&DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else if (local_4d30 == (byte *)&DAT_0042fab4) {
                                    iVar3 = 1;
                                  }
                                  else {
                                    *(int *)local_4d30 = *(int *)local_4d30 + -1;
                                    iVar3 = *(int *)local_4d30 + 1;
                                  }
                                  if (iVar3 != 0) goto LAB_004024f3;
                                }
                                local_4d34 = local_2c + -0xc;
                                local_4d38 = local_2c + -0xc;
                                operator_delete();
                                local_4d3c = 0;
                                local_4d40 = local_34;
                                local_2c = (byte *)0x0;
                                local_52b4 = 0;
                              }
LAB_004024f3:
                              local_4b6c = local_4b6c + -1;
                              FUN_0040483c(&local_24,local_20,local_1c);
                              local_4d44 = local_20;
                              operator_delete();
                              *in_FS_OFFSET = local_4b88;
                              return uVar2;
                            }
                            local_4b78 = 0x1c4;
                            local_4d48 = std::string::string_from_cstr((int)local_2dc,
                                                      *(uint **)(param_2 + local_4cc4 * 4));
                            local_4b6c = local_4b6c + 1;
                            if (local_1c == local_c) {
                              FUN_004048f4((int)&local_24,local_1c,local_4d48);
                            }
                            else {
                              local_4d54 = local_1c;
                              local_2e0 = local_1c;
                              if (local_1c != 0) {
                                local_4b78 = 0x1d0;
                                local_4d58 = 0;
                                *(undefined4 *)(local_1c + 8) = 0;
                                iVar4 = *(int *)(*(int *)(local_4d48 + 8) + -0xc);
                                if (iVar4 == -1 || iVar4 + 1 < 0) {
                                  local_4d68 = *(uint *)(*(int *)(local_4d48 + 8) + -4);
                                  local_4d70 = std::string::__getRep(local_1c,local_4d68,local_4d68);
                                  local_4d6c = local_4d70 + 3;
                                  *(int **)(local_2e0 + 8) = local_4d6c;
                                  local_4d74 = local_2e0;
                                  local_52d4 = *(undefined4 *)(local_2e0 + 8);
                                  local_4d78 = local_4d68;
                                  local_4d7c = *(undefined4 **)(local_4d48 + 8);
                                  local_4d80 = *(undefined4 **)(local_2e0 + 8);
                                  memcpy(local_4d80,local_4d7c,local_4d68);
                                }
                                else {
                                  local_4d5c = *(undefined4 *)(local_4d48 + 8);
                                  *(undefined4 *)(local_1c + 8) = local_4d5c;
                                  local_4d60 = local_1c;
                                  local_52c4 = *(undefined4 *)(local_1c + 8);
                                  local_4d64 = (int *)(*(int *)(local_1c + 8) + -0xc);
                                  if (local_4d64 != &DAT_0042fab4) {
                                    *local_4d64 = *local_4d64 + 1;
                                  }
                                }
                                local_4b78 = 0x1c4;
                              }
                              local_1c = local_1c + 0x10;
                            }
                            local_4b6c = local_4b6c + -1;
                            if (local_2d4 != 0) {
                              if (*(int *)(local_2d4 + -0xc) != -1) {
                                local_4d84 = (int *)(local_2d4 + -0xc);
                                if (local_4d84 == &DAT_0042fab4) {
                                  iVar4 = 1;
                                }
                                else if (local_4d84 == &DAT_0042fab4) {
                                  iVar4 = 1;
                                }
                                else {
                                  *local_4d84 = *local_4d84 + -1;
                                  iVar4 = *local_4d84 + 1;
                                }
                                if (iVar4 != 0) goto LAB_004027ae;
                              }
                              local_4d88 = local_2d4 + -0xc;
                              local_4d8c = local_2d4 + -0xc;
                              operator_delete();
                              local_4d90 = 0;
                              local_4d94 = local_2dc;
                              local_2d4 = 0;
                              local_52e4 = 0;
                            }
LAB_004027ae:
                            local_4b78 = 0x20;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      cVar5 = (char)iVar3;
      local_4cc4 = local_4cc4 + 1;
    } while (local_4cc4 < param_1);
  }
  local_4d98 = FUN_0040530c(local_24c);
  local_4d9c = FUN_004065c8((int)local_4d98);
  if ((local_4d9c == 0) && (iVar3 = TSDictionaryList::GetCount((int)local_4d98), iVar3 != 0)) {
    local_4e08 = 0;
    local_4e0c = &DAT_0042fac0;
    local_4e10 = local_274;
    local_26c = &DAT_0042fac0;
    local_5344 = &DAT_0042fac0;
    local_4b6c = local_4b6c + 1;
    local_4b78 = 0x20;
    local_4e14 = 0;
    local_4e18 = 0;
    while (iVar3 = FUN_00414870(local_2c,local_3c), iVar3 != 0) {
      local_4e94 = 0;
      local_4e98 = &DAT_0042fac0;
      local_4e9c = local_2f0;
      local_2e8 = (uint *)&DAT_0042fac0;
      local_4b6c = local_4b6c + 1;
      local_4b78 = 0x2c0;
      iVar3 = local_1c - local_20;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
      }
      if ((uint)(iVar3 >> 4) <= local_4e18) {
        iVar3 = local_1c - local_20;
        if (iVar3 < 0) {
          iVar3 = iVar3 + 0xf;
        }
        if (iVar3 >> 4 == 0) {
          piVar6 = FUN_0041a86c(&DAT_00434788,(undefined1 *)local_5734,1000,'\n');
          local_4ea4 = *piVar6;
          if ((*(byte *)(local_4ea4 + 0x30) & 5) == 0) {
            FUN_00416c68((int)local_2f0,local_5734);
            goto LAB_004032d0;
          }
        }
        local_4b6c = local_4b6c + -1;
        if (local_2e8 != (uint *)0x0) {
          if (local_2e8[-3] != 0xffffffff) {
            local_4fc0 = local_2e8 + -3;
            if (local_4fc0 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4fc0 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4fc0 = *local_4fc0 - 1;
              iVar3 = *local_4fc0 + 1;
            }
            if (iVar3 != 0) goto LAB_00404076;
          }
          local_4fc4 = local_2e8 + -3;
          local_4fc8 = local_2e8 + -3;
          operator_delete();
          local_4fcc = 0;
          local_4fd0 = local_2f0;
          local_2e8 = (uint *)0x0;
        }
LAB_00404076:
        TSDictionaryList::ReleaseDictionaries((int)local_4d98);
        local_4b6c = local_4b6c + -1;
        uVar2 = local_4e14;
        if (local_26c != (undefined1 *)0x0) {
          if (*(int *)(local_26c + -0xc) != -1) {
            local_4fe8 = (int *)(local_26c + -0xc);
            if (local_4fe8 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4fe8 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4fe8 = *local_4fe8 + -1;
              iVar3 = *local_4fe8 + 1;
            }
            if (iVar3 != 0) goto LAB_00404144;
          }
          local_4fec = local_26c + -0xc;
          local_4ff0 = local_26c + -0xc;
          operator_delete();
          local_4ff4 = 0;
          local_4ff8 = local_274;
          local_26c = (undefined1 *)0x0;
        }
LAB_00404144:
        local_4b78 = 0x20;
        local_4b6c = local_4b6c + -1;
        if (local_25c != 0) {
          if (*(int *)(local_25c + -0xc) != -1) {
            local_4ffc = (int *)(local_25c + -0xc);
            if (local_4ffc == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4ffc == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4ffc = *local_4ffc + -1;
              iVar3 = *local_4ffc + 1;
            }
            if (iVar3 != 0) goto LAB_00404204;
          }
          local_5000 = local_25c + -0xc;
          local_5004 = local_25c + -0xc;
          operator_delete();
          local_5008 = 0;
          local_500c = local_264;
          local_25c = 0;
        }
LAB_00404204:
        local_4b6c = local_4b6c + -1;
        if (local_24c != (uint *)0x0) {
          if (local_24c[-3] != 0xffffffff) {
            local_5010 = local_24c + -3;
            if (local_5010 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_5010 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_5010 = *local_5010 - 1;
              iVar3 = *local_5010 + 1;
            }
            if (iVar3 != 0) goto LAB_004042be;
          }
          local_5014 = local_24c + -3;
          local_5018 = local_24c + -3;
          operator_delete();
          local_501c = 0;
          local_5020 = local_254;
          local_24c = (uint *)0x0;
        }
LAB_004042be:
        local_4b6c = local_4b6c + -1;
        if (local_23c != (uint *)0x0) {
          if (local_23c[-3] != 0xffffffff) {
            local_5024 = local_23c + -3;
            if (local_5024 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_5024 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_5024 = *local_5024 - 1;
              iVar3 = *local_5024 + 1;
            }
            if (iVar3 != 0) goto LAB_00404378;
          }
          local_5028 = local_23c + -3;
          local_502c = local_23c + -3;
          operator_delete();
          local_5030 = 0;
          local_5034 = local_244;
          local_23c = (uint *)0x0;
        }
LAB_00404378:
        local_4b6c = local_4b6c + -4;
        TEAViewProfileWindows::_dtor((int)local_234,2);
        local_4b6c = local_4b6c + -1;
        if (local_3c != (char *)0x0) {
          if (*(int *)(local_3c + -0xc) != -1) {
            local_5038 = (int *)(local_3c + -0xc);
            if (local_5038 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_5038 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_5038 = *local_5038 + -1;
              iVar3 = *local_5038 + 1;
            }
            if (iVar3 != 0) goto LAB_00404432;
          }
          local_503c = local_3c + -0xc;
          local_5040 = local_3c + -0xc;
          operator_delete();
          local_5044 = 0;
          local_5048 = local_44;
          local_3c = (char *)0x0;
        }
LAB_00404432:
        local_4b6c = local_4b6c + -1;
        if (local_2c != (byte *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            local_504c = local_2c + -0xc;
            if (local_504c == (byte *)&DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_504c == (byte *)&DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *(int *)local_504c = *(int *)local_504c + -1;
              iVar3 = *(int *)local_504c + 1;
            }
            if (iVar3 != 0) goto LAB_004044d7;
          }
          local_5050 = local_2c + -0xc;
          local_5054 = local_2c + -0xc;
          operator_delete();
          local_5058 = 0;
          local_505c = local_34;
          local_2c = (byte *)0x0;
        }
LAB_004044d7:
        local_4b6c = local_4b6c + -1;
        FUN_0040483c(&local_24,local_20,local_1c);
        local_5060 = local_20;
        operator_delete();
        *in_FS_OFFSET = local_4b88;
        return uVar2;
      }
      local_4ea0 = local_4e18;
      iVar3 = local_4e18 * 0x10;
      local_4e18 = local_4e18 + 1;
      FUN_00416bd0((int)local_2f0,iVar3 + local_20);
LAB_004032d0:
      if (local_2e8[-1] == 0) {
        local_4ea5 = '\0';
      }
      else {
        if (1 < (int)(local_2e8[-3] + 1)) {
          FUN_0041a7fc((int)local_2f0);
        }
        local_4eac = local_2e8 + -3;
        if (local_4eac != &DAT_0042fab4) {
          *local_4eac = 0xffffffff;
        }
        local_4ea5 = (char)*local_2e8;
      }
      if ((local_4ea5 == ' ') || (local_4ea5 == '\t')) {
        if (local_4cb8 == 0) {
          FUN_00421590(local_2e8);
        }
        local_4b6c = local_4b6c + -1;
        if (local_2e8 != (uint *)0x0) {
          if (local_2e8[-3] != 0xffffffff) {
            local_4fac = local_2e8 + -3;
            if (local_4fac == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4fac == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4fac = *local_4fac - 1;
              iVar3 = *local_4fac + 1;
            }
            if (iVar3 != 0) goto LAB_00403417;
          }
          local_4fb0 = local_2e8 + -3;
          local_4fb4 = local_2e8 + -3;
          operator_delete();
          local_4fb8 = 0;
          local_4fbc = local_2f0;
          local_2e8 = (uint *)0x0;
        }
LAB_00403417:
        local_4b78 = 0x2c0;
      }
      else {
        if (local_4cb8 == 0) {
          DAT_00432098 = DAT_00432098 + 1;
          if (DAT_00432098 < 0) {
            puVar7 = DAT_00432090 + 1;
            *DAT_00432090 = 0x20;
            DAT_00432090 = puVar7;
          }
          else {
            FUN_00420684(0x20,(int *)&DAT_00432090);
          }
          FUN_00421590(local_2e8);
        }
        local_4b78 = 0x2cc;
        ExpandQueryMacros((int)local_300,(int)local_234,(int)local_2f0);
        local_4b6c = local_4b6c + 1;
        FUN_00416bd0((int)local_2f0,(int)local_300);
        local_4b6c = local_4b6c + -1;
        if (local_2f8 != 0) {
          if (*(int *)(local_2f8 + -0xc) != -1) {
            local_4eb0 = (int *)(local_2f8 + -0xc);
            if (local_4eb0 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4eb0 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4eb0 = *local_4eb0 + -1;
              iVar3 = *local_4eb0 + 1;
            }
            if (iVar3 != 0) goto LAB_00403555;
          }
          local_4eb4 = local_2f8 + -0xc;
          local_4eb8 = local_2f8 + -0xc;
          operator_delete();
          local_4ebc = 0;
          local_4ec0 = local_300;
          local_2f8 = 0;
        }
LAB_00403555:
        local_4ec4 = 0;
        while( true ) {
          local_4b78 = 0x2c0;
          iVar3 = TSDictionaryList::GetCount((int)local_4d98);
          if (iVar3 <= local_4ec4) break;
          local_4b78 = 0x2e4;
          InputEngine::InputEngine(local_4b0c,(int)local_4d98,local_4ec4);
          local_4b6c = local_4b6c + 1;
          local_4b78 = 0x2fc;
          FUN_00411e94(local_4b44);
          local_4b6c = local_4b6c + 3;
          local_4b78 = 0x2f0;
          local_4ec5 = MatchEngineSet::Compile((int)local_4b44,(int)local_4d98,local_4ec4,(int)local_2f0,
                                    local_4cb0,local_4cb4,local_214);
          if (local_4ec5 != '\0') {
            if (('\0' < local_4ec5) && (local_4ec5 < '\x0f')) {
              FUN_00420b6c(&DAT_004320a8,(byte *)"Pattern error: %s\n");
            }
            local_4e14 = 1;
            local_4b6c = local_4b6c + -3;
            MatchEngineSet::_dtor((int)local_4b44,2);
            local_4b6c = local_4b6c + -1;
            InputEngine::_dtor((int)local_4b0c,2);
            break;
          }
          local_4ecc = 0x65;
          local_4ed0 = 0;
          FUN_00413da4((int)local_4b44,&local_4ecc,&local_4ed0);
          if (local_4ecc <= local_4ed0) {
            do {
              bVar1 = InputEngine::StartLength((int)local_4b0c,local_4ecc);
              if (CONCAT31(extraout_var,bVar1) != 0) {
                local_4ed4 = FUN_00413770((int)local_4b44,local_4ecc);
                local_4b78 = 0x2f0;
                while( true ) {
                  do {
                    local_4ed8 = InputEngine::NextMatch((int)local_4b0c,(int)local_4b44);
                  } while (local_4ed8 == (char *)0x0);
                  if (*local_4ed8 == -1) break;
                  local_4b78 = 0x314;
                  std::string::string_from_cstr((int)local_4b54,local_4704);
                  local_4b6c = local_4b6c + 1;
                  local_4b78 = 0x308;
                  if ((local_74 != 0) &&
                     (local_4ee4 = (uint *)InputEngine::GetAnnotation((int)local_4b0c), local_4ee4 != (uint *)0x0)
                     ) {
                    local_4eec = local_4b4c[-1];
                    local_4ee8 = local_4ee4;
                    local_4ef0 = strlen(local_4ee4);
                    FUN_00417320((int)local_4b54,local_4eec,0,(uint)local_4ee8,(uint)local_4ef0,0,
                                 (uint)local_4ef0);
                  }
                  local_4b78 = 800;
                  FilterWordByCaseMode((int)local_4b64,(int)local_4b54,cVar5);
                  local_4b6c = local_4b6c + 1;
                  FUN_00416bd0((int)local_4b54,(int)local_4b64);
                  local_4b6c = local_4b6c + -1;
                  if (local_4b5c != 0) {
                    if (*(int *)(local_4b5c + -0xc) != -1) {
                      local_4ef4 = (int *)(local_4b5c + -0xc);
                      if (local_4ef4 == &DAT_0042fab4) {
                        iVar3 = 1;
                      }
                      else if (local_4ef4 == &DAT_0042fab4) {
                        iVar3 = 1;
                      }
                      else {
                        *local_4ef4 = *local_4ef4 + -1;
                        iVar3 = *local_4ef4 + 1;
                      }
                      if (iVar3 != 0) goto LAB_00403843;
                    }
                    local_4ef8 = local_4b5c + -0xc;
                    local_4efc = local_4b5c + -0xc;
                    operator_delete();
                    local_4f00 = 0;
                    local_4f04 = local_4b64;
                    local_4b5c = 0;
                  }
LAB_00403843:
                  local_4b78 = 0x308;
                  if (local_70 != 0) {
                    FUN_00413804((int)local_4b44,(int)local_264,(int)local_274);
                    std::string::append((int)local_4b54,(int)local_274);
                  }
                  FUN_00421590(local_4b4c);
                  local_4b6c = local_4b6c + -1;
                  if (local_4b4c != (uint *)0x0) {
                    if (local_4b4c[-3] != 0xffffffff) {
                      local_4f08 = local_4b4c + -3;
                      if (local_4f08 == &DAT_0042fab4) {
                        iVar3 = 1;
                      }
                      else if (local_4f08 == &DAT_0042fab4) {
                        iVar3 = 1;
                      }
                      else {
                        *local_4f08 = *local_4f08 - 1;
                        iVar3 = *local_4f08 + 1;
                      }
                      if (iVar3 != 0) goto LAB_00403949;
                    }
                    local_4f0c = local_4b4c + -3;
                    local_4f10 = local_4b4c + -3;
                    operator_delete();
                    local_4f14 = 0;
                    local_4f18 = local_4b54;
                    local_4b4c = (uint *)0x0;
                  }
LAB_00403949:
                  local_4b78 = 0x2f0;
                }
              }
              local_4ecc = local_4ecc + 1;
            } while (local_4ecc <= local_4ed0);
          }
          iVar3 = FUN_00414a9c(local_2c,local_3c);
          if (iVar3 == 0) {
            uVar2 = 1;
            local_4b6c = local_4b6c + -3;
            MatchEngineSet::_dtor((int)local_4b44,2);
            local_4b6c = local_4b6c + -1;
            InputEngine::_dtor((int)local_4b0c,2);
            local_4b6c = local_4b6c + -1;
            if (local_2e8 != (uint *)0x0) {
              if (local_2e8[-3] != 0xffffffff) {
                local_4f1c = local_2e8 + -3;
                if (local_4f1c == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f1c == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f1c = *local_4f1c - 1;
                  iVar3 = *local_4f1c + 1;
                }
                if (iVar3 != 0) goto LAB_00403ada;
              }
              local_4f20 = local_2e8 + -3;
              local_4f24 = local_2e8 + -3;
              operator_delete();
              local_4f28 = 0;
              local_4f2c = local_2f0;
              local_2e8 = (uint *)0x0;
            }
LAB_00403ada:
            local_4b78 = 0x2f0;
            local_4b6c = local_4b6c + -1;
            if (local_26c != (undefined1 *)0x0) {
              if (*(int *)(local_26c + -0xc) != -1) {
                local_4f30 = (int *)(local_26c + -0xc);
                if (local_4f30 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f30 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f30 = *local_4f30 + -1;
                  iVar3 = *local_4f30 + 1;
                }
                if (iVar3 != 0) goto LAB_00403b9a;
              }
              local_4f34 = local_26c + -0xc;
              local_4f38 = local_26c + -0xc;
              operator_delete();
              local_4f3c = 0;
              local_4f40 = local_274;
              local_26c = (undefined1 *)0x0;
            }
LAB_00403b9a:
            local_4b6c = local_4b6c + -1;
            if (local_25c != 0) {
              if (*(int *)(local_25c + -0xc) != -1) {
                local_4f44 = (int *)(local_25c + -0xc);
                if (local_4f44 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f44 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f44 = *local_4f44 + -1;
                  iVar3 = *local_4f44 + 1;
                }
                if (iVar3 != 0) goto LAB_00403c54;
              }
              local_4f48 = local_25c + -0xc;
              local_4f4c = local_25c + -0xc;
              operator_delete();
              local_4f50 = 0;
              local_4f54 = local_264;
              local_25c = 0;
            }
LAB_00403c54:
            local_4b6c = local_4b6c + -1;
            if (local_24c != (uint *)0x0) {
              if (local_24c[-3] != 0xffffffff) {
                local_4f58 = local_24c + -3;
                if (local_4f58 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f58 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f58 = *local_4f58 - 1;
                  iVar3 = *local_4f58 + 1;
                }
                if (iVar3 != 0) goto LAB_00403d0e;
              }
              local_4f5c = local_24c + -3;
              local_4f60 = local_24c + -3;
              operator_delete();
              local_4f64 = 0;
              local_4f68 = local_254;
              local_24c = (uint *)0x0;
            }
LAB_00403d0e:
            local_4b6c = local_4b6c + -1;
            if (local_23c != (uint *)0x0) {
              if (local_23c[-3] != 0xffffffff) {
                local_4f6c = local_23c + -3;
                if (local_4f6c == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f6c == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f6c = *local_4f6c - 1;
                  iVar3 = *local_4f6c + 1;
                }
                if (iVar3 != 0) goto LAB_00403dc8;
              }
              local_4f70 = local_23c + -3;
              local_4f74 = local_23c + -3;
              operator_delete();
              local_4f78 = 0;
              local_4f7c = local_244;
              local_23c = (uint *)0x0;
            }
LAB_00403dc8:
            local_4b6c = local_4b6c + -4;
            TEAViewProfileWindows::_dtor((int)local_234,2);
            local_4b6c = local_4b6c + -1;
            if (local_3c != (char *)0x0) {
              if (*(int *)(local_3c + -0xc) != -1) {
                local_4f80 = (int *)(local_3c + -0xc);
                if (local_4f80 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f80 == &DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *local_4f80 = *local_4f80 + -1;
                  iVar3 = *local_4f80 + 1;
                }
                if (iVar3 != 0) goto LAB_00403e82;
              }
              local_4f84 = local_3c + -0xc;
              local_4f88 = local_3c + -0xc;
              operator_delete();
              local_4f8c = 0;
              local_4f90 = local_44;
              local_3c = (char *)0x0;
            }
LAB_00403e82:
            local_4b6c = local_4b6c + -1;
            if (local_2c != (byte *)0x0) {
              if (*(int *)(local_2c + -0xc) != -1) {
                local_4f94 = local_2c + -0xc;
                if (local_4f94 == (byte *)&DAT_0042fab4) {
                  iVar3 = 1;
                }
                else if (local_4f94 == (byte *)&DAT_0042fab4) {
                  iVar3 = 1;
                }
                else {
                  *(int *)local_4f94 = *(int *)local_4f94 + -1;
                  iVar3 = *(int *)local_4f94 + 1;
                }
                if (iVar3 != 0) goto LAB_00403f27;
              }
              local_4f98 = local_2c + -0xc;
              local_4f9c = local_2c + -0xc;
              operator_delete();
              local_4fa0 = 0;
              local_4fa4 = local_34;
              local_2c = (byte *)0x0;
            }
LAB_00403f27:
            local_4b6c = local_4b6c + -1;
            FUN_0040483c(&local_24,local_20,local_1c);
            local_4fa8 = local_20;
            operator_delete();
            *in_FS_OFFSET = local_4b88;
            return uVar2;
          }
          local_4b6c = local_4b6c + -3;
          MatchEngineSet::_dtor((int)local_4b44,2);
          local_4b6c = local_4b6c + -1;
          InputEngine::_dtor((int)local_4b0c,2);
          local_4ec4 = local_4ec4 + 1;
        }
        local_4b6c = local_4b6c + -1;
        if (local_2e8 != (uint *)0x0) {
          if (local_2e8[-3] != 0xffffffff) {
            local_4fd4 = local_2e8 + -3;
            if (local_4fd4 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else if (local_4fd4 == &DAT_0042fab4) {
              iVar3 = 1;
            }
            else {
              *local_4fd4 = *local_4fd4 - 1;
              iVar3 = *local_4fd4 + 1;
            }
            if (iVar3 != 0) goto LAB_0040406b;
          }
          local_4fd8 = local_2e8 + -3;
          local_4fdc = local_2e8 + -3;
          operator_delete();
          local_4fe0 = 0;
          local_4fe4 = local_2f0;
          local_2e8 = (uint *)0x0;
        }
LAB_0040406b:
        local_4b78 = 0x20;
      }
    }
    uVar2 = 1;
    local_4b6c = local_4b6c + -1;
    if (local_26c != (undefined1 *)0x0) {
      if (*(int *)(local_26c + -0xc) != -1) {
        piVar6 = (int *)(local_26c + -0xc);
        if (piVar6 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (piVar6 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar3 = *piVar6 + 1;
        }
        if (iVar3 != 0) goto LAB_00402d27;
      }
      local_4e1c = local_26c + -0xc;
      local_4e20 = local_26c + -0xc;
      operator_delete();
      local_4e24 = 0;
      local_4e28 = local_274;
      local_26c = (undefined1 *)0x0;
    }
LAB_00402d27:
    local_4b78 = 0x20;
    local_4b6c = local_4b6c + -1;
    if (local_25c != 0) {
      if (*(int *)(local_25c + -0xc) != -1) {
        local_4e2c = (int *)(local_25c + -0xc);
        if (local_4e2c == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_4e2c == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *local_4e2c = *local_4e2c + -1;
          iVar3 = *local_4e2c + 1;
        }
        if (iVar3 != 0) goto LAB_00402de7;
      }
      local_4e30 = local_25c + -0xc;
      local_4e34 = local_25c + -0xc;
      operator_delete();
      local_4e38 = 0;
      local_4e3c = local_264;
      local_25c = 0;
    }
LAB_00402de7:
    local_4b6c = local_4b6c + -1;
    if (local_24c != (uint *)0x0) {
      if (local_24c[-3] != 0xffffffff) {
        local_4e40 = local_24c + -3;
        if (local_4e40 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_4e40 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *local_4e40 = *local_4e40 - 1;
          iVar3 = *local_4e40 + 1;
        }
        if (iVar3 != 0) goto LAB_00402ea1;
      }
      local_4e44 = local_24c + -3;
      local_4e48 = local_24c + -3;
      operator_delete();
      local_4e4c = 0;
      local_4e50 = local_254;
      local_24c = (uint *)0x0;
    }
LAB_00402ea1:
    local_4b6c = local_4b6c + -1;
    if (local_23c != (uint *)0x0) {
      if (local_23c[-3] != 0xffffffff) {
        local_4e54 = local_23c + -3;
        if (local_4e54 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_4e54 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *local_4e54 = *local_4e54 - 1;
          iVar3 = *local_4e54 + 1;
        }
        if (iVar3 != 0) goto LAB_00402f5b;
      }
      local_4e58 = local_23c + -3;
      local_4e5c = local_23c + -3;
      operator_delete();
      local_4e60 = 0;
      local_4e64 = local_244;
      local_23c = (uint *)0x0;
    }
LAB_00402f5b:
    local_4b6c = local_4b6c + -4;
    TEAViewProfileWindows::_dtor((int)local_234,2);
    local_4b6c = local_4b6c + -1;
    if (local_3c != (char *)0x0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        local_4e68 = (int *)(local_3c + -0xc);
        if (local_4e68 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_4e68 == &DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *local_4e68 = *local_4e68 + -1;
          iVar3 = *local_4e68 + 1;
        }
        if (iVar3 != 0) goto LAB_00403015;
      }
      local_4e6c = local_3c + -0xc;
      local_4e70 = local_3c + -0xc;
      operator_delete();
      local_4e74 = 0;
      local_4e78 = local_44;
      local_3c = (char *)0x0;
    }
LAB_00403015:
    local_4b6c = local_4b6c + -1;
    if (local_2c != (byte *)0x0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        local_4e7c = local_2c + -0xc;
        if (local_4e7c == (byte *)&DAT_0042fab4) {
          iVar3 = 1;
        }
        else if (local_4e7c == (byte *)&DAT_0042fab4) {
          iVar3 = 1;
        }
        else {
          *(int *)local_4e7c = *(int *)local_4e7c + -1;
          iVar3 = *(int *)local_4e7c + 1;
        }
        if (iVar3 != 0) goto LAB_004030ba;
      }
      local_4e80 = local_2c + -0xc;
      local_4e84 = local_2c + -0xc;
      operator_delete();
      local_4e88 = 0;
      local_4e8c = local_34;
      local_2c = (byte *)0x0;
    }
LAB_004030ba:
    local_4b6c = local_4b6c + -1;
    FUN_0040483c(&local_24,local_20,local_1c);
    local_4e90 = local_20;
    operator_delete();
    *in_FS_OFFSET = local_4b88;
    return uVar2;
  }
  FUN_00420b6c(&DAT_004320a8,(byte *)"\"%s\" is not a valid dictionary\n");
  uVar2 = 1;
  local_4b6c = local_4b6c + -1;
  if (local_25c != 0) {
    if (*(int *)(local_25c + -0xc) != -1) {
      local_4da0 = (int *)(local_25c + -0xc);
      if (local_4da0 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4da0 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4da0 = *local_4da0 + -1;
        iVar3 = *local_4da0 + 1;
      }
      if (iVar3 != 0) goto LAB_004028f1;
    }
    local_4da4 = local_25c + -0xc;
    local_4da8 = local_25c + -0xc;
    operator_delete();
    local_4dac = 0;
    local_4db0 = local_264;
    local_25c = 0;
    local_52f4 = 0;
  }
LAB_004028f1:
  local_4b6c = local_4b6c + -1;
  if (local_24c != (uint *)0x0) {
    if (local_24c[-3] != 0xffffffff) {
      local_4db4 = local_24c + -3;
      if (local_4db4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4db4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4db4 = *local_4db4 - 1;
        iVar3 = *local_4db4 + 1;
      }
      if (iVar3 != 0) goto LAB_004029ab;
    }
    local_4db8 = local_24c + -3;
    local_4dbc = local_24c + -3;
    operator_delete();
    local_4dc0 = 0;
    local_4dc4 = local_254;
    local_24c = (uint *)0x0;
    local_5304 = 0;
  }
LAB_004029ab:
  local_4b6c = local_4b6c + -1;
  if (local_23c != (uint *)0x0) {
    if (local_23c[-3] != 0xffffffff) {
      local_4dc8 = local_23c + -3;
      if (local_4dc8 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4dc8 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4dc8 = *local_4dc8 - 1;
        iVar3 = *local_4dc8 + 1;
      }
      if (iVar3 != 0) goto LAB_00402a65;
    }
    local_4dcc = local_23c + -3;
    local_4dd0 = local_23c + -3;
    operator_delete();
    local_4dd4 = 0;
    local_4dd8 = local_244;
    local_23c = (uint *)0x0;
    local_5314 = 0;
  }
LAB_00402a65:
  local_4b6c = local_4b6c + -4;
  TEAViewProfileWindows::_dtor((int)local_234,2);
  local_4b6c = local_4b6c + -1;
  if (local_3c != (char *)0x0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      local_4ddc = (int *)(local_3c + -0xc);
      if (local_4ddc == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4ddc == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *local_4ddc = *local_4ddc + -1;
        iVar3 = *local_4ddc + 1;
      }
      if (iVar3 != 0) goto LAB_00402b1f;
    }
    local_4de0 = local_3c + -0xc;
    local_4de4 = local_3c + -0xc;
    operator_delete();
    local_4de8 = 0;
    local_4dec = local_44;
    local_3c = (char *)0x0;
    local_5324 = 0;
  }
LAB_00402b1f:
  local_4b6c = local_4b6c + -1;
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      local_4df0 = local_2c + -0xc;
      if (local_4df0 == (byte *)&DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (local_4df0 == (byte *)&DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *(int *)local_4df0 = *(int *)local_4df0 + -1;
        iVar3 = *(int *)local_4df0 + 1;
      }
      if (iVar3 != 0) goto LAB_00402bc4;
    }
    local_4df4 = local_2c + -0xc;
    local_4df8 = local_2c + -0xc;
    operator_delete();
    local_4dfc = 0;
    local_4e00 = local_34;
    local_2c = (byte *)0x0;
    local_5334 = 0;
  }
LAB_00402bc4:
  local_4b6c = local_4b6c + -1;
  FUN_0040483c(&local_24,local_20,local_1c);
  local_4e04 = local_20;
  operator_delete();
  *in_FS_OFFSET = local_4b88;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040483c  FUN_0040483c   (182 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040483c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b224);
joined_r0x00404855:
  do {
    iVar1 = param_2;
    if (iVar1 == param_3) {
      *in_FS_OFFSET = local_28;
      return;
    }
    param_2 = iVar1 + 0x10;
  } while ((iVar1 == 0) || (*(int *)(iVar1 + 8) == 0));
  if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) goto code_r0x00404878;
  goto LAB_004048a5;
code_r0x00404878:
  piVar3 = (int *)(*(int *)(iVar1 + 8) + -0xc);
  if (piVar3 == &DAT_0042fab4) {
    iVar2 = 1;
  }
  else if (piVar3 == &DAT_0042fab4) {
    iVar2 = 1;
  }
  else {
    *piVar3 = *piVar3 + -1;
    iVar2 = *piVar3 + 1;
  }
  if (iVar2 == 0) {
LAB_004048a5:
    operator_delete();
    *(undefined4 *)(iVar1 + 8) = 0;
  }
  goto joined_r0x00404855;
}

// ----------------------------------------------------------------------------------------------------
// 0x004048f4  FUN_004048f4   (893 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004048f4(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  undefined **local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x42b288);
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == *(int *)(param_1 + 0x18)) {
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
    }
    if (iVar3 >> 4 == 0) {
      iVar3 = 0x40;
    }
    else {
      iVar3 = (iVar3 >> 4) * 2;
    }
    iVar4 = operator_new();
    if (iVar4 == 0) {
      local_c = &std::bad_alloc::vftable;
      FUN_004280a0((uint *)&DAT_00404c94,(undefined4*)&local_c,0,&LAB_00404cec,1,0,0,0);
    }
    FUN_00404d5c(*(int *)(param_1 + 4),param_2,iVar4);
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    iVar5 = (iVar5 >> 4) * 0x10 + iVar4;
    if (iVar5 != 0) {
      *(undefined4 *)(iVar5 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar6 = std::string::__getRep(iVar5,uVar1,uVar1);
        *(int **)(iVar5 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(iVar5 + 8),*(undefined4 **)(param_3 + 8),uVar1);
      }
      else {
        *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(param_3 + 8);
        piVar6 = (int *)(*(int *)(iVar5 + 8) + -0xc);
        if (piVar6 != &DAT_0042fab4) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    iVar5 = param_2 - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_00404d5c(param_2,*(int *)(param_1 + 8),(iVar5 >> 4) * 0x10 + iVar4 + 0x10);
    iVar5 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 0xf;
    }
    FUN_0040483c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(int *)(param_1 + 0x18) = iVar3 * 0x10 + iVar4;
    *(int *)(param_1 + 8) = (iVar5 >> 4) * 0x10 + iVar4 + 0x10;
    *(int *)(param_1 + 4) = iVar4;
  }
  else {
    local_8 = iVar3;
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 8) = 0;
      iVar4 = *(int *)(*(int *)(iVar3 + -8) + -0xc);
      if (iVar4 == -1 || iVar4 + 1 < 0) {
        uVar1 = *(uint *)(*(int *)(iVar3 + -8) + -4);
        piVar6 = std::string::__getRep(iVar3,uVar1,uVar1);
        *(int **)(local_8 + 8) = piVar6 + 3;
        memcpy(*(undefined4 **)(local_8 + 8),*(undefined4 **)(iVar3 + -8),uVar1);
      }
      else {
        *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar3 + -8);
        piVar6 = (int *)(*(int *)(iVar3 + 8) + -0xc);
        if (piVar6 != &DAT_0042fab4) {
          *piVar6 = *piVar6 + 1;
        }
      }
    }
    FUN_00404d2c(param_2,*(int *)(param_1 + 8) + -0x10,*(int *)(param_1 + 8));
    FUN_00416bd0(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 0x10;
  }
  *in_FS_OFFSET = local_34;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404d2c  FUN_00404d2c   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00404d2c(int param_1,int param_2,int param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    FUN_00416bd0(param_3,param_2);
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404d5c  FUN_00404d5c   (293 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00404d5c(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x42b320);
  while (iVar4 = param_3, iVar3 = param_1, iVar3 != param_2) {
    param_3 = iVar4 + 0x10;
    param_1 = iVar3 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = std::string::__getRep(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        memcpy(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_0042fab4) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return iVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404ea8  FUN_00404ea8   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00404ea8(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 0x10) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404f9c  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_00431934;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404fa8  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_0043193c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404fb4  std::string::~basic_string   (143 bytes)   [rtti:dtor destructor]
//   written in code as std::string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::string::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0040502f;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0040502f:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405044  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0040483c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040507c  std::vector<MatchEngine *>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_MatchEngine_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_MatchEngine_ptr::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004050b4(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050b4  FUN_004050b4   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004050b4(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004050cc  FUN_004050cc   (151 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405118) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00405120 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall FUN_004050cc(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b3b4);
  if (DAT_0042b604 == '\0') {
    (*(undefined4 *)&DAT_0042b5e8) = 0;
    (*(undefined4 *)&DAT_0042b5ec) = 0;
    DAT_0042b5fc = 0;
    _DAT_0042b5e4 = 0x100;
    DAT_0042b604 = '\x01';
  }
  if (DAT_0042b610 == '\0') {
    _DAT_0042b608 = 0x7fffffff;
    _DAT_0042b60c = 0x7fffffff;
    DAT_0042b610 = '\x01';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405164  FUN_00405164   (88 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00405164(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42b3d4);
  if (DAT_0042b604 != '\0') {
    FUN_004052f4(&DAT_0042b5e4,DAT_0042b5e8,DAT_0042b5ec);
    operator_delete();
    DAT_0042b604 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004051bc  FUN_004051bc   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00405206) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0040520e */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_004051bc(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x42b624);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0x100;
  strlen(param_2);
  puVar1 = (undefined4 *)operator_new_array();
  *param_1 = puVar1;
  uVar2 = 0xffffffff;
  do {
    puVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    puVar5 = (uint *)((int)param_2 + (uint)bVar6 * -2 + 1);
    uVar3 = *param_2;
    param_2 = puVar5;
  } while ((char)uVar3 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)puVar5 - uVar2);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + (uint)bVar6 * -2 + 1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041130c  ExpandQueryMacros   (612 bytes)   [notes+analysis]
//   replaces unescaped @ and # with the configured expansions; \x pairs are copied verbatim
/* WARNING: Removing unreachable block (ram,0x0041134d) */
int __cdecl ExpandQueryMacros(int param_1,int param_2,int param_3)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x42ddb0);
  local_c = (undefined4 *)&DAT_0042fac0;
  iVar3 = *(int *)(*(int *)(param_3 + 8) + -4);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
      if ((cVar2 == '@') && (*(int *)(*(int *)(param_2 + 8) + -4) != 0)) {
        std::string::append((int)local_14,param_2);
      }
      else if ((cVar2 == '#') && (*(int *)(*(int *)(param_2 + 0x18) + -4) != 0)) {
        std::string::append((int)local_14,param_2 + 0x10);
      }
      else {
        if ((cVar2 == '\\') && (iVar4 + 1 < iVar3)) {
          std::string::replace_fill((int)local_14,local_c[-1],0,1,0x5c);
          iVar4 = iVar4 + 1;
          cVar2 = *(char *)(*(int *)(param_3 + 8) + iVar4);
        }
        std::string::replace_fill((int)local_14,local_c[-1],0,1,cVar2);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    piVar5 = std::string::__getRep(param_1,uVar1,uVar1);
    *(int **)(param_1 + 8) = piVar5 + 3;
    memcpy(*(undefined4 **)(param_1 + 8),local_c,uVar1);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar5 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar5 != &DAT_0042fab4) {
      *piVar5 = *piVar5 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar5 = local_c + -3;
      if (piVar5 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar5 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar3 = *piVar5 + 1;
      }
      if (iVar3 != 0) goto LAB_00411555;
    }
    operator_delete();
  }
LAB_00411555:
  *in_FS_OFFSET = local_38;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411570  LoadPatternOptions   (926 bytes)   [analysis]
//   reads ExpansionAt, ExpansionHash, VariablesExclusive, IgnoreUnusedPunctuation from the registry profile
//   file placement: inferred (address adjacency)
void __cdecl LoadPatternOptions(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 *puVar5;
  undefined4 local_70;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  char local_c [8];
  
  __InitExceptBlockLDTC(0x42de6c);
  Persist::Persist(local_c,param_2,'\0','\0');
  iVar2 = param_1;
  std::string::string_from_cstr((int)local_1c,(uint *)"ExpansionAt");
  uVar1 = Persist::QueryValueSized((int)local_c,(int)local_1c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041165b;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_0041165b:
  if (cVar4 != '\0') {
    FUN_00416c68(param_1,(uint *)"[aeiou]");
  }
  iVar2 = param_1 + 0x10;
  std::string::string_from_cstr((int)local_2c,(uint *)"ExpansionHash");
  uVar1 = Persist::QueryValueSized((int)local_c,(int)local_2c,iVar2);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00411732;
    }
    operator_delete();
    local_24 = 0;
  }
LAB_00411732:
  if (cVar4 != '\0') {
    FUN_00416c68(param_1 + 0x10,(uint *)"[^aeiou]");
  }
  puVar5 = &DAT_0042c930;
  std::string::string_from_cstr((int)local_3c,(uint *)"VariablesExclusive");
  uVar1 = Persist::QueryValue((int)local_c,(int)local_3c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0041180d;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0041180d:
  if (cVar4 != '\0') {
    DAT_0042c930 = 1;
  }
  puVar5 = (undefined4 *)(param_1 + 0x20);
  std::string::string_from_cstr((int)local_4c,(uint *)"IgnoreUnusedPunctuation");
  uVar1 = Persist::QueryValue((int)local_c,(int)local_4c,puVar5);
  cVar4 = (uVar1 & 0xff) == 0;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_0042fab4) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004118e0;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_004118e0:
  if (cVar4 != '\0') {
    *(undefined4 *)(param_1 + 0x20) = 1;
  }
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_70;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411910  FUN_00411910   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __stdcall FUN_00411910(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_0041f304((char *)0x0,PTR_DAT_0042def8);
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_00424b58(pcVar1);
    return iVar2;
  }
  return 0;
}

} // namespace tea
