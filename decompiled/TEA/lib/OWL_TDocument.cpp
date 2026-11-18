// TEA.exe — runtime / library code "OWL_TDocument"
// 26 functions, 0x004a9420..0x004b5d44. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004a9420  OWL::TDocument::TList::~TList   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocument::TList::_dtor
void __cdecl OWL::TDocument::TList::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    FUN_004b5da0(self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e10  OWL::TDocument::vf1   (7 bytes)   [rtti:vtable virtual slot 1]
undefined4 __stdcall OWL::TDocument::vf1(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e18  OWL::TDocument::vf2   (7 bytes)   [rtti:vtable virtual slot 2]
undefined4 __stdcall OWL::TDocument::vf2(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e20  OWL::TDocument::vf3   (7 bytes)   [rtti:vtable virtual slot 3]
undefined1 __stdcall OWL::TDocument::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e28  OWL::TDocument::vf11   (18 bytes)   [rtti:vtable virtual slot 11]
bool __cdecl OWL::TDocument::vf11(int self)

{
  return *(int *)(self + 0x2a) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e3c  OWL::TDocument::vf16   (10 bytes)   [rtti:vtable virtual slot 16]
undefined4 __stdcall OWL::TDocument::vf16(void)

{
  return 5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b4e48  OWL::TDocument::vf22   (7 bytes)   [rtti:vtable virtual slot 22]
undefined1 __stdcall OWL::TDocument::vf22(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b52c0  OWL::TDocument::~TDocument   (369 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocument::_dtor
void __cdecl OWL::TDocument::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50dec4);
  if (self != (int *)0x0) {
    *self = (int)&OWL::TDocument::vftable;
    if (*(int **)((int)self + 0x12) == self) {
      *sehChainHead = sehPrevFrame;
    }
    else {
      FUN_004b5734((int)self,0);
      FUN_004b5da0(self + 2);
      (**(code **)(*self + 0x10))();
      while (*(int *)((int)self + 0x26) != 0) {
        if (*(int *)((int)self + 0x26) != 0) {
          (*(code *)**(undefined4 **)(*(int *)((int)self + 0x26) + 8))();
        }
      }
      while (*(int *)((int)self + 0x2a) != 0) {
        if (*(undefined4 **)((int)self + 0x2a) != (undefined4 *)0x0) {
          (**(code **)(*(int *)**(undefined4 **)((int)self + 0x2a) + 0x60))();
          operator_delete();
        }
      }
      if (*(int *)((int)self + 0x12) == 0) {
        (**(code **)(*(int *)(*(int *)((int)self + 0xe) + 8) + 0x50))();
        FUN_004b5d78((int *)(*(int *)((int)self + 0xe) + 0x14),(int)self);
      }
      else {
        FUN_004b5d78((int *)(*(int *)((int)self + 0x12) + 8),(int)self);
      }
      operator_delete_array();
      operator_delete_array();
    }
    FUN_004b5da0(self + 2);
    OWL::TStreamableBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5454  OWL::TDocument::vf19   (32 bytes)   [rtti:vtable virtual slot 19; function defined from vtable-slot]
undefined * __cdecl OWL::TDocument::vf19(undefined4 self,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 6) {
    return (&PTR_LAB_0050dd2c)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5474  OWL::TDocument::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
undefined * __cdecl OWL::TDocument::vf18(undefined4 self,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 6) {
    return (&PTR_s_Document_Title_0050dd40)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5494  OWL::TDocument::vf17   (47 bytes)   [rtti:vtable virtual slot 17]
int __cdecl OWL::TDocument::vf17(undefined4 self,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_004dc978((&PTR_s_Document_Class_0050dd30)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b54c4  OWL::TDocument::vf20   (227 bytes, 2 ranges)   [rtti:vtable virtual slot 20]
char * __cdecl OWL::TDocument::vf20(int *self,undefined4 param_2,int *param_3,char *param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  uint local_14 [4];
  
  switch(param_2) {
  default:
    return (char *)0x0;
  case 1:
    if (self == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *self;
    }
    puVar1 = FUN_004dd5cc((int)self,iVar5,0x4b2920);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    break;
  case 2:
    if (*(int *)((int)self + 0x22) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)FUN_004b5274(*(int *)((int)self + 0x22));
    }
    break;
  case 3:
    iVar3 = 0;
    for (iVar5 = *(int *)((int)self + 0x26); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      iVar3 = iVar3 + 1;
    }
    if (param_4 == (char *)0x0) {
      *param_3 = iVar3;
      return (char *)0x4;
    }
    wsprintfA((LPSTR)local_14,&DAT_0050dea0,iVar3);
    puVar2 = local_14;
    break;
  case 4:
    puVar2 = *(uint **)((int)self + 0x2e);
    break;
  case 5:
    puVar2 = *(uint **)((int)self + 0x1e);
  }
  if (param_4 == (char *)0x0) {
    pcVar4 = (char *)0x0;
  }
  else {
    if (puVar2 == (uint *)0x0) {
      pcVar4 = (char *)0x0;
    }
    else {
      pcVar4 = strlen(puVar2);
    }
    if ((int)pcVar4 < (int)param_4) {
      param_4 = pcVar4;
    }
    if (param_4 != (char *)0x0) {
      memcpy(param_3,puVar2,(uint)param_4);
    }
    *(char *)((int)param_3 + (int)param_4) = '\0';
  }
  return pcVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b55c0  OWL::TDocument::vf21   (53 bytes)   [rtti:vtable virtual slot 21]
undefined4 __cdecl OWL::TDocument::vf21(int *self,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    uVar1 = (**(code **)(*self + 0x20))();
    return uVar1;
  }
  if (param_2 == 5) {
    uVar1 = (**(code **)(*self + 0x24))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b55f8  OWL::TDocument::vf7   (19 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TDocument::vf7(int self)

{
  for (; *(int *)(self + 0x12) != 0; self = *(int *)(self + 0x12)) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b560c  OWL::TDocument::vf8   (231 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDocument::vf8(int *self,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 uVar3;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  CHAR multiByteStr [260];
  
  if ((param_2 != (uint *)0x0) && (param_2 == *(uint **)((int)self + 0x2e))) {
    uVar4 = (undefined3)((uint)in_EAX >> 8);
    goto LAB_004b56ec;
  }
  operator_delete_array();
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00496d48(param_2);
  }
  *(undefined4 *)((int)self + 0x2e) = uVar3;
  pcVar6 = "Unknown";
  pCVar7 = multiByteStr;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  if (*(int *)((int)self + 0x2e) == 0) {
LAB_004b5686:
    iVar5 = FUN_004c0cd4(*(int *)(*(int *)((int)self + 0xe) + 0x20) + 4,0x7ef7,multiByteStr,0x104);
    if ((*(byte *)(*(int *)((int)self + 0xe) + 0x18) & 2) != 0) {
      iVar2 = *(int *)((int)self + 0xe);
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + 1;
      wsprintfA(multiByteStr + iVar5,&DAT_0050dea0,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    uVar3 = FUN_0048c314();
    if ((short)uVar3 != 0) goto LAB_004b5686;
  }
  uVar3 = (**(code **)(*self + 0x24))();
  uVar4 = (undefined3)((uint)uVar3 >> 8);
LAB_004b56ec:
  return CONCAT31(uVar4,1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004b56f4  OWL::TDocument::vf9   (64 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TDocument::vf9(int self,uint *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(self + 0x1e) == 0) || (param_2 != *(uint **)(self + 0x1e))) {
    operator_delete_array();
    if (param_2 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00496d48(param_2);
    }
    *(undefined4 *)(self + 0x1e) = uVar1;
  }
  FUN_004b57a4(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5838  OWL::TDocument::vf23   (20 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TDocument::vf23(int self,int param_2)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(self + 0x2a);
  *(int *)(self + 0x2a) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b584c  OWL::TDocument::vf24   (39 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TDocument::vf24(int self,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(self + 0x2a);
  while( true ) {
    if (*piVar1 == 0) {
      return;
    }
    if (param_2 == *piVar1) break;
    piVar1 = (int *)(*piVar1 + 4);
  }
  *piVar1 = *(int *)(param_2 + 4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5a18  OWL::TDocument::vf5   (76 bytes)   [rtti:vtable virtual slot 5]
char __cdecl OWL::TDocument::vf5(int self,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004b5d60((undefined4 *)(self + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_004b5ab0(self,5,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x14))();
  } while (cVar1 != '\0');
  return '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5a64  OWL::TDocument::vf6   (76 bytes)   [rtti:vtable virtual slot 6]
char __cdecl OWL::TDocument::vf6(int self,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004b5d60((undefined4 *)(self + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_004b5ab0(self,6,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x18))();
  } while (cVar1 != '\0');
  return '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5c08  OWL::TDocument::vf10   (83 bytes)   [rtti:vtable virtual slot 10]
bool __cdecl OWL::TDocument::vf10(int self)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(char *)(self + 0xc) == '\0') {
    piVar3 = (int *)0x0;
    do {
      piVar3 = (int *)FUN_004b5d60((undefined4 *)(self + 8),(int)piVar3);
      if (piVar3 == (int *)0x0) {
        puVar2 = FUN_004b5b68(self,7,0,(undefined4 *)0x0);
        return puVar2 != (undefined4 *)0x0;
      }
      cVar1 = (**(code **)(*piVar3 + 0x28))();
    } while (cVar1 == '\0');
  }
  return true;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5c5c  OWL::TDocument::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
bool __cdecl OWL::TDocument::vf13(int *self)

{
  int iVar1;
  
  iVar1 = (**(code **)(*self + 0x38))();
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5c7c  OWL::TDocument::vf14   (82 bytes)   [rtti:vtable virtual slot 14]
int * __cdecl OWL::TDocument::vf14(int *self,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004b5d60(self + 2,(int)piVar3);
    if (piVar3 == (int *)0x0) {
      puVar2 = FUN_004b5b68((int)self,8,param_2,(undefined4 *)0x0);
      if (puVar2 != (undefined4 *)0x0) {
        return self;
      }
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x38))();
  } while (iVar1 == 0);
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5cd0  OWL::TDocument::vf12   (64 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TDocument::vf12(int self)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004b5d60((undefined4 *)(self + 8),(int)piVar3);
    if (piVar3 == (int *)0x0) {
      uVar2 = (**(code **)(*(int *)(*(int *)(self + 0xe) + 8) + 0x24))();
      return uVar2;
    }
    cVar1 = (**(code **)(*piVar3 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5d10  OWL::TDocument::vf4   (52 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TDocument::vf4(int self)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004b5d60((undefined4 *)(self + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x10))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004b5d44  OWL::TDocument::vf15   (28 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TDocument::vf15(int self)

{
  (**(code **)(*(int *)(*(int *)(self + 0xe) + 8) + 0x4c))();
  return;
}

} // namespace tea
