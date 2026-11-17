// TEA.exe — runtime / library code "OWL_TDC"
// 24 functions, 0x0048d8bc..0x0048e0f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048d8bc  OWL::TDC::~TDC   (42 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDC::_dtor
void __cdecl OWL::TDC::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TDC::vftable;
    FUN_0048db40(param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d8e8  OWL::TDC::vf23   (10 bytes)   [rtti:vtable virtual slot 23]
undefined4 __cdecl OWL::TDC::vf23(undefined4 *param_1)

{
  return *param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d97c  OWL::TDC::vf5   (67 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TDC::vf5(undefined4 *param_1,uint *param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = SelectObject((HDC)*param_1,(HGDIOBJ)*param_2);
  if (pvVar1 != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < pvVar1) {
      if (*(int *)((int)param_1 + 0x11) == 0) {
        *(HGDIOBJ *)((int)param_1 + 0x11) = pvVar1;
      }
      else {
        FUN_00493eb4((uint)pvVar1);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da0c  OWL::TDC::vf6   (42 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TDC::vf6(undefined4 *param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  pvVar1 = GetStockObject(param_2);
  pvVar1 = SelectObject((HDC)*param_1,pvVar1);
  if ((HGDIOBJ)0x1 < pvVar1) {
    FUN_00493eb4((uint)pvVar1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da90  OWL::TDC::vf7   (42 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TDC::vf7(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x11) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x11));
    FUN_00493eb4((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x11) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dcbc  OWL::TDC::vf1   (15 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDC::vf1(undefined4 *param_1)

{
  SaveDC((HDC)*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dccc  OWL::TDC::vf2   (28 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TDC::vf2(undefined4 *param_1,int param_2)

{
  BOOL BVar1;
  
  BVar1 = RestoreDC((HDC)*param_1,param_2);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dce8  OWL::TDC::vf3   (27 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TDC::vf3(int param_1,int param_2)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)(param_1 + 5) + 0x5c))();
  GetDeviceCaps(hdc,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd04  OWL::TDC::vf4   (28 bytes)   [rtti:vtable virtual slot 4]
bool __cdecl OWL::TDC::vf4(undefined4 *param_1,DEVMODEA *param_2)

{
  HDC pHVar1;
  
  pHVar1 = ResetDCA((HDC)*param_1,param_2);
  return pHVar1 != (HDC)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd20  OWL::TDC::vf8   (76 bytes)   [rtti:vtable virtual slot 8]
COLORREF * __cdecl OWL::TDC::vf8(COLORREF *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  COLORREF CVar3;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    uVar2 = FUN_0048c12c(param_3);
    SetBkColor((HDC)*param_2,uVar2);
  }
  uVar2 = FUN_0048c12c(param_3);
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))
                       (uVar2,*(int *)((int)param_2 + 5),param_3,param_2);
  CVar3 = SetBkColor(hdc,uVar2);
  *param_1 = CVar3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd6c  OWL::TDC::vf9   (76 bytes)   [rtti:vtable virtual slot 9]
COLORREF * __cdecl OWL::TDC::vf9(COLORREF *param_1,int *param_2,uint *param_3)

{
  int iVar1;
  uint uVar2;
  HDC hdc;
  COLORREF CVar3;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    uVar2 = FUN_0048c12c(param_3);
    SetTextColor((HDC)*param_2,uVar2);
  }
  uVar2 = FUN_0048c12c(param_3);
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))
                       (uVar2,*(int *)((int)param_2 + 5),param_3,param_2);
  CVar3 = SetTextColor(hdc,uVar2);
  *param_1 = CVar3;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ddb8  OWL::TDC::vf10   (50 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TDC::vf10(int *param_1,int param_2)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetMapMode((HDC)*param_1,param_2);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  SetMapMode(hdc,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ddec  OWL::TDC::vf11   (73 bytes)   [rtti:vtable virtual slot 11]
bool __cdecl OWL::TDC::vf11(int *param_1,int *param_2,LPPOINT param_3)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  int x;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetViewportOrgEx((HDC)*param_1,*param_2,param_2[1],param_3);
  }
  iVar1 = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = SetViewportOrgEx(hdc,x,iVar1,param_3);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048de38  OWL::TDC::vf12   (73 bytes)   [rtti:vtable virtual slot 12]
bool __cdecl OWL::TDC::vf12(int *param_1,int *param_2,LPPOINT param_3)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  int x;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    OffsetViewportOrgEx((HDC)*param_1,*param_2,param_2[1],param_3);
  }
  iVar1 = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = OffsetViewportOrgEx(hdc,x,iVar1,param_3);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048de84  OWL::TDC::vf13   (73 bytes)   [rtti:vtable virtual slot 13]
bool __cdecl OWL::TDC::vf13(int *param_1,int *param_2,LPSIZE param_3)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  int x;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetViewportExtEx((HDC)*param_1,*param_2,param_2[1],param_3);
  }
  iVar1 = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = SetViewportExtEx(hdc,x,iVar1,param_3);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ded0  OWL::TDC::vf14   (83 bytes)   [rtti:vtable virtual slot 14]
bool __cdecl OWL::TDC::vf14(int *param_1,int param_2,int param_3,int param_4,int param_5,LPSIZE param_6)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    ScaleViewportExtEx((HDC)*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = ScaleViewportExtEx(hdc,param_2,param_3,param_4,param_5,param_6);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048df24  OWL::TDC::vf15   (73 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl OWL::TDC::vf15(int *param_1,int *param_2,LPSIZE param_3)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  int x;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    SetWindowExtEx((HDC)*param_1,*param_2,param_2[1],param_3);
  }
  iVar1 = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = SetWindowExtEx(hdc,x,iVar1,param_3);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048df70  OWL::TDC::vf16   (83 bytes)   [rtti:vtable virtual slot 16]
bool __cdecl OWL::TDC::vf16(int *param_1,int param_2,int param_3,int param_4,int param_5,LPSIZE param_6)

{
  int iVar1;
  HDC hdc;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  if (iVar1 != *param_1) {
    ScaleWindowExtEx((HDC)*param_1,param_2,param_3,param_4,param_5,param_6);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  BVar2 = ScaleWindowExtEx(hdc,param_2,param_3,param_4,param_5,param_6);
  return BVar2 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dfc4  OWL::TDC::vf17   (56 bytes)   [rtti:vtable virtual slot 17]
bool __cdecl OWL::TDC::vf17(undefined4 *param_1,int param_2,int param_3,uint *param_4,char *param_5)

{
  BOOL BVar1;
  
  if ((int)param_5 < 0) {
    param_5 = strlen(param_4);
  }
  BVar1 = TextOutA((HDC)*param_1,param_2,param_3,(LPCSTR)param_4,(int)param_5);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dffc  OWL::TDC::vf18   (67 bytes)   [rtti:vtable virtual slot 18]
bool __cdecl OWL::TDC::vf18(undefined4 *param_1,int param_2,int param_3,ushort param_4,RECT *param_5,uint *param_6, char *param_7,INT *param_8)

{
  BOOL BVar1;
  
  if ((int)param_7 < 0) {
    param_7 = strlen(param_6);
  }
  BVar1 = ExtTextOutA((HDC)*param_1,param_2,param_3,(uint)param_4,param_5,(LPCSTR)param_6,
                      (UINT)param_7,param_8);
  return BVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e040  OWL::TDC::vf19   (102 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TDC::vf19(undefined4 *param_1,int *param_2,uint *param_3,char *param_4,int param_5,INT *param_6, int param_7,uint *param_8)

{
  uint uVar1;
  undefined1 local_c [8];
  
  if ((int)param_4 < 0) {
    param_4 = strlen(param_3);
  }
  uVar1 = TabbedTextOutA((HDC)*param_1,*param_2,param_2[1],(LPCSTR)param_3,(int)param_4,param_5,
                         param_6,param_7);
  *param_8 = uVar1 & 0xffff;
  param_8[1] = uVar1 >> 0x10;
  return CONCAT31((int3)((uint)local_c >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0a8  OWL::TDC::vf20   (29 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TDC::vf20(undefined4 *param_1,LPCSTR param_2,int param_3,LPRECT param_4,ushort param_5)

{
  DrawTextA((HDC)*param_1,param_2,param_3,param_4,(uint)param_5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0c8  OWL::TDC::vf21   (41 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TDC::vf21(undefined4 *param_1,LPSTR param_2,int param_3,LPRECT param_4,UINT param_5, LPDRAWTEXTPARAMS param_6)

{
  if (param_6 != (LPDRAWTEXTPARAMS)0x0) {
    param_6->cbSize = 0x14;
  }
  DrawTextExA((HDC)*param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0f4  OWL::TDC::vf22   (71 bytes)   [rtti:vtable virtual slot 22]
bool __cdecl OWL::TDC::vf22(undefined4 *param_1,undefined4 *param_2,GRAYSTRINGPROC param_3,LPARAM param_4, int param_5,int *param_6)

{
  BOOL BVar1;
  
  if (param_5 < 0) {
    param_5 = 0;
  }
  BVar1 = GrayStringA((HDC)*param_1,(HBRUSH)*param_2,param_3,param_4,param_5,*param_6,param_6[1],
                      param_6[2] - *param_6,param_6[3] - param_6[1]);
  return BVar1 != 0;
}

} // namespace tea
