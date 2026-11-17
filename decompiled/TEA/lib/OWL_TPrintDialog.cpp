// TEA.exe — runtime / library code "OWL_TPrintDialog"
// 5 functions, 0x004c3348..0x004c41c0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c3348  OWL::TPrintDialog::vf14   (69 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TPrintDialog::vf14(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&DAT_00510bf4,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c38ac  OWL::TPrintDialog::vf1   (26 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
void __cdecl OWL::TPrintDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  OWL::TDialog::vf1(param_1,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c38c8  OWL::TPrintDialog::vf6   (968 bytes)   [rtti:vtable virtual slot 6]
undefined4 __cdecl OWL::TPrintDialog::vf6(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  HINSTANCE hInstance;
  undefined4 *puVar5;
  undefined4 *puVar6;
  HWND hWnd;
  undefined4 local_2c [4];
  undefined4 local_1c [4];
  undefined4 local_c;
  undefined4 local_8;
  
  if (*(char *)(*(int *)((int)param_1 + 0x10e) + 0x48) == '\0') {
    *(code **)((int)param_1 + 0x46) = FUN_004b070c;
    *(code **)((int)param_1 + 0x4a) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)param_1 + 0x10e));
    param_1[9] = *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
    param_1[10] = *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
    hWnd = (HWND)0x0;
    if (((*(char *)(*(int *)((int)param_1 + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)param_1 + 0xb6) == 0)) {
      if (*(int *)(*param_1 + 0x6c) == 0) {
        hInstance = (HINSTANCE)0x0;
      }
      else {
        hInstance = *(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc);
      }
      hWnd = CreateWindowExA(0,"STATIC","STATIC" + 6,0,0,0,0,0,(HWND)0x0,
                             (HMENU)0x0,hInstance,(LPVOID)0x0);
      *(HWND *)((int)param_1 + 0xb6) = hWnd;
    }
    if (((*(char *)(*(int *)((int)param_1 + 0x10e) + 0x49) == '\0') &&
        (puVar3 = FUN_0048751c(), 4 < *(uint *)(puVar3 + 4))) &&
       (*(int *)((int)param_1 + 0xb6) != 0)) {
      *(undefined4 *)((int)param_1 + 0xba) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
      *(undefined4 *)((int)param_1 + 0xbe) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
      iVar1 = FUN_0048c3cc();
      if (iVar1 == 0) {
        if (((*(byte *)((int)param_1 + 199) & 4) == 0) && (*(int *)((int)param_1 + 0x102) == 0)) {
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
          uVar2 = 2;
        }
        else {
          **(undefined4 **)((int)param_1 + 0x10e) = *(undefined4 *)((int)param_1 + 0xc6);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x52) =
               *(undefined4 *)((int)param_1 + 0xc2);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 8) =
               **(undefined4 **)((int)param_1 + 0xda);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0xc) =
               *(undefined4 *)(*(int *)((int)param_1 + 0xda) + 4);
          *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x18) =
               *(undefined4 *)((int)param_1 + 0xe6);
          if (((*(byte *)((int)param_1 + 199) & 4) == 0) && (*(int *)((int)param_1 + 0x102) != 1)) {
            uVar2 = 2;
          }
          else {
            uVar2 = 1;
          }
        }
      }
      else {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = *(undefined4 *)((int)param_1 + 0xba);
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = *(undefined4 *)((int)param_1 + 0xbe);
      if (hWnd != (HWND)0x0) {
        DestroyWindow(hWnd);
      }
    }
    else {
      iVar1 = FUN_0048c404();
      if (iVar1 == 0) {
        uVar2 = FUN_0048c2ac();
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
        uVar2 = 2;
      }
      else {
        **(int **)((int)param_1 + 0x10e) = param_1[0xc];
        *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
        *(int *)(*(int *)((int)param_1 + 0x10e) + 0x52) = param_1[0xb];
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 8) = (uint)*(ushort *)(param_1 + 0xd);
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 0xc) = (uint)*(ushort *)((int)param_1 + 0x36);
        *(uint *)(*(int *)((int)param_1 + 0x10e) + 0x18) = (uint)*(ushort *)(param_1 + 0xf);
        uVar2 = 1;
      }
      *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = param_1[9];
      *(int *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = param_1[10];
    }
    FUN_004c3e40(*(int *)((int)param_1 + 0x10e));
  }
  else {
    *(code **)((int)param_1 + 0xa2) = FUN_004b070c;
    *(code **)((int)param_1 + 0xa6) = FUN_004b070c;
    FUN_004c3e7c(*(int *)((int)param_1 + 0x10e));
    *(undefined4 *)((int)param_1 + 0x66) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a);
    *(undefined4 *)((int)param_1 + 0x6a) = *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e);
    iVar1 = FUN_0048c394();
    if (iVar1 == 0) {
      uVar2 = FUN_0048c2ac();
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = uVar2;
    }
    else {
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x1c) = *(undefined4 *)((int)param_1 + 0x6e);
      *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 4) = 0;
      iVar4 = *(int *)((int)param_1 + 0x10e);
      local_c = *(undefined4 *)((int)param_1 + 0x72);
      local_8 = *(undefined4 *)((int)param_1 + 0x76);
      *(undefined4 *)(iVar4 + 0x20) = *(undefined4 *)((int)param_1 + 0x72);
      *(undefined4 *)(iVar4 + 0x24) = local_8;
      puVar5 = (undefined4 *)((int)param_1 + 0x7a);
      puVar6 = local_1c;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_1c;
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x28);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = (undefined4 *)((int)param_1 + 0x8a);
      puVar6 = local_2c;
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
      puVar5 = local_2c;
      puVar6 = (undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x38);
      for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4a) = *(undefined4 *)((int)param_1 + 0x66);
    *(undefined4 *)(*(int *)((int)param_1 + 0x10e) + 0x4e) = *(undefined4 *)((int)param_1 + 0x6a);
    FUN_004c3e40(*(int *)((int)param_1 + 0x10e));
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
void __cdecl OWL::TPrintDialog::TData::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x4a) != 0) {
      GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4a));
      GlobalFree(*(HGLOBAL *)(param_1 + 0x4a));
    }
    if (*(int *)(param_1 + 0x4e) != 0) {
      GlobalUnlock(*(HGLOBAL *)(param_1 + 0x4e));
      GlobalFree(*(HGLOBAL *)(param_1 + 0x4e));
    }
    if (*(int *)(param_1 + 0x52) != 0) {
      DeleteDC(*(HDC *)(param_1 + 0x52));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c41c0  OWL::TPrintDialog::~TPrintDialog   (184 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TPrintDialog::_dtor
void __cdecl OWL::TPrintDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x510d74);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xf6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xf6;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xf6;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xf6;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x122),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x11a),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
