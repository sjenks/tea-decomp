// TEA.exe — application module "MatchListLabelWindows"
// 5 functions, 0x00428ce4..0x0042909c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00428ce4  MatchListLabelWindows::MatchListLabelWindows   (427 bytes)   [rtti:vtable-store constructor]
//   constructor: stores MatchListLabelWindows's vtable at its vptr offset (+0xc) in this
/* WARNING: Removing unreachable block (ram,0x00428e54) */
int * __cdecl MatchListLabelWindows::MatchListLabelWindows(int *self,int vbasesBuilt,undefined4 *param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f2090);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x12);
    self[0x12] = (int)(self + 0xf);
    self[0x13] = (int)(self + 0x10);
    self[1] = (int)(self + 0xf);
    self[2] = (int)(self + 0x10);
    self[0xe] = 0;
    self[0x11] = 0;
    self[0xf] = (int)&OWL::TEventHandler::vftable;
    self[0x10] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x12,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x20;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  OWL::TStatic::TStatic(self,1,uVar1,param_4,(uint *)&DAT_004f2070,*param_5,param_5[1],
               param_5[2] - *param_5,param_5[3] - param_5[1],0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x20;
  self[3] = (int)&MatchListLabelWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f2170;
  *(undefined ***)self[2] = &PTR_LAB_004f217c;
  *(undefined ***)(*self + 8) = &MatchListLabelWindows::vftable_TWindow;
  self[6] = (int)param_3;
  self[7] = 0;
  self[10] = 0;
  self[10] = (int)&g_emptyStringData;
  self[0xc] = -1;
  FUN_004a7988(*self,0,0x100c,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428eb4  MatchListLabelWindows::~MatchListLabelWindows   (424 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as MatchListLabelWindows::_dtor
void __cdecl MatchListLabelWindows::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f20c0);
  if (self == (int *)0x0) goto LAB_0042904b;
  self[3] = (int)&MatchListLabelWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004f2170;
  *(undefined ***)self[2] = &PTR_LAB_004f217c;
  *(undefined ***)(*self + 8) = &MatchListLabelWindows::vftable_TWindow;
  if (self[10] != 0) {
    if (*(int *)(self[10] + -0xc) != -1) {
      strRep = (int *)(self[10] + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00428f8d;
    }
    operator_delete();
    self[10] = 0;
  }
LAB_00428f8d:
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x20;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -4;
  OWL::TControl::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 4;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 4;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x20;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x20;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x12,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x10,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0042904b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042905c  MatchListLabelWindows::SetLabel   (39 bytes)   [analysis]
//   sets the pane label's base text and number
void __cdecl MatchListLabelWindows::SetLabel(int *self,int number,int text)

{
  self[7] = number;
  std::string::operator_assign((int)(self + 8),text);
  MatchListLabelWindows::UpdateText(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00429084  MatchListLabelWindows::SetCount   (21 bytes)   [analysis]
//   updates the result count shown in the label
void __cdecl MatchListLabelWindows::SetCount(int *self,int count)

{
  self[0xc] = count;
  MatchListLabelWindows::UpdateText(self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042909c  MatchListLabelWindows::UpdateText   (300 bytes)   [analysis]
//   label text: " &%d " number and " (%d)" count
void __cdecl MatchListLabelWindows::UpdateText(int *self)

{
  uint pos;
  char *len;
  int prevRefs;
  uint *strRep;
  undefined4 *sehChainHead;
  uint local_5c [6];
  uint *unused;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 str [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4f2100);
  sprintf((undefined1 *)local_5c,(byte *)" &%d ");
  ehContext = 0x14;
  std::string::string_from_cstr((int)str,local_5c);
  ehDtorCount = ehDtorCount + 1;
  ehContext = 8;
  std::string::append((int)str,(int)(self + 8));
  if (-1 < self[0xc]) {
    sprintf((undefined1 *)local_5c,(byte *)" (%d)");
    pos = local_c[-1];
    len = strlen(local_5c);
    std::string::replace((int)str,pos,0,(uint)local_5c,(uint)len,0,(uint)len);
  }
  FUN_004a7780(*self,local_c);
  ehDtorCount = ehDtorCount + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      strRep = local_c + -3;
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep - 1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004291b7;
    }
    unused = local_c + -3;
    operator_delete();
  }
LAB_004291b7:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
