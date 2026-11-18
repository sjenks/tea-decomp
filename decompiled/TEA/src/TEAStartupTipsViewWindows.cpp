// TEA.exe — application module "TEAStartupTipsViewWindows"
// 12 functions, 0x0047ab54..0x0047bdc0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0047ab54  TEAStartupTipsViewWindows::TEAStartupTipsViewWindows   (548 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAStartupTipsViewWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x0047acd8) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0047ace0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl TEAStartupTipsViewWindows::TEAStartupTipsViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500ea8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb8);
    self[0xb8] = (int)(self + 0xb5);
    self[0xb9] = (int)(self + 0xb6);
    self[1] = (int)(self + 0xb5);
    self[2] = (int)(self + 0xb6);
    self[0xb4] = 0;
    self[0xb7] = 0;
    self[0xb5] = (int)&OWL::TEventHandler::vftable;
    self[0xb6] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xb8,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x270;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x270;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x500e7e,uVar1,param_4,(uint *)0x3444,1,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x270;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x270;
  self[3] = (int)&TEAStartupTipsViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00501250;
  *(undefined ***)self[2] = &PTR_LAB_0050125c;
  *(undefined ***)(*self + 8) = &TEAStartupTipsViewWindows::vftable_TWindow;
  self[0x19] = 0;
  self[0x1a] = 0;
  self[0x1e] = 0;
  self[0x18] = 0x40;
  self[0x20] = 0;
  self[0x21] = 0;
  self[0x22] = 0;
  PVWPushButton::PVWPushButton(self + 0x24,0,self,0x119e);
  PVWPushButton::PVWPushButton(self + 0x56,0,self,0x3458);
  OWL::TCheckBox::TCheckBox(self + 0x88,0,*self,0x2eae,0,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047ad78  TEAStartupTipsViewWindows::~TEAStartupTipsViewWindows   (436 bytes)   [rtti:dtor destructor]
//   written in code as TEAStartupTipsViewWindows::_dtor
void __cdecl TEAStartupTipsViewWindows::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x500f0c);
  if (self != (int *)0x0) {
    self[3] = (int)&TEAStartupTipsViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00501250;
    *(undefined ***)self[2] = &PTR_LAB_0050125c;
    *(undefined ***)(*self + 8) = &TEAStartupTipsViewWindows::vftable_TWindow;
    if (self[0x22] != 0) {
      (*(code *)**(undefined4 **)(self[0x22] + 0xc))();
    }
    OWL::TCheckBox::_dtor(self + 0x88,2);
    PVWPushButton::_dtor(self + 0x56,2);
    PVWPushButton::_dtor(self + 0x24,2);
    std::_Destroy_range_string(self + 0x18,self[0x19],self[0x1a]);
    operator_delete();
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x270;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x270;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x270;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x270;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb8,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xb6,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af2c  TEAStartupTipsViewWindows::IsShowAtStartup   (42 bytes)   [analysis]
//   state of the "show at start-up" check box
bool __cdecl TEAStartupTipsViewWindows::IsShowAtStartup(int self)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*(int *)(self + 0x220),0xf0,0,0);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af58  TEAStartupTipsViewWindows::OnButton   (55 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
void __cdecl TEAStartupTipsViewWindows::OnButton(int self,undefined4 param_2,int param_3)

{
  if (param_3 == 0x3458) {
    TEAAppWindows::ShowHelpFor(*(int *)(self + 0x38));
    return;
  }
  if (param_3 == 0x119e) {
    TEAStartupTipsViewWindows::ShowTip(self);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047af90  TEAStartupTipsViewWindows::SetupTooltips   (41 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15 (introduced by PropertiesViewWindows); creates the tooltip control for the window's controls (overrides add their own start-up work)
void __cdecl TEAStartupTipsViewWindows::SetupTooltips(int *self)

{
  FUN_004ac750(self + 0x88,1);
  TEAStartupTipsViewWindows::ShowTip((int)self);
  PropertiesViewWindows::SetupTooltips(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047afbc  TEAStartupTipsViewWindows::SetupWindow   (1897 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEAStartupTipsViewWindows's OWL::TWindow subobject vtable at 0x00501268 (through the this-adjusting thunk at 0x0047bb05); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAStartupTipsViewWindows::vf11 [rtti:vtable]
/* WARNING: Removing unreachable block (ram,0x0047b281) */
void __cdecl TEAStartupTipsViewWindows::SetupWindow(int *self)

{
  uint len;
  int *piVar2;
  int iVar3;
  undefined4 *sehChainHead;
  tagRECT rect;
  LPCSTR unused;
  LPCSTR unused2;
  int *strRep;
  undefined1 *unused3;
  undefined4 unused4;
  undefined4 *unused5;
  undefined4 *unused6;
  int *strRep2;
  undefined4 *dest;
  undefined4 *unused7;
  uint unused8;
  int unused9;
  int *newRep;
  int *newData;
  int unused10;
  undefined4 *unused11;
  undefined4 unused12;
  int local_15c;
  int local_158;
  undefined4 *unused13;
  undefined4 *local_150;
  uint unused14;
  undefined4 *unused15;
  int *local_144;
  int local_140;
  undefined1 *unused16;
  undefined *unused17;
  undefined4 unused18;
  undefined1 *unused19;
  undefined4 unused20;
  int unused21;
  int unused22;
  int *strRep3;
  undefined4 unused23;
  undefined4 unused24;
  LONG unused25;
  LONG unused26;
  undefined4 unused27;
  undefined4 unused28;
  undefined4 unused29;
  undefined4 unused30;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int local_d0;
  undefined4 *local_cc;
  undefined4 unused31;
  undefined4 *local_c4;
  undefined1 paths [8];
  int str;
  int *pvwRichEdit;
  undefined1 value [8];
  undefined4 *local_a4;
  int basicIfstream [34];
  undefined1 result [8];
  LPCSTR fileName;
  
  __InitExceptBlockLDTC(0x500fe8);
  unused29 = 0x108;
  unused30 = 0x62;
  unused27 = 8;
  unused28 = 8;
  rect.bottom = 0x6a;
  rect.right = 0x110;
  unused24 = 8;
  unused23 = 8;
  rect.left = 8;
  rect.top = 8;
  unused25 = rect.right;
  unused26 = rect.bottom;
  MapDialogRect(*(HWND *)(*self + 0xc),&rect);
  pvwRichEdit = (int *)operator_new();
  if (pvwRichEdit != (int *)0x0) {
    ehContext = 0x14;
    PVWRichEdit::PVWRichEdit(pvwRichEdit,0,self,0x240e,&rect.left,1);
    ehContext = 8;
  }
  self[0x22] = (int)pvwRichEdit;
  PropertiesViewWindows::SetupWindow(self);
  ehContext = 0x2c;
  std::string::string_from_cstr((int)paths,(uint *)"Tips.txt");
  ehDtorCount = ehDtorCount + 1;
  ResolveRelativePaths((int)result,(int)paths);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep3 = (int *)(str + -0xc);
      if (strRep3 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep3 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep3 = *strRep3 + -1;
        iVar3 = *strRep3 + 1;
      }
      if (iVar3 != 0) goto LAB_0047b1e8;
    }
    unused22 = str + -0xc;
    unused21 = str + -0xc;
    operator_delete();
    unused20 = 0;
    unused19 = paths;
    str = 0;
  }
LAB_0047b1e8:
  ehContext = 0x44;
  std::basic_ifstream_char::basic_ifstream(basicIfstream,0,fileName,4,0x1b6);
  unused18 = 0;
  unused16 = value;
  unused17 = &g_emptyStringData;
  local_a4 = (undefined4 *)&g_emptyStringData;
  ehDtorCount = ehDtorCount + 9;
  while( true ) {
    ehContext = 0x68;
    local_144 = (int *)(basicIfstream[0] + 0x10);
    local_150 = (undefined4 *)*local_144;
    local_150[1] = local_150[1] + 1;
    ehDtorCount = ehDtorCount + 2;
    unused14 = DAT_00515dfc;
    if (DAT_00515dfc < (uint)local_150[5]) {
      piVar2 = *(int **)(local_150[4] + DAT_00515dfc * 4);
    }
    else {
      piVar2 = (int *)0x0;
    }
    unused15 = local_150;
    local_c4 = local_150;
    if (piVar2 == (int *)0x0) {
      piVar2 = FUN_004db7f8((int *)&local_c4,&DAT_00515dfc,'\x01',0x20,(undefined*)std::basic_istringstream::basic_istringstream);
    }
    (**(code **)(*piVar2 + 0x18))();
    ehDtorCount = ehDtorCount + -1;
    unused13 = local_c4;
    local_c4[1] = local_c4[1] + -1;
    local_158 = local_c4[1];
    if ((local_158 == 0) && (local_cc = local_c4, local_c4 != (undefined4 *)0x0)) {
      unused31 = *local_c4;
      ehContext = 0x80;
      (**(code **)*local_c4)();
    }
    ehContext = 0x68;
    piVar2 = FUN_004d49a4(basicIfstream,(int)value);
    local_140 = *piVar2;
    if (*(int *)(local_140 + 0x30) != 0) break;
    if (self[0x1a] == self[0x1e]) {
      std::vector_string::insert_aux((int)(self + 0x18),self[0x1a],(int)value);
    }
    else {
      local_15c = self[0x1a];
      local_d0 = local_15c;
      if (local_15c != 0) {
        ehContext = 0x98;
        unused12 = 0;
        *(undefined4 *)(local_15c + 8) = 0;
        if (local_a4[-3] == -1 || local_a4[-3] + 1 < 0) {
          len = local_a4[-1];
          newRep = std::string::__getRep(local_15c,len,len);
          newData = newRep + 3;
          *(int **)(local_d0 + 8) = newData;
          unused9 = local_d0;
          unused7 = local_a4;
          dest = *(undefined4 **)(local_d0 + 8);
          unused8 = len;
          memcpy(dest,local_a4,len);
        }
        else {
          unused11 = local_a4;
          *(undefined4 **)(local_15c + 8) = local_a4;
          piVar2 = (int *)(*(int *)(local_15c + 8) + -0xc);
          unused10 = local_15c;
          if (piVar2 != &g_nullStringRep) {
            *piVar2 = *piVar2 + 1;
          }
        }
      }
      self[0x1a] = self[0x1a] + 0x10;
    }
  }
  iVar3 = PropertiesViewWindows::LoadDword((int)self,(uint *)"NextIndex",0);
  self[0x20] = iVar3;
  ehDtorCount = ehDtorCount + -1;
  if (local_a4 != (undefined4 *)0x0) {
    if (local_a4[-3] != -1) {
      strRep2 = local_a4 + -3;
      if (strRep2 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep2 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep2 = *strRep2 + -1;
        iVar3 = *strRep2 + 1;
      }
      if (iVar3 != 0) goto LAB_0047b63f;
    }
    unused6 = local_a4 + -3;
    unused5 = local_a4 + -3;
    operator_delete();
    unused4 = 0;
    unused3 = value;
    local_a4 = (undefined4 *)0x0;
  }
LAB_0047b63f:
  ehContext = 0x20;
  ehDtorCount = ehDtorCount + -8;
  std::basic_ifstream_char::_dtor(basicIfstream,2);
  ehDtorCount = ehDtorCount + -1;
  if (fileName != (LPCSTR)0x0) {
    if (*(int *)(fileName + -0xc) != -1) {
      strRep = (int *)(fileName + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0047b712;
    }
    unused2 = fileName + -0xc;
    unused = fileName + -0xc;
    operator_delete();
  }
LAB_0047b712:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b728  std::basic_istringstream::basic_istringstream   (232 bytes)   [analysis]
//   string input stream on a text
//   file placement: inferred (address adjacency)
undefined4 * __cdecl std::basic_istringstream::basic_istringstream(int self,uint *text,undefined4 mode)

{
  undefined4 *facet2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5010e0);
  if (self == 0) {
    facet2 = (undefined4 *)operator_new();
    if (facet2 != (undefined4 *)0x0) {
      std::locale::facet::facet_4d9614(facet2,0,0,1);
    }
    *sehChainHead = sehPrevFrame;
  }
  else if (self == 1) {
    facet2 = (undefined4 *)operator_new();
    if (facet2 != (undefined4 *)0x0) {
      std::locale::facet::facet_4d9614(facet2,0,0,1);
    }
    *sehChainHead = sehPrevFrame;
  }
  else {
    facet2 = (undefined4 *)operator_new();
    if (facet2 != (undefined4 *)0x0) {
      FUN_004d9c54(facet2,text,mode);
    }
    *sehChainHead = sehPrevFrame;
  }
  return facet2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b850  TEAStartupTipsViewWindows::Destroy   (44 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from TEAStartupTipsViewWindows's OWL::TWindow subobject vtable at 0x00501268 (through the this-adjusting thunk at 0x0047bbc2); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAStartupTipsViewWindows::vf9 [rtti:vtable]
void __cdecl TEAStartupTipsViewWindows::Destroy(int *self,INT_PTR result)

{
  PropertiesViewWindows::SaveDword((int)self,(uint *)"NextIndex");
  PropertiesViewWindows::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047b87c  TEAStartupTipsViewWindows::ShowTip   (414 bytes)   [analysis]
//   shows tip n (numbered sections of the tips text)
/* WARNING: Removing unreachable block (ram,0x0047b8d2) */
void __cdecl TEAStartupTipsViewWindows::ShowTip(int self)

{
  char *pcVar1;
  int str;
  uint uVar3;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  int str2;
  
  __InitExceptBlockLDTC(0x501150);
  *(undefined4 *)(self + 0x84) = 0;
  str = *(int *)(self + 0x68) - *(int *)(self + 100);
  if (str < 0) {
    str = str + 0xf;
  }
  if ((uint)(str >> 4) <= *(uint *)(self + 0x80)) goto LAB_0047ba0a;
  str = *(uint *)(self + 0x80) * 0x10 + *(int *)(self + 100);
  pcVar1 = thunk_memchr(*(char **)(str + 8),' ',*(int *)(*(int *)(str + 8) + -4));
  uVar3 = g_stringNpos;
  if (pcVar1 != (char *)0x0) {
    uVar3 = (int)pcVar1 - *(int *)(str + 8);
  }
  if (uVar3 < *(uint *)(*(int *)(str + 8) + -4)) {
    std::string::substr((int)local_14,str,uVar3 + 1,g_stringNpos);
    PVWRichEdit::SetText(*(int **)(self + 0x88),(int)local_14);
    str = atoi(*(char **)(str + 8));
    *(int *)(self + 0x84) = str;
    if (str2 != 0) {
      if (*(int *)(str2 + -0xc) != -1) {
        strRep = (int *)(str2 + -0xc);
        if (strRep == &g_nullStringRep) {
          str = 1;
        }
        else if (strRep == &g_nullStringRep) {
          str = 1;
        }
        else {
          *strRep = *strRep + -1;
          str = *strRep + 1;
        }
        if (str != 0) goto LAB_0047b9e2;
      }
      operator_delete();
    }
  }
LAB_0047b9e2:
  str = *(int *)(self + 0x68) - *(int *)(self + 100);
  if (str < 0) {
    str = str + 0xf;
  }
  *(uint *)(self + 0x80) = (*(int *)(self + 0x80) + 1U) % (uint)(str >> 4);
LAB_0047ba0a:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bce0  std::locale::facet::~facet   (95 bytes)   [rtti:dtor destructor]
//   written in code as std::locale::facet::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::locale::facet::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x501300);
  if (self != (undefined4 *)0x0) {
    *self = &std::locale::facet::vftable;
    __rwstd::ref_counted::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bdb8  __rwstd::facet_imp::vf1   (5 bytes)   [rtti:vtable virtual slot 1; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
void __stdcall __rwstd::facet_imp::vf1(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047bdc0  __rwstd::facet_imp::~facet_imp   (66 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::facet_imp::_dtor
//   file placement: inferred (address adjacency)
void __cdecl __rwstd::facet_imp::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x501328);
  if (self != (undefined4 *)0x0) {
    __rwstd::ref_counted::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
