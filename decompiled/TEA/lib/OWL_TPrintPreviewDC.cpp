// TEA.exe — runtime / library code "OWL_TPrintPreviewDC"
// 17 functions, 0x0049bea0..0x0049c5c8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0049bea0  OWL::TPrintPreviewDC::~TPrintPreviewDC   (177 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPrintPreviewDC::_dtor
void __cdecl OWL::TPrintPreviewDC::_dtor(int *param_1,byte param_2)

{
  HGDIOBJ pvVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x508b3c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &OWL::TPrintPreviewDC::vftable;
    pvVar1 = GetStockObject(0xd);
    pvVar1 = SelectObject((HDC)*param_1,pvVar1);
    DeleteObject(pvVar1);
    if (*(uint **)((int)param_1 + 0x3d) != (uint *)0x0) {
      OWL::TGdiObject::_dtor(*(uint **)((int)param_1 + 0x3d),0);
      operator_delete();
    }
    OWL::TCreatedDC::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049bf54  OWL::TPrintPreviewDC::vf5   (214 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TPrintPreviewDC::vf5(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 *in_FS_OFFSET;
  LOGFONTA local_6c;
  undefined4 local_30;
  undefined2 local_20;
  int local_14;
  uint *local_c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x508b88);
  if (*param_2 != 0) {
    GetObjectA((HANDLE)*param_2,0x3c,&local_6c);
    puVar1 = *(uint **)(param_1 + 0x3d);
    local_8 = (uint *)operator_new();
    if (local_8 != (uint *)0x0) {
      local_20 = 0x14;
      FUN_0048f7fc(local_8,&local_6c);
      local_20 = 8;
    }
    *(uint **)(param_1 + 0x3d) = local_8;
    (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x14))();
    local_c = puVar1;
    if (puVar1 != (uint *)0x0) {
      local_20 = 0x2c;
      local_14 = local_14 + -1;
      OWL::TGdiObject::_dtor(puVar1,0);
      operator_delete();
      local_20 = 0x20;
    }
    if (**(int **)(param_1 + 0x3d) != *(int *)(param_1 + 0x39)) {
      *(undefined4 *)(param_1 + 0x39) = **(undefined4 **)(param_1 + 0x3d);
      (**(code **)(*(int *)(param_1 + 5) + 0x60))();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c02c  OWL::TPrintPreviewDC::vf6   (78 bytes)   [rtti:vtable virtual slot 6]
void __cdecl OWL::TPrintPreviewDC::vf6(undefined4 *param_1,int param_2)

{
  HGDIOBJ pvVar1;
  
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x18))();
  if ((param_2 - 10U < 5) || (param_2 - 10U == 6)) {
    pvVar1 = GetStockObject(param_2);
    if (pvVar1 != *(HGDIOBJ *)((int)param_1 + 0x39)) {
      *(HGDIOBJ *)((int)param_1 + 0x39) = pvVar1;
      (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
    }
  }
  else {
    OWL::TDC::vf6(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c07c  OWL::TPrintPreviewDC::vf7   (52 bytes)   [rtti:vtable virtual slot 7]
void __cdecl OWL::TPrintPreviewDC::vf7(undefined4 *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x1c))();
  uVar1 = FUN_0048db7c(*(undefined4 **)((int)param_1 + 0x35),6);
  *(undefined4 *)((int)param_1 + 0x39) = uVar1;
  OWL::TDC::vf7(param_1);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c0b0  OWL::TPrintPreviewDC::vf3   (54 bytes, 2 ranges)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TPrintPreviewDC::vf3(int param_1,int param_2)

{
  if (param_2 - 0x1cU < 0xb) {
                    /* WARNING: Could not emulate address calculation at 0x0049c0c6 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_0049c0de +
                CONCAT31((int3)(param_2 - 0x1cU >> 8),*(undefined1 *)(param_2 + 0x49c0b7)) * 4))();
    return;
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c11c  OWL::TPrintPreviewDC::vf24   (310 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TPrintPreviewDC::vf24(undefined4 *param_1)

{
  HDC pHVar1;
  HFONT pHVar2;
  HGDIOBJ pvVar3;
  uint uVar4;
  uint uVar5;
  int c;
  tagTEXTMETRICA *ptVar6;
  CHAR *lpName;
  tagTEXTMETRICA local_7c;
  LOGFONTA local_44;
  uint local_8;
  
  GetObjectA(*(HANDLE *)((int)param_1 + 0x39),0x3c,&local_44);
  ptVar6 = &local_7c;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetTextMetricsA(pHVar1,ptVar6);
  local_44.lfHeight = local_7c.tmHeight;
  if (-1 < local_7c.tmHeight) {
    local_44.lfHeight = -(local_7c.tmHeight - local_7c.tmInternalLeading);
  }
  local_44.lfWidth = local_7c.tmAveCharWidth;
  local_44.lfWeight = local_7c.tmWeight;
  local_44.lfItalic = local_7c.tmItalic;
  local_44.lfUnderline = local_7c.tmUnderlined;
  local_44.lfStrikeOut = local_7c.tmStruckOut;
  local_44.lfCharSet = local_7c.tmCharSet;
  local_44.lfOutPrecision = '\x04';
  local_44.lfClipPrecision = '\0';
  local_44.lfQuality = '\x01';
  local_44.lfPitchAndFamily = local_7c.tmPitchAndFamily & 3;
  lpName = local_44.lfFaceName;
  c = 0x20;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetTextFaceA(pHVar1,c,lpName);
  pHVar2 = CreateFontIndirectA(&local_44);
  pvVar3 = SelectObject((HDC)*param_1,pHVar2);
  DeleteObject(pvVar3);
  ptVar6 = &local_7c;
  pHVar1 = (HDC)(**(code **)(*(int *)((int)param_1 + 5) + 0x5c))();
  GetTextMetricsA(pHVar1,ptVar6);
  if (-1 < local_7c.tmHeight) {
    local_7c.tmHeight = -(local_7c.tmHeight - local_7c.tmInternalLeading);
  }
  uVar4 = ((local_44.lfHeight ^ local_44.lfHeight >> 0x1f) - (local_44.lfHeight >> 0x1f)) -
          ((local_7c.tmHeight ^ local_7c.tmHeight >> 0x1f) - (local_7c.tmHeight >> 0x1f));
  uVar5 = (int)uVar4 >> 0x1f;
  if (2 < (int)((uVar4 ^ uVar5) - uVar5)) {
    if ((local_44.lfPitchAndFamily & 0x50) == 0) {
      local_44.lfPitchAndFamily = '\0';
    }
    else {
      local_44.lfPitchAndFamily = 'P';
    }
    local_44.lfFaceName[0] = '\0';
    local_8 = local_7c.tmHeight;
    pHVar2 = CreateFontIndirectA(&local_44);
    pvVar3 = SelectObject((HDC)*param_1,pHVar2);
    DeleteObject(pvVar3);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c254  OWL::TPrintPreviewDC::vf25   (222 bytes)   [rtti:vtable virtual slot 25]
void __cdecl OWL::TPrintPreviewDC::vf25(undefined4 *param_1)

{
  HDC pHVar1;
  int y;
  int x;
  tagSIZE *ptVar2;
  tagSIZE local_34;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  tagSIZE local_c;
  
  local_c.cx = 0;
  local_c.cy = 0;
  GetViewportExtEx((HDC)*param_1,&local_c);
  FUN_0049bca0(&local_14,*(int *)((int)param_1 + 0x35));
  local_24.cx = 0;
  local_24.cy = 0;
  ptVar2 = &local_24;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetViewportExtEx(pHVar1,ptVar2);
  local_1c = local_24.cx;
  local_18 = local_24.cy;
  local_34.cx = 0;
  local_34.cy = 0;
  ptVar2 = &local_34;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetWindowExtEx(pHVar1,ptVar2);
  local_2c = local_34.cx;
  local_28 = local_34.cy;
  y = MulDiv(local_10,local_34.cy,local_18);
  x = MulDiv(local_14,local_2c,local_1c);
  SetMapMode((HDC)*param_1,8);
  SetWindowExtEx((HDC)*param_1,x,y,(LPSIZE)0x0);
  SetViewportExtEx((HDC)*param_1,local_c.cx,local_c.cy,(LPSIZE)0x0);
  (**(code **)(*(int *)((int)param_1 + 5) + 0x68))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c334  OWL::TPrintPreviewDC::vf26   (205 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TPrintPreviewDC::vf26(undefined4 *param_1)

{
  HDC pHVar1;
  int iVar2;
  tagPOINT *ptVar3;
  tagPOINT local_3c;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  tagSIZE local_24;
  int local_1c;
  int local_18;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  local_14.x = 0;
  local_14.y = 0;
  ptVar3 = &local_14;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetViewportOrgEx(pHVar1,ptVar3);
  local_c = local_14.x;
  local_8 = local_14.y;
  FUN_0049bca0(&local_1c,*(int *)((int)param_1 + 0x35));
  local_24.cx = 0;
  local_24.cy = 0;
  GetViewportExtEx((HDC)*param_1,&local_24);
  iVar2 = MulDiv(local_8,local_24.cy,local_18);
  local_2c = MulDiv(local_c,local_24.cx,local_1c);
  local_3c.x = 0;
  local_3c.y = 0;
  ptVar3 = &local_3c;
  local_28 = iVar2;
  pHVar1 = (HDC)(**(code **)(*(int *)(*(int *)((int)param_1 + 0x35) + 5) + 0x5c))();
  GetWindowOrgEx(pHVar1,ptVar3);
  local_34 = local_3c.x;
  local_30 = local_3c.y;
  SetWindowOrgEx((HDC)*param_1,local_3c.x,local_3c.y,(LPPOINT)0x0);
  SetViewportOrgEx((HDC)*param_1,local_2c,local_28,(LPPOINT)0x0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c404  OWL::TPrintPreviewDC::vf8   (91 bytes)   [rtti:vtable virtual slot 8]
undefined4 * __cdecl OWL::TPrintPreviewDC::vf8(undefined4 *param_1,undefined4 *param_2)

{
  HDC hdc;
  uint color;
  COLORREF local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x20))();
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x5c))();
  local_c = GetBkColor(hdc);
  color = FUN_0048c12c(&local_c);
  SetBkColor((HDC)*param_2,color);
  *param_1 = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c460  OWL::TPrintPreviewDC::vf9   (91 bytes)   [rtti:vtable virtual slot 9]
undefined4 * __cdecl OWL::TPrintPreviewDC::vf9(undefined4 *param_1,undefined4 *param_2)

{
  HDC hdc;
  uint color;
  COLORREF local_c;
  undefined4 local_8;
  
  (**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x24))();
  hdc = (HDC)(**(code **)(*(int *)(*(int *)((int)param_2 + 0x35) + 5) + 0x5c))();
  local_c = GetTextColor(hdc);
  color = FUN_0048c12c(&local_c);
  SetTextColor((HDC)*param_2,color);
  *param_1 = local_8;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c4bc  OWL::TPrintPreviewDC::vf10   (40 bytes)   [rtti:vtable virtual slot 10]
undefined4 __cdecl OWL::TPrintPreviewDC::vf10(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x28))();
  (**(code **)(*(int *)(param_1 + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c4e4  OWL::TPrintPreviewDC::vf11   (43 bytes)   [rtti:vtable virtual slot 11]
undefined4 __cdecl OWL::TPrintPreviewDC::vf11(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x2c))();
  (**(code **)(*(int *)(param_1 + 5) + 0x68))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c510  OWL::TPrintPreviewDC::vf12   (43 bytes)   [rtti:vtable virtual slot 12]
undefined4 __cdecl OWL::TPrintPreviewDC::vf12(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x30))();
  (**(code **)(*(int *)(param_1 + 5) + 0x68))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c53c  OWL::TPrintPreviewDC::vf13   (43 bytes)   [rtti:vtable virtual slot 13]
undefined4 __cdecl OWL::TPrintPreviewDC::vf13(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x34))();
  (**(code **)(*(int *)(param_1 + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c568  OWL::TPrintPreviewDC::vf14   (52 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TPrintPreviewDC::vf14(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x38))();
  (**(code **)(*(int *)(param_1 + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c59c  OWL::TPrintPreviewDC::vf15   (43 bytes)   [rtti:vtable virtual slot 15]
undefined4 __cdecl OWL::TPrintPreviewDC::vf15(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x3c))();
  (**(code **)(*(int *)(param_1 + 5) + 100))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0049c5c8  OWL::TPrintPreviewDC::vf16   (52 bytes)   [rtti:vtable virtual slot 16]
undefined4 __cdecl OWL::TPrintPreviewDC::vf16(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x35) + 5) + 0x40))();
  (**(code **)(*(int *)(param_1 + 5) + 100))();
  return uVar1;
}

} // namespace tea
