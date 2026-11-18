// TEA.exe — application module "TEAPropertiesViewWindows"
// 17 functions, 0x00404870..0x0040758c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00404870  TEAPropertiesViewWindows::TEAPropertiesViewWindows   (1768 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TEAPropertiesViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl TEAPropertiesViewWindows::TEAPropertiesViewWindows(int *self,int vbasesBuilt,undefined4 *param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  DWORD sysColor;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eaea4);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x81c);
    self[0x81c] = (int)(self + 0x819);
    self[0x81d] = (int)(self + 0x81a);
    self[1] = (int)(self + 0x819);
    self[2] = (int)(self + 0x81a);
    self[0x818] = 0;
    self[0x81b] = 0;
    self[0x819] = (int)&OWL::TEventHandler::vftable;
    self[0x81a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x81c,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8000;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -8000;
  if (param_3 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *param_3;
  }
  TabbyPropertiesViewWindows::TabbyPropertiesViewWindows(self,1,0x4eadec,5,5,0x4eae54,uVar1,param_4,(uint *)0x10d6,1);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8000;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 8000;
  self[3] = (int)&TEAPropertiesViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004eb2c8;
  *(undefined ***)self[2] = &PTR_LAB_004eb2d4;
  *(undefined ***)(*self + 8) = &TEAPropertiesViewWindows::vftable_TWindow;
  PVWEdit::PVWEdit(self + 0x48,0,self,0x10e0,0);
  PVWEdit::PVWEdit(self + 0x77,0,self,0x10ea,0);
  PVWCheckBox::PVWCheckBox(self + 0xa6,0,self,0x2a4e);
  PVWCheckBox::PVWCheckBox(self + 0xd8,0,self,0x3a20);
  PVWRadioButton::PVWRadioButton(self + 0x10a,0,self,0x1a36,0);
  PVWRadioButton::PVWRadioButton(self + 0x13e,0,self,0x1a2c,0);
  PVWRadioButton::PVWRadioButton(self + 0x172,0,self,0x1a40,0);
  PVWPushButton::PVWPushButton(self + 0x1a6,0,self,0x8d4);
  PVWCombo::PVWCombo(self + 0x1d8,0,self,0x8de,0);
  OWL::TStatic::TStatic_4c7a28(self + 0x206,0,*self,0x314c,0,0);
  PVWColourButton::PVWColourButton(self + 0x232,0,self,0x312e,self[0x206]);
  OWL::TStatic::TStatic_4c7a28(self + 0x263,0,*self,0x12ca,0,0);
  PVWFontButton::PVWFontButton(self + 0x290,0,self,0x12b6,self[0x263],DAT_004ead2c,0x4eae5c);
  OWL::TStatic::TStatic_4c7a28(self + 0x2d8,0,*self,0x12c0,0,0);
  PVWFontButton::PVWFontButton(self + 0x304,0,self,0x12ac,self[0x2d8],DAT_004ead2c,0x4eae64);
  OWL::TStatic::TStatic_4c7a28(self + 0x34c,0,*self,0x323c,0,0);
  PVWFontButton::PVWFontButton(self + 0x378,0,self,0x3232,self[0x34c],DAT_004ead2c,0x4eae6c);
  OWL::TStatic::TStatic_4c7a28(self + 0x3c0,0,*self,0x164e,0,0);
  PVWFontButton::PVWFontButton(self + 0x3ec,0,self,0x1644,self[0x3c0],DAT_004ead2c,0x4eae64);
  OWL::TStatic::TStatic_4c7a28(self + 0x434,0,*self,0x3142,0,0);
  PVWFontButton::PVWFontButton(self + 0x460,0,self,0x3124,self[0x434],DAT_004ead2c,0x4eae71);
  OWL::TStatic::TStatic_4c7a28(self + 0x4a8,0,*self,0x3156,0,0);
  PVWFontButton::PVWFontButton(self + 0x4d4,0,self,0x3138,self[0x4a8],DAT_004ead2c,0x4eae71);
  PVWCheckBox::PVWCheckBox(self + 0x51c,0,self,0x361a);
  PVWCheckBox::PVWCheckBox(self + 0x54e,0,self,0x1694);
  PVWRadioButton::PVWRadioButton(self + 0x580,0,self,0x3426,0);
  PVWRadioButton::PVWRadioButton(self + 0x5b4,0,self,0x3430,0);
  PVWCheckBox::PVWCheckBox(self + 0x5e8,0,self,0x369c);
  PVWRadioButton::PVWRadioButton(self + 0x61a,0,self,0x36a6,0);
  PVWRadioButton::PVWRadioButton(self + 0x64e,0,self,0x36a7,0);
  PVWRadioButton::PVWRadioButton(self + 0x682,0,self,0x36a8,0);
  PVWCheckBox::PVWCheckBox(self + 0x6b6,0,self,0x36ba);
  PVWCheckBox::PVWCheckBox(self + 0x6e8,0,self,0x36c4);
  PVWCheckBox::PVWCheckBox(self + 0x71a,0,self,0x2f26);
  PVWCheckBox::PVWCheckBox(self + 0x74c,0,self,0x2f27);
  PVWCheckBox::PVWCheckBox(self + 0x77e,0,self,0x2f28);
  PVWCheckBox::PVWCheckBox(self + 0x7b0,0,self,0x2f29);
  sysColor = GetSysColor(5);
  self[0x7e2] = sysColor;
  self[0x7e3] = (int)param_3;
  self[0x7e4] = param_5;
  PVWPushButton::PVWPushButton(self + 0x7e6,0,self,0x10f4);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00404f80  TEAPropertiesViewWindows::~TEAPropertiesViewWindows   (1709 bytes)   [rtti:dtor destructor]
//   written in code as TEAPropertiesViewWindows::_dtor
void __cdecl TEAPropertiesViewWindows::_dtor(int *self,byte dtorFlags)

{
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb09c);
  if (self != (int *)0x0) {
    self[3] = (int)&TEAPropertiesViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004eb2c8;
    *(undefined ***)self[2] = &PTR_LAB_004eb2d4;
    *(undefined ***)(*self + 8) = &TEAPropertiesViewWindows::vftable_TWindow;
    PVWPushButton::_dtor(self + 0x7e6,2);
    PVWCheckBox::_dtor(self + 0x7b0,2);
    PVWCheckBox::_dtor(self + 0x77e,2);
    PVWCheckBox::_dtor(self + 0x74c,2);
    PVWCheckBox::_dtor(self + 0x71a,2);
    PVWCheckBox::_dtor(self + 0x6e8,2);
    PVWCheckBox::_dtor(self + 0x6b6,2);
    PVWRadioButton::_dtor(self + 0x682,2);
    PVWRadioButton::_dtor(self + 0x64e,2);
    PVWRadioButton::_dtor(self + 0x61a,2);
    PVWCheckBox::_dtor(self + 0x5e8,2);
    PVWRadioButton::_dtor(self + 0x5b4,2);
    PVWRadioButton::_dtor(self + 0x580,2);
    PVWCheckBox::_dtor(self + 0x54e,2);
    PVWCheckBox::_dtor(self + 0x51c,2);
    PVWFontButton::_dtor(self + 0x4d4,2);
    control = self + 0x4a8;
    *(int *)(self[0x4a9] + -4) = *(int *)(self[0x4a9] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x4a9] + -4) = *(int *)(self[0x4a9] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x4a9] + -4) = *(int *)(self[0x4a9] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x4b2,0);
    *(int *)(self[0x4a9] + -4) = *(int *)(self[0x4a9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x4b0,0);
    PVWFontButton::_dtor(self + 0x460,2);
    control = self + 0x434;
    *(int *)(self[0x435] + -4) = *(int *)(self[0x435] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x435] + -4) = *(int *)(self[0x435] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x435] + -4) = *(int *)(self[0x435] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x43e,0);
    *(int *)(self[0x435] + -4) = *(int *)(self[0x435] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x43c,0);
    PVWFontButton::_dtor(self + 0x3ec,2);
    control = self + 0x3c0;
    *(int *)(self[0x3c1] + -4) = *(int *)(self[0x3c1] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x3c1] + -4) = *(int *)(self[0x3c1] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x3c1] + -4) = *(int *)(self[0x3c1] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x3ca,0);
    *(int *)(self[0x3c1] + -4) = *(int *)(self[0x3c1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x3c8,0);
    PVWFontButton::_dtor(self + 0x378,2);
    control = self + 0x34c;
    *(int *)(self[0x34d] + -4) = *(int *)(self[0x34d] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x34d] + -4) = *(int *)(self[0x34d] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x34d] + -4) = *(int *)(self[0x34d] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x356,0);
    *(int *)(self[0x34d] + -4) = *(int *)(self[0x34d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x354,0);
    PVWFontButton::_dtor(self + 0x304,2);
    control = self + 0x2d8;
    *(int *)(self[0x2d9] + -4) = *(int *)(self[0x2d9] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x2d9] + -4) = *(int *)(self[0x2d9] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x2d9] + -4) = *(int *)(self[0x2d9] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x2e2,0);
    *(int *)(self[0x2d9] + -4) = *(int *)(self[0x2d9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x2e0,0);
    PVWFontButton::_dtor(self + 0x290,2);
    control = self + 0x263;
    *(int *)(self[0x264] + -4) = *(int *)(self[0x264] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x264] + -4) = *(int *)(self[0x264] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x264] + -4) = *(int *)(self[0x264] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x26d,0);
    *(int *)(self[0x264] + -4) = *(int *)(self[0x264] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x26b,0);
    PVWColourButton::_dtor(self + 0x232,2);
    control = self + 0x206;
    *(int *)(self[0x207] + -4) = *(int *)(self[0x207] + -4) + -4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + -4;
    OWL::TControl::_dtor(control,0);
    *(int *)(self[0x207] + -4) = *(int *)(self[0x207] + -4) + 4;
    *(int *)(*control + -4) = *(int *)(*control + -4) + 4;
    *(int *)(self[0x207] + -4) = *(int *)(self[0x207] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x210,0);
    *(int *)(self[0x207] + -4) = *(int *)(self[0x207] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x20e,0);
    PVWCombo::_dtor(self + 0x1d8,2);
    PVWPushButton::_dtor(self + 0x1a6,2);
    PVWRadioButton::_dtor(self + 0x172,2);
    PVWRadioButton::_dtor(self + 0x13e,2);
    PVWRadioButton::_dtor(self + 0x10a,2);
    PVWCheckBox::_dtor(self + 0xd8,2);
    PVWCheckBox::_dtor(self + 0xa6,2);
    PVWEdit::_dtor(self + 0x77,2);
    PVWEdit::_dtor(self + 0x48,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -8000;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -8000;
    TabbyPropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 8000;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 8000;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x81c,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x81a,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405630  TEAPropertiesViewWindows::OnButton   (1506 bytes)   [rtti:vtable virtual slot 19]
//   vtable slot 19 (introduced by PropertiesViewWindows); a push button, check box or radio button was clicked (PVW*::BNClicked call it with the control id)
void __cdecl TEAPropertiesViewWindows::OnButton(undefined4 *self,int param_2,int param_3)

{
  undefined4 keyPath;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  int module;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  uint *paths;
  undefined1 str [8];
  int str2;
  int dictionaryListViewWindows [3];
  int local_858;
  
  __InitExceptBlockLDTC(0x4eb0fc);
  if (param_3 == 0x10f4) {
    (**(code **)(self[3] + 0x54))();
    (**(code **)(self[3] + 0x54))();
    keyPath = FUN_004a76a8(self[0x18],0x130b,0,0);
    TEAViewProfileWindows::Save(self[0x7e4],keyPath);
    goto LAB_00405bfe;
  }
  if (param_3 != 0x8d4) {
    if (param_3 < 0x3431) {
      if (param_3 == 0x3430) {
LAB_00405b86:
        *(uint *)(self[0x7e4] + 0x1c8) = (uint)(param_3 == 0x3430);
      }
      else if (param_3 < 0x1a41) {
        if (param_3 == 0x1a40) {
          *(undefined4 *)(self[0x7e4] + 0x24) = 2;
        }
        else if (param_3 == 0x1694) {
          module = FUN_004a76a8(self[0x54e],0xf0,0,0);
          *(uint *)(self[0x7e4] + 0x1c4) = (uint)(module != 0);
        }
        else if (param_3 == 0x1a2c) {
          *(undefined4 *)(self[0x7e4] + 0x24) = 0;
        }
        else if (param_3 == 0x1a36) {
          *(undefined4 *)(self[0x7e4] + 0x24) = 1;
        }
      }
      else if (param_3 == 0x2a4e) {
        TEAAppWindows::Nothing_465244();
        module = FUN_004a76a8(self[0xa6],0xf0,0,0);
        (*(uint *)&g_exclusiveVariables) = (uint)(module != 0);
      }
      else if (param_3 - 0x2f26U < 4) {
        piVar4 = FUN_004dd744(param_2,*(int *)(param_2 + 0xc),(int *)&DAT_00402b6c,
                              (int *)&DAT_00405c14,1);
        module = FUN_004a76a8(*piVar4,0xf0,0,0);
        *(uint *)(self[0x7e4] + -0xbacc + param_3 * 4) = (uint)(module != 0);
      }
      else if (param_3 - 0x2f26U == 0x500) goto LAB_00405b86;
    }
    else if (param_3 < 0x36bb) {
      if (param_3 == 0x36ba) {
        iVar3 = FUN_004a76a8(self[0x6b6],0xf0,0,0);
        module = self[0x7e4];
        *(uint *)(module + 0x1b0) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(module + 0x1b8) = 1;
          FUN_004ac750(self + 0x5e8,1);
        }
      }
      else if (param_3 == 0x361a) {
        module = FUN_004a76a8(self[0x51c],0xf0,0,0);
        *(uint *)(self[0x7e4] + 0x1c0) = (uint)(module != 0);
      }
      else if (param_3 == 0x369c) {
        iVar3 = FUN_004a76a8(self[0x5e8],0xf0,0,0);
        module = self[0x7e4];
        *(uint *)(module + 0x1b8) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(module + 0x1b0) = 1;
          FUN_004ac750(self + 0x6b6,1);
        }
      }
      else if (param_3 - 0x36a6U < 3) {
        *(int *)(self[0x7e4] + 0x1bc) = param_3 + -0x36a7;
      }
    }
    else if (param_3 == 0x36c4) {
      module = FUN_004a76a8(self[0x6e8],0xf0,0,0);
      *(uint *)(self[0x7e4] + 0x1b4) = (uint)(module != 0);
    }
    else if (param_3 == 0x3a20) {
      module = FUN_004a76a8(self[0xd8],0xf0,0,0);
      *(uint *)(self[0x7e4] + 0x20) = (uint)(module != 0);
    }
    TEAPropertiesViewWindows::UpdateEnabled((int)self);
    TEAViewWindows::RestartSearch((int *)self[0x7e3]);
    goto LAB_00405bfe;
  }
  module = 4;
  puVar2 = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self[0x7e4] + 0x28));
  std::string::string_from_cstr((int)str,puVar2);
  DictionaryListViewWindows::DictionaryListViewWindows(dictionaryListViewWindows,0,*self,self[0xe],(int)str,module);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      piVar4 = (int *)(str2 + -0xc);
      if (piVar4 == &g_nullStringRep) {
        module = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        module = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        module = *piVar4 + 1;
      }
      if (module != 0) goto LAB_004057b3;
    }
    operator_delete();
    str2 = 0;
  }
LAB_004057b3:
  module = (**(code **)(local_858 + 0x14))();
  if (module == 1) {
    DictionaryListViewWindows::GetSelectedPaths((int)result,(int)dictionaryListViewWindows);
    TEAPropertiesViewWindows::FillDefinitionDictionaries((int)self,paths);
    if (paths != (uint *)0x0) {
      if (paths[-3] != 0xffffffff) {
        puVar2 = paths + -3;
        if (puVar2 == &g_nullStringRep) {
          module = 1;
        }
        else if (puVar2 == &g_nullStringRep) {
          module = 1;
        }
        else {
          *puVar2 = *puVar2 - 1;
          module = *puVar2 + 1;
        }
        if (module != 0) goto LAB_004058b0;
      }
      operator_delete();
      paths = (uint *)0x0;
    }
  }
LAB_004058b0:
  DictionaryListViewWindows::_dtor(dictionaryListViewWindows,2);
LAB_00405bfe:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d40  TEAPropertiesViewWindows::OnComboChange   (33 bytes)   [rtti:vtable virtual slot 29; function defined from vtable-slot]
//   vtable slot 29 (introduced by PropertiesViewWindows); a combo box selection changed
void __cdecl TEAPropertiesViewWindows::OnComboChange(int self)

{
  uint *paths;
  
  paths = (uint *)PVWCombo::GetSelectedValue(self + 0x760);
  TEAPropertiesViewWindows::FillDefinitionDictionaries(self,paths);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d64  TEAPropertiesViewWindows::OnColourChanged   (140 bytes)   [rtti:vtable virtual slot 27]
//   vtable slot 27 (introduced by PropertiesViewWindows); a colour button chose a new colour
void __cdecl TEAPropertiesViewWindows::OnColourChanged(int self,int *colour)

{
  *(int *)(*(int *)(self + 0x1f90) + 0x2c) = *colour;
  PVWColourButton::SetColour((int *)(self + 0x8c8),colour);
  PVWFontButton::SetSampleFont((int *)(self + 0x1180),(int *)(*(int *)(self + 0x1f90) + 0x130),colour,0,
               0x3ff00000,0,0x3ff00000);
  PVWFontButton::SetSampleFont((int *)(self + 0x1350),(int *)(*(int *)(self + 0x1f90) + 0x170),colour,0,
               0x3ff00000,0,0x3ff00000);
  TEAViewWindows::ApplyDefinitionSettings(*(int *)(self + 0x1f8c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405df0  TEAPropertiesViewWindows::OnFontChanged   (673 bytes)   [rtti:vtable virtual slot 28]
//   vtable slot 28 (introduced by PropertiesViewWindows); a font button chose a new font
void __cdecl TEAPropertiesViewWindows::OnFontChanged(int self,undefined4 *column,int param_3)

{
  int iVar1;
  int x;
  undefined4 *puVar3;
  int y;
  int w;
  int h;
  uint colour;
  
  if (param_3 == 0x12b6) {
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x30);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    PVWFontButton::SetSampleFont((int *)(self + 0xa40),(int *)(iVar1 + 0x30),(int *)(self + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    TEAViewWindows::LayoutQueryControls(*(int *)(self + 0x1f8c));
  }
  else if (param_3 == 0x12ac) {
    TEAPrintoutFeeder::GetLine(*(int *)(self + 0x1f90) + 0xb0,*(int *)(self + 0x1f90) + 0x70,(int)column);
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x70);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    PVWFontButton::SetSampleFont((int *)(self + 0xc10),(int *)(iVar1 + 0x70),(int *)(self + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    PVWFontButton::SetSampleFont((int *)(self + 0xde0),(int *)(*(int *)(self + 0x1f90) + 0xb0),
                 (int *)(self + 0x1f88),0,0x3ff00000,0,0x3ff00000);
    TEAViewWindows::ApplyListFonts(*(int *)(self + 0x1f8c));
  }
  else if (param_3 == 0x3232) {
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xb0);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    PVWFontButton::SetSampleFont((int *)(self + 0xde0),(int *)(iVar1 + 0xb0),(int *)(self + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    TEAViewWindows::ApplyListFonts(*(int *)(self + 0x1f8c));
  }
  else if (param_3 == 0x1644) {
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xf0);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    h = 0x3ff00000;
    w = 0;
    y = 0x3ff00000;
    x = 0;
    colour = FUN_0048c12c(&DAT_0051b198);
    PVWFontButton::SetSampleFont((int *)(self + 0xfb0),(int *)(iVar1 + 0xf0),(int *)&colour,x,y,w,
                 h);
  }
  else if (param_3 == 0x3124) {
    TEAPrintoutFeeder::GetLine(*(int *)(self + 0x1f90) + 0x170,*(int *)(self + 0x1f90) + 0x130,(int)column)
    ;
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x130);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    PVWFontButton::SetSampleFont((int *)(self + 0x1180),(int *)(iVar1 + 0x130),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
    PVWFontButton::SetSampleFont((int *)(self + 0x1350),(int *)(*(int *)(self + 0x1f90) + 0x170),
                 (int *)(*(int *)(self + 0x1f90) + 0x2c),0,0x3ff00000,0,0x3ff00000);
    TEAViewWindows::ApplyDefinitionSettings(*(int *)(self + 0x1f8c));
  }
  else if (param_3 == 0x3138) {
    iVar1 = *(int *)(self + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x170);
    for (x = 0x10; x != 0; x = x + -1) {
      *puVar3 = *column;
      column = column + 1;
      puVar3 = puVar3 + 1;
    }
    PVWFontButton::SetSampleFont((int *)(self + 0x1350),(int *)(iVar1 + 0x170),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406094  TEAPropertiesViewWindows::OnEditKillFocus   (314 bytes)   [rtti:vtable virtual slot 21]
//   vtable slot 21 (introduced by PropertiesViewWindows); an edit or rich edit lost the focus (EN_KILLFOCUS from PVWEdit/PVWRichEdit)
void __cdecl TEAPropertiesViewWindows::OnEditKillFocus(int self,undefined4 param_2,int param_3)

{
  int *out;
  uint uVar2;
  int str;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 pvwEdit [8];
  byte *strRep;
  
  __InitExceptBlockLDTC(0x4eb16c);
  if (param_3 == 0x10e0) {
    str = *(int *)(self + 0x1f90);
    out = (int *)(self + 0x120);
  }
  else {
    str = *(int *)(self + 0x1f90) + 0x10;
    out = (int *)(self + 0x1dc);
  }
  PVWEdit::GetText((int)pvwEdit,out);
  uVar2 = std::string::compare(str,0,*(uint *)(*(int *)(str + 8) + -4),strRep,*(uint *)(strRep + -4));
  if (uVar2 != 0) {
    TEAAppWindows::Nothing_465244();
    std::string::operator_assign(str,(int)pvwEdit);
    TEAViewWindows::RestartSearch(*(int **)(self + 0x1f8c));
  }
  if (strRep != (byte *)0x0) {
    if (*(int *)(strRep + -0xc) != -1) {
      strRep = strRep + -0xc;
      if (strRep == (byte *)&g_nullStringRep) {
        str = 1;
      }
      else if (strRep == (byte *)&g_nullStringRep) {
        str = 1;
      }
      else {
        *(int *)strRep = *(int *)strRep + -1;
        str = *(int *)strRep + 1;
      }
      if (str != 0) goto LAB_004061bd;
    }
    operator_delete();
  }
LAB_004061bd:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  TEAPropertiesViewWindows::OnSelectionCommitted   (137 bytes)   [rtti:vtable virtual slot 36]
//   vtable slot 36 (introduced by PropertiesViewWindows); a selection was confirmed (saves the choice)
void __cdecl TEAPropertiesViewWindows::OnSelectionCommitted(int self,int param_2)

{
  int iVar1;
  uint *value;
  int iVar3;
  uint valueName [13];
  int local_8;
  
  local_8 = 1;
  iVar3 = 0;
  while( true ) {
    value = (uint *)("Pattern Property Change" + 0x17);
    iVar1 = (**(code **)(*(int *)(self + 0x76c) + 0x24))();
    if (iVar3 < iVar1) {
      value = (uint *)PVWCombo::GetSelectionIndex(self + 0x760);
    }
    local_8 = local_8 + 1;
    sprintf((undefined1 *)valueName,(byte *)"Dictionary%d");
    PropertiesViewWindows::SaveString(self,valueName,value);
    if ((char)*value == '\0') break;
    iVar3 = iVar3 + 1;
  }
  if (param_2 != 0) {
    PVWCombo::ClearItems(self + 0x760);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040625c  TEAPropertiesViewWindows::InitControls   (128 bytes)   [analysis]
//   fills the options controls from the profile
void __cdecl TEAPropertiesViewWindows::InitControls(int self)

{
  PVWEdit::SetIntValue((int *)(self + 0x120),*(int *)(self + 0x1f90));
  PVWEdit::SetIntValue((int *)(self + 0x1dc),*(int *)(self + 0x1f90) + 0x10);
  FUN_004ac750((int *)(self + 0x298),(uint)(g_exclusiveVariables != 0));
  FUN_004ac750((int *)(self + 0x360),(uint)(*(int *)(*(int *)(self + 0x1f90) + 0x20) != 0));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004062dc  TEAPropertiesViewWindows::SetupWindow   (1513 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEAPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004eb2e0 (through the this-adjusting thunk at 0x00406cbd); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAPropertiesViewWindows::vf11 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAPropertiesViewWindows::SetupWindow(int *self)

{
  int *colour;
  uint *paths;
  undefined4 *sehChainHead;
  int iVar3;
  int y;
  int w;
  int h;
  uint valueName [13];
  undefined1 *unused;
  undefined4 unused2;
  uint *unused3;
  uint *unused4;
  uint *unused5;
  uint colour2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  uint *paths2;
  
  __InitExceptBlockLDTC(0x4eb1b8);
  TabbyPropertiesViewWindows::SetupWindow(self);
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  (**(code **)(self[3] + 0xb8))();
  TEAPropertiesViewWindows::InitControls((int)self);
  FUN_004ac750(self + 0x10a,(uint)(*(int *)(self[0x7e4] + 0x24) == 1));
  FUN_004ac750(self + 0x13e,(uint)(*(int *)(self[0x7e4] + 0x24) == 0));
  FUN_004ac750(self + 0x172,(uint)(*(int *)(self[0x7e4] + 0x24) == 2));
  colour = self + 0x7e2;
  PVWFontButton::SetSampleFont(self + 0x290,(int *)(self[0x7e4] + 0x30),colour,0,0x3ff00000,0,0x3ff00000);
  PVWFontButton::SetSampleFont(self + 0x304,(int *)(self[0x7e4] + 0x70),colour,0,0x3ff00000,0,0x3ff00000);
  PVWFontButton::SetSampleFont(self + 0x378,(int *)(self[0x7e4] + 0xb0),colour,0,0x3ff00000,0,0x3ff00000);
  h = 0x3ff00000;
  w = 0;
  y = 0x3ff00000;
  iVar3 = 0;
  colour2 = FUN_0048c12c(&DAT_0051b198);
  PVWFontButton::SetSampleFont(self + 0x3ec,(int *)(self[0x7e4] + 0xf0),(int *)&colour2,iVar3,y,w,
               h);
  PVWFontButton::SetSampleFont(self + 0x460,(int *)(self[0x7e4] + 0x130),(int *)(self[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  PVWFontButton::SetSampleFont(self + 0x4d4,(int *)(self[0x7e4] + 0x170),(int *)(self[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  PVWColourButton::SetColour(self + 0x232,(int *)(self[0x7e4] + 0x2c));
  FUN_004ac750(self + 0x51c,(uint)(*(int *)(self[0x7e4] + 0x1c0) != 0));
  FUN_004ac750(self + 0x54e,(uint)(*(int *)(self[0x7e4] + 0x1c4) != 0));
  FUN_004ac750(self + 0x6b6,(uint)(*(int *)(self[0x7e4] + 0x1b0) != 0));
  FUN_004ac750(self + 0x6e8,(uint)(*(int *)(self[0x7e4] + 0x1b4) != 0));
  FUN_004ac750(self + 0x5e8,(uint)(*(int *)(self[0x7e4] + 0x1b8) != 0));
  FUN_004ac750(self + 0x682,(uint)(*(int *)(self[0x7e4] + 0x1bc) == 1));
  FUN_004ac750(self + 0x64e,(uint)(*(int *)(self[0x7e4] + 0x1bc) == 0));
  FUN_004ac750(self + 0x61a,(uint)(*(int *)(self[0x7e4] + 0x1bc) == -1));
  FUN_004ac750(self + 0x580,(uint)(*(int *)(self[0x7e4] + 0x1c8) == 0));
  FUN_004ac750(self + 0x5b4,(uint)(*(int *)(self[0x7e4] + 0x1c8) != 0));
  FUN_004ac750(self + 0x71a,(uint)(*(int *)(self[0x7e4] + 0x1cc) != 0));
  FUN_004ac750(self + 0x74c,(uint)(*(int *)(self[0x7e4] + 0x1d0) != 0));
  FUN_004ac750(self + 0x77e,(uint)(*(int *)(self[0x7e4] + 0x1d4) != 0));
  FUN_004ac750(self + 0x7b0,(uint)(*(int *)(self[0x7e4] + 0x1d8) != 0));
  iVar3 = 1;
  paths = (uint *)TSDictionaryList::GetPathList(*(undefined4 **)(self[0x7e4] + 0x28));
  PVWCombo::FillDictionaries((int)(self + 0x1d8),paths,iVar3);
  while( true ) {
    sprintf((undefined1 *)valueName,(byte *)"Dictionary%d");
    ehContext = 0x14;
    PropertiesViewWindows::LoadString((int)result,(int)self,valueName,
                 (uint *)("Pattern Property Change" + 0x17));
    ehContext = 8;
    if (paths2[-1] == 0) break;
    ehDtorCount = ehDtorCount + 1;
    PVWCombo::FillDictionaries((int)(self + 0x1d8),paths2,0);
    ehDtorCount = ehDtorCount + -1;
    if (paths2 != (uint *)0x0) {
      if (paths2[-3] != 0xffffffff) {
        paths = paths2 + -3;
        if (paths == &g_nullStringRep) {
          iVar3 = 1;
        }
        else if (paths == &g_nullStringRep) {
          iVar3 = 1;
        }
        else {
          *paths = *paths - 1;
          iVar3 = *paths + 1;
        }
        if (iVar3 != 0) goto LAB_004068a9;
      }
      unused4 = paths2 + -3;
      unused3 = paths2 + -3;
      operator_delete();
      unused2 = 0;
      unused = result;
      paths2 = (uint *)0x0;
    }
LAB_004068a9:
    ehContext = 0;
  }
  if (paths2 != (uint *)0x0) {
    if (paths2[-3] != 0xffffffff) {
      paths = paths2 + -3;
      if (paths == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (paths == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *paths = *paths - 1;
        iVar3 = *paths + 1;
      }
      if (iVar3 != 0) goto LAB_004068b5;
    }
    unused5 = paths2 + -3;
    operator_delete();
  }
LAB_004068b5:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068c8  TEAPropertiesViewWindows::OnPageChanged   (30 bytes)   [rtti:vtable virtual slot 48]
//   vtable slot 48 (introduced by TabbyPropertiesViewWindows); a tab page was selected: shows its controls
void __cdecl TEAPropertiesViewWindows::OnPageChanged(int *self)

{
  TabbyPropertiesViewWindows::OnPageChanged(self);
  TEAPropertiesViewWindows::UpdateEnabled((int)self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068e8  TEAPropertiesViewWindows::UpdateEnabled   (154 bytes)   [analysis]
//   enables the options that depend on others
void __cdecl TEAPropertiesViewWindows::UpdateEnabled(int self)

{
  (**(code **)(*(int *)(*(int *)(self + 0x1ba0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x1a08) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x1938) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(self + 0x1868) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406984  TEAPropertiesViewWindows::FillDefinitionDictionaries   (78 bytes)   [analysis]
//   lists the dictionaries of a path list in the definition-dictionary combo
void __cdecl TEAPropertiesViewWindows::FillDefinitionDictionaries(int self,uint *paths)

{
  undefined4 *tsDictionaryList;
  uint *paths2;
  int selected;
  
  tsDictionaryList = TSDictionaryList::Open(paths);
  TSDictionaryList::ReleaseDictionaries(*(int *)(*(int *)(self + 0x1f90) + 0x28));
  *(undefined4 **)(*(int *)(self + 0x1f90) + 0x28) = tsDictionaryList;
  selected = 1;
  paths2 = (uint *)TSDictionaryList::GetPathList(tsDictionaryList);
  PVWCombo::FillDictionaries(self + 0x760,paths2,selected);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004073dc  OWL::TRadioButton::~TRadioButton   (137 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRadioButton::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRadioButton::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb368);
  if (self != (int *)0x0) {
    OWL::TCheckBox::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)self + 0x2a),0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)self + 0x22),0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407468  OWL::TListBox::~TListBox   (137 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TListBox::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb370);
  if (self != (int *)0x0) {
    OWL::TControl::_dtor(self,0);
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 9,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 7,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004074f4  InitDictionaryCache   (151 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x004050cc. static initialiser: empty g_dictionaryCache (256 reserved) and two length limits of 0x7fffffff
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00407540) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407548 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall InitDictionaryCache(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb388);
  if (DAT_004eb4c0 == '\0') {
    (*(undefined4 *)&DAT_004eb4a4) = 0;
    (*(undefined4 *)&DAT_004eb4a8) = 0;
    DAT_004eb4b8 = 0;
    _DAT_004eb4a0 = 0x100;
    DAT_004eb4c0 = '\x01';
  }
  if (DAT_004eb4cc == '\0') {
    (*(undefined4 *)&DAT_004eb4c4) = 0x7fffffff;
    (*(undefined4 *)&DAT_004eb4c8) = 0x7fffffff;
    DAT_004eb4cc = '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040758c  DestroyDictionaryCache   (88 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00405164. static destructor of g_dictionaryCache
//   file placement: inferred (address adjacency)
void __stdcall DestroyDictionaryCache(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4eb3a8);
  if (DAT_004eb4c0 != '\0') {
    std::_Destroy_range_ptr_40771c(&DAT_004eb4a0,DAT_004eb4a4,(*(int *)&DAT_004eb4a8));
    operator_delete();
    DAT_004eb4c0 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
