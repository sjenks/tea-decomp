// TEA.exe — application module "TEAPrintout"
// 17 functions, 0x00402fa0..0x004044dc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00402fa0  TEAPrintout::TEAPrintout   (312 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAPrintout's vtable at its vptr offset (+0x0) in this
/* WARNING: Removing unreachable block (ram,0x00403078) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00403080 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl TEAPrintout::TEAPrintout(undefined4 *self,uint *param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6,undefined4 *param_7)

{
  int i;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *sehChainHead;
  byte bVar4;
  undefined4 sehPrevFrame;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4ea970);
  OWL::TPrintout::TPrintout(self,param_2);
  *self = &PrintPreviewPrintout::vftable;
  *self = &TEAPrintout::vftable;
  self[6] = param_3;
  puVar2 = param_5;
  puVar3 = self + 7;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  puVar2 = self + 0x17;
  for (i = 0x10; i != 0; i = i + -1) {
    *puVar2 = *param_5;
    param_5 = param_5 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  self[0x27] = param_6;
  puVar2 = self + 0x28;
  for (i = 4; i != 0; i = i + -1) {
    *puVar2 = *param_7;
    param_7 = param_7 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  *(undefined1 *)(self + 0x2c) = 0;
  self[0x2d] = 0;
  self[0x2e] = param_4;
  self[0x31] = 0;
  self[0x32] = 0;
  self[0x36] = 0;
  self[0x30] = 0x80;
  self[0x38] = 0;
  self[0x39] = 0;
  self[0x3a] = 0;
  self[0x3b] = 1;
  self[0x3c] = 0;
  self[0x3d] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004030f4  TEAPrintout::~TEAPrintout   (136 bytes)   [rtti:dtor destructor]
//   written in code as TEAPrintout::_dtor
void __cdecl TEAPrintout::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ea9ac);
  if (self != (undefined4 *)0x0) {
    *self = &TEAPrintout::vftable;
    std::_Destroy_range_PageInfo(self + 0x30,self[0x31],self[0x32]);
    operator_delete();
    OWL::TPrintout::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040317c  std::_Destroy_range_PageInfo   (22 bytes)   [analysis]
//   destroys TEAPrintout::PageInfo records (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_PageInfo(undefined4 vec,int first,int last)

{
  for (; last != first; first = first + 8) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403194  TEAPrintout::vf6   (594 bytes)   [rtti:vtable virtual slot 6]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAPrintout::vf6(int self,int param_2)

{
  int iVar1;
  int mode;
  HDC hdc;
  int *piVar3;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int str;
  uint gdiObject [2];
  
  __InitExceptBlockLDTC(0x4ea9fc);
  TEAPrintout::Paginate(self);
  FUN_0048f7fc(gdiObject,(LOGFONTA *)(self + 0x60));
  (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x14))();
  OWL::TGdiObject::_dtor(gdiObject,0);
  (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x24))();
  piVar3 = *(int **)(self + 10);
  mode = (**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  if (mode != *piVar3) {
    SetBkMode((HDC)*piVar3,1);
  }
  mode = 1;
  hdc = (HDC)(**(code **)(*(int *)((int)piVar3 + 5) + 0x5c))();
  SetBkMode(hdc,mode);
  if (param_2 == 1) {
    mode = 0;
  }
  else {
    mode = *(int *)((param_2 + -2) * 8 + *(int *)(self + 0xc4));
  }
  iVar1 = *(int *)((param_2 + -1) * 8 + *(int *)(self + 0xc4));
  if ((iVar1 - mode) / *(int *)(self + 0xec) < 1) {
    *sehChainHead = sehPrevFrame;
  }
  else {
    (**(code **)(**(int **)(self + 0xb8) + 0x10))();
    for (; (mode < iVar1 && (mode < *(int *)(self + 0xb4))); mode = mode + 1) {
      (**(code **)(**(int **)(self + 0xb8) + 0x14))();
      (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x44))();
      if (str != 0) {
        if (*(int *)(str + -0xc) != -1) {
          piVar3 = (int *)(str + -0xc);
          if (piVar3 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else if (piVar3 == &g_nullStringRep) {
            prevRefs = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            prevRefs = *piVar3 + 1;
          }
          if (prevRefs != 0) goto LAB_004033be;
        }
        operator_delete();
        str = 0;
      }
LAB_004033be:
    }
    *sehChainHead = sehPrevFrame;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040343c  TEAPrintout::vf9   (60 bytes)   [rtti:vtable virtual slot 9; function defined from vtable-slot]
void __cdecl TEAPrintout::vf9(int self,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  *(undefined1 *)(self + 0xb0) = 0;
  TEAPrintout::Paginate(self);
  *param_2 = 1;
  iVar1 = *(int *)(self + 200) - *(int *)(self + 0xc4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *param_3 = iVar1 >> 3;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403478  TEAPrintout::vf2   (71 bytes)   [rtti:vtable virtual slot 2]
void __cdecl TEAPrintout::vf2(int self,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4, undefined4 *param_5)

{
  int iVar1;
  
  *param_2 = 0;
  *param_3 = 0;
  iVar1 = (**(code **)(**(int **)(self + 0xb8) + 8))();
  if (iVar1 < 1) {
    *param_4 = 0;
    *param_5 = 0;
  }
  else {
    *param_4 = 1;
    *param_5 = 0x7fffffff;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004034c0  TEAPrintout::Paginate   (2388 bytes)   [analysis]
//   measures the results with the printer font and splits them into pages and columns
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAPrintout::Paginate(int self)

{
  LONG LVar1;
  HCURSOR hCursor;
  int iVar2;
  undefined4 uVar3;
  HDC hdc;
  BOOL ok;
  int iVar6;
  int *piVar7;
  int c;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *sehChainHead;
  byte bVar11;
  LPCSTR lpString;
  tagTEXTMETRICA *lptm;
  tagSIZE *psizl;
  tagTEXTMETRICA textMetrics;
  undefined1 *unused2;
  undefined4 unused3;
  LPCSTR unused4;
  LPCSTR unused5;
  int *strRep;
  int local_13c;
  int local_138;
  undefined4 *local_134;
  undefined4 value;
  undefined4 unused6;
  int unused7;
  int local_124;
  int unused8;
  int local_11c;
  int unused9;
  int unused10;
  int local_110;
  int local_10c;
  undefined4 *local_108;
  undefined4 value2;
  undefined4 unused11;
  int local_fc;
  LPCSTR unused12;
  int unused13;
  tagSIZE size;
  int last;
  undefined4 *first;
  undefined4 *unused;
  undefined4 *dest;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 unused14;
  undefined4 unused15;
  undefined4 local_b0;
  undefined4 unused16;
  double unused17;
  double unused18;
  double local_94;
  double local_8c;
  double local_84;
  double local_7c;
  HCURSOR hCursor2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined4 *unused19;
  undefined4 *unused20;
  undefined1 newStr [8];
  LPCSTR local_3c;
  uint gdiObject [2];
  int windowDC;
  int local_27;
  
  bVar11 = 0;
  __InitExceptBlockLDTC(0x4eaaa4);
  if (*(char *)(self + 0xb0) == '\0') {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    hCursor2 = SetCursor(hCursor);
    ehContext = 8;
    FUN_004a8760(&windowDC);
    ehDtorCount = ehDtorCount + 3;
    ehContext = 0x14;
    iVar2 = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    local_7c = (double)iVar2;
    iVar2 = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    local_84 = (double)iVar2;
    iVar2 = (**(code **)(local_27 + 0xc))();
    local_8c = (double)iVar2;
    iVar2 = (**(code **)(local_27 + 0xc))();
    local_94 = (double)iVar2;
    unused18 = local_7c / local_8c;
    unused17 = local_84 / local_94;
    puVar9 = (undefined4 *)(self + 0x1c);
    puVar10 = (undefined4 *)(self + 0x5c);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + (uint)bVar11 * -2 + 1;
      puVar10 = puVar10 + (uint)bVar11 * -2 + 1;
    }
    if (*(int *)(self + 100) < 1) {
      uVar3 = __ftol();
      *(undefined4 *)(self + 100) = uVar3;
    }
    else {
      uVar3 = __ftol();
      *(undefined4 *)(self + 100) = uVar3;
    }
    if (*(int *)(self + 0x60) < 1) {
      uVar3 = __ftol();
      *(undefined4 *)(self + 0x60) = uVar3;
    }
    else {
      uVar3 = __ftol();
      *(undefined4 *)(self + 0x60) = uVar3;
    }
    ehContext = 0x20;
    FUN_0048f7fc(gdiObject,(LOGFONTA *)(self + 0x60));
    ehDtorCount = ehDtorCount + 2;
    (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x14))();
    ehDtorCount = ehDtorCount + -2;
    OWL::TGdiObject::_dtor(gdiObject,0);
    local_b0 = *(undefined4 *)(self + 0x5c);
    unused16 = local_b0;
    (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x24))();
    if (*(int *)(self + 0x9c) == 4) {
      unused14 = 0;
      unused15 = 0x408f4000;
    }
    else if (*(int *)(self + 0x9c) == 8) {
      unused14 = 0;
      unused15 = 0x40a3d800;
    }
    uVar3 = __ftol();
    *(undefined4 *)(self + 0xe8) = uVar3;
    local_bc = __ftol();
    ehContext = 0x14;
    uVar3 = __ftol();
    *(undefined4 *)(self + 0xe4) = uVar3;
    local_c0 = __ftol();
    local_c8 = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    local_c4 = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    local_d0 = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    local_cc = (**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0xc))();
    *(int *)(self + 0xf0) = (local_d0 - *(int *)(self + 0xe8)) - local_bc;
    local_d4 = (local_cc - *(int *)(self + 0xe4)) - local_c0;
    piVar7 = (int *)(self + 0xe8);
    *piVar7 = *piVar7 - local_c8;
    if (*piVar7 < 0) {
      *(undefined4 *)(self + 0xe8) = 0;
    }
    piVar7 = (int *)(self + 0xe4);
    *piVar7 = *piVar7 - local_c4;
    if (*piVar7 < 0) {
      *(undefined4 *)(self + 0xe4) = 0;
    }
    if (*(int *)(self + 0xf0) < 0) {
      *(undefined4 *)(self + 0xf0) = 0;
    }
    if (local_d4 < 0) {
      local_d4 = 0;
    }
    lptm = &textMetrics;
    hdc = (HDC)(**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x5c))();
    ok = GetTextMetricsA(hdc,lptm);
    if (ok == 0) {
      *(undefined4 *)(self + 0xe0) = 0;
      *(undefined4 *)(self + 0xec) = 1;
      *(undefined4 *)(self + 0xf4) = 0;
    }
    else {
      *(LONG *)(self + 0xe0) = textMetrics.tmHeight + textMetrics.tmExternalLeading;
      *(int *)(self + 0xec) = local_d4 / *(int *)(self + 0xe0);
      *(LONG *)(self + 0xf4) = textMetrics.tmAveCharWidth << 2;
    }
    ehDtorCount = ehDtorCount + -3;
    OWL::TWindowDC::_dtor(&windowDC,0);
    ehContext = 0;
    iVar2 = (**(code **)(**(int **)(self + 0xb8) + 8))();
    *(int *)(self + 0xb4) = iVar2;
    if ((iVar2 < 1) || ((**(byte **)(self + 0x18) & 1) == 0)) {
      (**(code **)(**(int **)(self + 0xb8) + 0xc))();
      uVar3 = (**(code **)(**(int **)(self + 0xb8) + 4))();
      *(undefined4 *)(self + 0xb4) = uVar3;
    }
    else {
      (**(code **)(**(int **)(self + 0xb8) + 0xc))();
    }
    iVar2 = -1;
    local_d8 = 0;
    dest = *(undefined4 **)(self + 200);
    unused = *(undefined4 **)(self + 0xc4);
    first = TEAPrintout::PageInfo::Copy(dest,*(undefined4 **)(self + 200),unused);
    last = *(int *)(self + 200);
    iVar6 = (int)dest - (int)unused;
    if (iVar6 < 0) {
      iVar6 = iVar6 + 7;
    }
    *(int *)(self + 200) = *(int *)(self + 200) + (iVar6 >> 3) * -8;
    std::_Destroy_range_PageInfo(self + 0xc0,(int)first,last);
    for (iVar6 = 0; iVar6 < *(int *)(self + 0xb4); iVar6 = iVar6 + 1) {
      size.cx = 0;
      size.cy = 0;
      ehContext = 0x38;
      (**(code **)(**(int **)(self + 0xb8) + 0x14))();
      ehDtorCount = ehDtorCount + 1;
      ehContext = 0x2c;
      c = *(int *)(local_3c + -4);
      unused12 = local_3c;
      psizl = &size;
      lpString = local_3c;
      unused13 = c;
      hdc = (HDC)(**(code **)(*(int *)(*(int *)(self + 10) + 5) + 0x5c))();
      GetTextExtentPoint32A(hdc,lpString,c,psizl);
      LVar1 = size.cx;
      if (iVar2 < size.cx) {
        iVar2 = *(int *)(self + 0xf4) + size.cx;
        if (iVar2 < 1) {
          iVar2 = 1;
        }
        local_fc = 1;
        if ((0 < iVar2) && (iVar2 < *(int *)(self + 0xf0))) {
          local_fc = *(int *)(self + 0xf0) / iVar2;
        }
        if (local_d8 == 0) {
          value2 = 0;
          unused11 = 0;
          if (*(int *)(self + 200) == *(int *)(self + 0xd8)) {
            std::vector_PageInfo::insert_aux(self + 0xc0,*(undefined4 **)(self + 200),&value2);
          }
          else {
            local_108 = *(undefined4 **)(self + 200);
            if (local_108 != (undefined4 *)0x0) {
              *local_108 = 0;
              local_108[1] = 0;
            }
            *(int *)(self + 200) = *(int *)(self + 200) + 8;
            unused20 = local_108;
          }
        }
        local_10c = local_fc * *(int *)(self + 0xec);
        ehContext = 0x2c;
        iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        if (1 < (uint)(iVar2 >> 3)) {
          unused10 = self + 0xc0;
          iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          local_110 = (iVar2 >> 3) + -2;
          local_10c = local_10c + *(int *)(local_110 * 8 + *(int *)(self + 0xc4));
        }
        if (local_10c < iVar6) {
          local_d8 = local_d8 + -1;
          unused9 = self + 0xc0;
          local_10c = local_d8 * *(int *)(self + 0xec);
          iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          if (1 < (uint)(iVar2 >> 3)) {
            unused8 = self + 0xc0;
            iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
            if (iVar2 < 0) {
              iVar2 = iVar2 + 7;
            }
            local_11c = (iVar2 >> 3) + -2;
            local_10c = local_10c + *(int *)(local_11c * 8 + *(int *)(self + 0xc4));
          }
          unused7 = self + 0xc0;
          iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
          if (iVar2 < 0) {
            iVar2 = iVar2 + 7;
          }
          local_124 = (iVar2 >> 3) + -1;
          *(int *)(local_124 * 8 + *(int *)(self + 0xc4)) = local_10c;
          local_10c = local_10c + local_fc * *(int *)(self + 0xec);
          value = 0;
          unused6 = 0;
          if (*(int *)(self + 200) == *(int *)(self + 0xd8)) {
            std::vector_PageInfo::insert_aux(self + 0xc0,*(undefined4 **)(self + 200),&value);
          }
          else {
            local_134 = *(undefined4 **)(self + 200);
            if (local_134 != (undefined4 *)0x0) {
              *local_134 = 0;
              local_134[1] = 0;
            }
            *(int *)(self + 200) = *(int *)(self + 200) + 8;
            unused19 = local_134;
          }
        }
        local_d8 = local_fc;
        iVar2 = *(int *)(self + 200) - *(int *)(self + 0xc4);
        if (iVar2 < 0) {
          iVar2 = iVar2 + 7;
        }
        local_138 = (iVar2 >> 3) + -1;
        piVar7 = (int *)(local_138 * 8 + *(int *)(self + 0xc4));
        ehContext = 0x2c;
        *piVar7 = local_10c;
        piVar7[1] = LVar1;
        iVar2 = LVar1;
      }
      c = *(int *)(self + 200) - *(int *)(self + 0xc4);
      if (c < 0) {
        c = c + 7;
      }
      local_13c = (c >> 3) + -1;
      if (*(int *)(local_13c * 8 + *(int *)(self + 0xc4)) <= iVar6 + 1) {
        iVar2 = -1;
        local_d8 = 0;
      }
      ehDtorCount = ehDtorCount + -1;
      if (local_3c != (LPCSTR)0x0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          strRep = (int *)(local_3c + -0xc);
          if (strRep == &g_nullStringRep) {
            c = 1;
          }
          else if (strRep == &g_nullStringRep) {
            c = 1;
          }
          else {
            *strRep = *strRep + -1;
            c = *strRep + 1;
          }
          if (c != 0) goto LAB_00403de0;
        }
        unused5 = local_3c + -0xc;
        unused4 = local_3c + -0xc;
        operator_delete();
        unused3 = 0;
        unused2 = newStr;
        local_3c = (LPCSTR)0x0;
      }
LAB_00403de0:
      ehContext = 0;
    }
    *(undefined1 *)(self + 0xb0) = 1;
    SetCursor(hCursor2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403e94  TEAPrintout::PageInfo::Copy   (42 bytes)   [analysis]
//   copies a page record
//   file placement: inferred (address adjacency)
undefined4 * __cdecl TEAPrintout::PageInfo::Copy(undefined4 *dest,undefined4 *src,undefined4 *unused)

{
  for (; src != dest; dest = dest + 2) {
    *unused = *dest;
    unused[1] = dest[1];
    unused = unused + 2;
  }
  return unused;
}

// ----------------------------------------------------------------------------------------------------
// 0x00403ec0  std::vector_PageInfo::insert_aux   (505 bytes, 2 ranges)   [analysis]
//   insert into the vector of page records, growing the storage when full
//   file placement: inferred (address adjacency)
void __cdecl std::vector_PageInfo::insert_aux(int vec,undefined4 *pos,undefined4 *value)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **badAlloc;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x4eab74);
  local_8 = *(undefined4 **)(vec + 8);
  if (local_8 == *(undefined4 **)(vec + 0x18)) {
    iVar1 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (iVar1 >> 3 == 0) {
      iVar1 = 0x80;
    }
    else {
      iVar1 = (iVar1 >> 3) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      badAlloc = &std::bad_alloc::vftable;
      _ThrowExceptionLDTC((uint *)&DAT_004040dc,(undefined4*)&badAlloc,0,&LAB_00404134,1,0,0,0);
    }
    std::uninitialized_copy_PageInfo(*(undefined4 **)(vec + 4),pos,puVar2);
    iVar3 = (int)pos - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    puVar4 = puVar2 + (iVar3 >> 3) * 2;
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *value;
      puVar4[1] = value[1];
    }
    iVar3 = (int)pos - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    std::uninitialized_copy_PageInfo(pos,*(undefined4 **)(vec + 8),puVar2 + (iVar3 >> 3) * 2 + 2);
    iVar3 = *(int *)(vec + 8) - *(int *)(vec + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 7;
    }
    std::_Destroy_range_PageInfo(vec,*(int *)(vec + 4),*(int *)(vec + 8));
    operator_delete();
    *(undefined4 **)(vec + 0x18) = puVar2 + iVar1 * 2;
    *(undefined4 **)(vec + 8) = puVar2 + (iVar3 >> 3) * 2 + 2;
    *(undefined4 **)(vec + 4) = puVar2;
  }
  else {
    if (local_8 != (undefined4 *)0x0) {
      *local_8 = local_8[-2];
      local_8[1] = local_8[-1];
    }
    std::copy_backward_PageInfo(pos,*(undefined4 **)(vec + 8) + -2,*(undefined4 **)(vec + 8));
    *pos = *value;
    pos[1] = value[1];
    *(int *)(vec + 8) = *(int *)(vec + 8) + 8;
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404174  std::copy_backward_PageInfo   (42 bytes)   [analysis]
//   copy_backward over page records
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::copy_backward_PageInfo(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_3[-2] = param_2[-2];
    param_3[-1] = param_2[-1];
    param_2 = param_2 + -2;
    param_3 = param_3 + -2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004041a0  std::uninitialized_copy_PageInfo   (120 bytes, 2 ranges)   [analysis]
//   copies page records into raw storage
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::uninitialized_copy_PageInfo(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eabf4);
  while (puVar2 = param_3, puVar1 = param_1, param_2 != puVar1) {
    param_1 = puVar1 + 2;
    param_3 = puVar2 + 2;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
    }
  }
  *sehChainHead = sehPrevFrame;
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404240  std::_Destroy_range_PageInfo_404240   (22 bytes)   [analysis]
//   destroys page records (nothing to do)
//   file placement: inferred (address adjacency)
void __cdecl std::_Destroy_range_PageInfo_404240(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 8) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404258  TEAPrintout::vf5   (63 bytes)   [rtti:vtable virtual slot 5]
undefined4 __cdecl TEAPrintout::vf5(int self,int param_2)

{
  int iVar1;
  
  TEAPrintout::Paginate(self);
  if (0 < param_2) {
    iVar1 = *(int *)(self + 200) - *(int *)(self + 0xc4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 7;
    }
    if (param_2 <= iVar1 >> 3) {
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040433c  OWL::TScreenDC::~TScreenDC   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TScreenDC::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TScreenDC::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eac44);
  if (self != (int *)0x0) {
    OWL::TWindowDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004043d8  OWL::TFont::~TFont   (66 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFont::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFont::_dtor(uint *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eac4c);
  if (self != (uint *)0x0) {
    OWL::TGdiObject::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004044d0  std::exception::vf1   (10 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::exception::vf1(void)

{
  return PTR_s_no_named_exception_thrown_00516bb0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004044dc  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_00516bb8;
}

} // namespace tea
