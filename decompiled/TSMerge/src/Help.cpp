// TSMerge.exe — application module "Help"
// 6 functions, 0x0040ed80..0x0040eef8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040ed80  Help::~Help   (72 bytes)   [rtti:dtor destructor]
//   written in code as Help::_dtor
void __cdecl Help::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)param_1[1])();
      if (*param_1 != 0) {
        (*(code *)param_1[1])();
        FreeLibrary((HMODULE)*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edc8  FUN_0040edc8   (127 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0040edc8(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x464085);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee47  FUN_0040ee47   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0040ee47(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4640d5);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0040fcbc;
  puVar1 = FUN_0045666c(1,0,0x40f960);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004768c9,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee9d  FUN_0040ee9d   (82 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0040ee9d(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4640e9);
  OWL::TStreamableClass::_dtor(0x4768c9,2);
  if (DAT_00464064 != '\0') {
    FUN_0040f010(0x4768c8,2);
    DAT_00464064 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eef0  FUN_0040eef0   (8 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_0040eef0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0040eef8();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eef8  FUN_0040eef8   (6 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined * __stdcall FUN_0040eef8(void)

{
  return &DAT_00464060;
}

} // namespace tea
