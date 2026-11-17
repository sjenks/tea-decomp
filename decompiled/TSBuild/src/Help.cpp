// TSBuild.exe — application module "Help"
// 6 functions, 0x00419d14..0x00419e8c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419d14  Help::~Help   (72 bytes)   [rtti:dtor destructor]
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
// 0x00419d5c  FUN_00419d5c   (127 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00419d5c(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x477e39);
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
// 0x00419ddb  FUN_00419ddb   (86 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00419ddb(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x477e89);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0041ace0;
  puVar1 = FUN_00468310(1,0,0x41a984);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048c371,puVar2,pcVar3,uVar4,iVar5);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419e31  FUN_00419e31   (82 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00419e31(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x477e9d);
  OWL::TStreamableClass::_dtor(0x48c371,2);
  if (DAT_00477e18 != '\0') {
    FUN_00419fa4(0x48c370,2);
    DAT_00477e18 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419e84  FUN_00419e84   (8 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00419e84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_00419e8c();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419e8c  FUN_00419e8c   (6 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined * __stdcall FUN_00419e8c(void)

{
  return &DAT_00477e14;
}

} // namespace tea
