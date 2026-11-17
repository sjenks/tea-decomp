// name: FUN_0049c11c
// address: 0x49c11c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049c11c(undefined4 *param_1)

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

