// TEA.exe — application module "LookupPropertiesViewWindows"
// 16 functions, 0x00460220..0x00462d44. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00460220  LookupPropertiesViewWindows::LookupPropertiesViewWindows   (2838 bytes)   [rtti:vtable-store constructor]
//   constructor: stores LookupPropertiesViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl LookupPropertiesViewWindows::LookupPropertiesViewWindows(int *self,int vbasesBuilt,undefined4 parent,int config)

{
  undefined *lookupConfig;
  int *controls;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4faa48);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xc2);
    self[0xc2] = (int)(self + 0xbf);
    self[0xc3] = (int)(self + 0xc0);
    self[1] = (int)(self + 0xbf);
    self[2] = (int)(self + 0xc0);
    self[0xbe] = 0;
    self[0xc1] = 0;
    self[0xbf] = (int)&OWL::TEventHandler::vftable;
    self[0xc0] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0xc2,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x298;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x298;
  PropertiesViewWindows::PropertiesViewWindows(self,1,0x4fa904,parent,config,(uint *)0x141e,0,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x298;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x298;
  self[3] = (int)&LookupPropertiesViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fb1c8;
  *(undefined ***)self[2] = &PTR_LAB_004fb1d4;
  *(undefined ***)(*self + 8) = &LookupPropertiesViewWindows::vftable_TWindow;
  lookupConfig = GetLookupConfiguration(config);
  self[0x18] = (int)lookupConfig;
  PVWPushButton::PVWPushButton(self + 0x2a,0,self,0x15e0);
  PVWEdit::PVWEdit(self + 0x5c,0,self,0x15d6,0);
  PVWPushButton::PVWPushButton(self + 0x8c,0,self,0x14dc);
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)self[0x18] + 0x40;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x3390);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x339a,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x33a4,0);
  }
  self[0x19] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)self[0x18] + 0x78;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x33ae);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x33b8,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x33c2,0);
  }
  self[0x1a] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)self[0x18] + 0xb0;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x33cc);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x33d6,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x33e0,0);
  }
  self[0x1b] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)self[0x18] + 0xe8;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x33ea);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x33fe,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x3408,0);
  }
  self[0x1c] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 4) + 0x40;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x14e6);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x3354,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x150e,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x1536,0);
  }
  self[0x1d] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 4) + 0x78;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x14f0);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x335e,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x1518,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x1540,0);
  }
  self[0x1e] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 4) + 0xb0;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x14fa);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x3368,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x1522,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x154a,0);
  }
  self[0x1f] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 4) + 0xe8;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x1504);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x3372,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x152c,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x1554,0);
  }
  self[0x20] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 8) + 0x40;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x155e);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x337c,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x1586,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x15ae,0);
  }
  self[0x21] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 8) + 0x78;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x1568);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x3386,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x1590,0);
    PVWEdit::PVWEdit(controls + 0x92,0,self,0x15b8,0);
  }
  self[0x22] = (int)controls;
  self[0x23] = 0;
  self[0x24] = 0;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 0xc) + 0x40;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x1428);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x332c,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x1450,0);
    PVWPushButton::PVWPushButton(controls + 0x92,0,self,0x1478);
    PVWEnumeration::PVWEnumeration(controls + 0xc4,0,self,0x2bc0,2,0x4fa8fc);
  }
  self[0x25] = (int)controls;
  controls = (int *)operator_new();
  if (controls != (int *)0x0) {
    *controls = *(int *)(self[0x18] + 0xc) + 0x78;
    PVWCheckBox::PVWCheckBox(controls + 2,0,self,0x1432);
    PVWEdit::PVWEdit(controls + 0x34,0,self,0x3336,0);
    PVWEdit::PVWEdit(controls + 99,0,self,0x145a,0);
    PVWPushButton::PVWPushButton(controls + 0x92,0,self,0x1482);
    PVWEnumeration::PVWEnumeration(controls + 0xc4,0,self,0x14aa,2,0x4fa8fc);
  }
  self[0x26] = (int)controls;
  self[0x27] = 0;
  self[0x28] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460e4c  LookupPropertiesViewWindows::~LookupPropertiesViewWindows   (866 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::_dtor
void __cdecl LookupPropertiesViewWindows::_dtor(int *self,byte dtorFlags)

{
  int iVar1;
  int iVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fae24);
  if (self != (int *)0x0) {
    self[3] = (int)&LookupPropertiesViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004fb1c8;
    *(undefined ***)self[2] = &PTR_LAB_004fb1d4;
    *(undefined ***)(*self + 8) = &LookupPropertiesViewWindows::vftable_TWindow;
    iVar2 = 0;
    do {
      iVar1 = self[iVar2 + 0x19];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = self[iVar2 + 0x25];
      if (iVar1 != 0) {
        PVWEnumeration::_dtor((int *)(iVar1 + 0x310),2);
        PVWPushButton::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = self[iVar2 + 0x1d];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar1 = self[iVar2 + 0x21];
      if (iVar1 != 0) {
        PVWEdit::_dtor((int *)(iVar1 + 0x248),2);
        PVWEdit::_dtor((int *)(iVar1 + 0x18c),2);
        PVWEdit::_dtor((int *)(iVar1 + 0xd0),2);
        PVWCheckBox::_dtor((int *)(iVar1 + 8),2);
        operator_delete();
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    PVWPushButton::_dtor(self + 0x8c,2);
    PVWEdit::_dtor(self + 0x5c,2);
    PVWPushButton::_dtor(self + 0x2a,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x298;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0x298;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x298;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0x298;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xc2,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0xc0,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004611b0  LookupPropertiesViewWindows::Destroy   (83 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from LookupPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004fb1e0 (through the this-adjusting thunk at 0x00462936); slot name identified from OWL::TWindow's own implementation of that slot
//   also: LookupPropertiesViewWindows::vf9 [rtti:vtable]
void __cdecl LookupPropertiesViewWindows::Destroy(int *self,INT_PTR result)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      iVar3 = *(int *)(self[0x18] + iVar2 * 4) + iVar1 * 0x38;
      if (*(int *)(*(int *)(iVar3 + 0x50) + -4) == 0) {
        *(undefined4 *)(iVar3 + 0x40) = 0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  PropertiesViewWindows::Destroy(self,result);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461204  LookupPropertiesViewWindows::SetupWindow   (360 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from LookupPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004fb1e0 (through the this-adjusting thunk at 0x00462879); slot name identified from OWL::TWindow's own implementation of that slot
//   also: LookupPropertiesViewWindows::vf11 [rtti:vtable]
void __cdecl LookupPropertiesViewWindows::SetupWindow(int *self)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  PropertiesViewWindows::SetupWindow(self);
  iVar3 = 0;
  piVar2 = self + 0x19;
  do {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      PVWEdit::SetText(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      PVWEdit::SetText(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
    }
    piVar1 = (int *)piVar2[0xc];
    if (piVar1 != (int *)0x0) {
      PVWEdit::SetText(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      PVWEdit::SetText(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      atoi(*(char **)(*piVar1 + 0x30));
      PVWEnumeration::Reset((int)(piVar1 + 0xc4));
    }
    piVar1 = (int *)piVar2[4];
    if (piVar1 != (int *)0x0) {
      PVWEdit::SetText(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      PVWEdit::SetText(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      PVWEdit::SetText(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    piVar1 = (int *)piVar2[8];
    if (piVar1 != (int *)0x0) {
      PVWEdit::SetText(piVar1 + 0x34,*(LPCSTR *)(*piVar1 + 0x10));
      PVWEdit::SetText(piVar1 + 99,*(LPCSTR *)(*piVar1 + 0x20));
      PVWEdit::SetText(piVar1 + 0x92,*(LPCSTR *)(*piVar1 + 0x30));
    }
    iVar3 = iVar3 + 1;
    piVar2 = piVar2 + 1;
  } while (iVar3 < 4);
  LookupPropertiesViewWindows::FillList((int)self);
  PVWEdit::SetIntValue(self + 0x5c,self[0x18] + 0x10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046136c  LookupPropertiesViewWindows::FillList   (280 bytes)   [analysis]
//   fills the list of configured lookups
void __cdecl LookupPropertiesViewWindows::FillList(int self)

{
  int iVar1;
  uint uVar2;
  WPARAM wParam;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *local_8;
  
  iVar5 = 0;
  do {
    iVar6 = 0;
    piVar4 = (int *)(self + 100);
    do {
      if ((iVar5 == 0) && (*piVar4 != 0)) {
        local_8 = (int *)(*piVar4 + 8);
LAB_004613da:
        iVar1 = *(int *)(*(int *)(self + 0x60) + iVar5 * 4) + iVar6 * 0x38;
        if (*(int *)(iVar1 + 0x40) == 0) {
          wParam = 0;
        }
        else {
          uVar2 = std::string::compare(iVar1 + 0x48,0,*(uint *)(*(int *)(iVar1 + 0x50) + -4),
                               *(byte **)(*(int *)(self + 0x60) + 0x28),
                               *(uint *)(*(int *)(*(int *)(self + 0x60) + 0x28) + -4));
          if (uVar2 == 0) {
            wParam = 1;
          }
          else {
            wParam = 2;
          }
        }
        FUN_004ac750(local_8,wParam);
      }
      else {
        if ((iVar5 == 1) && (piVar4[4] != 0)) {
          local_8 = (int *)(piVar4[4] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 3) && (piVar4[0xc] != 0)) {
          local_8 = (int *)(piVar4[0xc] + 8);
          goto LAB_004613da;
        }
        if ((iVar5 == 2) && (piVar4[8] != 0)) {
          local_8 = (int *)(piVar4[8] + 8);
          goto LAB_004613da;
        }
      }
      iVar6 = iVar6 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar6 < 4);
    iVar5 = iVar5 + 1;
    if (3 < iVar5) {
      return;
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00461484  LookupPropertiesViewWindows::GetControlTip   (155 bytes)   [analysis]
//   tooltip text for a lookup entry
void __cdecl LookupPropertiesViewWindows::GetControlTip(int self,int control,uint *text,int *out)

{
  WPARAM wParam;
  int iVar2;
  uint uVar3;
  
  iVar2 = *(int *)(*(int *)(control + 8) + -4);
  if (((*(int *)(text[4] - 4) == 0) != (iVar2 == 0)) &&
     (uVar3 = (uint)(iVar2 != 0), uVar3 != *text)) {
    *text = uVar3;
    if (*text == 0) {
      wParam = 0;
    }
    else {
      wParam = 2;
    }
    FUN_004ac750(out,wParam);
  }
  std::string::operator_assign((int)(text + 2),control);
  iVar2 = FUN_004a76a8(*out,0xf0,0,0);
  if (iVar2 == 1) {
    std::string::operator_assign(*(int *)(self + 0x60) + 0x20,control);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461520  LookupPropertiesViewWindows::OnButton   (1759 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
/* WARNING: Removing unreachable block (ram,0x00461915) */
/* WARNING: Removing unreachable block (ram,0x00461a27) */
/* WARNING: Removing unreachable block (ram,0x004619c7) */
/* WARNING: Removing unreachable block (ram,0x00461a1a) */
/* WARNING: Removing unreachable block (ram,0x00461ad0) */
/* WARNING: Removing unreachable block (ram,0x00461b09) */
/* WARNING: Removing unreachable block (ram,0x00461b17) */
/* WARNING: Removing unreachable block (ram,0x00461b3e) */
/* WARNING: Removing unreachable block (ram,0x00461b28) */
/* WARNING: Removing unreachable block (ram,0x00461b37) */
/* WARNING: Removing unreachable block (ram,0x00461b30) */
/* WARNING: Removing unreachable block (ram,0x00461b43) */
/* WARNING: Removing unreachable block (ram,0x00461b47) */
/* WARNING: Removing unreachable block (ram,0x00461ba1) */
void __cdecl LookupPropertiesViewWindows::OnButton(int *self,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *sehChainHead;
  char cVar5;
  undefined1 local_1e5 [73];
  int str;
  int *local_198;
  int *local_194;
  int *local_190;
  int local_18c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int local_13c;
  int local_138;
  undefined4 streamableBase [2];
  undefined4 window [34];
  uint data [2];
  uint *text;
  
  __InitExceptBlockLDTC(0x4faef4);
  local_18c = 0;
  iVar3 = 4;
  if (0x1504 < param_3) {
    if (param_3 < 0x3391) {
      if (param_3 != 0x3390) {
        if (param_3 != 0x155e) {
          if (param_3 != 0x1568) {
            if (param_3 == 0x15e0) {
              LookupConfiguration::UpdateMenuLabels((int *)self[0x18]);
              LookupPropertiesViewWindows::FillList((int)self);
              TEAAppWindows::Lookup(self[0xe],*self,0x31a6,self[0x18] + 0x10,0,0);
            }
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 2;
        goto LAB_00461813;
      }
    }
    else {
      if (param_3 != 0x33ae) {
        if (param_3 != 0x33cc) {
          if (param_3 != 0x33ea) goto LAB_00461813;
          local_18c = 1;
        }
        local_18c = local_18c + 1;
      }
      local_18c = local_18c + 1;
    }
    iVar3 = 0;
    goto LAB_00461813;
  }
  if (param_3 == 0x1504) {
    local_18c = 1;
LAB_004615f6:
    local_18c = local_18c + 1;
LAB_004615fc:
    local_18c = local_18c + 1;
  }
  else {
    if (param_3 < 0x14dd) {
      if (param_3 == 0x14dc) {
        LookupConfiguration::Save(self[0x18]);
      }
      else {
        if (param_3 != 0x1428) {
          if (param_3 != 0x1432) {
            if (param_3 != 0x1478) {
              if (param_3 != 0x1482) goto LAB_00461813;
              local_18c = 1;
            }
            local_190 = (int *)self[local_18c + 0x25];
            ehContext = 8;
            FUN_004c279c(data,0x180c,(uint *)"Application File (*.exe)|*.exe|All Files|*.*",0,
                         0x4fa90a,0x4fa938,0,0,0);
            ehDtorCount = ehDtorCount + 1;
            ehContext = 0x20;
            local_194 = OWL::TFileOpenDialog::TFileOpenDialog(&local_13c,0,*self,(int)data,0,0x4fa93a,0);
            ehDtorCount = ehDtorCount + 6;
            iVar1 = (**(code **)(local_194[3] + 0x14))();
            cVar5 = iVar1 == 1;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + -0x5c;
            ehDtorCount = ehDtorCount + -6;
            OWL::TCommonDialog::_dtor(&local_13c,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x5c;
            *(int *)(local_13c + -4) = *(int *)(local_13c + -4) + 0x5c;
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + 0x96;
            ehDtorCount = ehDtorCount + -2;
            OWL::TWindow::_dtor(window,0);
            *(int *)(local_138 + -4) = *(int *)(local_138 + -4) + -0x96;
            ehDtorCount = ehDtorCount + -1;
            OWL::TStreamableBase::_dtor(streamableBase,0);
            if (cVar5 != '\0') {
              PVWEdit::SetText(local_190 + 99,(LPCSTR)text);
              std::string::assign_cstr(*local_190 + 0x18,text);
            }
            ehDtorCount = ehDtorCount + -1;
            OWL::TOpenSaveDialog::TData::_dtor((int)data,2);
            ehContext = 0;
            goto LAB_00461813;
          }
          local_18c = 1;
        }
        iVar3 = 3;
      }
      goto LAB_00461813;
    }
    if (param_3 != 0x14e6) {
      if (param_3 != 0x14f0) {
        if (param_3 != 0x14fa) goto LAB_00461813;
        goto LAB_004615f6;
      }
      goto LAB_004615fc;
    }
  }
  iVar3 = 1;
LAB_00461813:
  if (iVar3 != 4) {
    if (param_2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(param_2 + 0xc);
    }
    local_198 = FUN_004dd744(param_2,iVar1,(int *)&DAT_00402b6c,(int *)&DAT_00406e80,0);
    if (local_198 != (int *)0x0) {
      iVar1 = FUN_004a76a8(*local_198,0xf0,0,0);
      iVar3 = *(int *)(self[0x18] + iVar3 * 4) + local_18c * 0x38;
      *(uint *)(iVar3 + 0x40) = (uint)(iVar1 != 0);
      if (iVar1 == 1) {
        std::string::operator_assign(self[0x18] + 0x20,iVar3 + 0x48);
        LookupPropertiesViewWindows::FillList((int)self);
      }
      else {
        str = self[0x18] + 0x20;
        uVar2 = std::string::compare(str,0,*(uint *)(*(int *)(self[0x18] + 0x28) + -4),
                             *(byte **)(iVar3 + 0x50),*(uint *)(*(int *)(iVar3 + 0x50) + -4));
        if (uVar2 == 0) {
          uVar2 = *(uint *)(*(int *)(self[0x18] + 0x28) + -4);
          local_1e5[0] = 0;
          uVar4 = g_stringNpos;
          if (uVar2 <= g_stringNpos) {
            uVar4 = uVar2;
          }
          std::string::replace(self[0x18] + 0x20,0,uVar4,(uint)local_1e5,0,0,0);
        }
      }
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00461c00  LookupPropertiesViewWindows::OnEditChange   (2544 bytes)   [rtti:vtable virtual slot 22]
//   vtable slot 22 (introduced by PropertiesViewWindows); an edit or rich edit's text changed (EN_CHANGE from PVWEdit/PVWRichEdit)
void __cdecl LookupPropertiesViewWindows::OnEditChange(int self,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int prevRefs;
  int iVar3;
  int *out;
  undefined4 *sehChainHead;
  uint *text;
  undefined4 sehPrevFrame;
  undefined1 pvwEdit [8];
  int str;
  undefined1 pvwEdit2 [8];
  int str2;
  undefined1 control [8];
  int str3;
  undefined1 control2 [8];
  int str4;
  undefined1 pvwEdit3 [8];
  int str5;
  undefined1 pvwEdit4 [8];
  int str6;
  undefined1 control3 [8];
  int str7;
  undefined1 pvwEdit5 [8];
  int str8;
  undefined1 pvwEdit6 [8];
  int str9;
  undefined1 control4 [8];
  int str10;
  
  __InitExceptBlockLDTC(0x4faffc);
  iVar3 = 0;
  if (param_3 < 0x3337) {
    if (param_3 == 0x3336) {
      iVar3 = 1;
    }
    else {
      if (param_3 < 0x1555) {
        if (param_3 == 0x1554) {
          iVar3 = 1;
LAB_00461efc:
          iVar3 = iVar3 + 1;
LAB_00461efd:
          iVar3 = iVar3 + 1;
        }
        else {
          if (param_3 < 0x152d) {
            if (param_3 == 0x152c) {
              iVar3 = 1;
LAB_00461e38:
              iVar3 = iVar3 + 1;
LAB_00461e39:
              iVar3 = iVar3 + 1;
            }
            else if (param_3 != 0x150e) {
              if (param_3 != 0x1518) {
                if (param_3 != 0x1522) goto LAB_004625dd;
                goto LAB_00461e38;
              }
              goto LAB_00461e39;
            }
            out = *(int **)(self + 0x74 + iVar3 * 4);
            PVWEdit::GetText((int)pvwEdit6,out + 99);
            std::string::operator_assign(*out + 0x18,(int)pvwEdit6);
            if (str9 != 0) {
              if (*(int *)(str9 + -0xc) != -1) {
                out = (int *)(str9 + -0xc);
                if (out == &g_nullStringRep) {
                  iVar3 = 1;
                }
                else if (out == &g_nullStringRep) {
                  iVar3 = 1;
                }
                else {
                  *out = *out + -1;
                  iVar3 = *out + 1;
                }
                if (iVar3 != 0) goto LAB_004625dd;
              }
              operator_delete();
            }
            goto LAB_004625dd;
          }
          if (param_3 != 0x1536) {
            if (param_3 != 0x1540) {
              if (param_3 != 0x154a) goto LAB_004625dd;
              goto LAB_00461efc;
            }
            goto LAB_00461efd;
          }
        }
        out = *(int **)(self + 0x74 + iVar3 * 4);
        PVWEdit::GetText((int)pvwEdit5,out + 0x92);
        std::string::operator_assign(*out + 0x28,(int)pvwEdit5);
        if (str8 != 0) {
          if (*(int *)(str8 + -0xc) != -1) {
            out = (int *)(str8 + -0xc);
            if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *out = *out + -1;
              iVar3 = *out + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 < 0x15b9) {
        if (param_3 == 0x15b8) {
          iVar3 = 1;
LAB_00462178:
          out = *(int **)(self + 0x84 + iVar3 * 4);
          PVWEdit::GetText((int)pvwEdit3,out + 0x92);
          std::string::operator_assign(*out + 0x28,(int)pvwEdit3);
          if (str5 != 0) {
            if (*(int *)(str5 + -0xc) != -1) {
              out = (int *)(str5 + -0xc);
              if (out == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (out == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *out = *out + -1;
                iVar3 = *out + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            operator_delete();
          }
        }
        else {
          if (param_3 != 0x1586) {
            if (param_3 != 0x1590) {
              if (param_3 != 0x15ae) goto LAB_004625dd;
              goto LAB_00462178;
            }
            iVar3 = 1;
          }
          out = *(int **)(self + 0x84 + iVar3 * 4);
          PVWEdit::GetText((int)pvwEdit4,out + 99);
          std::string::operator_assign(*out + 0x18,(int)pvwEdit4);
          if (str6 != 0) {
            if (*(int *)(str6 + -0xc) != -1) {
              out = (int *)(str6 + -0xc);
              if (out == &g_nullStringRep) {
                iVar3 = 1;
              }
              else if (out == &g_nullStringRep) {
                iVar3 = 1;
              }
              else {
                *out = *out + -1;
                iVar3 = *out + 1;
              }
              if (iVar3 != 0) goto LAB_004625dd;
            }
            operator_delete();
          }
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x15d6) {
        PVWEdit::GetText((int)pvwEdit,(int *)(self + 0x170));
        std::string::operator_assign(*(int *)(self + 0x60) + 0x10,(int)pvwEdit);
        if (str != 0) {
          if (*(int *)(str + -0xc) != -1) {
            out = (int *)(str + -0xc);
            if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *out = *out + -1;
              iVar3 = *out + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 != 0x332c) goto LAB_004625dd;
    }
    puVar1 = *(undefined4 **)(self + 0x94 + iVar3 * 4);
    out = puVar1 + 2;
    text = (uint *)*puVar1;
    PVWEdit::GetText((int)control2,puVar1 + 0x34);
    LookupPropertiesViewWindows::GetControlTip(self,(int)control2,text,out);
    if (str4 != 0) {
      if (*(int *)(str4 + -0xc) != -1) {
        out = (int *)(str4 + -0xc);
        if (out == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (out == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *out = *out + -1;
          iVar3 = *out + 1;
        }
        if (iVar3 != 0) goto LAB_004625dd;
      }
      operator_delete();
    }
    goto LAB_004625dd;
  }
  if (param_3 < 0x33a5) {
    if (param_3 != 0x33a4) {
      if (0x3372 < param_3) {
        if (param_3 != 0x337c) {
          if (param_3 != 0x3386) {
            if (param_3 != 0x339a) goto LAB_004625dd;
            goto LAB_00462332;
          }
          iVar3 = 1;
        }
        puVar1 = *(undefined4 **)(self + 0x84 + iVar3 * 4);
        out = puVar1 + 2;
        text = (uint *)*puVar1;
        PVWEdit::GetText((int)control3,puVar1 + 0x34);
        LookupPropertiesViewWindows::GetControlTip(self,(int)control3,text,out);
        if (str7 != 0) {
          if (*(int *)(str7 + -0xc) != -1) {
            out = (int *)(str7 + -0xc);
            if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else if (out == &g_nullStringRep) {
              iVar3 = 1;
            }
            else {
              *out = *out + -1;
              iVar3 = *out + 1;
            }
            if (iVar3 != 0) goto LAB_004625dd;
          }
          operator_delete();
        }
        goto LAB_004625dd;
      }
      if (param_3 == 0x3372) {
        iVar3 = 1;
LAB_00461d72:
        iVar3 = iVar3 + 1;
LAB_00461d73:
        iVar3 = iVar3 + 1;
      }
      else if (param_3 != 0x3354) {
        if (param_3 != 0x335e) {
          if (param_3 != 0x3368) goto LAB_004625dd;
          goto LAB_00461d72;
        }
        goto LAB_00461d73;
      }
      puVar1 = *(undefined4 **)(self + 0x74 + iVar3 * 4);
      out = puVar1 + 2;
      text = (uint *)*puVar1;
      PVWEdit::GetText((int)control4,puVar1 + 0x34);
      LookupPropertiesViewWindows::GetControlTip(self,(int)control4,text,out);
      if (str10 != 0) {
        if (*(int *)(str10 + -0xc) != -1) {
          out = (int *)(str10 + -0xc);
          if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else if (out == &g_nullStringRep) {
            iVar3 = 1;
          }
          else {
            *out = *out + -1;
            iVar3 = *out + 1;
          }
          if (iVar3 != 0) goto LAB_004625dd;
        }
        operator_delete();
      }
      goto LAB_004625dd;
    }
  }
  else {
    if (param_3 < 0x33e1) {
      if (param_3 == 0x33e0) goto LAB_00462403;
      if (param_3 == 0x33b8) goto LAB_00462331;
      if (param_3 != 0x33c2) {
        if (param_3 != 0x33d6) goto LAB_004625dd;
        goto LAB_00462330;
      }
    }
    else {
      if (param_3 == 0x33fe) {
        iVar3 = 1;
LAB_00462330:
        iVar3 = iVar3 + 1;
LAB_00462331:
        iVar3 = iVar3 + 1;
LAB_00462332:
        puVar1 = *(undefined4 **)(self + 100 + iVar3 * 4);
        out = puVar1 + 2;
        text = (uint *)*puVar1;
        PVWEdit::GetText((int)control,puVar1 + 0x34);
        LookupPropertiesViewWindows::GetControlTip(self,(int)control,text,out);
        if (str3 != 0) {
          if (*(int *)(str3 + -0xc) != -1) {
            out = (int *)(str3 + -0xc);
            if (out == &g_nullStringRep) {
              prevRefs = 1;
            }
            else if (out == &g_nullStringRep) {
              prevRefs = 1;
            }
            else {
              *out = *out + -1;
              prevRefs = *out + 1;
            }
            if (prevRefs != 0) goto LAB_00462402;
          }
          operator_delete();
          str3 = 0;
        }
      }
      else if (param_3 != 0x3408) goto LAB_004625dd;
LAB_00462402:
      iVar3 = iVar3 + 1;
LAB_00462403:
      iVar3 = iVar3 + 1;
    }
    iVar3 = iVar3 + 1;
  }
  out = *(int **)(self + 100 + iVar3 * 4);
  PVWEdit::GetText((int)pvwEdit2,out + 99);
  std::string::operator_assign(*out + 0x18,(int)pvwEdit2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      out = (int *)(str2 + -0xc);
      if (out == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (out == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *out = *out + -1;
        iVar3 = *out + 1;
      }
      if (iVar3 != 0) goto LAB_004625dd;
    }
    operator_delete();
  }
LAB_004625dd:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004625f0  LookupPropertiesViewWindows::OnComboChange   (74 bytes)   [rtti:vtable virtual slot 29]
//   vtable slot 29 (introduced by PropertiesViewWindows); a combo box selection changed
void __cdecl LookupPropertiesViewWindows::OnComboChange(int self,char param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_3 == 0x14aa) {
    iVar1 = 1;
  }
  else if (param_3 != 0x2bc0) {
    return;
  }
  iVar1 = **(int **)(self + 0x94 + iVar1 * 4);
  std::string::replace_fill(iVar1 + 0x28,0,*(uint *)(*(int *)(iVar1 + 0x30) + -4),1,param_2 + '0');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004629ac  LookupPropertiesViewWindows::URLControls::~URLControls   (112 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::URLControls::_dtor
void __cdecl LookupPropertiesViewWindows::URLControls::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb268);
  if (self != 0) {
    PVWEdit::_dtor((int *)(self + 0x18c),2);
    PVWEdit::_dtor((int *)(self + 0xd0),2);
    PVWCheckBox::_dtor((int *)(self + 8),2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462a1c  LookupPropertiesViewWindows::DDEControls::~DDEControls   (133 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::DDEControls::_dtor
void __cdecl LookupPropertiesViewWindows::DDEControls::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb270);
  if (self != 0) {
    PVWEdit::_dtor((int *)(self + 0x248),2);
    PVWEdit::_dtor((int *)(self + 0x18c),2);
    PVWEdit::_dtor((int *)(self + 0xd0),2);
    PVWCheckBox::_dtor((int *)(self + 8),2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462aa4  LookupPropertiesViewWindows::MessageControls::~MessageControls   (133 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::MessageControls::_dtor
void __cdecl LookupPropertiesViewWindows::MessageControls::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb278);
  if (self != 0) {
    PVWEdit::_dtor((int *)(self + 0x248),2);
    PVWEdit::_dtor((int *)(self + 0x18c),2);
    PVWEdit::_dtor((int *)(self + 0xd0),2);
    PVWCheckBox::_dtor((int *)(self + 8),2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462b2c  LookupPropertiesViewWindows::ProgramControls::~ProgramControls   (153 bytes)   [rtti:dtor destructor]
//   written in code as LookupPropertiesViewWindows::ProgramControls::_dtor
void __cdecl LookupPropertiesViewWindows::ProgramControls::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb280);
  if (self != 0) {
    PVWEnumeration::_dtor((int *)(self + 0x310),2);
    PVWPushButton::_dtor((int *)(self + 0x248),2);
    PVWEdit::_dtor((int *)(self + 0x18c),2);
    PVWEdit::_dtor((int *)(self + 0xd0),2);
    PVWCheckBox::_dtor((int *)(self + 8),2);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462bc8  InitRegistryPaths   (85 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00401150. static initialiser of g_registryKeyPath and g_appDataSubdir
//   file placement: inferred (address adjacency)
void __stdcall InitRegistryPaths(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb3c0);
  std::string::string_from_cstr(0x51a840,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  std::string::string_from_cstr(0x51a850,(uint *)("Software\\Crossword Man\\TEA Crossword Helper 2.11" + 8));
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462c20  DestroyRegistryPaths   (290 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004011a8. static destructor of g_registryKeyPath and g_appDataSubdir
//   file placement: inferred (address adjacency)
void __stdcall DestroyRegistryPaths(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb3d4);
  if (DAT_0051a858 != 0) {
    if (*(int *)(DAT_0051a858 + -0xc) != -1) {
      strRep = (int *)(DAT_0051a858 + -0xc);
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
      if (prevRefs != 0) goto LAB_00462cb3;
    }
    operator_delete();
    DAT_0051a858 = 0;
  }
LAB_00462cb3:
  if (DAT_0051a848 != 0) {
    if (*(int *)(DAT_0051a848 + -0xc) != -1) {
      strRep = (int *)(DAT_0051a848 + -0xc);
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
      if (prevRefs != 0) goto LAB_00462d32;
    }
    operator_delete();
    DAT_0051a848 = 0;
  }
LAB_00462d32:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00462d44  std::string::string_462d44   (87 bytes)   [analysis (matched TEACON.exe, duplicated code)]
//   same masked bytes as TEACON.exe 0x0040da88 (87 bytes; the code occurs several times, e.g. one template instance per type). default constructor: data = the shared empty rep
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00462d82) */
int __cdecl std::string::string_462d44(int self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fb3f4);
  *(undefined4 *)(self + 8) = 0;
  *(undefined **)(self + 8) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
