// TSBuild.exe — runtime / library code "OWL_TEditFile"
// 17 functions, 0x00446b4c..0x00448878. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00446b4c  OWL::TEditFile::Find   (69 bytes)   [rtti:vtable virtual slot 33]
//   override of OWL::TWindow vtable slot 33, from OWL::TEditFile's OWL::TWindow subobject vtable at 0x00478428 (through the this-adjusting thunk at 0x0041b324); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEditFile::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TEditFile::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_00422b68(self[1],(int *)&DAT_004815a0,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEditSearch::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00446bd4  OWL::TEditFile::~TEditFile   (281 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TEditFile::_dtor
void __cdecl OWL::TEditFile::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481610);
  if (self != (int *)0x0) {
    self[3] = (int)&OWL::TEditFile::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00478410;
    *(undefined ***)self[2] = &PTR_LAB_0047841c;
    *(undefined ***)(*self + 8) = &OWL::TEditFile::vftable_TWindow;
    operator_delete_array();
    OWL::TOpenSaveDialog::TData::_dtor((int)(self + 0xe),2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2c;
    OWL::TEditSearch::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2c;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2c;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x1d,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x1b,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00446cf0  OWL::TEditFile::SetupWindow   (818 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from OWL::TEditFile's OWL::TWindow subobject vtable at 0x00478428 (through the this-adjusting thunk at 0x0041b337); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEditFile::vf20 [rtti:vtable]
void __cdecl OWL::TEditFile::SetupWindow(int *self)

{
  uint uVar1;
  bool bVar2;
  char cVar3;
  int prevRefs;
  undefined1 *buf;
  undefined4 extraout_ECX;
  int *rep;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 alloc [8];
  byte *local_1c;
  undefined1 local_14 [8];
  char *str;
  
  __InitExceptBlockLDTC(0x481660);
  OWL::TEditSearch::SetupWindow(self);
  self[0xe] = 0x1006;
  self[0xe] = self[0xe] | 0x200000;
  bVar2 = FUN_0041b9e4();
  if (bVar2) {
    self[0xe] = self[0xe] | 0x80000;
  }
  FUN_0044f1ec((int)local_14,*(int *)(*self + 0x70),0x7f2a);
  FUN_00450c98(str,self + 0xe,extraout_ECX,(int)(self + 0xe),(uint *)str);
  if (str != (char *)0x0) {
    if (*(int *)(str + -0xc) != -1) {
      rep = (int *)(str + -0xc);
      if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (rep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *rep = *rep + -1;
        prevRefs = *rep + 1;
      }
      if (prevRefs != 0) goto LAB_00446dd4;
    }
    operator_delete();
    str = (char *)0x0;
  }
LAB_00446dd4:
  FUN_00447024(self,(uint *)self[0x18]);
  if ((self[0x18] == 0) || (cVar3 = (**(code **)(self[3] + 100))(), cVar3 != '\0'))
  goto LAB_00447011;
  FUN_0044f1ec((int)local_34,*(int *)(*self + 0x70),0x7f27);
  local_1c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_2c + -4);
    rep = std::string::__getRep(alloc,uVar1,uVar1);
    local_1c = (byte *)(rep + 3);
    memcpy((undefined4 *)local_1c,(undefined4 *)local_2c,uVar1);
  }
  else {
    local_1c = local_2c;
    strRep = local_2c + -0xc;
    if (strRep != (byte *)&g_nullStringRep) {
      *(int *)strRep = *(int *)strRep + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      strRep = local_2c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00446f3e;
    }
    operator_delete();
    local_2c = (byte *)0x0;
  }
LAB_00446f3e:
  buf = (undefined1 *)operator_new_array();
  sprintf(buf,local_1c);
  (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  FUN_00447024(self,(uint *)0x0);
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep = local_1c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00447011;
    }
    operator_delete();
  }
LAB_00447011:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447238  OWL::TEditFile::vf23   (74 bytes)   [rtti:vtable virtual slot 23]
void __cdecl OWL::TEditFile::vf23(int *self)

{
  undefined4 uVar1;
  int *self2;
  
  self2 = self;
  uVar1 = (**(code **)(self[3] + 0x58))();
  if ((char)uVar1 != '\0') {
    (**(code **)(self[3] + 0x24))(uVar1,self[3],self2,self);
    (**(code **)(*(int *)(*self + 8) + 0x68))();
    FUN_00438338(*self,0xb9,0,0);
    FUN_00447024(self,(uint *)0x0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447284  OWL::TEditFile::vf26   (612 bytes)   [rtti:vtable virtual slot 26]
void __cdecl OWL::TEditFile::vf26(int *self,uint *param_2)

{
  uint uVar1;
  char cVar2;
  int *newRep;
  int prevRefs;
  undefined1 *buf;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 alloc [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x481758);
  cVar2 = (**(code **)(self[3] + 100))();
  if (cVar2 != '\0') {
    (**(code **)(*(int *)(*self + 8) + 0x68))();
    FUN_00447024(self,param_2);
    goto LAB_004474d7;
  }
  FUN_0044f1ec((int)local_24,*(int *)(*self + 0x70),0x7f27);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    newRep = std::string::__getRep(alloc,uVar1,uVar1);
    local_c = (byte *)(newRep + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    strRep = local_1c + -0xc;
    if (strRep != (byte *)&g_nullStringRep) {
      *(int *)strRep = *(int *)strRep + 1;
    }
  }
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep = local_1c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_00447414;
    }
    operator_delete();
    local_1c = (byte *)0x0;
  }
LAB_00447414:
  buf = (undefined1 *)operator_new_array();
  sprintf(buf,local_c);
  (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        prevRefs = *(int *)strRep + 1;
      }
      if (prevRefs != 0) goto LAB_004474d7;
    }
    operator_delete();
  }
LAB_004474d7:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004474e8  OWL::TEditFile::vf24   (301 bytes)   [rtti:vtable virtual slot 24]
void __cdecl OWL::TEditFile::vf24(undefined4 *self)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int local_114;
  int local_110;
  undefined4 streamableBase [2];
  undefined4 window [34];
  
  __InitExceptBlockLDTC(0x4817ac);
  cVar1 = (**(code **)(self[3] + 0x58))();
  if (cVar1 != '\0') {
    *(undefined1 *)self[0x10] = 0;
    piVar2 = OWL::TFileOpenDialog::TFileOpenDialog(&local_114,0,*self,(int)(self + 0xe),0,0,0);
    iVar3 = (**(code **)(piVar2[3] + 0x14))();
    cVar1 = iVar3 == 1;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(&local_114,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
    OWL::TWindow::_dtor(window,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
    OWL::TStreamableBase::_dtor(streamableBase,0);
    if (cVar1 != '\0') {
      (**(code **)(self[3] + 0x68))();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447618  OWL::TEditFile::vf25   (293 bytes)   [rtti:vtable virtual slot 25]
uint __cdecl OWL::TEditFile::vf25(int *self,int param_2)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined **file;
  int *local_14;
  undefined1 unused;
  undefined4 unused2;
  undefined4 unused3;
  
  __InitExceptBlockLDTC(0x4817e0);
  if ((param_2 == 0) && (self[0x18] == 0)) {
    uVar4 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar4 = 0;
    file = &OWL::TFile::vftable;
    local_14 = (int *)0x0;
    unused = 1;
    unused2 = 0;
    unused3 = 0;
    (*(code *)PTR_FUN_00479f20)();
    if ((local_14 != (int *)0x0) && (iVar1 = (**(code **)(*local_14 + 0x38))(), -1 < iVar1)) {
      (**(code **)(self[3] + 0x24))();
      pCVar2 = FUN_0044609c(self,iVar1 + 1);
      if (pCVar2 != (LPSTR)0x0) {
        iVar3 = (**(code **)(*local_14 + 0x1c))();
        if (iVar3 == iVar1) {
          pCVar2[iVar1] = '\0';
          FUN_00438338(*self,0xb9,0,0);
        }
        uVar4 = (uint)(iVar3 == iVar1);
        FUN_00446158(self,pCVar2,'\x01');
      }
    }
    OWL::TFile::_dtor((int *)&file,2);
    *sehChainHead = sehPrevFrame;
  }
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447740  OWL::TEditFile::vf27   (631 bytes, 2 ranges)   [rtti:vtable virtual slot 27]
undefined4 __cdecl OWL::TEditFile::vf27(int *self)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int *newRep;
  undefined1 *buf;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 alloc [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x48182c);
  iVar2 = FUN_00438338(*self,0xb8,0,0);
  uVar3 = 0;
  if (iVar2 == 0) {
LAB_004479aa:
    *sehChainHead = sehPrevFrame;
    return CONCAT31((int3)((uint)uVar3 >> 8),1);
  }
  if (self[0x18] == 0) {
    uVar3 = (**(code **)(self[3] + 0x70))();
    *sehChainHead = sehPrevFrame;
    return uVar3;
  }
  uVar3 = (**(code **)(self[3] + 0x74))();
  if ((char)uVar3 != '\0') goto LAB_004479aa;
  FUN_0044f1ec((int)local_24,*(int *)(*self + 0x70),0x7f28);
  local_c = (byte *)0x0;
  if (*(int *)(local_1c + -0xc) == -1 || *(int *)(local_1c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_1c + -4);
    newRep = std::string::__getRep(alloc,uVar1,uVar1);
    local_c = (byte *)(newRep + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_1c,uVar1);
  }
  else {
    local_c = local_1c;
    strRep = local_1c + -0xc;
    if (strRep != (byte *)&g_nullStringRep) {
      *(int *)strRep = *(int *)strRep + 1;
    }
  }
  if (local_1c != (byte *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      strRep = local_1c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar2 = *(int *)strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004478db;
    }
    operator_delete();
    local_1c = (byte *)0x0;
  }
LAB_004478db:
  buf = (undefined1 *)operator_new_array();
  sprintf(buf,local_c);
  (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  uVar3 = 0;
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar2 = *(int *)strRep + 1;
      }
      if (iVar2 != 0) goto LAB_00447997;
    }
    operator_delete();
  }
LAB_00447997:
  *sehChainHead = sehPrevFrame;
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004479c0  OWL::TEditFile::vf28   (1033 bytes)   [rtti:vtable virtual slot 28]
undefined4 __cdecl OWL::TEditFile::vf28(int *self)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *buf;
  byte *strRep;
  undefined4 *sehChainHead;
  char cVar7;
  undefined4 sehPrevFrame;
  undefined1 local_134 [8];
  byte *local_12c;
  undefined1 alloc [8];
  byte *local_11c;
  int local_114;
  int local_110;
  undefined4 streamableBase [2];
  undefined4 window [34];
  
  __InitExceptBlockLDTC(0x4818ac);
  if (self[0x18] == 0) {
    *(undefined1 *)self[0x10] = 0;
  }
  else {
    FUN_00467770((char *)self[0x10],(char *)self[0x18]);
  }
  piVar2 = OWL::TFileSaveDialog::TFileSaveDialog(&local_114,0,*self,(int)(self + 0xe),0,0,0);
  iVar3 = (**(code **)(piVar2[3] + 0x14))();
  cVar7 = iVar3 == 1;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_114,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
  *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
  OWL::TWindow::_dtor(window,0);
  *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(streamableBase,0);
  if (cVar7 == '\0') goto LAB_00447db3;
  cVar7 = (**(code **)(self[3] + 0x74))();
  if (cVar7 != '\0') {
    uVar4 = FUN_00447024(self,(uint *)self[0x10]);
    *sehChainHead = sehPrevFrame;
    return CONCAT31((int3)((uint)uVar4 >> 8),1);
  }
  FUN_0044f1ec((int)local_134,*(int *)(*self + 0x70),0x7f28);
  local_11c = (byte *)0x0;
  if (*(int *)(local_12c + -0xc) == -1 || *(int *)(local_12c + -0xc) + 1 < 0) {
    uVar1 = *(uint *)(local_12c + -4);
    piVar2 = std::string::__getRep(alloc,uVar1,uVar1);
    local_11c = (byte *)(piVar2 + 3);
    memcpy((undefined4 *)local_11c,(undefined4 *)local_12c,uVar1);
  }
  else {
    local_11c = local_12c;
    strRep = local_12c + -0xc;
    if (strRep != (byte *)&g_nullStringRep) {
      *(int *)strRep = *(int *)strRep + 1;
    }
  }
  if (local_12c != (byte *)0x0) {
    if (*(int *)(local_12c + -0xc) != -1) {
      strRep = local_12c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar3 = *(int *)strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00447cc3;
    }
    operator_delete();
    local_12c = (byte *)0x0;
  }
LAB_00447cc3:
  buf = (undefined1 *)operator_new_array();
  sprintf(buf,local_11c);
  (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (local_11c != (byte *)0x0) {
    if (*(int *)(local_11c + -0xc) != -1) {
      strRep = local_11c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar3 = *(int *)strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00447db3;
    }
    operator_delete();
  }
LAB_00447db3:
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447e00  OWL::TEditFile::vf29   (281 bytes)   [rtti:vtable virtual slot 29]
undefined4 __cdecl OWL::TEditFile::vf29(int *self,int param_2)

{
  uint *puVar1;
  char *len;
  undefined4 *sehChainHead;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 sehPrevFrame;
  undefined **file;
  int *local_14;
  undefined1 unused;
  undefined4 unused2;
  undefined4 unused3;
  
  __InitExceptBlockLDTC(0x48191c);
  if ((param_2 == 0) && (self[0x18] == 0)) {
    uVar3 = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    file = &OWL::TFile::vftable;
    local_14 = (int *)0x0;
    unused = 1;
    unused2 = 0;
    unused3 = 0;
    (*(code *)PTR_FUN_00479f20)();
    if (local_14 == (int *)0x0) {
      uVar3 = 0;
      OWL::TFile::_dtor((int *)&file,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      uVar3 = 0;
      puVar1 = (uint *)FUN_0044609c(self,0);
      if (puVar1 != (uint *)0x0) {
        puVar4 = puVar1;
        len = strlen(puVar1);
        uVar3 = (**(code **)(*local_14 + 0x20))(local_14,*local_14,puVar4,local_14,puVar1,len);
        FUN_00446158(self,(LPCSTR)puVar1,'\0');
        if ((char)uVar3 != '\0') {
          FUN_00438338(*self,0xb9,0,0);
        }
      }
      OWL::TFile::_dtor((int *)&file,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  return uVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00447f1c  OWL::TEditFile::vf22   (1251 bytes, 2 ranges)   [rtti:vtable virtual slot 22]
uint __cdecl OWL::TEditFile::vf22(int *self)

{
  int iVar1;
  int *rep;
  undefined1 *buf;
  uint uVar4;
  byte *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_44 [8];
  int *str;
  undefined1 local_34 [8];
  byte *local_2c;
  undefined1 alloc [8];
  int *str2;
  undefined1 alloc2 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x481990);
  iVar1 = FUN_00438338(*self,0xb8,0,0);
  if (iVar1 == 0) {
    *sehChainHead = sehPrevFrame;
    return 1;
  }
  FUN_0044f1ec((int)local_34,*(int *)(*self + 0x70),0x7f29);
  local_c = (byte *)0x0;
  if (*(int *)(local_2c + -0xc) == -1 || *(int *)(local_2c + -0xc) + 1 < 0) {
    uVar4 = *(uint *)(local_2c + -4);
    rep = std::string::__getRep(alloc2,uVar4,uVar4);
    local_c = (byte *)(rep + 3);
    memcpy((undefined4 *)local_c,(undefined4 *)local_2c,uVar4);
  }
  else {
    local_c = local_2c;
    strRep = local_2c + -0xc;
    if (strRep != (byte *)&g_nullStringRep) {
      *(int *)strRep = *(int *)strRep + 1;
    }
  }
  if (local_2c != (byte *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      strRep = local_2c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar1 = *(int *)strRep + 1;
      }
      if (iVar1 != 0) goto LAB_004480ad;
    }
    operator_delete();
    local_2c = (byte *)0x0;
  }
LAB_004480ad:
  FUN_0044f1ec((int)local_44,*(int *)(*self + 0x70),0x7f26);
  str2 = (int *)0x0;
  if (str[-3] == -1 || str[-3] + 1 < 0) {
    uVar4 = str[-1];
    str2 = std::string::__getRep(alloc,uVar4,uVar4);
    str2 = str2 + 3;
    memcpy(str2,str,uVar4);
  }
  else {
    str2 = str;
    rep = str + -3;
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  if (str != (int *)0x0) {
    if (str[-3] != -1) {
      rep = str + -3;
      if (rep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar1 = *rep + 1;
      }
      if (iVar1 != 0) goto LAB_00448236;
    }
    operator_delete();
    str = (int *)0x0;
  }
LAB_00448236:
  buf = (undefined1 *)operator_new_array();
  sprintf(buf,local_c);
  iVar1 = (**(code **)(*(int *)(*(int *)(*self + 0x6c) + 0x1b) + 0x30))();
  operator_delete_array();
  if (iVar1 == 6) {
    uVar4 = (**(code **)(self[3] + 0x6c))();
  }
  else {
    uVar4 = (uint)(iVar1 != 2);
  }
  if (str2 != (int *)0x0) {
    if (str2[-3] != -1) {
      rep = str2 + -3;
      if (rep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else if (rep == &g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *rep = *rep + -1;
        iVar1 = *rep + 1;
      }
      if (iVar1 != 0) goto LAB_0044834d;
    }
    operator_delete();
    str2 = (int *)0x0;
  }
LAB_0044834d:
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      strRep = local_c + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        iVar1 = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        iVar1 = *(int *)strRep + 1;
      }
      if (iVar1 != 0) goto LAB_004483df;
    }
    operator_delete();
  }
LAB_004483df:
  *sehChainHead = sehPrevFrame;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448408  OWL::TEditFile::CanClose   (16 bytes)   [rtti:vtable virtual slot 15]
//   override of OWL::TWindow vtable slot 15, from OWL::TEditFile's OWL::TWindow subobject vtable at 0x00478428 (through the this-adjusting thunk at 0x0041b370); slot name identified from OWL::TWindow's own implementation of that slot
//   also: OWL::TEditFile::vf21 [rtti:vtable]
void __cdecl OWL::TEditFile::CanClose(int self)

{
  (**(code **)(*(int *)(self + 0xc) + 0x58))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004484a0  OWL::TEditFile::Streamer::Streamer   (102 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEditFile::Streamer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TEditFile::Streamer::Streamer(undefined4 *self,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481a34);
  *self = &OWL::TStreamer::vftable;
  self[1] = param_2;
  *self = &OWL::TNewStreamer::vftable;
  *self = &OWL::TEditFile::Streamer::vftable;
  if (param_2 == (int *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *param_2;
  }
  puVar1 = FUN_00468488((int)param_2,iVar2,(int *)&DAT_00403c1c,(int *)&DAT_0041aedc,0);
  self[2] = puVar1;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448508  OWL::TEditFile::TEditFile   (316 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TEditFile's vtable at its vptr offset (+0xc) in this
int * __cdecl OWL::TEditFile::TEditFile(int *self,int vbasesBuilt)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x481a4c);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x1d);
    self[0x1d] = (int)(self + 0x1a);
    self[0x1e] = (int)(self + 0x1b);
    self[1] = (int)(self + 0x1a);
    self[2] = (int)(self + 0x1b);
    self[0x19] = 0;
    self[0x1c] = 0;
    self[0x1a] = (int)&OWL::TEventHandler::vftable;
    self[0x1b] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_435d18(self + 0x1d,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x2c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x2c;
  OWL::TEditSearch::TEditSearch(self,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x2c;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x2c;
  self[3] = (int)&OWL::TEditFile::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00478410;
  *(undefined ***)self[2] = &PTR_LAB_0047841c;
  *(undefined ***)(*self + 8) = &OWL::TEditFile::vftable_TWindow;
  FUN_00450b7c((uint *)(self + 0xe),0,(uint *)0x0,0,0,0,0,0,0);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448644  OWL::TEditFile::Streamer::vf1   (62 bytes)   [rtti:vtable virtual slot 1]
int __cdecl OWL::TEditFile::Streamer::vf1(int self,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(self + 8);
  FUN_00448684(iVar1,param_2);
  puVar2 = FUN_0042dbc4(param_2);
  *(undefined4 **)(iVar1 + 0x60) = puVar2;
  if (**(char **)(iVar1 + 0x60) == '\0') {
    operator_delete();
    *(undefined4 *)(iVar1 + 0x60) = 0;
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004486dc  OWL::TEditFile::Streamer::vf2   (54 bytes)   [rtti:vtable virtual slot 2]
void __cdecl OWL::TEditFile::Streamer::vf2(int self,int *param_2)

{
  int iVar1;
  uint *src;
  
  iVar1 = *(int *)(self + 8);
  FUN_00448714(iVar1,param_2);
  if (*(int *)(iVar1 + 0x60) == 0) {
    src = (uint *)&DAT_00481a30;
  }
  else {
    src = *(uint **)(iVar1 + 0x60);
  }
  FUN_0042e00c(param_2,src);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00448878  OWL::TEditFile::Streamer::vf3   (10 bytes)   [rtti:vtable virtual slot 3; function defined from vtable-slot]
undefined4 __stdcall OWL::TEditFile::Streamer::vf3(void)

{
  return 1;
}

} // namespace tea
