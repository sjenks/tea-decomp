// TSBuild.exe — runtime / library code "OWL_TModule"
// 5 functions, 0x0044ee8c..0x00450b70. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044ee8c  OWL::TModule::~TModule   (140 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TModule::_dtor
void __cdecl OWL::TModule::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x482f4c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TModule::vftable;
    if ((*(char *)(param_1 + 3) != '\0') && (0x20 < (uint)param_1[2])) {
      FreeLibrary((HMODULE)param_1[2]);
    }
    operator_delete_array();
    FUN_0044ea78((int)param_1);
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044f028  OWL::TModule::vf1   (121 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TModule::vf1(int param_1,int *param_2,uint param_3,uint param_4)

{
  int iVar1;
  LPCSTR pCVar2;
  char *pcVar3;
  CHAR local_a4 [80];
  CHAR local_54 [80];
  
  if (param_3 == 0) {
    param_3 = 0x7ffc;
  }
  if (param_4 == 0) {
    pcVar3 = (char *)0x0;
  }
  else {
    iVar1 = FUN_0044f0b4(param_1,param_4,local_a4,0x50);
    if (iVar1 == 0) {
      pcVar3 = "OK to Resume\?";
    }
    else {
      pcVar3 = local_a4;
    }
  }
  iVar1 = FUN_0044f0b4(param_1,param_3,local_54,0x50);
  if (iVar1 == 0) {
    pCVar2 = (LPCSTR)0x0;
  }
  else {
    pCVar2 = local_54;
  }
  FUN_00422fa8(param_2,pCVar2,pcVar3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004509f0  OWL::TModule::Streamer::vf1   (72 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TModule::Streamer::vf1(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  HMODULE pHVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00439490(param_2,(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0042db04(param_2);
  *(bool *)(iVar1 + 0xc) = iVar2 != 0;
  if (*(char *)(iVar1 + 0xc) != '\0') {
    pHVar3 = LoadLibraryA(*(LPCSTR *)(iVar1 + 4));
    *(HMODULE *)(iVar1 + 8) = pHVar3;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450a38  OWL::TModule::Streamer::vf2   (59 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TModule::Streamer::vf2(int param_1,int *param_2)

{
  undefined4 local_8;
  
  local_8 = *(undefined4 *)(*(int *)(param_1 + 8) + 4);
  FUN_004394f4(param_2,&local_8);
  FUN_0042df1c(param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b70  OWL::TModule::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TModule::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
