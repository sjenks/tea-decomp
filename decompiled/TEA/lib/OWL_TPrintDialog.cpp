// TEA.exe — runtime / library code "OWL_TPrintDialog"
// 6 functions, 0x004c3348..0x004c41c0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c3348  OWL::TPrintDialog::vf14   (69 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TPrintDialog::vf14(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[1],(int *)&DAT_00510bf4,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3390  OWL::TPrintDialog::TPrintDialog   (1274 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TPrintDialog's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TPrintDialog::TPrintDialog(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4,int param_5,int param_6, int param_7,int param_8)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *sehChainHead;
  byte bVar6;
  undefined4 sehPrevFrame;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x510c1c);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x122;
    *(int *)((int)self + 0x122) = (int)self + 0x116;
    *(int *)((int)self + 0x126) = (int)self + 0x11a;
    self[1] = (int)self + 0x116;
    self[2] = (int)self + 0x11a;
    *(undefined4 *)((int)self + 0x112) = 0;
    *(undefined4 *)((int)self + 0x11e) = 0;
    *(undefined ***)((int)self + 0x116) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)self + 0x11a) = &OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)self + 0x122),1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xf6;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xf6;
  OWL::TCommonDialog::TCommonDialog(self,1,param_3,param_7,param_8);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xf6;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xf6;
  self[3] = (int)&OWL::TPrintDialog::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00510cd4;
  *(undefined ***)self[2] = &PTR_LAB_00510ce0;
  *(undefined ***)(*self + 8) = &PTR_LAB_00510cec;
  *(undefined4 *)((int)self + 0x10e) = param_4;
  memset(self + 7,0,0x42);
  self[7] = 0x42;
  if (*(int *)(*self + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x14) + 0xc);
  }
  self[8] = iVar2;
  *(undefined4 *)((int)self + 0x3e) = *(undefined4 *)(*(int *)(*self + 0x70) + 8);
  self[0xc] = **(uint **)((int)self + 0x10e) | 0x3000;
  self[0xc] = self[0xc] & 0xfffffbff;
  if (param_5 == 0) {
    self[0xc] = self[0xc] & 0xffffbfff;
  }
  else {
    *(int *)((int)self + 0x4e) = param_5;
    self[0xc] = self[0xc] | 0x4000;
  }
  if (param_6 == 0) {
    self[0xc] = self[0xc] & 0xffff7fff;
  }
  else {
    *(int *)((int)self + 0x52) = param_6;
    self[0xc] = self[0xc] | 0x8000;
  }
  *(undefined4 *)((int)self + 0x46) = 0;
  *(undefined4 *)((int)self + 0x4a) = 0;
  *(undefined2 *)(self + 0xd) = *(undefined2 *)(*(int *)((int)self + 0x10e) + 8);
  *(undefined2 *)((int)self + 0x36) = *(undefined2 *)(*(int *)((int)self + 0x10e) + 0xc);
  *(undefined2 *)(self + 0xe) = *(undefined2 *)(*(int *)((int)self + 0x10e) + 0x10);
  *(undefined2 *)((int)self + 0x3a) = *(undefined2 *)(*(int *)((int)self + 0x10e) + 0x14);
  *(undefined2 *)(self + 0xf) = *(undefined2 *)(*(int *)((int)self + 0x10e) + 0x18);
  memset((undefined4 *)((int)self + 0x5e),0,0x54);
  *(undefined4 *)((int)self + 0x5e) = 0x54;
  if (*(int *)(*self + 0x14) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*self + 0x14) + 0xc);
  }
  *(undefined4 *)((int)self + 0x62) = uVar3;
  *(undefined4 *)((int)self + 0x9a) = *(undefined4 *)(*(int *)(*self + 0x70) + 8);
  *(uint *)((int)self + 0x6e) = *(uint *)(*(int *)((int)self + 0x10e) + 0x1c) | 0x42000;
  if (param_6 == 0) {
    *(uint *)((int)self + 0x6e) = *(uint *)((int)self + 0x6e) & 0xffff7fff;
  }
  else {
    *(int *)((int)self + 0xaa) = param_6;
    *(uint *)((int)self + 0x6e) = *(uint *)((int)self + 0x6e) | 0x8000;
  }
  *(undefined4 *)((int)self + 0xa2) = 0;
  *(undefined4 *)((int)self + 0xa6) = 0;
  *(undefined4 *)((int)self + 0x72) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x20);
  *(undefined4 *)((int)self + 0x76) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x24);
  puVar4 = (undefined4 *)(*(int *)((int)self + 0x10e) + 0x28);
  puVar5 = (undefined4 *)((int)self + 0x7a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  puVar4 = (undefined4 *)(*(int *)((int)self + 0x10e) + 0x38);
  puVar5 = (undefined4 *)((int)self + 0x8a);
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  memset((undefined4 *)((int)self + 0xb2),0,0x54);
  *(undefined4 *)((int)self + 0xb2) = 0x54;
  if (*(int *)(*self + 0x6c) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x6c) + 0x2b);
  }
  if (iVar2 == 0) {
    if (*(int *)(*self + 0x6c) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*(int *)(*self + 0x6c) + 0x2b);
    }
  }
  else {
    if (*(int *)(*self + 0x6c) == 0) {
      piVar1 = (int *)0x0;
    }
    else {
      piVar1 = *(int **)(*(int *)(*self + 0x6c) + 0x2b);
    }
    iVar2 = *piVar1;
  }
  if (*(int *)(*self + 0x14) == 0) {
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined4 *)(iVar2 + 0xc);
    }
  }
  else {
    uVar3 = *(undefined4 *)(*(int *)(*self + 0x14) + 0xc);
  }
  *(undefined4 *)((int)self + 0xb6) = uVar3;
  *(undefined4 *)((int)self + 0xea) = *(undefined4 *)(*(int *)(*self + 0x70) + 8);
  *(undefined4 *)((int)self + 0xc6) = **(undefined4 **)((int)self + 0x10e);
  *(uint *)((int)self + 0xc6) = *(uint *)((int)self + 0xc6) & 0xfffffbff;
  *(undefined4 *)((int)self + 0xca) = 0;
  *(undefined4 *)((int)self + 0xfe) = 0xffffffff;
  if (param_5 == 0) {
    *(uint *)((int)self + 0xc6) = *(uint *)((int)self + 0xc6) & 0xffffbfff;
    *(undefined4 *)((int)self + 0xea) = 0;
  }
  else {
    *(int *)((int)self + 0xee) = param_5;
    *(uint *)((int)self + 0xc6) = *(uint *)((int)self + 0xc6) | 0x4000;
    if (param_8 == 0) {
      uVar3 = *(undefined4 *)(*(int *)(*self + 0x70) + 8);
    }
    else {
      uVar3 = *(undefined4 *)(param_8 + 8);
    }
    *(undefined4 *)((int)self + 0xea) = uVar3;
  }
  *(undefined4 *)((int)self + 0xd6) = 1;
  *(int *)((int)self + 0xda) = (int)self + 0x106;
  **(uint **)((int)self + 0xda) = (uint)*(ushort *)(*(int *)((int)self + 0x10e) + 8);
  *(uint *)(*(int *)((int)self + 0xda) + 4) =
       (uint)*(ushort *)(*(int *)((int)self + 0x10e) + 0xc);
  *(uint *)((int)self + 0xde) = (uint)*(ushort *)(*(int *)((int)self + 0x10e) + 0x10);
  *(uint *)((int)self + 0xe2) = (uint)*(ushort *)(*(int *)((int)self + 0x10e) + 0x14);
  *(uint *)((int)self + 0xe6) = (uint)*(ushort *)(*(int *)((int)self + 0x10e) + 0x18);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c38ac  OWL::TPrintDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
void __cdecl OWL::TPrintDialog::vf1(int *self,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c38c8  OWL::TPrintDialog::vf6   (968 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TPrintDialog::vf6(int *self)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  HINSTANCE hInstance;
  undefined4 *puVar5;
  undefined4 *puVar6;
  HWND hWnd;
  undefined4 newStr [4];
  undefined4 newStr2 [4];
  undefined4 unused;
  undefined4 local_8;
  
  if (*(char *)(*(int *)((int)self + 0x10e) + 0x48) == '\0') {
    *(code **)((int)self + 0x46) = FUN_004b070c;
    *(code **)((int)self + 0x4a) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)self + 0x10e));
    self[9] = *(int *)(*(int *)((int)self + 0x10e) + 0x4a);
    self[10] = *(int *)(*(int *)((int)self + 0x10e) + 0x4e);
    hWnd = (HWND)0x0;
    if (((*(char *)(*(int *)((int)self + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)self + 0xb6) == 0)) {
      if (*(int *)(*self + 0x6c) == 0) {
        hInstance = (HINSTANCE)0x0;
      }
      else {
        hInstance = *(HINSTANCE *)(*(int *)(*self + 0x6c) + 0xc);
      }
      hWnd = CreateWindowExA(0,"STATIC","STATIC" + 6,0,0,0,0,0,(HWND)0x0,
                             (HMENU)0x0,hInstance,(LPVOID)0x0);
      *(HWND *)((int)self + 0xb6) = hWnd;
    }
    if (((*(char *)(*(int *)((int)self + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)self + 0xb6) != 0)) {
      *(undefined4 *)((int)self + 0xba) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4a);
      *(undefined4 *)((int)self + 0xbe) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4e);
      iVar1 = FUN_0048c3cc();
      if (iVar1 == 0) {
        if (((*(byte *)((int)self + 199) & 4) == 0) && (*(int *)((int)self + 0x102) == 0)) {
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = 0;
          uVar2 = 2;
        }
        else {
          **(undefined4 **)((int)self + 0x10e) = *(undefined4 *)((int)self + 0xc6);
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = 0;
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x52) =
               *(undefined4 *)((int)self + 0xc2);
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 8) =
               **(undefined4 **)((int)self + 0xda);
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 0xc) =
               *(undefined4 *)(*(int *)((int)self + 0xda) + 4);
          *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x18) =
               *(undefined4 *)((int)self + 0xe6);
          if (((*(byte *)((int)self + 199) & 4) == 0) && (*(int *)((int)self + 0x102) != 1)) {
            uVar2 = 2;
          }
          else {
            uVar2 = 1;
          }
        }
      }
      else {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4a) = *(undefined4 *)((int)self + 0xba);
      *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4e) = *(undefined4 *)((int)self + 0xbe);
      if (hWnd != (HWND)0x0) {
        DestroyWindow(hWnd);
      }
    }
    else {
      iVar1 = FUN_0048c404();
      if (iVar1 == 0) {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      else {
        **(int **)((int)self + 0x10e) = self[0xc];
        *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = 0;
        *(int *)(*(int *)((int)self + 0x10e) + 0x52) = self[0xb];
        *(uint *)(*(int *)((int)self + 0x10e) + 8) = (uint)*(ushort *)(self + 0xd);
        *(uint *)(*(int *)((int)self + 0x10e) + 0xc) = (uint)*(ushort *)((int)self + 0x36);
        *(uint *)(*(int *)((int)self + 0x10e) + 0x18) = (uint)*(ushort *)(self + 0xf);
        uVar2 = 1;
      }
      *(int *)(*(int *)((int)self + 0x10e) + 0x4a) = self[9];
      *(int *)(*(int *)((int)self + 0x10e) + 0x4e) = self[10];
    }
    FUN_004c3e40(*(int *)((int)self + 0x10e));
  }
  else {
    *(code **)((int)self + 0xa2) = FUN_004b070c;
    *(code **)((int)self + 0xa6) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)self + 0x10e));
    *(undefined4 *)((int)self + 0x66) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4a);
    *(undefined4 *)((int)self + 0x6a) = *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4e);
    iVar1 = FUN_0048c394();
    if (iVar1 == 0) {
      uVar2 = FUN_0048c2ac();
      *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = uVar2;
    }
    else {
      *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x1c) = *(undefined4 *)((int)self + 0x6e);
      *(undefined4 *)(*(int *)((int)self + 0x10e) + 4) = 0;
      iVar4 = *(int *)((int)self + 0x10e);
      unused = *(undefined4 *)((int)self + 0x72);
      local_8 = *(undefined4 *)((int)self + 0x76);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)((int)self + 0x72);
      *(undefined4 *)(iVar4 + 0x24) = local_8;
      puVar5 = (undefined4 *)((int)self + 0x7a);
      puVar6 = newStr2;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = newStr2;
      puVar6 = (undefined4 *)(*(int *)((int)self + 0x10e) + 0x28);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)((int)self + 0x8a);
      puVar6 = newStr;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = newStr;
      puVar6 = (undefined4 *)(*(int *)((int)self + 0x10e) + 0x38);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4a) = *(undefined4 *)((int)self + 0x66);
    *(undefined4 *)(*(int *)((int)self + 0x10e) + 0x4e) = *(undefined4 *)((int)self + 0x6a);
    FUN_004c3e40(*(int *)((int)self + 0x10e));
    if (iVar1 == 0) {
      uVar2 = 2;
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c3de8  OWL::TPrintDialog::TData::~TData   (85 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrintDialog::TData::_dtor
void __cdecl OWL::TPrintDialog::TData::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    if (*(int *)(self + 0x4a) != 0) {
      GlobalUnlock(*(HGLOBAL *)(self + 0x4a));
      GlobalFree(*(HGLOBAL *)(self + 0x4a));
    }
    if (*(int *)(self + 0x4e) != 0) {
      GlobalUnlock(*(HGLOBAL *)(self + 0x4e));
      GlobalFree(*(HGLOBAL *)(self + 0x4e));
    }
    if (*(int *)(self + 0x52) != 0) {
      DeleteDC(*(HDC *)(self + 0x52));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c41c0  OWL::TPrintDialog::~TPrintDialog   (184 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrintDialog::_dtor
void __cdecl OWL::TPrintDialog::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510d74);
  if (self != (int *)0x0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xf6;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xf6;
    OWL::TCommonDialog::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xf6;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xf6;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x122),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x11a),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
