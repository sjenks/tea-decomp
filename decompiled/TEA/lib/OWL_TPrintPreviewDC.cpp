// TEA.exe — runtime / library code "OWL_TPrintPreviewDC"
// 17 functions, 0x0049bea0..0x0049c5c8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049bea0  OWL::TPrintPreviewDC::~TPrintPreviewDC   (177 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrintPreviewDC::_dtor
void __cdecl OWL::TPrintPreviewDC::_dtor(int *self,byte dtorFlags)

{
  HGDIOBJ hGdiObject;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x508b3c);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TPrintPreviewDC::vftable;
    hGdiObject = GetStockObject(0xd);
    hGdiObject = SelectObject((HDC)*self,hGdiObject);
    DeleteObject(hGdiObject);
    if (*(uint **)((int)self + 0x3d) != (uint *)0x0) {
      OWL::TGdiObject::_dtor(*(uint **)((int)self + 0x3d),0);
      operator_delete();
    }
    OWL::TCreatedDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bf54  OWL::TPrintPreviewDC::vf5   (214 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TPrintPreviewDC::vf5(int self,int *param_2)

{
  uint *gdiObject;
  undefined4 *sehChainHead;
  LOGFONTA logFont;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  uint *unused;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x508b88);
  if (*param_2 != 0) {
    GetObjectA((HANDLE)*param_2,0x3c,&logFont);
    gdiObject = *(uint **)(self + 0x3d);
    local_8 = (uint *)operator_new();
    if (local_8 != (uint *)0x0) {
      ehContext = 0x14;
      FUN_0048f7fc(local_8,&logFont);
      ehContext = 8;
    }
    *(uint **)(self + 0x3d) = local_8;
    (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x14))();
    unused = gdiObject;
    if (gdiObject != (uint *)0x0) {
      ehContext = 0x2c;
      ehDtorCount = ehDtorCount + -1;
      OWL::TGdiObject::_dtor(gdiObject,0);
      operator_delete();
      ehContext = 0x20;
    }
    if (**(int **)(self + 0x3d) != *(int *)(self + 0x39)) {
      *(undefined4 *)(self + 0x39) = **(undefined4 **)(self + 0x3d);
      (**(code **)(*(int *)(self + 5) + 0x60))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c02c  OWL::TPrintPreviewDC::vf6   (78 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TPrintPreviewDC::vf6(undefined4 *self,int i)

{
  HGDIOBJ hGdiObject;
  
  (**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x18))();
  if ((i - 10U < 5) || (i - 10U == 6)) {
    hGdiObject = GetStockObject(i);
    if (hGdiObject != *(HGDIOBJ *)((int)self + 0x39)) {
      *(HGDIOBJ *)((int)self + 0x39) = hGdiObject;
      (**(code **)(*(int *)((int)self + 5) + 0x60))();
    }
  }
  else {
    OWL::TDC::vf6(self,i);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c07c  OWL::TPrintPreviewDC::vf7   (52 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TPrintPreviewDC::vf7(undefined4 *self)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x1c))();
  uVar1 = FUN_0048db7c(*(undefined4 **)((int)self + 0x35),6);
  *(undefined4 *)((int)self + 0x39) = uVar1;
  OWL::TDC::vf7(self);
  (**(code **)(*(int *)((int)self + 5) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c0b0  OWL::TPrintPreviewDC::vf3   (54 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TPrintPreviewDC::vf3(int self,int param_2)

{
  if (param_2 - 0x1cU < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0049c0c6 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_0049c0de +
                CONCAT31((int3)(param_2 - 0x1cU >> 8),*(undefined1 *)(param_2 + 0x49c0b7)) * 4))();
    return;
  }
  (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c11c  OWL::TPrintPreviewDC::vf24   (310 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TPrintPreviewDC::vf24(undefined4 *self)

{
  HDC hdc;
  HFONT hFont;
  HGDIOBJ hGdiObject;
  uint uVar4;
  uint uVar5;
  int c;
  tagTEXTMETRICA *pTextMetrics;
  CHAR *lpName;
  tagTEXTMETRICA textMetrics;
  LOGFONTA logFont;
  uint unused;
  
  GetObjectA(*(HANDLE *)((int)self + 0x39),0x3c,&logFont);
  pTextMetrics = &textMetrics;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetTextMetricsA(hdc,pTextMetrics);
  logFont.lfHeight = textMetrics.tmHeight;
  if (-1 < textMetrics.tmHeight) {
    logFont.lfHeight = -(textMetrics.tmHeight - textMetrics.tmInternalLeading);
  }
  logFont.lfWidth = textMetrics.tmAveCharWidth;
  logFont.lfWeight = textMetrics.tmWeight;
  logFont.lfItalic = textMetrics.tmItalic;
  logFont.lfUnderline = textMetrics.tmUnderlined;
  logFont.lfStrikeOut = textMetrics.tmStruckOut;
  logFont.lfCharSet = textMetrics.tmCharSet;
  logFont.lfOutPrecision = '\x04';
  logFont.lfClipPrecision = '\0';
  logFont.lfQuality = '\x01';
  logFont.lfPitchAndFamily = textMetrics.tmPitchAndFamily & 3;
  lpName = logFont.lfFaceName;
  c = 0x20;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetTextFaceA(hdc,c,lpName);
  hFont = CreateFontIndirectA(&logFont);
  hGdiObject = SelectObject((HDC)*self,hFont);
  DeleteObject(hGdiObject);
  pTextMetrics = &textMetrics;
  hdc = (HDC)(**(code **)(*(int *)((int)self + 5) + 0x5c))();
  GetTextMetricsA(hdc,pTextMetrics);
  if (-1 < textMetrics.tmHeight) {
    textMetrics.tmHeight = -(textMetrics.tmHeight - textMetrics.tmInternalLeading);
  }
  uVar4 = ((logFont.lfHeight ^ logFont.lfHeight >> 0x1f) - (logFont.lfHeight >> 0x1f)) -
          ((textMetrics.tmHeight ^ textMetrics.tmHeight >> 0x1f) - (textMetrics.tmHeight >> 0x1f));
  uVar5 = (int)uVar4 >> 0x1f;
  if (2 < (int)((uVar4 ^ uVar5) - uVar5)) {
    if ((logFont.lfPitchAndFamily & 0x50) == 0) {
      logFont.lfPitchAndFamily = '\0';
    }
    else {
      logFont.lfPitchAndFamily = 'P';
    }
    logFont.lfFaceName[0] = '\0';
    unused = textMetrics.tmHeight;
    hFont = CreateFontIndirectA(&logFont);
    hGdiObject = SelectObject((HDC)*self,hFont);
    DeleteObject(hGdiObject);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c254  OWL::TPrintPreviewDC::vf25   (222 bytes)   [rtti:vtable virtual slot 25]
void __cdecl OWL::TPrintPreviewDC::vf25(undefined4 *self)

{
  HDC hdc;
  int y;
  int x;
  tagSIZE *pSize;
  tagSIZE size;
  int numerator;
  int unused;
  tagSIZE size2;
  int denominator;
  int denominator2;
  int number;
  int number2;
  tagSIZE size3;
  
  size3.cx = 0;
  size3.cy = 0;
  GetViewportExtEx((HDC)*self,&size3);
  FUN_0049bca0(&number,*(int *)((int)self + 0x35));
  size2.cx = 0;
  size2.cy = 0;
  pSize = &size2;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetViewportExtEx(hdc,pSize);
  denominator = size2.cx;
  denominator2 = size2.cy;
  size.cx = 0;
  size.cy = 0;
  pSize = &size;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetWindowExtEx(hdc,pSize);
  numerator = size.cx;
  unused = size.cy;
  y = MulDiv(number2,size.cy,denominator2);
  x = MulDiv(number,numerator,denominator);
  SetMapMode((HDC)*self,8);
  SetWindowExtEx((HDC)*self,x,y,(LPSIZE)0x0);
  SetViewportExtEx((HDC)*self,size3.cx,size3.cy,(LPSIZE)0x0);
  (**(code **)(*(int *)((int)self + 5) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c334  OWL::TPrintPreviewDC::vf26   (205 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TPrintPreviewDC::vf26(undefined4 *self)

{
  HDC hdc;
  int scaled;
  tagPOINT *pPt;
  tagPOINT pt;
  int unused;
  int unused2;
  int x2;
  int y2;
  tagSIZE size;
  int denominator;
  int denominator2;
  tagPOINT pt2;
  int number;
  int number2;
  
  pt2.x = 0;
  pt2.y = 0;
  pPt = &pt2;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetViewportOrgEx(hdc,pPt);
  number = pt2.x;
  number2 = pt2.y;
  FUN_0049bca0(&denominator,*(int *)((int)self + 0x35));
  size.cx = 0;
  size.cy = 0;
  GetViewportExtEx((HDC)*self,&size);
  scaled = MulDiv(number2,size.cy,denominator2);
  x2 = MulDiv(number,size.cx,denominator);
  pt.x = 0;
  pt.y = 0;
  pPt = &pt;
  y2 = scaled;
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)self + 0x35) + 5) + 0x5c))();
  GetWindowOrgEx(hdc,pPt);
  unused = pt.x;
  unused2 = pt.y;
  SetWindowOrgEx((HDC)*self,pt.x,pt.y,(LPPOINT)0x0);
  SetViewportOrgEx((HDC)*self,x2,y2,(LPPOINT)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c404  OWL::TPrintPreviewDC::vf8   (91 bytes)   [rtti:vtable virtual slot 8]
undefined4 * __cdecl OWL::TPrintPreviewDC::vf8(undefined4 *self,undefined4 *param_2)

{
  HDC hdc;
  uint color;
  COLORREF color2;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x20))();
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x5c))();
  color2 = GetBkColor(hdc);
  color = FUN_0048c12c(&color2);
  SetBkColor((HDC)*param_2,color);
  *self = local_8;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c460  OWL::TPrintPreviewDC::vf9   (91 bytes)   [rtti:vtable virtual slot 9]
undefined4 * __cdecl OWL::TPrintPreviewDC::vf9(undefined4 *self,undefined4 *param_2)

{
  HDC hdc;
  uint color;
  COLORREF color2;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x24))();
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x5c))();
  color2 = GetTextColor(hdc);
  color = FUN_0048c12c(&color2);
  SetTextColor((HDC)*param_2,color);
  *self = local_8;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c4bc  OWL::TPrintPreviewDC::vf10   (40 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TPrintPreviewDC::vf10(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x28))();
  (**(code **)(*(int *)(self + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c4e4  OWL::TPrintPreviewDC::vf11   (43 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TPrintPreviewDC::vf11(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x2c))();
  (**(code **)(*(int *)(self + 5) + 0x68))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c510  OWL::TPrintPreviewDC::vf12   (43 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TPrintPreviewDC::vf12(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x30))();
  (**(code **)(*(int *)(self + 5) + 0x68))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c53c  OWL::TPrintPreviewDC::vf13   (43 bytes)   [rtti:vtable virtual slot 13]
undefined4 __cdecl OWL::TPrintPreviewDC::vf13(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x34))();
  (**(code **)(*(int *)(self + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c568  OWL::TPrintPreviewDC::vf14   (52 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TPrintPreviewDC::vf14(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x38))();
  (**(code **)(*(int *)(self + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c59c  OWL::TPrintPreviewDC::vf15   (43 bytes)   [rtti:vtable virtual slot 15]
undefined4 __cdecl OWL::TPrintPreviewDC::vf15(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x3c))();
  (**(code **)(*(int *)(self + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c5c8  OWL::TPrintPreviewDC::vf16   (52 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl OWL::TPrintPreviewDC::vf16(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(self + 0x35) + 5) + 0x40))();
  (**(code **)(*(int *)(self + 5) + 100))();
  return uVar1;
}

} // namespace tea
