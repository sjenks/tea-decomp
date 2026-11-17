// TSBuild.exe — runtime / library code "OWL_TDocument"
// 26 functions, 0x0043a08c..0x004453b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043a08c  OWL::TDocument::TList::~TList   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocument::TList::_dtor
void __cdecl OWL::TDocument::TList::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    FUN_00445414(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444484  OWL::TDocument::vf1   (7 bytes)   [rtti:vtable virtual slot 1]
undefined4 __stdcall OWL::TDocument::vf1(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044448c  OWL::TDocument::vf2   (7 bytes)   [rtti:vtable virtual slot 2]
undefined4 __stdcall OWL::TDocument::vf2(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444494  OWL::TDocument::vf3   (7 bytes)   [rtti:vtable virtual slot 3]
undefined1 __stdcall OWL::TDocument::vf3(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044449c  OWL::TDocument::vf11   (18 bytes)   [rtti:vtable virtual slot 11]
bool __cdecl OWL::TDocument::vf11(int param_1)

{
  return *(int *)(param_1 + 0x2a) != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004444b0  OWL::TDocument::vf16   (10 bytes)   [rtti:vtable virtual slot 16]
undefined4 __stdcall OWL::TDocument::vf16(void)

{
  return 5;
}

// ----------------------------------------------------------------------------------------------------
// 0x004444bc  OWL::TDocument::vf22   (7 bytes)   [rtti:vtable virtual slot 22]
undefined1 __stdcall OWL::TDocument::vf22(void)

{
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444934  OWL::TDocument::~TDocument   (369 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDocument::_dtor
void __cdecl OWL::TDocument::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x480f84);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&OWL::TDocument::vftable;
    if (*(int **)((int)param_1 + 0x12) == param_1) {
      *in_FS_OFFSET = local_30;
    }
    else {
      FUN_00444da8((int)param_1,0);
      FUN_00445414(param_1 + 2);
      (**(code **)(*param_1 + 0x10))();
      while (*(int *)((int)param_1 + 0x26) != 0) {
        if (*(int *)((int)param_1 + 0x26) != 0) {
          (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x26) + 8))();
        }
      }
      while (*(int *)((int)param_1 + 0x2a) != 0) {
        if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
          (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x2a) + 0x60))();
          operator_delete();
        }
      }
      if (*(int *)((int)param_1 + 0x12) == 0) {
        (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x50))();
        FUN_004453ec((int *)(*(int *)((int)param_1 + 0xe) + 0x14),(int)param_1);
      }
      else {
        FUN_004453ec((int *)(*(int *)((int)param_1 + 0x12) + 8),(int)param_1);
      }
      operator_delete_array();
      operator_delete_array();
    }
    FUN_00445414(param_1 + 2);
    OWL::TStreamableBase::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444ac8  OWL::TDocument::vf19   (32 bytes)   [rtti:vtable virtual slot 19; function defined from vtable-slot]
undefined * __cdecl OWL::TDocument::vf19(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 6) {
    return (&PTR_LAB_00480dec)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444ae8  OWL::TDocument::vf18   (32 bytes)   [rtti:vtable virtual slot 18]
undefined * __cdecl OWL::TDocument::vf18(undefined4 param_1,int param_2)

{
  if (param_2 < 1) {
    return (undefined *)0x0;
  }
  if (param_2 < 6) {
    return (&PTR_s_Document_Title_00480e00)[param_2];
  }
  return (undefined *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444b08  OWL::TDocument::vf17   (47 bytes)   [rtti:vtable virtual slot 17]
int __cdecl OWL::TDocument::vf17(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00467724((&PTR_s_Document_Class_00480df0)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444b38  OWL::TDocument::vf20   (227 bytes, 2 ranges)   [rtti:vtable virtual slot 20]
char * __cdecl OWL::TDocument::vf20(int *param_1,undefined4 param_2,int *param_3,char *param_4)

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
    if (param_1 == (int *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *param_1;
    }
    puVar1 = FUN_00468310((int)param_1,iVar5,0x441f94);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    break;
  case 2:
    if (*(int *)((int)param_1 + 0x22) == 0) {
      puVar2 = (uint *)0x0;
    }
    else {
      puVar2 = (uint *)FUN_004448e8(*(int *)((int)param_1 + 0x22));
    }
    break;
  case 3:
    iVar3 = 0;
    for (iVar5 = *(int *)((int)param_1 + 0x26); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
      iVar3 = iVar3 + 1;
    }
    if (param_4 == (char *)0x0) {
      *param_3 = iVar3;
      return (char *)0x4;
    }
    wsprintfA((LPSTR)local_14,&DAT_00480f60,iVar3);
    puVar2 = local_14;
    break;
  case 4:
    puVar2 = *(uint **)((int)param_1 + 0x2e);
    break;
  case 5:
    puVar2 = *(uint **)((int)param_1 + 0x1e);
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
// 0x00444c34  OWL::TDocument::vf21   (53 bytes)   [rtti:vtable virtual slot 21]
undefined4 __cdecl OWL::TDocument::vf21(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
    return uVar1;
  }
  if (param_2 == 5) {
    uVar1 = (**(code **)(*param_1 + 0x24))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444c6c  OWL::TDocument::vf7   (19 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TDocument::vf7(int param_1)

{
  for (; *(int *)(param_1 + 0x12) != 0; param_1 = *(int *)(param_1 + 0x12)) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444c80  OWL::TDocument::vf8   (231 bytes)   [rtti:vtable virtual slot 8]
undefined4 __cdecl OWL::TDocument::vf8(int *param_1,uint *param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 in_EAX;
  undefined3 uVar4;
  undefined4 uVar3;
  int iVar5;
  char *pcVar6;
  CHAR *pCVar7;
  CHAR local_108 [260];
  
  if ((param_2 != (uint *)0x0) && (param_2 == *(uint **)((int)param_1 + 0x2e))) {
    uVar4 = (undefined3)((uint)in_EAX >> 8);
    goto LAB_00444d60;
  }
  operator_delete_array();
  if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0042aea0(param_2);
  }
  *(undefined4 *)((int)param_1 + 0x2e) = uVar3;
  pcVar6 = "Unknown";
  pCVar7 = local_108;
  for (iVar5 = 0x41; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pCVar7 = *(undefined4 *)pcVar6;
    pcVar6 = pcVar6 + 4;
    pCVar7 = pCVar7 + 4;
  }
  if (*(int *)((int)param_1 + 0x2e) == 0) {
LAB_00444cfa:
    iVar5 = FUN_0044f0b4(*(int *)(*(int *)((int)param_1 + 0xe) + 0x20) + 4,0x7ef7,local_108,0x104);
    if ((*(byte *)(*(int *)((int)param_1 + 0xe) + 0x18) & 2) != 0) {
      iVar2 = *(int *)((int)param_1 + 0xe);
      piVar1 = (int *)(iVar2 + 0xc);
      *piVar1 = *piVar1 + 1;
      wsprintfA(local_108 + iVar5,&DAT_00480f60,*(undefined4 *)(iVar2 + 0xc));
    }
  }
  else {
    uVar3 = FUN_004204dc();
    if ((short)uVar3 != 0) goto LAB_00444cfa;
  }
  uVar3 = (**(code **)(*param_1 + 0x24))();
  uVar4 = (undefined3)((uint)uVar3 >> 8);
LAB_00444d60:
  return CONCAT31(uVar4,1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00444d68  OWL::TDocument::vf9   (64 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TDocument::vf9(int param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0x1e) == 0) || (param_2 != *(uint **)(param_1 + 0x1e))) {
    operator_delete_array();
    if (param_2 == (uint *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0042aea0(param_2);
    }
    *(undefined4 *)(param_1 + 0x1e) = uVar1;
  }
  FUN_00444e18(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444eac  OWL::TDocument::vf23   (20 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TDocument::vf23(int param_1,int param_2)

{
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_1 + 0x2a);
  *(int *)(param_1 + 0x2a) = param_2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444ec0  OWL::TDocument::vf24   (39 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TDocument::vf24(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x2a);
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
// 0x0044508c  OWL::TDocument::vf5   (76 bytes)   [rtti:vtable virtual slot 5]
char __cdecl OWL::TDocument::vf5(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004453d4((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_00445124(param_1,5,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x14))();
  } while (cVar1 != '\0');
  return '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x004450d8  OWL::TDocument::vf6   (76 bytes)   [rtti:vtable virtual slot 6]
char __cdecl OWL::TDocument::vf6(int param_1,uint param_2)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004453d4((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      cVar1 = FUN_00445124(param_1,6,param_2 & 0xff,(undefined4 *)0x0);
      return cVar1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x18))();
  } while (cVar1 != '\0');
  return '\0';
}

// ----------------------------------------------------------------------------------------------------
// 0x0044527c  OWL::TDocument::vf10   (83 bytes)   [rtti:vtable virtual slot 10]
bool __cdecl OWL::TDocument::vf10(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    piVar3 = (int *)0x0;
    do {
      piVar3 = (int *)FUN_004453d4((undefined4 *)(param_1 + 8),(int)piVar3);
      if (piVar3 == (int *)0x0) {
        puVar2 = FUN_004451dc(param_1,7,0,(undefined4 *)0x0);
        return puVar2 != (undefined4 *)0x0;
      }
      cVar1 = (**(code **)(*piVar3 + 0x28))();
    } while (cVar1 == '\0');
  }
  return true;
}

// ----------------------------------------------------------------------------------------------------
// 0x004452d0  OWL::TDocument::vf13   (30 bytes)   [rtti:vtable virtual slot 13]
bool __cdecl OWL::TDocument::vf13(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x38))();
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004452f0  OWL::TDocument::vf14   (82 bytes)   [rtti:vtable virtual slot 14]
int * __cdecl OWL::TDocument::vf14(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004453d4(param_1 + 2,(int)piVar3);
    if (piVar3 == (int *)0x0) {
      puVar2 = FUN_004451dc((int)param_1,8,param_2,(undefined4 *)0x0);
      if (puVar2 != (undefined4 *)0x0) {
        return param_1;
      }
      return (int *)0x0;
    }
    iVar1 = (**(code **)(*piVar3 + 0x38))();
  } while (iVar1 == 0);
  return piVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445344  OWL::TDocument::vf12   (64 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TDocument::vf12(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  do {
    piVar3 = (int *)FUN_004453d4((undefined4 *)(param_1 + 8),(int)piVar3);
    if (piVar3 == (int *)0x0) {
      uVar2 = (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x24))();
      return uVar2;
    }
    cVar1 = (**(code **)(*piVar3 + 0x30))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00445384  OWL::TDocument::vf4   (52 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TDocument::vf4(int param_1)

{
  char cVar1;
  int *piVar2;
  
  piVar2 = (int *)0x0;
  do {
    piVar2 = (int *)FUN_004453d4((undefined4 *)(param_1 + 8),(int)piVar2);
    if (piVar2 == (int *)0x0) {
      return 1;
    }
    cVar1 = (**(code **)(*piVar2 + 0x10))();
  } while (cVar1 != '\0');
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004453b8  OWL::TDocument::vf15   (28 bytes)   [rtti:vtable virtual slot 15]
void __cdecl OWL::TDocument::vf15(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0xe) + 8) + 0x4c))();
  return;
}

} // namespace tea
