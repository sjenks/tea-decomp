// TEA.exe — runtime / library code "std_basic_streambuf"
// 13 functions, 0x004d0a50..0x004d7ea4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004d0a50  std::basic_streambuf<char>::~basic_streambuf   (95 bytes)   [rtti:dtor destructor]
//   written in code as std::basic_streambuf_char::_dtor
void __cdecl std::basic_streambuf_char::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x514358);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::basic_streambuf_char::vftable;
    std::locale::_dtor(param_1 + 8,2);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4060  std::basic_streambuf<char>::vf9   (10 bytes)   [rtti:vtable virtual slot 9]
//   written in code as std::basic_streambuf_char::vf9
void __stdcall std::basic_streambuf_char::vf9(void)

{
  FUN_004d0a2c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d406c  std::basic_streambuf<char>::vf10   (10 bytes)   [rtti:vtable virtual slot 10]
//   written in code as std::basic_streambuf_char::vf10
void __stdcall std::basic_streambuf_char::vf10(void)

{
  FUN_004d0a2c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4078  std::basic_streambuf<char>::vf12   (7 bytes)   [rtti:vtable virtual slot 12]
//   written in code as std::basic_streambuf_char::vf12
undefined4 __stdcall std::basic_streambuf_char::vf12(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d4080  std::basic_streambuf<char>::vf8   (67 bytes)   [rtti:vtable virtual slot 8]
//   written in code as std::basic_streambuf_char::vf8
void __cdecl std::basic_streambuf_char::vf8(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_c = FUN_004d0a2c();
  piVar2 = &local_c;
  local_8 = (**(code **)(*param_1 + 0x1c))();
  bVar1 = FUN_004d1694(&local_8,piVar2);
  if (bVar1) {
    FUN_004d0a2c();
  }
  else {
    FUN_004d1804(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d40c4  std::basic_streambuf<char>::vf7   (10 bytes)   [rtti:vtable virtual slot 7]
//   written in code as std::basic_streambuf_char::vf7
void __stdcall std::basic_streambuf_char::vf7(void)

{
  FUN_004d0a2c();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d474c  std::basic_streambuf<char>::vf5   (141 bytes)   [rtti:vtable virtual slot 5]
//   written in code as std::basic_streambuf_char::vf5
int __cdecl std::basic_streambuf_char::vf5(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar1 = FUN_004d17a8(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_004d348c(param_1);
    if (iVar1 != 0) {
      uVar4 = FUN_004d348c(param_1);
      uVar5 = FUN_004d3498(param_1);
      uVar6 = FUN_004d3498(param_1);
      FUN_004d187c(param_1,uVar6,uVar5,uVar4);
    }
  }
  else {
    uVar2 = FUN_004d348c(param_1);
    uVar3 = FUN_004d17b4(param_1);
    if (uVar3 < uVar2) {
      uVar4 = FUN_004d348c(param_1);
      uVar5 = FUN_004d17a8(param_1);
      uVar6 = FUN_004d34a4(param_1);
      FUN_004d187c(param_1,uVar6,uVar5,uVar4);
    }
  }
  iVar1 = FUN_004d17b4(param_1);
  iVar7 = FUN_004d17a8(param_1);
  return iVar1 - iVar7;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d47dc  std::basic_streambuf<char>::vf6   (159 bytes)   [rtti:vtable virtual slot 6]
//   written in code as std::basic_streambuf_char::vf6
uint __cdecl std::basic_streambuf_char::vf6(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004d44f8(param_1);
    uVar3 = param_3;
    if (iVar4 <= (int)param_3) {
      uVar3 = FUN_004d44f8(param_1);
    }
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
      puVar5 = (undefined4 *)FUN_004d17a8((int)param_1);
      puVar5 = FUN_004cf758(param_2,puVar5,uVar6);
      param_2 = (undefined4 *)((int)puVar5 + uVar3);
      FUN_004d1850((int)param_1,uVar3);
    }
    for (; (int)uVar3 < (int)param_3; uVar3 = uVar3 + 1) {
      local_c = FUN_004d0a2c();
      piVar7 = &local_c;
      local_8 = FUN_004d1804(param_1);
      bVar2 = FUN_004d1694(&local_8,piVar7);
      if (bVar2) {
        return uVar3;
      }
      uVar1 = FUN_004d2f44((undefined1 *)&local_8);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d487c  std::basic_streambuf<char>::vf11   (92 bytes)   [rtti:vtable virtual slot 11]
//   written in code as std::basic_streambuf_char::vf11
int __cdecl std::basic_streambuf_char::vf11(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 uVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    iVar3 = 0;
  }
  else {
    for (iVar3 = 0; iVar3 < param_3; iVar3 = iVar3 + 1) {
      local_c = FUN_004d0a2c();
      piVar4 = &local_c;
      uVar1 = *param_2;
      param_2 = param_2 + 1;
      local_8 = FUN_004d34bc(param_1,uVar1);
      bVar2 = FUN_004d1694(&local_8,piVar4);
      if (bVar2) {
        return iVar3;
      }
    }
  }
  return iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d5734  std::basic_streambuf<char>::vf2   (8 bytes)   [rtti:vtable virtual slot 2]
//   written in code as std::basic_streambuf_char::vf2
undefined4 __cdecl std::basic_streambuf_char::vf2(undefined4 param_1)

{
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6d28  std::basic_streambuf<char>::vf3   (23 bytes)   [rtti:vtable virtual slot 3]
//   written in code as std::basic_streambuf_char::vf3
int * __cdecl std::basic_streambuf_char::vf3(int *param_1)

{
  FUN_004d39c0(param_1,-1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d6d40  std::basic_streambuf<char>::vf4   (23 bytes)   [rtti:vtable virtual slot 4]
//   written in code as std::basic_streambuf_char::vf4
int * __cdecl std::basic_streambuf_char::vf4(int *param_1)

{
  FUN_004d39c0(param_1,-1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004d7ea4  std::basic_streambuf<char>::vf1   (24 bytes)   [rtti:vtable virtual slot 1]
//   written in code as std::basic_streambuf_char::vf1
void __cdecl std::basic_streambuf_char::vf1(int param_1,int *param_2)

{
  FUN_004db414((int *)(param_1 + 0x20),param_2);
  return;
}

} // namespace tea
