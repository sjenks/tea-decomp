// TEA.exe — runtime / library code "OWL_TFile"
// 33 functions, 0x0048caa8..0x004bbc84. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048caa8  OWL::TFile::vf1   (11 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
undefined4 __cdecl OWL::TFile::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cab4  OWL::TFile::vf4   (26 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TFile::vf4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cad0  OWL::TFile::vf5   (18 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TFile::vf5(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x28))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cae4  OWL::TFile::vf6   (18 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TFile::vf6(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x2c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048caf8  OWL::TFile::vf7   (23 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TFile::vf7(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x30))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb10  OWL::TFile::vf8   (18 bytes)   [rtti:vtable virtual slot 8]
void __cdecl OWL::TFile::vf8(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb24  OWL::TFile::vf9   (18 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TFile::vf9(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x38))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb38  OWL::TFile::vf10   (29 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TFile::vf10(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x3c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb58  OWL::TFile::vf11   (26 bytes)   [rtti:vtable virtual slot 11]
void __cdecl OWL::TFile::vf11(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb74  OWL::TFile::vf12   (26 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TFile::vf12(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x1c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cb90  OWL::TFile::vf13   (26 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TFile::vf13(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cbac  OWL::TFile::vf17   (32 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TFile::vf17(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x50))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cbcc  OWL::TFile::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
void __cdecl OWL::TFile::vf18(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cbec  OWL::TFile::vf25   (40 bytes)   [rtti:vtable virtual slot 25]
undefined4 __cdecl OWL::TFile::vf25(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == -1) {
    return 0;
  }
  return param_2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048cc14  OWL::TFile::vf32   (33 bytes)   [rtti:vtable virtual slot 32]
void __cdecl OWL::TFile::vf32(int *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 extraout_EDX;
  uint *puVar2;
  
  puVar2 = param_2;
  pcVar1 = strlen(param_2);
  (**(code **)(*param_1 + 0x34))(*param_1,extraout_EDX,puVar2,param_1,param_2,pcVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb1e8  OWL::TFile::~TFile   (132 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFile::_dtor
void __cdecl OWL::TFile::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x50f020);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&OWL::TFile::vftable;
    if ((char)param_1[2] != '\0') {
      (**(code **)(*param_1 + 0xc))();
    }
    if ((param_1[1] != 0) && ((undefined4 *)param_1[1] != (undefined4 *)0x0)) {
      (*(code *)**(undefined4 **)param_1[1])();
    }
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb2b4  OWL::TFile::vf2   (199 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TFile::vf2(int param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x50f060);
  if (*(int *)(param_1 + 4) == 0) {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_004ba980(puVar2,param_2,param_3);
    }
    *(undefined4 **)(param_1 + 4) = puVar2;
    cVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x10))();
    if (cVar1 == '\0') {
      if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 4))();
      }
      *(undefined4 *)(param_1 + 4) = 0;
    }
    *(undefined1 *)(param_1 + 8) = 1;
    bVar3 = *(int *)(param_1 + 4) != 0;
    *in_FS_OFFSET = local_34;
  }
  else {
    bVar3 = false;
    *in_FS_OFFSET = local_34;
  }
  return bVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb37c  OWL::TFile::vf3   (145 bytes)   [rtti:vtable virtual slot 3]
undefined4 __cdecl OWL::TFile::vf3(int param_1)

{
  undefined4 uVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  uVar1 = __InitExceptBlockLDTC(0x50f0a8);
  if (((*(int *)(param_1 + 4) != 0) && (*(char *)(param_1 + 8) != '\0')) &&
     (uVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(), (char)uVar1 == '\0')) {
    *in_FS_OFFSET = local_30;
    return 0;
  }
  if ((*(int *)(param_1 + 4) != 0) && (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0)) {
    uVar1 = (**(code **)**(undefined4 **)(param_1 + 4))();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *in_FS_OFFSET = local_30;
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb410  OWL::TFile::vf14   (18 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TFile::vf14(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb424  OWL::TFile::vf15   (26 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TFile::vf15(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x48))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bb440  OWL::TFile::vf16   (26 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TFile::vf16(int param_1)

{
  (**(code **)(**(int **)(param_1 + 4) + 0x4c))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbb38  OWL::TFile::vf19   (28 bytes)   [rtti:vtable virtual slot 19]
uint __cdecl OWL::TFile::vf19(int *param_1)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  
  uVar1 = (**(code **)(*param_1 + 0x30))();
  return CONCAT31((int3)((uint)uVar1 >> 8),(char)((uint)in_ECX >> 0x18));
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbb54  OWL::TFile::vf20   (31 bytes)   [rtti:vtable virtual slot 20]
undefined2 __cdecl OWL::TFile::vf20(int *param_1)

{
  undefined2 local_6;
  
  FUN_004bbaf0(param_1,&local_6,1,0);
  return local_6;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbb74  OWL::TFile::vf21   (30 bytes)   [rtti:vtable virtual slot 21]
undefined4 __cdecl OWL::TFile::vf21(int *param_1)

{
  undefined4 local_8;
  
  FUN_004bbaf0(param_1,&local_8,2,0);
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbb94  OWL::TFile::vf22   (36 bytes)   [rtti:vtable virtual slot 22]
undefined4 __cdecl OWL::TFile::vf22(int *param_1)

{
  undefined4 local_c [2];
  
  FUN_004bbaf0(param_1,local_c,5,0);
  return local_c[0];
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbbb8  OWL::TFile::vf23   (30 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TFile::vf23(int *param_1)

{
  undefined1 local_8 [4];
  
  FUN_004bbaf0(param_1,local_8,3,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbbd8  OWL::TFile::vf24   (33 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TFile::vf24(int *param_1)

{
  undefined1 local_c [8];
  
  FUN_004bbaf0(param_1,local_c,4,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbbfc  OWL::TFile::vf26   (23 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TFile::vf26(int *param_1)

{
  (**(code **)(*param_1 + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbc14  OWL::TFile::vf27   (25 bytes)   [rtti:vtable virtual slot 27]
void __cdecl OWL::TFile::vf27(int *param_1)

{
  FUN_004bbb14(param_1,&GHIDRA_STACK(0x00000008),1,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbc30  OWL::TFile::vf28   (25 bytes)   [rtti:vtable virtual slot 28]
void __cdecl OWL::TFile::vf28(int *param_1)

{
  FUN_004bbb14(param_1,&GHIDRA_STACK(0x00000008),2,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbc4c  OWL::TFile::vf29   (25 bytes)   [rtti:vtable virtual slot 29]
void __cdecl OWL::TFile::vf29(int *param_1)

{
  FUN_004bbb14(param_1,&GHIDRA_STACK(0x00000008),5,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbc68  OWL::TFile::vf30   (25 bytes)   [rtti:vtable virtual slot 30]
void __cdecl OWL::TFile::vf30(int *param_1)

{
  FUN_004bbb14(param_1,&GHIDRA_STACK(0x00000008),3,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004bbc84  OWL::TFile::vf31   (25 bytes)   [rtti:vtable virtual slot 31]
void __cdecl OWL::TFile::vf31(int *param_1)

{
  FUN_004bbb14(param_1,&GHIDRA_STACK(0x00000008),4,0);
  return;
}

} // namespace tea
