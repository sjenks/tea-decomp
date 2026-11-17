// TEA.exe — application module "TEAPropertiesViewWindows"
// 17 functions, 0x00404f80..0x004075e4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00404f80  TEAPropertiesViewWindows::~TEAPropertiesViewWindows   (1709 bytes)   [rtti:dtor destructor]
//   written in code as TEAPropertiesViewWindows::_dtor
void __cdecl TEAPropertiesViewWindows::_dtor(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb09c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TEAPropertiesViewWindows::vftable;
    *(undefined ***)param_1[1] = &PTR_LAB_004eb2c8;
    *(undefined ***)param_1[2] = &PTR_LAB_004eb2d4;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004eb2e0;
    PVWPushButton::_dtor(param_1 + 0x7e6,2);
    PVWCheckBox::_dtor(param_1 + 0x7b0,2);
    PVWCheckBox::_dtor(param_1 + 0x77e,2);
    PVWCheckBox::_dtor(param_1 + 0x74c,2);
    PVWCheckBox::_dtor(param_1 + 0x71a,2);
    PVWCheckBox::_dtor(param_1 + 0x6e8,2);
    PVWCheckBox::_dtor(param_1 + 0x6b6,2);
    PVWRadioButton::_dtor(param_1 + 0x682,2);
    PVWRadioButton::_dtor(param_1 + 0x64e,2);
    PVWRadioButton::_dtor(param_1 + 0x61a,2);
    PVWCheckBox::_dtor(param_1 + 0x5e8,2);
    PVWRadioButton::_dtor(param_1 + 0x5b4,2);
    PVWRadioButton::_dtor(param_1 + 0x580,2);
    PVWCheckBox::_dtor(param_1 + 0x54e,2);
    PVWCheckBox::_dtor(param_1 + 0x51c,2);
    PVWFontButton::_dtor(param_1 + 0x4d4,2);
    piVar1 = param_1 + 0x4a8;
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x4b2,0);
    *(int *)(param_1[0x4a9] + -4) = *(int *)(param_1[0x4a9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x4b0,0);
    PVWFontButton::_dtor(param_1 + 0x460,2);
    piVar1 = param_1 + 0x434;
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x43e,0);
    *(int *)(param_1[0x435] + -4) = *(int *)(param_1[0x435] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x43c,0);
    PVWFontButton::_dtor(param_1 + 0x3ec,2);
    piVar1 = param_1 + 0x3c0;
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x3ca,0);
    *(int *)(param_1[0x3c1] + -4) = *(int *)(param_1[0x3c1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x3c8,0);
    PVWFontButton::_dtor(param_1 + 0x378,2);
    piVar1 = param_1 + 0x34c;
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x356,0);
    *(int *)(param_1[0x34d] + -4) = *(int *)(param_1[0x34d] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x354,0);
    PVWFontButton::_dtor(param_1 + 0x304,2);
    piVar1 = param_1 + 0x2d8;
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x2e2,0);
    *(int *)(param_1[0x2d9] + -4) = *(int *)(param_1[0x2d9] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x2e0,0);
    PVWFontButton::_dtor(param_1 + 0x290,2);
    piVar1 = param_1 + 0x263;
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x26d,0);
    *(int *)(param_1[0x264] + -4) = *(int *)(param_1[0x264] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x26b,0);
    PVWColourButton::_dtor(param_1 + 0x232,2);
    piVar1 = param_1 + 0x206;
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + -4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + -4;
    OWL::TControl::_dtor(piVar1,0);
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + 4;
    *(int *)(*piVar1 + -4) = *(int *)(*piVar1 + -4) + 4;
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x210,0);
    *(int *)(param_1[0x207] + -4) = *(int *)(param_1[0x207] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x20e,0);
    PVWCombo::_dtor(param_1 + 0x1d8,2);
    PVWPushButton::_dtor(param_1 + 0x1a6,2);
    PVWRadioButton::_dtor(param_1 + 0x172,2);
    PVWRadioButton::_dtor(param_1 + 0x13e,2);
    PVWRadioButton::_dtor(param_1 + 0x10a,2);
    PVWCheckBox::_dtor(param_1 + 0xd8,2);
    PVWCheckBox::_dtor(param_1 + 0xa6,2);
    PVWEdit::_dtor(param_1 + 0x77,2);
    PVWEdit::_dtor(param_1 + 0x48,2);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8000;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8000;
    TabbyPropertiesViewWindows::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8000;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8000;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x81c,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x81a,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405630  TEAPropertiesViewWindows::vf19   (1506 bytes)   [rtti:vtable virtual slot 19]
void __cdecl TEAPropertiesViewWindows::vf19(undefined4 *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  undefined4 local_8a8;
  undefined1 local_884 [8];
  uint *local_87c;
  undefined1 local_874 [8];
  int local_86c;
  int local_864 [3];
  int local_858;
  
  __InitExceptBlockLDTC(0x4eb0fc);
  if (param_3 == 0x10f4) {
    (**(code **)(param_1[3] + 0x54))();
    (**(code **)(param_1[3] + 0x54))();
    uVar1 = FUN_004a76a8(param_1[0x18],0x130b,0,0);
    FUN_0043a064(param_1[0x7e4],uVar1);
    goto LAB_00405bfe;
  }
  if (param_3 != 0x8d4) {
    if (param_3 < 0x3431) {
      if (param_3 == 0x3430) {
LAB_00405b86:
        *(uint *)(param_1[0x7e4] + 0x1c8) = (uint)(param_3 == 0x3430);
      }
      else if (param_3 < 0x1a41) {
        if (param_3 == 0x1a40) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 2;
        }
        else if (param_3 == 0x1694) {
          iVar5 = FUN_004a76a8(param_1[0x54e],0xf0,0,0);
          *(uint *)(param_1[0x7e4] + 0x1c4) = (uint)(iVar5 != 0);
        }
        else if (param_3 == 0x1a2c) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 0;
        }
        else if (param_3 == 0x1a36) {
          *(undefined4 *)(param_1[0x7e4] + 0x24) = 1;
        }
      }
      else if (param_3 == 0x2a4e) {
        FUN_00465244();
        iVar5 = FUN_004a76a8(param_1[0xa6],0xf0,0,0);
        (*(uint *)&DAT_004fcb84) = (uint)(iVar5 != 0);
      }
      else if (param_3 - 0x2f26U < 4) {
        piVar4 = FUN_004dd744(param_2,*(int *)(param_2 + 0xc),(int *)&DAT_00402b6c,
                              (int *)&DAT_00405c14,1);
        iVar5 = FUN_004a76a8(*piVar4,0xf0,0,0);
        *(uint *)(param_1[0x7e4] + -0xbacc + param_3 * 4) = (uint)(iVar5 != 0);
      }
      else if (param_3 - 0x2f26U == 0x500) goto LAB_00405b86;
    }
    else if (param_3 < 0x36bb) {
      if (param_3 == 0x36ba) {
        iVar3 = FUN_004a76a8(param_1[0x6b6],0xf0,0,0);
        iVar5 = param_1[0x7e4];
        *(uint *)(iVar5 + 0x1b0) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(iVar5 + 0x1b8) = 1;
          FUN_004ac750(param_1 + 0x5e8,1);
        }
      }
      else if (param_3 == 0x361a) {
        iVar5 = FUN_004a76a8(param_1[0x51c],0xf0,0,0);
        *(uint *)(param_1[0x7e4] + 0x1c0) = (uint)(iVar5 != 0);
      }
      else if (param_3 == 0x369c) {
        iVar3 = FUN_004a76a8(param_1[0x5e8],0xf0,0,0);
        iVar5 = param_1[0x7e4];
        *(uint *)(iVar5 + 0x1b8) = (uint)(iVar3 != 0);
        if ((iVar3 != 0) == 0) {
          *(undefined4 *)(iVar5 + 0x1b0) = 1;
          FUN_004ac750(param_1 + 0x6b6,1);
        }
      }
      else if (param_3 - 0x36a6U < 3) {
        *(int *)(param_1[0x7e4] + 0x1bc) = param_3 + -0x36a7;
      }
    }
    else if (param_3 == 0x36c4) {
      iVar5 = FUN_004a76a8(param_1[0x6e8],0xf0,0,0);
      *(uint *)(param_1[0x7e4] + 0x1b4) = (uint)(iVar5 != 0);
    }
    else if (param_3 == 0x3a20) {
      iVar5 = FUN_004a76a8(param_1[0xd8],0xf0,0,0);
      *(uint *)(param_1[0x7e4] + 0x20) = (uint)(iVar5 != 0);
    }
    FUN_004068e8((int)param_1);
    FUN_0045269c((int *)param_1[0x7e3]);
    goto LAB_00405bfe;
  }
  iVar5 = 4;
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1[0x7e4] + 0x28));
  std::string::string_from_cstr((int)local_874,puVar2);
  FUN_004765e8(local_864,0,*param_1,param_1[0xe],(int)local_874,iVar5);
  if (local_86c != 0) {
    if (*(int *)(local_86c + -0xc) != -1) {
      piVar4 = (int *)(local_86c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar5 = *piVar4 + 1;
      }
      if (iVar5 != 0) goto LAB_004057b3;
    }
    operator_delete();
    local_86c = 0;
  }
LAB_004057b3:
  iVar5 = (**(code **)(local_858 + 0x14))();
  if (iVar5 == 1) {
    FUN_0047784c((int)local_884,(int)local_864);
    FUN_00406984((int)param_1,local_87c);
    if (local_87c != (uint *)0x0) {
      if (local_87c[-3] != 0xffffffff) {
        puVar2 = local_87c + -3;
        if (puVar2 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (puVar2 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *puVar2 = *puVar2 - 1;
          iVar5 = *puVar2 + 1;
        }
        if (iVar5 != 0) goto LAB_004058b0;
      }
      operator_delete();
      local_87c = (uint *)0x0;
    }
  }
LAB_004058b0:
  DictionaryListViewWindows::_dtor(local_864,2);
LAB_00405bfe:
  *in_FS_OFFSET = local_8a8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d40  TEAPropertiesViewWindows::vf29   (33 bytes)   [rtti:vtable virtual slot 29; function defined from vtable-slot]
void __cdecl TEAPropertiesViewWindows::vf29(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)FUN_0041c758(param_1 + 0x760);
  FUN_00406984(param_1,puVar1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405d64  TEAPropertiesViewWindows::vf27   (140 bytes)   [rtti:vtable virtual slot 27]
void __cdecl TEAPropertiesViewWindows::vf27(int param_1,int *param_2)

{
  *(int *)(*(int *)(param_1 + 0x1f90) + 0x2c) = *param_2;
  FUN_00418a48((int *)(param_1 + 0x8c8),param_2);
  FUN_00419418((int *)(param_1 + 0x1180),(int *)(*(int *)(param_1 + 0x1f90) + 0x130),param_2,0,
               0x3ff00000,0,0x3ff00000);
  FUN_00419418((int *)(param_1 + 0x1350),(int *)(*(int *)(param_1 + 0x1f90) + 0x170),param_2,0,
               0x3ff00000,0,0x3ff00000);
  FUN_0045d9e8(*(int *)(param_1 + 0x1f8c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405df0  TEAPropertiesViewWindows::vf28   (673 bytes)   [rtti:vtable virtual slot 28]
void __cdecl TEAPropertiesViewWindows::vf28(int param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_8;
  
  if (param_3 == 0x12b6) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x30);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xa40),(int *)(iVar1 + 0x30),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d86c(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x12ac) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0xb0,*(int *)(param_1 + 0x1f90) + 0x70,(int)param_2);
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x70);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xc10),(int *)(iVar1 + 0x70),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(*(int *)(param_1 + 0x1f90) + 0xb0),
                 (int *)(param_1 + 0x1f88),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3232) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xb0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0xde0),(int *)(iVar1 + 0xb0),(int *)(param_1 + 0x1f88),0,
                 0x3ff00000,0,0x3ff00000);
    FUN_0045d938(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x1644) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0xf0);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    iVar6 = 0x3ff00000;
    iVar5 = 0;
    iVar4 = 0x3ff00000;
    iVar2 = 0;
    local_8 = FUN_0048c12c(&DAT_0051b198);
    FUN_00419418((int *)(param_1 + 0xfb0),(int *)(iVar1 + 0xf0),(int *)&local_8,iVar2,iVar4,iVar5,
                 iVar6);
  }
  else if (param_3 == 0x3124) {
    FUN_004047bc(*(int *)(param_1 + 0x1f90) + 0x170,*(int *)(param_1 + 0x1f90) + 0x130,(int)param_2)
    ;
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x130);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1180),(int *)(iVar1 + 0x130),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(*(int *)(param_1 + 0x1f90) + 0x170),
                 (int *)(*(int *)(param_1 + 0x1f90) + 0x2c),0,0x3ff00000,0,0x3ff00000);
    FUN_0045d9e8(*(int *)(param_1 + 0x1f8c));
  }
  else if (param_3 == 0x3138) {
    iVar1 = *(int *)(param_1 + 0x1f90);
    puVar3 = (undefined4 *)(iVar1 + 0x170);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar3 = *param_2;
      param_2 = param_2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_00419418((int *)(param_1 + 0x1350),(int *)(iVar1 + 0x170),(int *)(iVar1 + 0x2c),0,0x3ff00000
                 ,0,0x3ff00000);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406094  TEAPropertiesViewWindows::vf21   (314 bytes)   [rtti:vtable virtual slot 21]
void __cdecl TEAPropertiesViewWindows::vf21(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  byte *local_c;
  
  __InitExceptBlockLDTC(0x4eb16c);
  if (param_3 == 0x10e0) {
    iVar3 = *(int *)(param_1 + 0x1f90);
    piVar1 = (int *)(param_1 + 0x120);
  }
  else {
    iVar3 = *(int *)(param_1 + 0x1f90) + 0x10;
    piVar1 = (int *)(param_1 + 0x1dc);
  }
  FUN_0041b2b0((int)local_14,piVar1);
  uVar2 = FUN_004d40d0(iVar3,0,*(uint *)(*(int *)(iVar3 + 8) + -4),local_c,*(uint *)(local_c + -4));
  if (uVar2 != 0) {
    FUN_00465244();
    FUN_004cf384(iVar3,(int)local_14);
    FUN_0045269c(*(int **)(param_1 + 0x1f8c));
  }
  if (local_c != (byte *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_c = local_c + -0xc;
      if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == (byte *)&DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *(int *)local_c = *(int *)local_c + -1;
        iVar3 = *(int *)local_c + 1;
      }
      if (iVar3 != 0) goto LAB_004061bd;
    }
    operator_delete();
  }
LAB_004061bd:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004061d0  TEAPropertiesViewWindows::vf36   (137 bytes)   [rtti:vtable virtual slot 36]
void __cdecl TEAPropertiesViewWindows::vf36(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint local_3c [13];
  int local_8;
  
  local_8 = 1;
  iVar3 = 0;
  while( true ) {
    puVar2 = (uint *)("Pattern Property Change" + 0x17);
    iVar1 = (**(code **)(*(int *)(param_1 + 0x76c) + 0x24))();
    if (iVar3 < iVar1) {
      puVar2 = (uint *)FUN_0041c740(param_1 + 0x760);
    }
    local_8 = local_8 + 1;
    FUN_004e0344((undefined1 *)local_3c,(byte *)"Dictionary%d");
    FUN_0041717c(param_1,local_3c,puVar2);
    if ((char)*puVar2 == '\0') break;
    iVar3 = iVar3 + 1;
  }
  if (param_2 != 0) {
    FUN_0041c4b0(param_1 + 0x760);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040625c  FUN_0040625c   (128 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0040625c(int param_1)

{
  FUN_0041b474((int *)(param_1 + 0x120),*(int *)(param_1 + 0x1f90));
  FUN_0041b474((int *)(param_1 + 0x1dc),*(int *)(param_1 + 0x1f90) + 0x10);
  FUN_004ac750((int *)(param_1 + 0x298),(uint)(DAT_004fcb84 != 0));
  FUN_004ac750((int *)(param_1 + 0x360),(uint)(*(int *)(*(int *)(param_1 + 0x1f90) + 0x20) != 0));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004062dc  TEAPropertiesViewWindows::vf11   (1513 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAPropertiesViewWindows::vf11(int *param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint local_88 [13];
  undefined1 *local_54;
  undefined4 local_50;
  uint *local_4c;
  uint *local_48;
  uint *local_40;
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4eb1b8);
  TabbyPropertiesViewWindows::vf11(param_1);
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  FUN_0040625c((int)param_1);
  FUN_004ac750(param_1 + 0x10a,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 1));
  FUN_004ac750(param_1 + 0x13e,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 0));
  FUN_004ac750(param_1 + 0x172,(uint)(*(int *)(param_1[0x7e4] + 0x24) == 2));
  piVar1 = param_1 + 0x7e2;
  FUN_00419418(param_1 + 0x290,(int *)(param_1[0x7e4] + 0x30),piVar1,0,0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x304,(int *)(param_1[0x7e4] + 0x70),piVar1,0,0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x378,(int *)(param_1[0x7e4] + 0xb0),piVar1,0,0x3ff00000,0,0x3ff00000);
  iVar6 = 0x3ff00000;
  iVar5 = 0;
  iVar4 = 0x3ff00000;
  iVar3 = 0;
  local_3c = FUN_0048c12c(&DAT_0051b198);
  FUN_00419418(param_1 + 0x3ec,(int *)(param_1[0x7e4] + 0xf0),(int *)&local_3c,iVar3,iVar4,iVar5,
               iVar6);
  FUN_00419418(param_1 + 0x460,(int *)(param_1[0x7e4] + 0x130),(int *)(param_1[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  FUN_00419418(param_1 + 0x4d4,(int *)(param_1[0x7e4] + 0x170),(int *)(param_1[0x7e4] + 0x2c),0,
               0x3ff00000,0,0x3ff00000);
  FUN_00418a48(param_1 + 0x232,(int *)(param_1[0x7e4] + 0x2c));
  FUN_004ac750(param_1 + 0x51c,(uint)(*(int *)(param_1[0x7e4] + 0x1c0) != 0));
  FUN_004ac750(param_1 + 0x54e,(uint)(*(int *)(param_1[0x7e4] + 0x1c4) != 0));
  FUN_004ac750(param_1 + 0x6b6,(uint)(*(int *)(param_1[0x7e4] + 0x1b0) != 0));
  FUN_004ac750(param_1 + 0x6e8,(uint)(*(int *)(param_1[0x7e4] + 0x1b4) != 0));
  FUN_004ac750(param_1 + 0x5e8,(uint)(*(int *)(param_1[0x7e4] + 0x1b8) != 0));
  FUN_004ac750(param_1 + 0x682,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == 1));
  FUN_004ac750(param_1 + 0x64e,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == 0));
  FUN_004ac750(param_1 + 0x61a,(uint)(*(int *)(param_1[0x7e4] + 0x1bc) == -1));
  FUN_004ac750(param_1 + 0x580,(uint)(*(int *)(param_1[0x7e4] + 0x1c8) == 0));
  FUN_004ac750(param_1 + 0x5b4,(uint)(*(int *)(param_1[0x7e4] + 0x1c8) != 0));
  FUN_004ac750(param_1 + 0x71a,(uint)(*(int *)(param_1[0x7e4] + 0x1cc) != 0));
  FUN_004ac750(param_1 + 0x74c,(uint)(*(int *)(param_1[0x7e4] + 0x1d0) != 0));
  FUN_004ac750(param_1 + 0x77e,(uint)(*(int *)(param_1[0x7e4] + 0x1d4) != 0));
  FUN_004ac750(param_1 + 0x7b0,(uint)(*(int *)(param_1[0x7e4] + 0x1d8) != 0));
  iVar3 = 1;
  puVar2 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1[0x7e4] + 0x28));
  FUN_0041c4f8((int)(param_1 + 0x1d8),puVar2,iVar3);
  while( true ) {
    FUN_004e0344((undefined1 *)local_88,(byte *)"Dictionary%d");
    local_28 = 0x14;
    FUN_00416dd4((int)local_14,(int)param_1,local_88,
                 (uint *)("Pattern Property Change" + 0x17));
    local_28 = 8;
    if (local_c[-1] == 0) break;
    local_1c = local_1c + 1;
    FUN_0041c4f8((int)(param_1 + 0x1d8),local_c,0);
    local_1c = local_1c + -1;
    if (local_c != (uint *)0x0) {
      if (local_c[-3] != 0xffffffff) {
        puVar2 = local_c + -3;
        if (puVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (puVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *puVar2 = *puVar2 - 1;
          iVar3 = *puVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_004068a9;
      }
      local_48 = local_c + -3;
      local_4c = local_c + -3;
      operator_delete();
      local_50 = 0;
      local_54 = local_14;
      local_c = (uint *)0x0;
    }
LAB_004068a9:
    local_28 = 0;
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar2 = local_c + -3;
      if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (puVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *puVar2 = *puVar2 - 1;
        iVar3 = *puVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004068b5;
    }
    local_40 = local_c + -3;
    operator_delete();
  }
LAB_004068b5:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068c8  TEAPropertiesViewWindows::vf48   (30 bytes)   [rtti:vtable virtual slot 48]
void __cdecl TEAPropertiesViewWindows::vf48(int *param_1)

{
  TabbyPropertiesViewWindows::vf48(param_1);
  FUN_004068e8((int)param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004068e8  FUN_004068e8   (154 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004068e8(int param_1)

{
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1ba0) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1a08) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1938) + 8) + 0x60))();
  (**(code **)(*(int *)(*(int *)(param_1 + 0x1868) + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00406984  FUN_00406984   (78 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00406984(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = FUN_00407734(param_2);
  TSDictionaryList::ReleaseDictionaries(*(int *)(*(int *)(param_1 + 0x1f90) + 0x28));
  *(undefined4 **)(*(int *)(param_1 + 0x1f90) + 0x28) = puVar1;
  iVar3 = 1;
  puVar2 = (uint *)FUN_00408c8c(puVar1);
  FUN_0041c4f8(param_1 + 0x760,puVar2,iVar3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004073dc  OWL::TRadioButton::~TRadioButton   (137 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRadioButton::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRadioButton::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb368);
  if (param_1 != (int *)0x0) {
    OWL::TCheckBox::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor((undefined4 *)((int)param_1 + 0x2a),0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor((undefined4 *)((int)param_1 + 0x22),0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00407468  OWL::TListBox::~TListBox   (137 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TListBox::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TListBox::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb370);
  if (param_1 != (int *)0x0) {
    OWL::TControl::_dtor(param_1,0);
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 9,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 7,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004074f4  FUN_004074f4   (151 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00407540) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407548 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __stdcall FUN_004074f4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
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
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040758c  FUN_0040758c   (88 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0040758c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4eb3a8);
  if (DAT_004eb4c0 != '\0') {
    FUN_0040771c(&DAT_004eb4a0,DAT_004eb4a4,(*(int *)&DAT_004eb4a8));
    operator_delete();
    DAT_004eb4c0 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004075e4  FUN_004075e4   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0040762e) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00407636 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 * __cdecl FUN_004075e4(undefined4 *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  byte bVar6;
  undefined4 local_28;
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x4eb4e0);
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[8] = 0;
  param_1[2] = 0x100;
  strlen(param_2);
  puVar1 = (undefined4 *)operator_new_array();
  *param_1 = puVar1;
  uVar2 = 0xffffffff;
  do {
    puVar5 = param_2;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    puVar5 = (uint *)((int)param_2 + (uint)bVar6 * -2 + 1);
    uVar3 = *param_2;
    param_2 = puVar5;
  } while ((char)uVar3 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)puVar5 - uVar2);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar1 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar1 = puVar1 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar1 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar1 = (undefined4 *)((int)puVar1 + (uint)bVar6 * -2 + 1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
