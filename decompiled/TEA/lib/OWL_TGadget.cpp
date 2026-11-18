// TEA.exe — runtime / library code "OWL_TGadget"
// 22 functions, 0x0048fcec..0x00490840. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048fcec  OWL::TGadget::TGadget   (6 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TGadget's vtable at its vptr offset (+0x0) in this
undefined4 * __stdcall OWL::TGadget::TGadget(undefined4 *self,undefined4 param_2)

{
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 in_stack_0000000c;
  undefined4 uStack_38;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x5067ec);
  ehContext = 8;
  *self = &OWL::TGadget::vftable;
  *(undefined4 *)((int)self + 10) = 0;
  *(undefined4 *)((int)self + 0xe) = 0;
  *(undefined4 *)((int)self + 0x12) = 0;
  *(undefined4 *)((int)self + 0x16) = 0;
  *(undefined4 *)((int)self + 0x2a) = 0;
  *(undefined4 *)((int)self + 0x26) = 0;
  *(undefined4 *)((int)self + 0x22) = 0;
  *(undefined4 *)((int)self + 0x1e) = 0;
  *(undefined4 *)((int)self + 0x2e) = 1;
  *(undefined1 *)((int)self + 0x35) = 0;
  *(undefined1 *)(self + 0xd) = 0;
  *(undefined1 *)((int)self + 0x33) = *(undefined1 *)(self + 0xd);
  *(undefined1 *)((int)self + 0x32) = *(undefined1 *)((int)self + 0x33);
  *(undefined4 *)((int)self + 6) = 0;
  uStack_38 = 0;
  unused = 0;
  unused2 = 0;
  unused3 = 0;
  puVar2 = &uStack_38;
  puVar3 = (undefined4 *)((int)self + 10);
  for (i = 4; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(undefined2 *)((int)self + 0x42) = 3;
  *(undefined1 *)(self + 0xe) = 0;
  *(undefined1 *)((int)self + 0x39) = 0;
  *(undefined1 *)(self + 1) = 0;
  *(undefined1 *)((int)self + 5) = 0;
  *(undefined1 *)((int)self + 0x37) = 1;
  *(undefined1 *)((int)self + 0x36) = 1;
  *(undefined4 *)((int)self + 0x3e) = 0;
  *(undefined4 *)((int)self + 0x3a) = param_2;
  FUN_0048ff7c((int)self,in_stack_0000000c);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe0c  OWL::TGadget::~TGadget   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TGadget::_dtor
void __cdecl OWL::TGadget::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TGadget::vftable;
    if (*(int *)((int)self + 6) != 0) {
      (**(code **)(*(int *)(*(int *)((int)self + 6) + 0x18) + 0x1c))();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe44  OWL::TGadget::vf4   (23 bytes)   [rtti:vtable virtual slot 4]
undefined4 __cdecl OWL::TGadget::vf4(int *self,int param_2)

{
  if (param_2 == 0) {
    (**(code **)(*self + 0x14))();
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe5c  OWL::TGadget::vf5   (5 bytes)   [rtti:vtable virtual slot 5]
void __stdcall OWL::TGadget::vf5(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe64  OWL::TGadget::vf6   (5 bytes)   [rtti:vtable virtual slot 6]
void __stdcall OWL::TGadget::vf6(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048fe80  OWL::TGadget::vf1   (58 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TGadget::vf1(int self,char param_2)

{
  if ((bool)param_2 != ((*(ushort *)(self + 0x42) & 1) != 0)) {
    if (param_2 == '\0') {
      *(ushort *)(self + 0x42) = *(ushort *)(self + 0x42) & 0xfffe;
    }
    else {
      *(ushort *)(self + 0x42) = *(ushort *)(self + 0x42) | 1;
    }
    FUN_004903b8(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048febc  OWL::TGadget::vf3   (104 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TGadget::vf3(int *self,int *param_2)

{
  bool bVar1;
  int i;
  int *piVar3;
  
  if ((((*param_2 == *(int *)((int)self + 10)) && (param_2[1] == *(int *)((int)self + 0xe)))
      && (param_2[2] == *(int *)((int)self + 0x12))) &&
     (param_2[3] == *(int *)((int)self + 0x16))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    piVar3 = (int *)((int)self + 10);
    for (i = 4; i != 0; i = i + -1) {
      *piVar3 = *param_2;
      param_2 = param_2 + 1;
      piVar3 = piVar3 + 1;
    }
    (**(code **)(*self + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ffcc  OWL::TGadget::vf11   (77 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TGadget::vf11(int self,int *param_2)

{
  undefined4 uVar1;
  
  if (((((*(byte *)(self + 0x42) & 2) == 0) || (*param_2 < 0)) || (param_2[1] < 0)) ||
     ((*(int *)(self + 0x12) - *(int *)(self + 10) <= *param_2 ||
      (*(int *)(self + 0x16) - *(int *)(self + 0xe) <= param_2[1])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049001c  OWL::TGadget::vf7   (188 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TGadget::vf7(int self)

{
  int *piVar1;
  BOOL ok;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 lParam [12];
  
  __InitExceptBlockLDTC(0x506820);
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(self + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    ok = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (ok != 0) {
      uVar3 = FUN_0048fba0(*(int *)(self + 0x3a));
      if ((char)uVar3 == '\0') {
        FUN_0049f414(lParam,*(undefined4 *)(**(int **)(self + 6) + 0xc),
                     (undefined4 *)(self + 10),*(undefined4 *)(self + 0x3a),(uint *)0xffffffff
                    );
        FUN_004a76a8(*piVar1,0x404,0,(LPARAM)lParam);
        operator_delete_array();
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004900d8  OWL::TGadget::vf8   (5 bytes)   [rtti:vtable virtual slot 8]
void __stdcall OWL::TGadget::vf8(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004900e0  OWL::TGadget::vf10   (201 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TGadget::vf10(int self)

{
  int *piVar1;
  BOOL ok;
  undefined4 uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 lParam [12];
  
  __InitExceptBlockLDTC(0x50686c);
  if ((*(int *)(self + 6) != 0) && (*(int *)(**(int **)(self + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(self + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      ok = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (ok != 0) {
        uVar3 = FUN_0048fba0(*(int *)(self + 0x3a));
        if ((char)uVar3 == '\0') {
          FUN_0049f414(lParam,*(undefined4 *)(**(int **)(self + 6) + 0xc),
                       (undefined4 *)(self + 10),*(undefined4 *)(self + 0x3a),
                       (uint *)0xffffffff);
          FUN_004a76a8(*piVar1,0x405,0,(LPARAM)lParam);
          operator_delete_array();
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004901ac  OWL::TGadget::vf9   (425 bytes)   [rtti:vtable virtual slot 9]
void __cdecl OWL::TGadget::vf9(int self)

{
  int *piVar1;
  BOOL ok;
  undefined4 uVar3;
  int iVar4;
  undefined4 *lParam;
  int *piVar6;
  int *piVar7;
  undefined4 *sehChainHead;
  byte bVar8;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  char local_8a;
  undefined1 local_89;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 local_64 [12];
  undefined4 lParam2 [4];
  int newStr [8];
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x5068c8);
  if ((*(int *)(self + 6) != 0) && (*(int *)(**(int **)(self + 6) + 0xc) != 0)) {
    piVar1 = (int *)(**(code **)(*(int *)(*(int *)(self + 6) + 0x18) + 0xc))();
    if (piVar1 != (int *)0x0) {
      ok = IsWindow(*(HWND *)(*piVar1 + 0xc));
      if (ok != 0) {
        uVar3 = FUN_0048fba0(*(int *)(self + 0x3a));
        if ((char)uVar3 == '\0') {
          ehContext = 8;
          FUN_0049f374(lParam2,'\x01');
          ehDtorCount = ehDtorCount + 2;
          ehContext = 0x14;
          FUN_0049f504((int)lParam2,*(undefined4 *)(**(int **)(self + 6) + 0xc),
                       *(undefined4 *)(self + 0x3a));
          iVar4 = FUN_004a76a8(*piVar1,0x408,0,(LPARAM)lParam2);
          if (iVar4 != 0) {
            piVar6 = newStr;
            piVar7 = &local_9c;
            for (iVar4 = 4; iVar4 != 0; iVar4 = iVar4 + -1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
              piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
            }
            if ((((*(int *)(self + 10) == local_9c) && (*(int *)(self + 0xe) == local_98)) &&
                (*(int *)(self + 0x12) == local_94)) && (*(int *)(self + 0x16) == local_90)) {
              local_8a = '\x01';
            }
            else {
              local_8a = '\0';
            }
            local_89 = local_8a == '\0';
            if ((bool)local_89) {
              ehContext = 0x20;
              lParam = FUN_0049f414(local_64,*(undefined4 *)(**(int **)(self + 6) + 0xc),
                                    (undefined4 *)(self + 10),*(undefined4 *)(self + 0x3a),
                                    (uint *)0xffffffff);
              ehDtorCount = ehDtorCount + 2;
              FUN_004a76a8(*piVar1,0x406,0,(LPARAM)lParam);
              ehDtorCount = ehDtorCount + -2;
              operator_delete_array();
              ehContext = 0x14;
            }
          }
          ehDtorCount = ehDtorCount + -2;
          operator_delete_array();
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049042c  OWL::TGadget::vf13   (308 bytes)   [rtti:vtable virtual slot 13]
void __cdecl OWL::TGadget::vf13(int self,undefined4 *param_2)

{
  LPRECT qrc;
  undefined4 uVar2;
  undefined4 *sehChainHead;
  undefined4 local_78 [6];
  undefined4 local_60 [6];
  int local_48 [3];
  int unused;
  int h;
  int w;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint brush [2];
  
  __InitExceptBlockLDTC(0x50692c);
  if (*(int *)(self + 0x1a) != 0) {
    w = GetSystemMetrics(DAT_00509de8);
    h = GetSystemMetrics(DAT_00509df0);
    unused = *(int *)(self + 0x16) - *(int *)(self + 0xe);
    local_48[2] = *(int *)(self + 0x12) - *(int *)(self + 10);
    local_48[0] = 0;
    local_48[1] = 0;
    if (*(int *)(self + 0x1a) == 1) {
      ehContext = 8;
      FUN_004ab84c(brush,(uint *)&DAT_0051b1bc,'\x01');
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      FUN_0048db90(param_2,brush,local_48,w,h,0xf00021);
      FUN_0048da64(param_2);
      ehDtorCount = ehDtorCount + -2;
      OWL::TBrush::_dtor(brush,2);
    }
    else if ((DAT_00506c48 & 1) == 0) {
      qrc = (LPRECT)FUN_0049f930(local_78,local_48,*(int *)(self + 0x1a),0);
      FUN_0049fa58(qrc,param_2);
    }
    else {
      if (*(int *)(self + 0x1a) == 3) {
        uVar2 = 2;
      }
      else {
        uVar2 = 4;
      }
      qrc = (LPRECT)FUN_0049f990(local_60,local_48,uVar2,0xf);
      FUN_0049fa58(qrc,param_2);
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490560  OWL::TGadget::vf12   (20 bytes)   [rtti:vtable virtual slot 12]
void __cdecl OWL::TGadget::vf12(int *self)

{
  (**(code **)(*self + 0x34))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490574  OWL::TGadget::vf2   (115 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TGadget::vf2(int self,int *param_2)

{
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  local_c = 0;
  local_10 = 0;
  local_14 = 0;
  FUN_004905e8(self,&local_8,&local_c,&local_10,&local_14);
  if (*(char *)(self + 0x36) == '\0') {
    local_8 = *(int *)(self + 0x12) - *(int *)(self + 10);
  }
  else {
    local_8 = local_8 + local_c;
  }
  *param_2 = local_8;
  if (*(char *)(self + 0x37) == '\0') {
    local_10 = *(int *)(self + 0x16) - *(int *)(self + 0xe);
  }
  else {
    local_10 = local_10 + local_14;
  }
  param_2[1] = local_10;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049070c  OWL::TGadget::vf14   (32 bytes)   [rtti:vtable virtual slot 14]
void __cdecl OWL::TGadget::vf14(int self)

{
  *(undefined1 *)(self + 0x39) = 1;
  if ((DAT_00506c48 & 1) != 0) {
    FUN_004903b8(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049072c  OWL::TGadget::vf15   (5 bytes)   [rtti:vtable virtual slot 15]
void __stdcall OWL::TGadget::vf15(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490734  OWL::TGadget::vf16   (203 bytes)   [rtti:vtable virtual slot 16]
void __cdecl OWL::TGadget::vf16(int self)

{
  POINT Point;
  int *piVar1;
  BOOL ok;
  HWND hWndTo;
  HWND hWnd;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  tagPOINT pt;
  
  piVar1 = (int *)(**(code **)(*(int *)(*(int *)(self + 6) + 0x18) + 0xc))();
  if (piVar1 != (int *)0x0) {
    ok = IsWindow(*(HWND *)(*piVar1 + 0xc));
    if (ok != 0) {
      pt.x = 0;
      pt.y = 0;
      GetCursorPos(&pt);
      Point.y = pt.y;
      Point.x = pt.x;
      hWndTo = WindowFromPoint(Point);
      if (hWndTo == (HWND)0x0) {
        hWndTo = GetDesktopWindow();
      }
      else {
        MapWindowPoints((HWND)0x0,hWndTo,&pt,1);
      }
      unused = 0x200;
      unused2 = 0;
      unused3 = CONCAT22((undefined2)pt.y,(undefined2)pt.x);
      hWnd = hWndTo;
      FUN_004a76a8(*piVar1,0x407,0,(LPARAM)&hWnd);
    }
  }
  if ((*(char *)(self + 0x39) != '\0') &&
     (*(undefined1 *)(self + 0x39) = 0, (DAT_00506c48 & 1) != 0)) {
    FUN_004903b8(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490800  OWL::TGadget::vf17   (26 bytes)   [rtti:vtable virtual slot 17]
void __cdecl OWL::TGadget::vf17(int self)

{
  if (*(char *)(self + 0x38) != '\0') {
    FUN_004916ac(*(int **)(self + 6),self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049081c  OWL::TGadget::vf19   (26 bytes)   [rtti:vtable virtual slot 19]
void __cdecl OWL::TGadget::vf19(int self)

{
  if (*(char *)(self + 0x38) != '\0') {
    FUN_004916d0(*(int *)(self + 6),self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490838  OWL::TGadget::vf18   (5 bytes)   [rtti:vtable virtual slot 18]
void __stdcall OWL::TGadget::vf18(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00490840  OWL::TGadget::vf20   (5 bytes)   [rtti:vtable virtual slot 20]
void __stdcall OWL::TGadget::vf20(void)

{
  return;
}

} // namespace tea
