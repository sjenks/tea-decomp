// TSMerge.exe — runtime / library code "OWL_TGadget"
// 21 functions, 0x00419098..0x00419a90. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00419098  OWL::TGadget::~TGadget   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadget::_dtor
void __cdecl OWL::TGadget::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TGadget::vftable;
    if (*(int *)((int)param_1 + 6) != 0) {
      (**(code **)(*(int *)(*(int *)((int)param_1 + 6) + 0x18) + 0x1c))();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004190d0  OWL::TGadget::vf4   (23 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TGadget::vf4(int *param_1,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*param_1 + 0x14))();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004190e8  OWL::TGadget::vf5   (5 bytes)   [rtti:vtable virtual slot 5]
void __stdcall OWL::TGadget::vf5(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004190f0  OWL::TGadget::vf6   (5 bytes)   [rtti:vtable virtual slot 6]
void __stdcall OWL::TGadget::vf6(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004190f8  OWL::TGadget::vf1   (58 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TGadget::vf1(int param_1,char param_2)

{
  if ((bool)param_2 != ((*(ushort *)(param_1 + 0x42) & 1) != 0)) {
    if (param_2 == '\0') {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) & 0xfffe;
    }
    else {
      *(ushort *)(param_1 + 0x42) = *(ushort *)(param_1 + 0x42) | 1;
    }
    FUN_00419608(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419134  OWL::TGadget::vf3   (104 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TGadget::vf3(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if ((((*param_2 == *(int *)((int)param_1 + 10)) && (param_2[1] == *(int *)((int)param_1 + 0xe)))
      && (param_2[2] == *(int *)((int)param_1 + 0x12))) &&
     (param_2[3] == *(int *)((int)param_1 + 0x16))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    piVar3 = (int *)((int)param_1 + 10);
    for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    (**(code **)(*param_1 + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041921c  OWL::TGadget::vf11   (77 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TGadget::vf11(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (((((*(byte *)(param_1 + 0x42) & 2) == 0) || (*param_2 < 0)) || (param_2[1] < 0)) ||
     ((*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10) <= *param_2 ||
      (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe) <= param_2[1])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041926c  OWL::TGadget::vf7   (188 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TGadget::vf7(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_34 [12];
  
  __InitExceptBlockLDTC(0x466e9c);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      uVar3 = FUN_00418e10(*(int *)(param_1 + 0x3a));
      if ((char)uVar3 == '\0') {
        FUN_00425634(local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                     (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),(uint *)0xffffffff
                    );
        FUN_0042d1a4(*piVar1,0x404,0,(LPARAM)local_34);
        operator_delete_array();
      }
    }
  }
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419328  OWL::TGadget::vf8   (5 bytes)   [rtti:vtable virtual slot 8]
void __stdcall OWL::TGadget::vf8(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419330  OWL::TGadget::vf10   (201 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TGadget::vf10(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined4 local_34 [12];
  
  __InitExceptBlockLDTC(0x466ee8);
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (BVar2 != 0) {
        uVar3 = FUN_00418e10(*(int *)(param_1 + 0x3a));
        if ((char)uVar3 == '\0') {
          FUN_00425634(local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                       (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),
                       (uint *)0xffffffff);
          FUN_0042d1a4(*piVar1,0x405,0,(LPARAM)local_34);
          operator_delete_array();
        }
      }
    }
  }
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004193fc  OWL::TGadget::vf9   (425 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGadget::vf9(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  byte bVar8;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  char local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [4];
  int local_24 [8];
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x466f44);
  if ((*(int *)(param_1 + 6) != 0) && (*(int *)(**(int **)(param_1 + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (BVar2 != 0) {
        uVar3 = FUN_00418e10(*(int *)(param_1 + 0x3a));
        if ((char)uVar3 == '\0') {
          local_78 = 8;
          FUN_00425594(local_34,'\x01');
          local_6c = local_6c + 2;
          local_78 = 0x14;
          FUN_004256b8((int)local_34,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                       *(undefined4 *)(param_1 + 0x3a));
          iVar4 = FUN_0042d1a4(*piVar1,0x408,0,(LPARAM)local_34);
          if (iVar4 != 0) {
            piVar6 = local_24;
            piVar7 = &local_9c;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            if ((((*(int *)(param_1 + 10) == local_9c) && (*(int *)(param_1 + 0xe) == local_98)) &&
                (*(int *)(param_1 + 0x12) == local_94)) && (*(int *)(param_1 + 0x16) == local_90)) {
              local_8a = '\x01';
            }
            else {
              local_8a = '\0';
            }
            local_89 = local_8a == '\0';
            if ((bool)local_89) {
              local_78 = 0x20;
              puVar5 = FUN_00425634(local_64,*(undefined4 *)(**(int **)(param_1 + 6) + 0xc),
                                    (undefined4 *)(param_1 + 10),*(undefined4 *)(param_1 + 0x3a),
                                    (uint *)0xffffffff);
              local_6c = local_6c + 2;
              FUN_0042d1a4(*piVar1,0x406,0,(LPARAM)puVar5);
              local_6c = local_6c + -2;
              operator_delete_array();
              local_78 = 0x14;
            }
          }
          local_6c = local_6c + -2;
          operator_delete_array();
        }
      }
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041967c  OWL::TGadget::vf13   (308 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TGadget::vf13(int param_1,undefined4 *param_2)

{
  LPRECT ptVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  int local_48 [3];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint local_c [2];
  
  __InitExceptBlockLDTC(0x466fa8);
  if (*(int *)(param_1 + 0x1a) != 0) {
    local_34 = GetSystemMetrics(DAT_0046973c);
    local_38 = GetSystemMetrics(DAT_00469744);
    local_3c = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe);
    local_48[2] = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 10);
    local_48[0] = 0;
    local_48[1] = 0;
    if (*(int *)(param_1 + 0x1a) == 1) {
      local_20 = 8;
      FUN_00431320(local_c,(uint *)&DAT_00476bcc,'\x01');
      local_14 = local_14 + 2;
      local_20 = 0x14;
      FUN_00416dbc(param_2,local_c,local_48,local_34,local_38,0xf00021);
      FUN_00416ca4(param_2);
      local_14 = local_14 + -2;
      OWL::TBrush::_dtor(local_c,2);
    }
    else if ((DAT_00467240 & 1) == 0) {
      ptVar1 = (LPRECT)FUN_00425b18(local_78,local_48,*(int *)(param_1 + 0x1a),0);
      FUN_00425bc8(ptVar1,param_2);
    }
    else {
      if (*(int *)(param_1 + 0x1a) == 3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      ptVar1 = (LPRECT)FUN_00425b78(local_60,local_48,uVar2,0xf);
      FUN_00425bc8(ptVar1,param_2);
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004197b0  OWL::TGadget::vf12   (20 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TGadget::vf12(int *param_1)

{
  (**(code **)(*param_1 + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004197c4  OWL::TGadget::vf2   (115 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TGadget::vf2(int param_1,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_00419838(param_1,&local_8,&local_c,&local_10,&local_14);
  if (*(char *)(param_1 + 0x36) == '\0') {
    local_8 = *(int *)(param_1 + 0x12) - *(int *)(param_1 + 10);
  }
  else {
    local_8 = local_8 + local_c;
  }
  *param_2 = local_8;
  if (*(char *)(param_1 + 0x37) == '\0') {
    local_10 = *(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe);
  }
  else {
    local_10 = local_10 + local_14;
  }
  param_2[1] = local_10;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041995c  OWL::TGadget::vf14   (32 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TGadget::vf14(int param_1)

{
  *(undefined1 *)(param_1 + 0x39) = 1;
  if ((DAT_00467240 & 1) != 0) {
    FUN_00419608(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041997c  OWL::TGadget::vf15   (5 bytes)   [rtti:vtable virtual slot 15]
void __stdcall OWL::TGadget::vf15(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419984  OWL::TGadget::vf16   (203 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TGadget::vf16(int param_1)

{
  POINT Point;
  int *piVar1;
  BOOL BVar2;
  HWND hWndTo;
  HWND local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  tagPOINT local_c;
  
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(param_1 + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    BVar2 = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (BVar2 != 0) {
      local_c.x = 0;
      local_c.y = 0;
      GetCursorPos(&local_c);
      Point.y = local_c.y;
      Point.x = local_c.x;
      hWndTo = WindowFromPoint(Point);
      if (hWndTo == (HWND)0x0) {
        hWndTo = GetDesktopWindow();
      }
      else {
        MapWindowPoints((HWND)0x0,hWndTo,&local_c,1);
      }
      local_24 = 0x200;
      local_20 = 0;
      local_1c = CONCAT22((undefined2)local_c.y,(undefined2)local_c.x);
      local_28 = hWndTo;
      FUN_0042d1a4(*piVar1,0x407,0,(LPARAM)&local_28);
    }
  }
  if ((*(char *)(param_1 + 0x39) != '\0') &&
     (*(undefined1 *)(param_1 + 0x39) = 0, (DAT_00467240 & 1) != 0)) {
    FUN_00419608(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a50  OWL::TGadget::vf17   (26 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TGadget::vf17(int param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_0041a7dc(*(int **)(param_1 + 6),param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a6c  OWL::TGadget::vf19   (26 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TGadget::vf19(int param_1)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_0041a800(*(int *)(param_1 + 6),param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a88  OWL::TGadget::vf18   (5 bytes)   [rtti:vtable virtual slot 18]
void __stdcall OWL::TGadget::vf18(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00419a90  OWL::TGadget::vf20   (5 bytes)   [rtti:vtable virtual slot 20]
void __stdcall OWL::TGadget::vf20(void)

{
  return;
}

} // namespace tea
