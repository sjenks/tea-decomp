// TEA.exe — runtime / library code "OWL_TDC"
// 24 functions, 0x0048d8bc..0x0048e0f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048d8bc  OWL::TDC::~TDC   (42 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDC::_dtor
void __cdecl OWL::TDC::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TDC::vftable;
    FUN_0048db40(self);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d8e8  OWL::TDC::vf23   (10 bytes)   [rtti:vtable virtual slot 23]
undefined4 __cdecl OWL::TDC::vf23(undefined4 *self)

{
  return *self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048d97c  OWL::TDC::vf5   (67 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TDC::vf5(undefined4 *self,uint *param_2)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = SelectObject((HDC)*self,(HGDIOBJ)*param_2);
  if (hGdiObject != (HGDIOBJ)0x0) {
    FUN_00493e88(*param_2);
    if ((HGDIOBJ)0x1 < hGdiObject) {
      if (*(int *)((int)self + 0x11) == 0) {
        *(HGDIOBJ *)((int)self + 0x11) = hGdiObject;
      }
      else {
        FUN_00493eb4((uint)hGdiObject);
      }
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da0c  OWL::TDC::vf6   (42 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TDC::vf6(undefined4 *self,int i)

{
  HGDIOBJ hGdiObject;
  
  hGdiObject = GetStockObject(i);
  hGdiObject = SelectObject((HDC)*self,hGdiObject);
  if ((HGDIOBJ)0x1 < hGdiObject) {
    FUN_00493eb4((uint)hGdiObject);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048da90  OWL::TDC::vf7   (42 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TDC::vf7(undefined4 *self)

{
  HGDIOBJ hGdiObject;
  
  if (*(int *)((int)self + 0x11) != 0) {
    hGdiObject = SelectObject((HDC)*self,*(HGDIOBJ *)((int)self + 0x11));
    FUN_00493eb4((uint)hGdiObject);
    *(undefined4 *)((int)self + 0x11) = 0;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dcbc  OWL::TDC::vf1   (15 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TDC::vf1(undefined4 *self)

{
  SaveDC((HDC)*self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dccc  OWL::TDC::vf2   (28 bytes)   [rtti:vtable virtual slot 2]
bool __cdecl OWL::TDC::vf2(undefined4 *self,int savedDC)

{
  BOOL ok;
  
  ok = RestoreDC((HDC)*self,savedDC);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dce8  OWL::TDC::vf3   (27 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TDC::vf3(int self,int index)

{
  HDC hdc;
  
  hdc = (HDC)(**(code **)(*(int *)(self + 5) + 0x5c))();
  GetDeviceCaps(hdc,index);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd04  OWL::TDC::vf4   (28 bytes)   [rtti:vtable virtual slot 4]
bool __cdecl OWL::TDC::vf4(undefined4 *self,DEVMODEA *lpdm)

{
  HDC hdc;
  
  hdc = ResetDCA((HDC)*self,lpdm);
  return hdc != (HDC)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd20  OWL::TDC::vf8   (76 bytes)   [rtti:vtable virtual slot 8]
COLORREF * __cdecl OWL::TDC::vf8(COLORREF *self,int *param_2,uint *param_3)

{
  int iVar1;
  uint color2;
  HDC hdc;
  COLORREF color;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    color2 = FUN_0048c12c(param_3);
    SetBkColor((HDC)*param_2,color2);
  }
  color2 = FUN_0048c12c(param_3);
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))
                       (color2,*(int *)((int)param_2 + 5),param_3,param_2);
  color = SetBkColor(hdc,color2);
  *self = color;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dd6c  OWL::TDC::vf9   (76 bytes)   [rtti:vtable virtual slot 9]
COLORREF * __cdecl OWL::TDC::vf9(COLORREF *self,int *param_2,uint *param_3)

{
  int iVar1;
  uint color2;
  HDC hdc;
  COLORREF color;
  
  iVar1 = (**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
  if (iVar1 != *param_2) {
    color2 = FUN_0048c12c(param_3);
    SetTextColor((HDC)*param_2,color2);
  }
  color2 = FUN_0048c12c(param_3);
  hdc = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))
                       (color2,*(int *)((int)param_2 + 5),param_3,param_2);
  color = SetTextColor(hdc,color2);
  *self = color;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ddb8  OWL::TDC::vf10   (50 bytes)   [rtti:vtable virtual slot 10]
void __cdecl OWL::TDC::vf10(int *self,int mode)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (iVar1 != *self) {
    SetMapMode((HDC)*self,mode);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  SetMapMode(hdc,mode);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ddec  OWL::TDC::vf11   (73 bytes)   [rtti:vtable virtual slot 11]
bool __cdecl OWL::TDC::vf11(int *self,int *param_2,LPPOINT lppt)

{
  int y;
  HDC hdc;
  BOOL ok;
  int x;
  
  y = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (y != *self) {
    SetViewportOrgEx((HDC)*self,*param_2,param_2[1],lppt);
  }
  y = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = SetViewportOrgEx(hdc,x,y,lppt);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048de38  OWL::TDC::vf12   (73 bytes)   [rtti:vtable virtual slot 12]
bool __cdecl OWL::TDC::vf12(int *self,int *param_2,LPPOINT lppt)

{
  int y;
  HDC hdc;
  BOOL ok;
  int x;
  
  y = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (y != *self) {
    OffsetViewportOrgEx((HDC)*self,*param_2,param_2[1],lppt);
  }
  y = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = OffsetViewportOrgEx(hdc,x,y,lppt);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048de84  OWL::TDC::vf13   (73 bytes)   [rtti:vtable virtual slot 13]
bool __cdecl OWL::TDC::vf13(int *self,int *param_2,LPSIZE lpsz)

{
  int y;
  HDC hdc;
  BOOL ok;
  int x;
  
  y = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (y != *self) {
    SetViewportExtEx((HDC)*self,*param_2,param_2[1],lpsz);
  }
  y = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = SetViewportExtEx(hdc,x,y,lpsz);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ded0  OWL::TDC::vf14   (83 bytes)   [rtti:vtable virtual slot 14]
bool __cdecl OWL::TDC::vf14(int *self,int xn,int dx,int yn,int yd,LPSIZE lpsz)

{
  int iVar1;
  HDC hdc;
  BOOL ok;
  
  iVar1 = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (iVar1 != *self) {
    ScaleViewportExtEx((HDC)*self,xn,dx,yn,yd,lpsz);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = ScaleViewportExtEx(hdc,xn,dx,yn,yd,lpsz);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048df24  OWL::TDC::vf15   (73 bytes)   [rtti:vtable virtual slot 15]
bool __cdecl OWL::TDC::vf15(int *self,int *param_2,LPSIZE lpsz)

{
  int y;
  HDC hdc;
  BOOL ok;
  int x;
  
  y = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (y != *self) {
    SetWindowExtEx((HDC)*self,*param_2,param_2[1],lpsz);
  }
  y = param_2[1];
  x = *param_2;
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = SetWindowExtEx(hdc,x,y,lpsz);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048df70  OWL::TDC::vf16   (83 bytes)   [rtti:vtable virtual slot 16]
bool __cdecl OWL::TDC::vf16(int *self,int xn,int xd,int yn,int yd,LPSIZE lpsz)

{
  int iVar1;
  HDC hdc;
  BOOL ok;
  
  iVar1 = (**(code **)(*(int *)((int)self + 5) + 0x5c))();
  if (iVar1 != *self) {
    ScaleWindowExtEx((HDC)*self,xn,xd,yn,yd,lpsz);
  }
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  ok = ScaleWindowExtEx(hdc,xn,xd,yn,yd,lpsz);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dfc4  OWL::TDC::vf17   (56 bytes)   [rtti:vtable virtual slot 17]
bool __cdecl OWL::TDC::vf17(undefined4 *self,int x,int y,uint *string_,char *len)

{
  BOOL ok;
  
  if ((int)len < 0) {
    len = strlen(string_);
  }
  ok = TextOutA((HDC)*self,x,y,(LPCSTR)string_,(int)len);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048dffc  OWL::TDC::vf18   (67 bytes)   [rtti:vtable virtual slot 18]
bool __cdecl OWL::TDC::vf18(undefined4 *self,int x,int y,ushort options,RECT *pRect,uint *string_, char *len,INT *dx)

{
  BOOL ok;
  
  if ((int)len < 0) {
    len = strlen(string_);
  }
  ok = ExtTextOutA((HDC)*self,x,y,(uint)options,pRect,(LPCSTR)string_,
                      (UINT)len,dx);
  return ok != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e040  OWL::TDC::vf19   (102 bytes)   [rtti:vtable virtual slot 19]
undefined4 __cdecl OWL::TDC::vf19(undefined4 *self,int *param_2,uint *string_,char *len,int tabPositions,INT *lpnTabStopPositions, int tabOrigin,uint *param_8)

{
  uint uVar1;
  undefined1 local_c [8];
  
  if ((int)len < 0) {
    len = strlen(string_);
  }
  uVar1 = TabbedTextOutA((HDC)*self,*param_2,param_2[1],(LPCSTR)string_,(int)len,tabPositions,
                         lpnTabStopPositions,tabOrigin);
  *param_8 = uVar1 & 0xffff;
  param_8[1] = uVar1 >> 0x10;
  return CONCAT31((int3)((uint)local_c >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0a8  OWL::TDC::vf20   (29 bytes)   [rtti:vtable virtual slot 20]
void __cdecl OWL::TDC::vf20(undefined4 *self,LPCSTR text,int text2,LPRECT lprc,ushort format)

{
  DrawTextA((HDC)*self,text,text2,lprc,(uint)format);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0c8  OWL::TDC::vf21   (41 bytes)   [rtti:vtable virtual slot 21]
void __cdecl OWL::TDC::vf21(undefined4 *self,LPSTR text,int text2,LPRECT lprc,UINT format, LPDRAWTEXTPARAMS lpdtp)

{
  if (lpdtp != (LPDRAWTEXTPARAMS)0x0) {
    lpdtp->cbSize = 0x14;
  }
  DrawTextExA((HDC)*self,text,text2,lprc,format,lpdtp);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e0f4  OWL::TDC::vf22   (71 bytes)   [rtti:vtable virtual slot 22]
bool __cdecl OWL::TDC::vf22(undefined4 *self,undefined4 *param_2,GRAYSTRINGPROC outputFunc,LPARAM lParam, int count,int *param_6)

{
  BOOL ok;
  
  if (count < 0) {
    count = 0;
  }
  ok = GrayStringA((HDC)*self,(HBRUSH)*param_2,outputFunc,lParam,count,*param_6,param_6[1],
                      param_6[2] - *param_6,param_6[3] - param_6[1]);
  return ok != 0;
}

} // namespace tea
