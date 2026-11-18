// TEA.exe — application module "ExternalLookupViewWindows"
// 6 functions, 0x00475a74..0x004760d8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00475a74  ExternalLookupViewWindows::ExternalLookupViewWindows   (642 bytes)   [rtti:vtable-store constructor]
//   constructor: stores ExternalLookupViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl ExternalLookupViewWindows::ExternalLookupViewWindows(int *self,int vbasesBuilt,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ffe98);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xac);
    self[0xac] = (int)(self + 0xa9);
    self[0xad] = (int)(self + 0xaa);
    self[1] = (int)(self + 0xa9);
    self[2] = (int)(self + 0xaa);
    self[0xa8] = 0;
    self[0xab] = 0;
    self[0xa9] = (int)&OWL::TEventHandler::vftable;
    self[0xaa] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xac,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x240;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x240;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4ffe34,param_3,param_4,(uint *)0x321e,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x240;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x240;
  self[3] = (int)&ExternalLookupViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050012c;
  *(undefined ***)self[2] = &PTR_LAB_00500138;
  iVar1 = *self;
  *(undefined ***)(iVar1 + 8) = &ExternalLookupViewWindows::vftable_TWindow;
  OWL::TStatic::TStatic_4c7a28(self + 0x18,0,iVar1,0x3228,0,0);
  OWL::TButton::TButton((int *)((int)self + 0x10e),0,*self,1,0);
  PVWPushButton::PVWPushButton(self + 0x70,0,self,0xd0c);
  self[0xa4] = 0;
  iVar1 = *(int *)(*(int *)(param_5 + 8) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    len = *(uint *)(*(int *)(param_5 + 8) + -4);
    rep = std::string::__getRep(self + 0xa2,len,len);
    self[0xa4] = (int)(rep + 3);
    memcpy((undefined4 *)self[0xa4],*(undefined4 **)(param_5 + 8),len);
  }
  else {
    self[0xa4] = *(int *)(param_5 + 8);
    rep = (int *)(self[0xa4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  self[0xa6] = param_6;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475d20  ExternalLookupViewWindows::~ExternalLookupViewWindows   (556 bytes)   [rtti:dtor destructor]
//   written in code as ExternalLookupViewWindows::_dtor
void __cdecl ExternalLookupViewWindows::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ffef8);
  if (self == (int *)0x0) goto LAB_00475f3b;
  self[3] = (int)&ExternalLookupViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_0050012c;
  *(undefined ***)self[2] = &PTR_LAB_00500138;
  *(undefined ***)(*self + 8) = &ExternalLookupViewWindows::vftable_TWindow;
  if (self[0xa4] != 0) {
    if (*(int *)(self[0xa4] + -0xc) != -1) {
      control = (int *)(self[0xa4] + -0xc);
      if (control == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (control == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *control = *control + -1;
        prevRefs = *control + 1;
      }
      if (prevRefs != 0) goto LAB_00475dfc;
    }
    operator_delete();
    self[0xa4] = 0;
  }
LAB_00475dfc:
  PVWPushButton::_dtor(self + 0x70,2);
  OWL::TButton::_dtor((int *)((int)self + 0x10e),2);
  control = self + 0x18;
  *(int *)(self[0x19] + -4) = *(int *)(self[0x19] + -4) + -4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
  OWL::TControl::_dtor(control,0);
  *(int *)(self[0x19] + -4) = *(int *)(self[0x19] + -4) + 4;
  *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
  *(int *)(self[0x19] + -4) = *(int *)(self[0x19] + -4) + 0x96;
  OWL::TWindow::_dtor(self + 0x22,0);
  *(int *)(self[0x19] + -4) = *(int *)(self[0x19] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(self + 0x20,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x240;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x240;
  PropertiesViewWindows::_dtor(self,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x240;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x240;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0xac,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0xaa,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00475f3b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475f4c  ExternalLookupViewWindows::OnButton   (138 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
void __cdecl ExternalLookupViewWindows::OnButton(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int lookupPropertiesViewWindows [3];
  int local_388;
  
  __InitExceptBlockLDTC(0x4fff38);
  LookupPropertiesViewWindows::LookupPropertiesViewWindows(lookupPropertiesViewWindows,0,*self,self[0xe]);
  (**(code **)(local_388 + 0x14))();
  ExternalLookupViewWindows::FillLookups((int)self);
  LookupPropertiesViewWindows::_dtor(lookupPropertiesViewWindows,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475fd8  ExternalLookupViewWindows::Destroy   (21 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from ExternalLookupViewWindows's OWL::TWindow subobject vtable at 0x00500144 (through the this-adjusting thunk at 0x0047652a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: ExternalLookupViewWindows::vf9 [rtti:vtable]
void __cdecl ExternalLookupViewWindows::Destroy(int *self,INT_PTR result)

{
  PropertiesViewWindows::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00475ff0  ExternalLookupViewWindows::SetupWindow   (230 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from ExternalLookupViewWindows's OWL::TWindow subobject vtable at 0x00500144 (through the this-adjusting thunk at 0x0047646d); slot name identified from OWL::TWindow's own implementation of that slot
//   also: ExternalLookupViewWindows::vf11 [rtti:vtable]
void __cdecl ExternalLookupViewWindows::SetupWindow(int *self)

{
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x4fff78);
  PropertiesViewWindows::SetupWindow(self);
  std::string::string_from_cstr((int)str,(uint *)"External Lookup - ");
  std::string::append((int)str,(int)(self + 0xa2));
  FUN_004b0c44(self,strRep);
  ExternalLookupViewWindows::FillLookups((int)self);
  if (strRep != (uint *)0x0) {
    if (strRep[-3] != 0xffffffff) {
      strRep = strRep + -3;
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
      if (prevRefs != 0) goto LAB_004760c5;
    }
    operator_delete();
  }
LAB_004760c5:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004760d8  ExternalLookupViewWindows::FillLookups   (895 bytes)   [analysis]
//   one button per configured lookup, labelled from the configuration
/* WARNING: Removing unreachable block (ram,0x00476162) */
/* WARNING: Removing unreachable block (ram,0x0047621a) */
/* WARNING: Removing unreachable block (ram,0x004761de) */
/* WARNING: Removing unreachable block (ram,0x00476213) */
/* WARNING: Removing unreachable block (ram,0x00476293) */
/* WARNING: Removing unreachable block (ram,0x004762ac) */
/* WARNING: Removing unreachable block (ram,0x004762b7) */
/* WARNING: Removing unreachable block (ram,0x004762db) */
/* WARNING: Removing unreachable block (ram,0x004762c5) */
/* WARNING: Removing unreachable block (ram,0x004762d4) */
/* WARNING: Removing unreachable block (ram,0x004762cd) */
/* WARNING: Removing unreachable block (ram,0x004762e0) */
/* WARNING: Removing unreachable block (ram,0x004762e4) */
/* WARNING: Removing unreachable block (ram,0x00476332) */
/* WARNING: Removing unreachable block (ram,0x00476352) */
void __cdecl ExternalLookupViewWindows::FillLookups(int self)

{
  int *lookupConfiguration;
  int iVar2;
  char *pcVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  char *string_;
  
  __InitExceptBlockLDTC(0x4ffff0);
  lookupConfiguration = (int *)GetLookupConfiguration(*(int *)(self + 0x38));
  iVar2 = LookupConfiguration::GetCount(lookupConfiguration);
  (**(code **)(*(int *)(*(int *)(self + 0x10e) + 8) + 0x60))();
  TEAAppWindows::LoadResourceString((int)result,*(int *)(self + 0x38),
               (uint)(iVar2 < 1) + *(int *)(self + 0x298) * 2 + 0x325a);
  pcVar3 = thunk_FUN_004dcd18(string_,&DAT_004ffe56);
  iVar2 = (*(int *)&g_stringNpos);
  if (pcVar3 != (char *)0x0) {
    iVar2 = (int)pcVar3 - (int)string_;
  }
  if (iVar2 != -1) {
    std::string::insert((int)result,iVar2 + 1,self + 0x288);
  }
  SetWindowTextA(*(HWND *)(*(int *)(self + 0x60) + 0xc),string_);
  if (string_ != (LPCSTR)0x0) {
    if (*(int *)(string_ + -0xc) != -1) {
      lookupConfiguration = (int *)(string_ + -0xc);
      if (lookupConfiguration == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (lookupConfiguration == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *lookupConfiguration = *lookupConfiguration + -1;
        iVar2 = *lookupConfiguration + 1;
      }
      if (iVar2 != 0) goto LAB_00476440;
    }
    operator_delete();
  }
LAB_00476440:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
