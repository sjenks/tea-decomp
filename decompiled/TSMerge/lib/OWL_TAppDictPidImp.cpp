// TSMerge.exe — runtime / library code "OWL_TAppDictPidImp"
// 7 functions, 0x004117ec..0x00411944. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004117ec  OWL::TAppDictPidImp::~TAppDictPidImp   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAppDictPidImp::_dtor
void __cdecl OWL::TAppDictPidImp::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x46518c);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TAppDictPidImp::vftable;
    FUN_0041199c();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411848  OWL::TAppDictPidImp::vf1   (86 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TAppDictPidImp::vf1(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if ((int *)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= piVar1) {
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_004119ac(param_1);
      }
      *piVar2 = param_2;
      piVar2[1] = param_3;
      return;
    }
    if (param_2 == *piVar1) break;
    if ((piVar2 == (int *)0x0) && (*piVar1 == 0)) {
      piVar2 = piVar1;
    }
    piVar1 = piVar1 + 2;
  }
  piVar1[1] = param_3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004118a0  OWL::TAppDictPidImp::vf2   (33 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TAppDictPidImp::vf2(int *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 0xc))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004118c4  OWL::TAppDictPidImp::vf3   (40 bytes)   [rtti:vtable virtual slot 3]
int * __cdecl OWL::TAppDictPidImp::vf3(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if ((int *)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= piVar1) {
      return (int *)0x0;
    }
    if (param_2 == *piVar1) break;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004118ec  OWL::TAppDictPidImp::vf4   (41 bytes)   [rtti:vtable virtual slot 4]
uint __cdecl OWL::TAppDictPidImp::vf4(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  while( true ) {
    if ((uint)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)) <= uVar1) {
      return 0;
    }
    if (param_2 == *(int *)(uVar1 + 4)) break;
    uVar1 = uVar1 + 8;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411918  OWL::TAppDictPidImp::vf5   (42 bytes)   [rtti:vtable virtual slot 5]
void OWL::TAppDictPidImp::vf5(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,undefined *param_5)

{
  uint uVar1;
  
  for (uVar1 = *(uint *)(param_4 + 8);
      uVar1 < (uint)(*(int *)(param_4 + 4) * 8 + *(int *)(param_4 + 8)); uVar1 = uVar1 + 8) {
    (*(code *)param_5)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00411944  OWL::TAppDictPidImp::vf6   (42 bytes)   [rtti:vtable virtual slot 6]
int __cdecl OWL::TAppDictPidImp::vf6(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(uint *)(param_1 + 8);
      uVar1 < (uint)(*(int *)(param_1 + 4) * 8 + *(int *)(param_1 + 8)); uVar1 = uVar1 + 8) {
    if (*(int *)(uVar1 + 4) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

} // namespace tea
