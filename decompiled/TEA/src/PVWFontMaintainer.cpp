// TEA.exe — application module "PVWFontMaintainer"
// 4 functions, 0x0041e8d8..0x0041ea74. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041e8d8  PVWFontMaintainer::~PVWFontMaintainer   (102 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as PVWFontMaintainer::_dtor
void __cdecl PVWFontMaintainer::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ef42c);
  if (self != (undefined4 *)0x0) {
    if ((uint *)*self != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)*self,0);
      operator_delete();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e940  CreateFontFromLogFont2   (156 bytes)   [analysis]
//   creates a TFont from a LOGFONT and selects it
//   file placement: inferred (address adjacency)
void __cdecl CreateFontFromLogFont2(undefined4 *result,undefined4 *logFont)

{
  uint *gdiObject;
  uint *puVar2;
  int i;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  undefined4 sehPrevFrame;
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4ef46c);
  puVar4 = result + 1;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar4 = *logFont;
    logFont = logFont + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  gdiObject = (uint *)*result;
  puVar2 = (uint *)operator_new();
  if (puVar2 != (uint *)0x0) {
    FUN_0048f7fc(puVar2,(LOGFONTA *)(result + 2));
  }
  *result = puVar2;
  if (gdiObject != (uint *)0x0) {
    OWL::TGdiObject::_dtor(gdiObject,0);
    operator_delete();
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041e9dc  MeasureControlText   (152 bytes)   [analysis]
//   size of a control's text in its font
//   file placement: inferred (address adjacency)
void __cdecl MeasureControlText(int *control,int *size)

{
  int i;
  tagRECT *pRect;
  LONG *pLVar3;
  byte bVar4;
  tagRECT rect;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined1 lParam [16];
  int unused;
  int unused2;
  undefined4 unused3;
  
  bVar4 = 0;
  if ((WPARAM *)*control != (WPARAM *)0x0) {
    FUN_004a76a8(*size,0x30,*(WPARAM *)*control,0);
    (**(code **)(*(int *)(*size + 8) + 0x68))();
    unused3 = 0x216;
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004a7a30(*size,&rect);
    pRect = &rect;
    pLVar3 = &local_30;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar3 = pRect->left;
      pRect = (tagRECT *)((int)pRect + ((uint)bVar4 * -2 + 1) * 4);
      pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
    }
    unused = local_28 - local_30;
    unused2 = local_24 - local_2c;
    FUN_004a76a8(*size,0x47,0,(LPARAM)lParam);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ea74  CreateFontFromLogFont   (10 bytes)   [analysis]
//   CreateFontIndirect wrapper
//   file placement: inferred (address adjacency)
undefined4 __cdecl CreateFontFromLogFont(undefined4 *param_1)

{
  return *param_1;
}

} // namespace tea
