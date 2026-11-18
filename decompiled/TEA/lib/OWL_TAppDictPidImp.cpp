// TEA.exe — runtime / library code "OWL_TAppDictPidImp"
// 8 functions, 0x00487ed8..0x00488088. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00487ed8  OWL::TAppDictPidImp::TAppDictPidImp   (86 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TAppDictPidImp's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TAppDictPidImp::TAppDictPidImp(undefined4 *self)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5047ec);
  *self = &OWL::TAppDictImp::vftable;
  *self = &OWL::TAppDictPidImp::vftable;
  puVar1 = FUN_004880b4(10);
  self[2] = puVar1;
  self[1] = 10;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487f30  OWL::TAppDictPidImp::~TAppDictPidImp   (89 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAppDictPidImp::_dtor
void __cdecl OWL::TAppDictPidImp::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x504810);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TAppDictPidImp::vftable;
    FUN_004880e0();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00487f8c  OWL::TAppDictPidImp::vf1   (86 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TAppDictPidImp::vf1(int self,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  piVar1 = *(int **)(self + 8);
  while( true ) {
    if ((int *)(*(int *)(self + 4) * 8 + *(int *)(self + 8)) <= piVar1) {
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)FUN_004880f0(self);
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
// 0x00487fe4  OWL::TAppDictPidImp::vf2   (33 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TAppDictPidImp::vf2(int *self)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(**(code **)(*self + 0xc))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488008  OWL::TAppDictPidImp::vf3   (40 bytes)   [rtti:vtable virtual slot 3]
int * __cdecl OWL::TAppDictPidImp::vf3(int self,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(self + 8);
  while( true ) {
    if ((int *)(*(int *)(self + 4) * 8 + *(int *)(self + 8)) <= piVar1) {
      return (int *)0x0;
    }
    if (param_2 == *piVar1) break;
    piVar1 = piVar1 + 2;
  }
  return piVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488030  OWL::TAppDictPidImp::vf4   (41 bytes)   [rtti:vtable virtual slot 4]
uint __cdecl OWL::TAppDictPidImp::vf4(int self,int param_2)

{
  uint uVar1;
  
  uVar1 = *(uint *)(self + 8);
  while( true ) {
    if ((uint)(*(int *)(self + 4) * 8 + *(int *)(self + 8)) <= uVar1) {
      return 0;
    }
    if (param_2 == *(int *)(uVar1 + 4)) break;
    uVar1 = uVar1 + 8;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048805c  OWL::TAppDictPidImp::vf5   (42 bytes)   [rtti:vtable virtual slot 5]
void OWL::TAppDictPidImp::vf5(undefined4 self,undefined4 param_2,uint param_3,int param_4,undefined *param_5)

{
  uint uVar1;
  
  for (uVar1 = *(uint *)(param_4 + 8);
      uVar1 < (uint)(*(int *)(param_4 + 4) * 8 + *(int *)(param_4 + 8)); uVar1 = uVar1 + 8) {
    (*(code *)param_5)();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00488088  OWL::TAppDictPidImp::vf6   (42 bytes)   [rtti:vtable virtual slot 6]
int __cdecl OWL::TAppDictPidImp::vf6(int self)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = 0;
  for (uVar1 = *(uint *)(self + 8);
      uVar1 < (uint)(*(int *)(self + 4) * 8 + *(int *)(self + 8)); uVar1 = uVar1 + 8) {
    if (*(int *)(uVar1 + 4) != 0) {
      iVar2 = iVar2 + 1;
    }
  }
  return iVar2;
}

} // namespace tea
