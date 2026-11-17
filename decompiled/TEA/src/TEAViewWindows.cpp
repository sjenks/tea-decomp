// TEA.exe — application module "TEAViewWindows"
// 110 functions, 0x00450af4..0x0045e8c4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450af4  TEAViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TEAViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl TEAViewWindows::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&TEAViewWindows::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = PropertiesViewWindows::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b3c  TEAViewWindows::EvLButtonDown   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDOWN
//   also: TabbyPropertiesViewWindows::Child8030_Notifym551 [owl:response-table]; DefinitionViewWindows::EvLButtonDown [owl:response-table]
void __stdcall TEAViewWindows::EvLButtonDown(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b43. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b4c  TEAViewWindows::EvMouseMove   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_MOUSEMOVE
//   also: DefinitionViewWindows::EvMouseMove [owl:response-table]
void __stdcall TEAViewWindows::EvMouseMove(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b5c  TEAViewWindows::EvLButtonUp   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONUP
//   also: DefinitionViewWindows::EvLButtonUp [owl:response-table]
void __stdcall TEAViewWindows::EvLButtonUp(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b63. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 200))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b6c  TEAViewWindows::EvLButtonDblClk   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_LBUTTONDBLCLK
void __stdcall TEAViewWindows::EvLButtonDblClk(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b73. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xcc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b7c  TEAViewWindows::EvRButtonDown   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_RBUTTONDOWN
void __stdcall TEAViewWindows::EvRButtonDown(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xd0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b8c  TEAViewWindows::EvRButtonUp   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_RBUTTONUP
void __stdcall TEAViewWindows::EvRButtonUp(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450b93. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xd4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b9c  TEAViewWindows::EvDropFiles   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_DROPFILES
void __stdcall TEAViewWindows::EvDropFiles(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450ba3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xd8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450bac  TEAViewWindows::EvSysColorChange   (13 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SYSCOLORCHANGE
void __stdcall TEAViewWindows::EvSysColorChange(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00450bb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0xc) + 0xdc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450bbc  FUN_00450bbc   (1514 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00450eb5) */
/* WARNING: Removing unreachable block (ram,0x00450eed) */
/* WARNING: Removing unreachable block (ram,0x00450fac) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffb8 : 0x00450fb4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int * __cdecl FUN_00450bbc(int *param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3c;
  
  __InitExceptBlockLDTC(0x4f7df4);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x336);
    param_1[0x336] = (int)(param_1 + 0x333);
    param_1[0x337] = (int)(param_1 + 0x334);
    param_1[1] = (int)(param_1 + 0x333);
    param_1[2] = (int)(param_1 + 0x334);
    param_1[0x332] = 0;
    param_1[0x335] = 0;
    param_1[0x333] = (int)&OWL::TEventHandler::vftable;
    param_1[0x334] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x336,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc68;
  FUN_00413cf4(param_1,1,param_5,param_3,param_4,(uint *)0x109a,param_6,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc68;
  param_1[3] = (int)&TEAViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa094;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa0ac;
  param_1[0x18] = param_6;
  param_1[0x19] = -1;
  param_1[0x1a] = -1;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  FUN_004c279c((uint *)(param_1 + 0x1e),0x80c,(uint *)"Text Document (TXT)|*.txt|TEA&Sympathy Dictionary (TSD)|*.tsd",0,
               0,0,0,0,0);
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  FUN_004c7a28(param_1 + 0x2a,0,*param_1,9000,0,0);
  FUN_0041c258(param_1 + 0x56,0,param_1,0x10ae,0);
  FUN_004179f0(param_1 + 0x84,0,param_1,0x10b8);
  FUN_0041af38(param_1 + 0xb6,0,param_1,0x111c,3);
  FUN_0041bb44(param_1 + 0xe5,0,param_1,0x1108);
  FUN_0041b680(param_1 + 0x116,0,param_1,0x1a22,0);
  FUN_0041af38(param_1 + 0x143,0,param_1,0x1112,3);
  FUN_0041bb44(param_1 + 0x172,0,param_1,0x10fe);
  param_1[0x1a3] = 0;
  param_1[0x1a4] = 0;
  param_1[0x1a8] = 0;
  param_1[0x1a8] = (int)&DAT_00513d64;
  param_1[0x1ad] = 0;
  param_1[0x1ae] = 0;
  param_1[0x1b2] = 0;
  param_1[0x1ac] = 0x100;
  param_1[0x1b4] = 0;
  FUN_0044fb08(param_1 + 0x1b5,0,*param_1,0x1144);
  param_1[0x1ec] = 0;
  _vector_new_ldtc_(param_1 + 0x1ef,0x44,3,1,(undefined*)FUN_0041e888);
  FUN_0048faec((uint *)(param_1 + 0x31c));
  param_1[0x31e] = 0;
  param_1[799] = 0;
  param_1[0x321] = 0;
  param_1[0x322] = 0;
  param_1[0x326] = 0;
  param_1[800] = 0x100;
  param_1[0x328] = 1;
  param_1[0x329] = 0;
  param_1[0x32a] = 0;
  param_1[0x32b] = 0;
  param_1[0x32c] = 0;
  param_1[0x32e] = 0;
  param_1[0x32f] = 0;
  param_1[0x330] = 0;
  param_1[0x331] = 0;
  if (param_1[0x18] == 0) {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_00450940(piVar1,0,*param_1,0x3192);
    }
    param_1[0x1a3] = (int)piVar1;
  }
  else {
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_0041b680(piVar1,0,param_1,0x161c,0);
    }
    param_1[0x329] = (int)piVar1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,0x10cc);
    }
    param_1[0x32a] = (int)piVar1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,2);
    }
    param_1[0x32b] = (int)piVar1;
    piVar1 = (int *)operator_new();
    if (piVar1 != (int *)0x0) {
      FUN_004179f0(piVar1,0,param_1,0x5fa);
    }
    param_1[0x32c] = (int)piVar1;
  }
  FUN_0045a7f0((int)param_1);
  *(undefined1 *)(param_1 + 0x222) = 0;
  FUN_004a6d7c(*param_1,0x1a04);
  *in_FS_OFFSET = local_3c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004511c8  TEAViewWindows::~TEAViewWindows   (1278 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewWindows::_dtor
void __cdecl TEAViewWindows::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_60;
  
  __InitExceptBlockLDTC(0x4f7fac);
  if (param_1 == (int *)0x0) goto LAB_004516b5;
  param_1[3] = (int)&TEAViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fa094;
  *(undefined ***)param_1[2] = &PTR_LAB_004fa0a0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fa0ac;
  FUN_0045daf8((int)param_1);
  uVar2 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    iVar1 = *(int *)(param_1[0x321] + uVar2 * 4);
    if (iVar1 != 0) {
      (*(code *)**(undefined4 **)(iVar1 + 8))();
    }
    uVar2 = uVar2 + 1;
  }
  if ((uint *)param_1[799] != (uint *)0x0) {
    OWL::TBrush::_dtor((uint *)param_1[799],3);
  }
  if (param_1[0x32c] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32c] + 0xc))();
  }
  if (param_1[0x32b] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32b] + 0xc))();
  }
  if (param_1[0x32a] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x32a] + 0xc))();
  }
  if (param_1[0x329] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x329] + 0xc))();
  }
  if (param_1[0x1a3] != 0) {
    (*(code *)**(undefined4 **)(param_1[0x1a3] + 0xc))();
  }
  InputEngine::_dtor(param_1[0x1b],3);
  if (param_1[0x1c] != 0) {
    TSDictionaryDefinitionSearchIndexed::_dtor(param_1[0x1c],3);
  }
  TSDictionaryDefinitionSearchSequential::_dtor(param_1[0x1d],3);
  FUN_00451754(param_1 + 800,param_1[0x321],param_1[0x322]);
  operator_delete();
  OWL::TGdiObject::_dtor((uint *)(param_1 + 0x31c),0);
  _vector_delete_ldtc_((int)(param_1 + 0x1ef),0x44,3,1,(undefined*)PVWFontMaintainer::_dtor);
  TEAProgressBar::_dtor(param_1 + 0x1b5,2);
  FUN_0045176c(param_1 + 0x1ac,param_1[0x1ad],param_1[0x1ae]);
  operator_delete();
  if (param_1[0x1a8] != 0) {
    if (*(int *)(param_1[0x1a8] + -0xc) != -1) {
      piVar3 = (int *)(param_1[0x1a8] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00451501;
    }
    operator_delete();
    param_1[0x1a8] = 0;
  }
LAB_00451501:
  PVWUpDown::_dtor(param_1 + 0x172,2);
  PVWEdit::_dtor(param_1 + 0x143,2);
  PVWStatic::_dtor(param_1 + 0x116,2);
  PVWUpDown::_dtor(param_1 + 0xe5,2);
  PVWEdit::_dtor(param_1 + 0xb6,2);
  PVWPushButton::_dtor(param_1 + 0x84,2);
  PVWCombo::_dtor(param_1 + 0x56,2);
  piVar3 = param_1 + 0x2a;
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + -4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + -4;
  OWL::TControl::_dtor(piVar3,0);
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + 4;
  *(int *)(*piVar3 + -4) = *(int *)(*piVar3 + -4) + 4;
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + 0x96;
  OWL::TWindow::_dtor(param_1 + 0x34,0);
  *(int *)(param_1[0x2b] + -4) = *(int *)(param_1[0x2b] + -4) + -0x96;
  OWL::TStreamableBase::_dtor(param_1 + 0x32,0);
  OWL::TOpenSaveDialog::TData::_dtor((int)(param_1 + 0x1e),2);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xc68;
  PropertiesViewWindows::_dtor(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xc68;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xc68;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    OWL::TWindow::_dtor(param_1 + 0x336,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(param_1 + 0x334,0);
  }
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004516b5:
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451754  FUN_00451754   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00451754(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045176c  FUN_0045176c   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045176c(undefined4 param_1,int param_2,int param_3)

{
  for (; param_3 != param_2; param_2 = param_2 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451784  FUN_00451784   (2868 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00451a54) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
undefined4 __cdecl FUN_00451784(int *param_1,int param_2)

{
  RECT *pRVar1;
  undefined4 uVar2;
  RECT *pRVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int iVar6;
  int iVar7;
  int local_1bc;
  int local_1b8;
  int local_1b4;
  int local_1b0;
  RECT local_1ac;
  undefined4 local_194;
  undefined *local_184;
  RECT local_17c;
  undefined1 *local_16c;
  undefined4 local_168;
  int local_164;
  int local_160;
  int *local_15c;
  undefined1 *local_158;
  undefined4 local_154;
  char *local_150;
  char *local_14c;
  int *local_148;
  HRGN local_144;
  HRGN local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int *local_12c;
  int local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int local_114;
  int *local_110;
  int local_10c;
  int local_108;
  int local_104;
  int local_100;
  int local_fc;
  int local_f8;
  LONG local_f4;
  LONG *local_f0;
  RECT *local_ec;
  LONG *local_e8;
  int local_e4;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int *local_d0;
  undefined1 *local_cc;
  undefined *local_c8;
  undefined4 local_c4;
  char *local_c0;
  uint local_bc;
  uint local_b8 [5];
  int *local_a4;
  int local_a0;
  int *local_9c;
  undefined4 *local_98;
  int local_94;
  int local_90;
  int local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  int local_54;
  int *local_50;
  int *local_4c;
  undefined1 local_48 [8];
  int local_40;
  int local_38;
  int local_34 [2];
  undefined1 local_2c [8];
  char *local_24;
  undefined1 local_1c [8];
  int local_14;
  HRGN local_c [2];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x4f8174);
  if (*(int *)(*param_1 + 0xc) == 0) {
    *in_FS_OFFSET = local_88;
    return local_88;
  }
  local_8c = FUN_00466b18(param_1[0xe]);
  local_90 = TSDictionaryList::GetCount(local_8c);
  if (param_2 == 0) {
LAB_004517f5:
    FUN_0045daf8((int)param_1);
    if (param_2 == 2) {
      param_1[0x1b4] = param_1[0x1b4] + -1;
    }
    else if (param_2 == 3) {
      param_1[0x1b4] = param_1[0x1b4] + 1;
    }
    else {
      param_1[0x1b4] = 0;
    }
  }
  else if (param_2 == 1) {
    if (param_1[0x1b4] < 0) {
      param_1[0x1b4] = 0;
    }
  }
  else {
    if (param_2 - 2U < 2) goto LAB_004517f5;
    if (param_2 - 2U == 2) {
      local_94 = param_1[0x1b4];
      local_38 = *(int *)(local_94 * 4 + param_1[0x1ad]);
      if (local_38 != 0) {
        local_78 = 0x14;
        TEAViewWindows::OutputGroup::_dtor(local_38,3);
        local_78 = 8;
      }
      local_9c = param_1 + 0x1ac;
      local_98 = (undefined4 *)(param_1[0x1b4] * 4 + param_1[0x1ad]);
      if ((undefined4 *)param_1[0x1ae] != local_98 + 1) {
        FUN_0045233c(local_98 + 1,(undefined4 *)param_1[0x1ae],local_98);
      }
      local_9c[2] = local_9c[2] + -4;
      local_a0 = local_9c[2];
      if (local_90 <= param_1[0x1b4]) {
        param_1[0x1b4] = param_1[0x1b4] + -1;
      }
    }
    else {
      local_a4 = param_1 + 0x1ac;
      local_90 = param_1[0x1ae] - param_1[0x1ad];
      if (local_90 < 0) {
        local_90 = local_90 + 3;
      }
      local_90 = local_90 >> 2;
    }
  }
  FUN_00459150(&local_17c.left,param_1);
  local_78 = 0x20;
  FUN_0049ce64((int *)local_c);
  local_6c = local_6c + 1;
  local_78 = 0x38;
  std::string::string_from_cstr((int)local_1c,(uint *)"Panes");
  local_6c = local_6c + 1;
  local_78 = 0x2c;
  FUN_004e0344((undefined1 *)local_b8,&DAT_004f76b2 /* "%c%d" */);
  local_bc = *(uint *)(local_14 + -4);
  local_c0 = strlen(local_b8);
  FUN_004cfad4((int)local_1c,local_bc,0,(uint)local_b8,(uint)local_c0,0,(uint)local_c0);
  local_c4 = 0;
  local_cc = local_2c;
  local_c8 = &DAT_00513d64;
  local_24 = &DAT_00513d64;
  local_184 = &DAT_00513d64;
  local_6c = local_6c + 1;
  local_78 = 0x5c;
  iVar7 = 0;
  iVar6 = 0;
  FUN_004649b0((int)local_48);
  local_6c = local_6c + 1;
  Persist::Persist(local_34,(int)local_48,iVar6,iVar7);
  if (local_40 != 0) {
    if (*(int *)(local_40 + -0xc) != -1) {
      local_d0 = (int *)(local_40 + -0xc);
      if (local_d0 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_d0 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_d0 = *local_d0 + -1;
        iVar6 = *local_d0 + 1;
      }
      if (iVar6 != 0) goto LAB_00451b42;
    }
    local_d4 = local_40 + -0xc;
    local_d8 = local_40 + -0xc;
    operator_delete();
    local_dc = 0;
    local_e0 = local_48;
    local_40 = 0;
    local_194 = 0;
  }
LAB_00451b42:
  local_78 = 0x2c;
  Persist::QueryValueSized((int)local_34,(int)local_1c,(int)local_2c);
  local_e4 = 0;
  iVar6 = 0;
  if (0 < local_90) {
    do {
      pRVar1 = &local_17c;
      pRVar3 = &local_1ac;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        pRVar3->left = pRVar1->left;
        pRVar1 = (RECT *)((int)pRVar1 + ((uint)bVar5 * -2 + 1) * 4);
        pRVar3 = (RECT *)((int)pRVar3 + ((uint)bVar5 * -2 + 1) * 4);
      }
      local_78 = 0x2c;
      if (param_1[0x29] == 0) {
        pRVar1 = (RECT *)&local_17c.top;
      }
      else {
        pRVar1 = &local_17c;
      }
      if (param_1[0x29] == 0) {
        local_e8 = &local_17c.bottom;
      }
      else {
        local_e8 = &local_17c.right;
      }
      if (param_1[0x29] == 0) {
        local_ec = (RECT *)&local_1ac.top;
      }
      else {
        local_ec = &local_1ac;
      }
      if (param_1[0x29] == 0) {
        local_f0 = &local_1ac.bottom;
      }
      else {
        local_f0 = &local_1ac.right;
      }
      if (param_2 == 6) {
        local_ec->left = **(LONG **)(iVar6 * 4 + param_1[0x1ad]);
        if (iVar6 + 1 < local_90) {
          iVar7 = **(int **)((iVar6 + 1) * 4 + param_1[0x1ad]) - param_1[0x1ed];
        }
        else {
          iVar7 = *local_e8;
        }
        *local_f0 = iVar7;
      }
      else {
        local_ec->left = pRVar1->left + local_e4;
        iVar7 = FUN_004591fc(param_1,local_24,(*local_e8 - pRVar1->left) + param_1[0x1ed],local_90,
                             iVar6);
        local_e4 = local_e4 + iVar7;
        *local_f0 = (iVar7 + local_ec->left) - param_1[0x1ed];
      }
      local_f4 = local_ec->left;
      FUN_0049cf60((undefined4*)local_c,&local_1ac);
      pRVar1 = &local_1ac;
      piVar4 = &local_1bc;
      for (iVar7 = 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        *piVar4 = pRVar1->left;
        pRVar1 = (RECT *)((int)pRVar1 + ((uint)bVar5 * -2 + 1) * 4);
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      local_1b0 = local_1b8 + param_1[0x31e];
      local_1ac.top = local_1ac.top + param_1[0x31e];
      if (((param_2 == 6) || (param_2 == 5)) || (param_2 == 4)) {
LAB_00451d28:
        FUN_0042bd3c(*(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 8),&local_1ac.left,'\0');
        local_f8 = **(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 4);
        local_fc = local_1b0 - local_1b8;
        local_100 = local_1b4 - local_1bc;
        local_104 = local_1b8;
        local_108 = local_1bc;
        FUN_004a7aa0(local_f8,(HWND)0x0,local_1bc,local_1b8,local_100,local_fc,0x21c);
      }
      else {
        if (param_2 == 1) {
          iVar7 = param_1[0x1ae] - param_1[0x1ad];
          if (iVar7 < 0) {
            iVar7 = iVar7 + 3;
          }
          if (iVar6 < iVar7 >> 2) goto LAB_00451d28;
        }
        local_10c = FUN_0045dd8c((int)param_1);
        local_4c = (int *)operator_new();
        if (local_4c != (int *)0x0) {
          local_78 = 0x80;
          FUN_00428ce4(local_4c,0,param_1,local_10c + 0x19be,&local_1bc);
        }
        local_78 = 0x2c;
        local_110 = local_4c;
        (**(code **)(*(int *)(*local_4c + 8) + 0x10))();
        local_114 = FUN_00466b28(param_1[0xe]);
        local_50 = (int *)operator_new();
        if (local_50 != (int *)0x0) {
          local_78 = 0x98;
          FUN_00429308(local_50,0,param_1,local_10c + 0x10a4,&local_1ac.left);
        }
        local_78 = 0x2c;
        local_118 = local_50;
        FUN_0042dbdc((int)local_50,param_1 + 0x200,param_1 + 0x211,*(undefined4 *)(local_114 + 0x70)
                     ,*(undefined4 *)(local_114 + 0xb0));
        (**(code **)(*(int *)(*local_118 + 8) + 0x10))();
        local_54 = operator_new();
        if (local_54 != 0) {
          local_78 = 0xb0;
          FUN_0045e59c(local_54,local_110,local_118);
          local_78 = 0xa4;
        }
        local_11c = &local_54;
        if (param_1[0x1ae] == param_1[0x1b2]) {
          FUN_00452360((int)(param_1 + 0x1ac),(undefined4 *)param_1[0x1ae],local_11c);
        }
        else {
          local_124 = (int *)param_1[0x1ae];
          *local_124 = local_54;
          param_1[0x1ae] = param_1[0x1ae] + 4;
          local_120 = local_124;
        }
      }
      local_78 = 0xbc;
      FUN_00408cbc(local_64,local_8c,iVar6);
      local_6c = local_6c + 1;
      local_128 = iVar6;
      FUN_0042905c(*(int **)(*(int *)(iVar6 * 4 + param_1[0x1ad]) + 4),iVar6,(int)local_64);
      local_6c = local_6c + -1;
      if (local_5c != 0) {
        if (*(int *)(local_5c + -0xc) != -1) {
          local_12c = (int *)(local_5c + -0xc);
          if (local_12c == &DAT_00513d58) {
            iVar7 = 1;
          }
          else if (local_12c == &DAT_00513d58) {
            iVar7 = 1;
          }
          else {
            *local_12c = *local_12c + -1;
            iVar7 = *local_12c + 1;
          }
          if (iVar7 != 0) goto LAB_00452074;
        }
        local_130 = local_5c + -0xc;
        local_134 = local_5c + -0xc;
        operator_delete();
        local_138 = 0;
        local_5c = 0;
        local_13c = local_64;
      }
LAB_00452074:
      local_78 = 0x2c;
      **(LONG **)(iVar6 * 4 + param_1[0x1ad]) = local_f4;
      iVar6 = iVar6 + 1;
    } while (iVar6 < local_90);
  }
  if ((param_2 == 6) || (param_2 == 5)) {
    local_140 = local_c[0];
    RedrawWindow(*(HWND *)(*param_1 + 0xc),(RECT *)0x0,local_c[0],0x101);
    FUN_0049cfc0((undefined4*)local_c,&local_17c);
    local_144 = local_c[0];
    RedrawWindow(*(HWND *)(*param_1 + 0xc),(RECT *)0x0,local_c[0],0x105);
  }
  else {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_0045269c(param_1);
  }
  local_6c = local_6c + -1;
  Persist::_dtor((int)local_34,2);
  local_6c = local_6c + -1;
  if (local_24 != (char *)0x0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      local_148 = (int *)(local_24 + -0xc);
      if (local_148 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_148 == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_148 = *local_148 + -1;
        iVar6 = *local_148 + 1;
      }
      if (iVar6 != 0) goto LAB_004521e4;
    }
    local_14c = local_24 + -0xc;
    local_150 = local_24 + -0xc;
    operator_delete();
    local_154 = 0;
    local_158 = local_2c;
    local_24 = (char *)0x0;
  }
LAB_004521e4:
  local_6c = local_6c + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      local_15c = (int *)(local_14 + -0xc);
      if (local_15c == &DAT_00513d58) {
        iVar6 = 1;
      }
      else if (local_15c == &DAT_00513d58) {
        iVar6 = 1;
      }
      else {
        *local_15c = *local_15c + -1;
        iVar6 = *local_15c + 1;
      }
      if (iVar6 != 0) goto LAB_00452293;
    }
    local_160 = local_14 + -0xc;
    local_164 = local_14 + -0xc;
    operator_delete();
    local_168 = 0;
    local_16c = local_1c;
    local_14 = 0;
  }
LAB_00452293:
  local_6c = local_6c + -1;
  uVar2 = OWL::TRegion::_dtor((undefined4*)local_c,2);
  *in_FS_OFFSET = local_88;
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045233c  FUN_0045233c   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0045233c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452360  FUN_00452360   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00452360(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f8290);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_0045255c(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0045255c(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_0045176c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_00452538(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452538  FUN_00452538   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00452538(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045255c  FUN_0045255c   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0045255c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f82d0);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004525dc  FUN_004525dc   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004525dc(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004525f4  FUN_004525f4   (166 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004525f4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_b08;
  int local_ae4 [696];
  
  __InitExceptBlockLDTC(0x4f82f4);
  iVar4 = *(int *)(param_1 + 0x6d0);
  iVar1 = FUN_00466b18(*(int *)(param_1 + 0x38));
  piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8);
  if (*piVar3 == 0) {
    iVar2 = *piVar3;
  }
  else {
    iVar2 = *(int *)*piVar3;
  }
  piVar3 = FUN_00401150(local_ae4,0,iVar2,*(int *)(param_1 + 0x38),iVar1,iVar4);
  (**(code **)(piVar3[3] + 0x14))();
  TEADictionaryPropertiesWindows::_dtor(local_ae4,2);
  *in_FS_OFFSET = local_b08;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045269c  FUN_0045269c   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045269c(int *param_1)

{
  FUN_004581a0(param_1);
  FUN_00456950((int)param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004526b4  FUN_004526b4   (1047 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_004526b4(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  uint *puVar7;
  undefined4 *in_FS_OFFSET;
  char cVar8;
  undefined4 local_180;
  undefined1 local_15c [8];
  uint *local_154;
  int local_14c;
  int local_148;
  undefined4 local_cc [2];
  undefined4 local_c4 [34];
  undefined1 local_3c [8];
  uint *local_34;
  uint local_2c [2];
  uint *local_24;
  
  __InitExceptBlockLDTC(0x4f8374);
  FUN_004c279c(local_2c,0x81a04,(uint *)"Dictionary File (*.tsd)|*.tsd|All Files|*.*",0,0x4f75e6,
               0x4f76e3,0x1000,0,0);
  puVar2 = FUN_0041238c(param_1[0xe],0);
  FUN_00412434((int)local_3c,(int)puVar2,0);
  FUN_004dcc40(local_24,local_34,(char *)0x104);
  piVar3 = FUN_004c2c5c(&local_14c,0,*param_1,(int)local_2c,0,0x4f76e5,0);
  iVar4 = (**(code **)(piVar3[3] + 0x14))();
  cVar8 = iVar4 == 1;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + -0x5c;
  OWL::TCommonDialog::_dtor(&local_14c,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x5c;
  *(int *)(local_14c + -4) = *(int *)(local_14c + -4) + 0x5c;
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + 0x96;
  OWL::TWindow::_dtor(local_c4,0);
  *(int *)(local_148 + -4) = *(int *)(local_148 + -4) + -0x96;
  OWL::TStreamableBase::_dtor(local_cc,0);
  if (cVar8 != '\0') {
    pcVar5 = strlen(local_24);
    if (pcVar5[(int)local_24 + 1] == '\0') {
      iVar4 = FUN_00464bb4(param_1[0xe],local_24);
      if (iVar4 != 0) {
        FUN_0041251c((int)puVar2,local_24);
      }
    }
    else {
      puVar6 = (uint *)((char *)((int)local_24 + (int)pcVar5) + 1);
      do {
        std::string::string_from_cstr((int)local_15c,local_24);
        std::string::replace_fill((int)local_15c,local_154[-1],0,1,0x5c);
        uVar1 = local_154[-1];
        pcVar5 = strlen(puVar6);
        FUN_004cfad4((int)local_15c,uVar1,0,(uint)puVar6,(uint)pcVar5,0,(uint)pcVar5);
        iVar4 = FUN_00464bb4(param_1[0xe],local_154);
        if (iVar4 != 0) {
          FUN_0041251c((int)puVar2,local_154);
        }
        pcVar5 = strlen(puVar6);
        puVar6 = (uint *)((int)puVar6 + (int)(pcVar5 + 1));
        if (local_154 != (uint *)0x0) {
          if (local_154[-3] != 0xffffffff) {
            puVar7 = local_154 + -3;
            if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (puVar7 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *puVar7 = *puVar7 - 1;
              iVar4 = *puVar7 + 1;
            }
            if (iVar4 != 0) goto LAB_00452a05;
          }
          operator_delete();
          local_154 = (uint *)0x0;
        }
LAB_00452a05:
      } while ((char)*puVar6 != '\0');
    }
  }
  FUN_0045269c(param_1);
  if (local_34 != (uint *)0x0) {
    if (local_34[-3] != 0xffffffff) {
      puVar6 = local_34 + -3;
      if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (puVar6 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *puVar6 = *puVar6 - 1;
        iVar4 = *puVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_00452a9a;
    }
    operator_delete();
    local_34 = (uint *)0x0;
  }
LAB_00452a9a:
  OWL::TOpenSaveDialog::TData::_dtor((int)local_2c,2);
  *in_FS_OFFSET = local_180;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452b50  FUN_00452b50   (122 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00452b50(int *param_1,int param_2)

{
  int *piVar1;
  HWND pHVar2;
  
  if (param_2 != param_1[0x1b4]) {
    piVar1 = *(int **)(*(int *)(param_1[0x1b4] * 4 + param_1[0x1ad]) + 8);
    pHVar2 = GetFocus();
    if (pHVar2 == *(HWND *)(*piVar1 + 0xc)) {
      SetFocus(*(HWND *)(**(int **)(*(int *)(param_2 * 4 + param_1[0x1ad]) + 8) + 0xc));
    }
    else {
      param_1[0x1b4] = param_2;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452bcc  FUN_00452bcc   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00452bcc(int param_1)

{
  return *(undefined4 *)(param_1 + 0x6d0);
}

// ----------------------------------------------------------------------------------------------------
// 0x00452bdc  FUN_00452bdc   (278 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00452bdc(int param_1,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  *param_3 = 0x65;
  *param_4 = 0;
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  *param_5 = 1;
  if (*(int *)(param_1 + 0x690) == 0) {
    iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x6b4));
    iVar3 = iVar2 + 0x28;
    FUN_00479ab8(iVar3,1,100);
    if ((*(int *)(iVar1 + 0x1b8) != 0) &&
       (iVar1 = *(int *)(iVar1 + 0x1bc), *param_5 = iVar1, iVar1 == 0)) {
      iVar1 = FUN_00479b7c(iVar3);
      *param_5 = iVar1;
    }
    FUN_00479b08(iVar3,param_3,param_4);
    local_c = 0;
    if (*param_4 < *param_3) {
      if (**(char **)(iVar2 + 0x50) == '\x03') {
        local_c = 1;
      }
      else {
        local_c = 2;
      }
    }
    iVar1 = FUN_0041b280((int *)(param_1 + 0x50c));
    iVar2 = FUN_0041b280((int *)(param_1 + 0x2d8));
    FUN_00479ab8(iVar3,iVar2,iVar1);
    FUN_00479b08(iVar3,param_3,param_4);
    if ((*param_4 < *param_3) && (local_c == 0)) {
      local_c = 3;
    }
  }
  else {
    local_c = 1;
  }
  return local_c;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452cf4  FUN_00452cf4   (40 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00452cf4(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 100);
  if (iVar1 != 4) {
    FUN_0045c6d4(param_1,4);
  }
  return iVar1 != 2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452d1c  FUN_00452d1c   (94 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00452d1c(int param_1)

{
  int *piVar1;
  HWND pHVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x6d0);
  if (-1 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 3;
    }
    if (iVar3 < iVar4 >> 2) {
      piVar1 = *(int **)(*(int *)(iVar3 * 4 + *(int *)(param_1 + 0x6b4)) + 8);
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(*piVar1 + 0xc)) {
        iVar3 = FUN_0042ba14((int)piVar1);
        return iVar3;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452d7c  FUN_00452d7c   (74 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00452d7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x6d0);
  if (-1 < iVar1) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar1 < iVar3 >> 2) {
      uVar2 = FUN_0042ba08(*(int *)(*(int *)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)) + 8));
      return uVar2;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452dc8  FUN_00452dc8   (303 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00452dc8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4f83ec);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(param_1[0x321] + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    local_34 = uVar3;
    local_30 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    iVar1 = FUN_00466b28(param_1[0xe]);
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_00404870(local_8,0,param_1,param_1[0xe],iVar1);
      local_1c = 8;
    }
    local_30 = local_8;
    (**(code **)(local_8[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = *local_30;
    }
    piVar2 = (int *)param_1[0x322];
    if (piVar2 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar2,&local_38);
    }
    else {
      *piVar2 = local_38;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452ef8  FUN_00452ef8   (437 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00452ef8(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f843c);
  puVar2 = *(undefined4 **)(param_1 + 8);
  if (puVar2 == *(undefined4 **)(param_1 + 0x18)) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      iVar1 = 0x100;
    }
    else {
      iVar1 = (iVar1 >> 2) * 2;
    }
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 == (undefined4 *)0x0) {
      local_8 = &std::bad_alloc::vftable;
      FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
    }
    FUN_004530f4(*(undefined4 **)(param_1 + 4),param_2,puVar2);
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    puVar2[iVar3 >> 2] = *param_3;
    iVar3 = (int)param_2 - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_004530f4(param_2,*(undefined4 **)(param_1 + 8),puVar2 + (iVar3 >> 2) + 1);
    iVar3 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    FUN_00451754(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    *(undefined4 **)(param_1 + 0x18) = puVar2 + iVar1;
    *(undefined4 **)(param_1 + 8) = puVar2 + (iVar3 >> 2) + 1;
    *(undefined4 **)(param_1 + 4) = puVar2;
  }
  else {
    *puVar2 = puVar2[-1];
    FUN_004530d0(param_2,*(undefined4 **)(param_1 + 8) + -1,*(undefined4 **)(param_1 + 8));
    *param_2 = *param_3;
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 4;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004530d0  FUN_004530d0   (36 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004530d0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  while (param_2 != param_1) {
    param_2 = param_2 + -1;
    param_3 = param_3 + -1;
    *param_3 = *param_2;
  }
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004530f4  FUN_004530f4   (89 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_004530f4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f847c);
  for (; param_2 != param_1; param_1 = param_1 + 1) {
    *param_3 = *param_1;
    param_3 = param_3 + 1;
  }
  *in_FS_OFFSET = local_28;
  return param_3;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453174  FUN_00453174   (22 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00453174(int param_1,int param_2)

{
  for (; param_2 != param_1; param_1 = param_1 + 4) {
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045318c  FUN_0045318c   (782 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0045318c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 local_160;
  undefined *local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined1 *local_150;
  uint *local_14c;
  undefined4 local_148;
  undefined2 local_138;
  int local_12c;
  int *local_124;
  int *local_120;
  undefined4 local_11c;
  uint *local_118;
  undefined1 local_24 [8];
  uint *local_1c;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x4f8508);
  iVar1 = FUN_00464af0(param_1[0xe]);
  if (iVar1 == 0) {
    *in_FS_OFFSET = local_148;
    return local_148;
  }
  puVar5 = *(uint **)(iVar1 + 8);
  local_138 = 8;
  FUN_0043c330(local_14,*(undefined4 *)(*(int *)(param_1[0x1b4] * 4 + param_1[0x1ad]) + 8));
  local_12c = local_12c + 2;
  local_138 = 0x14;
  iVar2 = TEAPrintoutFeeder::vf2((int)local_14);
  if (iVar2 < 2) {
    local_160 = 0x2670;
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    local_160 = 0x267a;
    *puVar5 = *puVar5 | 1;
  }
  local_15c = &DAT_004f75c4;
  local_158 = 0;
  local_154 = 0;
  if (param_1[0x18] != 0) {
    param_1[0x32d] = 4;
    FUN_00464ba4();
  }
  local_138 = 0x20;
  iVar2 = param_1[0x1b4];
  iVar3 = FUN_00466b18(param_1[0xe]);
  FUN_00408cbc(local_24,iVar3,iVar2);
  local_12c = local_12c + 1;
  local_138 = 0x14;
  iVar2 = FUN_00466b28(param_1[0xe]);
  local_138 = 0x2c;
  FUN_00402fa0(&local_11c,local_1c,puVar5,local_14,(undefined4 *)(iVar2 + 0xf0),param_1[0x32d],
               param_1 + 0x32e);
  local_12c = local_12c + 5;
  local_138 = 0x14;
  local_120 = (int *)operator_new();
  if (local_120 != (int *)0x0) {
    local_138 = 0x44;
    local_124 = (int *)operator_new();
    if (local_124 != (int *)0x0) {
      local_138 = 0x50;
      FUN_00494b04(local_124,0,0,(uint *)0x0,0);
      local_138 = 0x44;
    }
    puVar6 = &local_160;
    piVar7 = local_124;
    iVar2 = TEAPrintoutFeeder::vf2((int)local_14);
    FUN_0043bbfc(local_120,0,(uint *)"TEAPrintPreview",*param_1,param_1[0xe],iVar1,
                 (int)&local_11c,0 < iVar2,local_118,puVar6,piVar7);
  }
  local_138 = 0x14;
  (**(code **)(*(int *)(local_120[1] + 8) + 0x1c))();
  local_12c = local_12c + -5;
  TEAPrintout::_dtor(&local_11c,2);
  local_12c = local_12c + -1;
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar1 = *puVar5 + 1;
      }
      if (iVar1 != 0) goto LAB_00453471;
    }
    local_14c = local_1c + -3;
    operator_delete();
    local_150 = local_24;
    local_1c = (uint *)0x0;
  }
LAB_00453471:
  local_12c = local_12c + -2;
  uVar4 = TEAPrintoutFeeder::_dtor(local_14,2);
  *in_FS_OFFSET = local_148;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004534b8  FUN_004534b8   (521 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004534b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_140;
  undefined4 local_11c [62];
  undefined1 local_24 [8];
  uint *local_1c;
  undefined4 local_14 [4];
  
  __InitExceptBlockLDTC(0x4f85c8);
  piVar1 = (int *)FUN_00464af0(*(int *)(param_1 + 0x38));
  if (piVar1 == (int *)0x0) {
    *in_FS_OFFSET = local_140;
    return local_140;
  }
  puVar5 = (uint *)piVar1[2];
  FUN_0043c330(local_14,*(undefined4 *)
                         (*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8));
  iVar2 = TEAPrintoutFeeder::vf2((int)local_14);
  if (iVar2 < 2) {
    *puVar5 = *puVar5 & 0xfffffffe;
  }
  else {
    *puVar5 = *puVar5 | 1;
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    *(undefined4 *)(param_1 + 0xcb4) = 4;
    FUN_00464ba4();
  }
  iVar2 = *(int *)(param_1 + 0x6d0);
  iVar3 = FUN_00466b18(*(int *)(param_1 + 0x38));
  FUN_00408cbc(local_24,iVar3,iVar2);
  iVar2 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_00402fa0(local_11c,local_1c,puVar5,local_14,(undefined4 *)(iVar2 + 0xf0),
               *(undefined4 *)(param_1 + 0xcb4),(undefined4 *)(param_1 + 0xcb8));
  (**(code **)(*piVar1 + 0xc))();
  TEAPrintout::_dtor(local_11c,2);
  if (local_1c != (uint *)0x0) {
    if (local_1c[-3] != 0xffffffff) {
      puVar5 = local_1c + -3;
      if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar5 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar5 = *puVar5 - 1;
        iVar2 = *puVar5 + 1;
      }
      if (iVar2 != 0) goto LAB_00453698;
    }
    operator_delete();
    local_1c = (uint *)0x0;
  }
LAB_00453698:
  uVar4 = TEAPrintoutFeeder::_dtor(local_14,2);
  *in_FS_OFFSET = local_140;
  return uVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x004536c4  FUN_004536c4   (95 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004536c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  piVar2 = (int *)FUN_00464af0(*(int *)(param_1 + 0x38));
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[2];
    puVar4 = (undefined4 *)(param_1 + 0xcb8);
    puVar5 = (undefined4 *)(iVar1 + 0x38);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | *(uint *)(param_1 + 0xcb4) | 2;
    (**(code **)(*piVar2 + 8))();
    puVar4 = (undefined4 *)(iVar1 + 0x38);
    puVar5 = (undefined4 *)(param_1 + 0xcb8);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453724  FUN_00453724   (2678 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00453792) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00453724(int *param_1)

{
  uint *puVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  HCURSOR hCursor;
  int iVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int local_a94;
  int local_a90;
  int local_a8c;
  uint *local_a88;
  int local_a84;
  HCURSOR local_a80;
  int local_a7c;
  int local_a78;
  undefined1 *local_a74;
  undefined4 local_a70;
  int local_a6c;
  int local_a68;
  undefined1 *local_a64;
  undefined4 local_a60;
  int local_a5c;
  int local_a58;
  undefined1 *local_a54;
  undefined4 local_a50;
  int local_a4c;
  int local_a48;
  undefined1 *local_a44;
  undefined4 local_a40;
  int local_a3c;
  int local_a38;
  undefined1 *local_a34;
  undefined4 local_a30;
  int local_a2c;
  int local_a28;
  undefined1 *local_a24;
  undefined4 local_a20;
  int local_a1c;
  int local_a18;
  int local_a14;
  undefined1 *local_a10;
  undefined4 local_a0c;
  int local_a08;
  int local_a04;
  uint local_a00;
  undefined1 *local_9fc;
  undefined *local_9f8;
  undefined4 local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  undefined2 local_9dc;
  int local_9d0;
  int local_9c8 [3];
  int local_9bc;
  int local_1d8 [33];
  undefined1 local_154 [8];
  int local_14c;
  undefined1 local_144 [8];
  int local_13c;
  int local_134;
  int local_130;
  undefined4 local_b4 [2];
  undefined4 local_ac [34];
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x4f86c8);
  local_9f4 = 0;
  local_9fc = local_14;
  local_9f8 = &DAT_00513d64;
  local_c = &DAT_00513d64;
  local_9d0 = local_9d0 + 1;
LAB_004537a1:
  do {
    local_9dc = 0x20;
    puVar1 = thunk_strrchr((uint *)param_1[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)param_1[0x20];
    }
    pcVar2 = thunk_FUN_004dc924((char *)puVar1,'.');
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
    local_9dc = 0x38;
    FUN_00437158((int)local_24);
    local_9d0 = local_9d0 + 1;
    if (*(char *)param_1[0x20] == '\0') {
      param_1[0x24] = local_1c;
    }
    local_9dc = 0x44;
    piVar3 = FUN_004c2e14(&local_134,0,*param_1,(int)(param_1 + 0x1e),0,0x4f76ff,0);
    local_9d0 = local_9d0 + 6;
    local_9f0 = (**(code **)(piVar3[3] + 0x14))();
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + -0x5c;
    local_9d0 = local_9d0 + -6;
    OWL::TCommonDialog::_dtor(&local_134,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x5c;
    *(int *)(local_134 + -4) = *(int *)(local_134 + -4) + 0x5c;
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + 0x96;
    local_9d0 = local_9d0 + -2;
    OWL::TWindow::_dtor(local_ac,0);
    *(int *)(local_130 + -4) = *(int *)(local_130 + -4) + -0x96;
    local_9d0 = local_9d0 + -1;
    OWL::TStreamableBase::_dtor(local_b4,0);
    param_1[0x24] = 0;
    if (local_9f0 != 1) {
      local_9d0 = local_9d0 + -1;
      if (local_1c == 0) goto LAB_00453e67;
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar3 = (int *)(local_1c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453e67;
      }
      local_a58 = local_1c + -0xc;
      local_a5c = local_1c + -0xc;
      operator_delete();
      local_a60 = 0;
      local_a64 = local_24;
      local_1c = 0;
      goto LAB_00453e67;
    }
    FUN_004cf41c((int)local_14,(uint *)param_1[0x20]);
    puVar1 = thunk_strrchr((uint *)param_1[0x20],'\\');
    if (puVar1 == (uint *)0x0) {
      puVar1 = (uint *)param_1[0x20];
    }
    pcVar2 = thunk_FUN_004dc924((char *)puVar1,'.');
    if (pcVar2 == (char *)0x0) {
      puVar1 = (uint *)PTR_DAT_004f33b8;
      if (param_1[0x23] == 1) {
        puVar1 = (uint *)&DAT_004f770c /* ".txt" */;
      }
      local_a00 = *(uint *)(local_c + -4);
      pcVar2 = strlen(puVar1);
      FUN_004cfad4((int)local_14,local_a00,0,(uint)puVar1,(uint)pcVar2,0,(uint)pcVar2);
    }
    iVar4 = thunk_FUN_004ddd54(local_c,0);
    if (iVar4 != 0) {
      local_9d0 = local_9d0 + -1;
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar3 = (int *)(local_1c + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar4 = *piVar3 + 1;
          }
          if (iVar4 != 0) goto LAB_00453dbe;
        }
        local_a38 = local_1c + -0xc;
        local_a3c = local_1c + -0xc;
        operator_delete();
        local_a40 = 0;
        local_a44 = local_24;
        local_1c = 0;
      }
LAB_00453dbe:
      local_9dc = 0x2c;
      goto LAB_00453e67;
    }
    local_9dc = 0x5c;
    FUN_00464a94((int)local_154,param_1[0xe],0x29f4);
    local_9d0 = local_9d0 + 1;
    FUN_00436b94((int)local_144,(int)local_14,(int)local_154);
    if (local_14c != 0) {
      if (*(int *)(local_14c + -0xc) != -1) {
        piVar3 = (int *)(local_14c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453af5;
      }
      local_a04 = local_14c + -0xc;
      local_a08 = local_14c + -0xc;
      operator_delete();
      local_a0c = 0;
      local_a10 = local_154;
      local_14c = 0;
    }
LAB_00453af5:
    local_9dc = 0x50;
    local_a14 = local_13c;
    iVar4 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    if (iVar4 == 6) break;
    local_9d0 = local_9d0 + -1;
    if (local_13c != 0) {
      if (*(int *)(local_13c + -0xc) != -1) {
        piVar3 = (int *)(local_13c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_00453d20;
      }
      local_a28 = local_13c + -0xc;
      local_a2c = local_13c + -0xc;
      operator_delete();
      local_a30 = 0;
      local_a34 = local_144;
      local_13c = 0;
    }
LAB_00453d20:
    local_9dc = 0x2c;
    local_9d0 = local_9d0 + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar3 = (int *)(local_1c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar4 = *piVar3 + 1;
        }
        if (iVar4 != 0) goto LAB_004537a1;
      }
      local_a68 = local_1c + -0xc;
      local_a6c = local_1c + -0xc;
      operator_delete();
      local_a70 = 0;
      local_a74 = local_24;
      local_1c = 0;
    }
  } while( true );
  local_9d0 = local_9d0 + -1;
  if (local_13c != 0) {
    if (*(int *)(local_13c + -0xc) != -1) {
      piVar3 = (int *)(local_13c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00453bdc;
    }
    local_a18 = local_13c + -0xc;
    local_a1c = local_13c + -0xc;
    operator_delete();
    local_a20 = 0;
    local_a24 = local_144;
    local_13c = 0;
  }
LAB_00453bdc:
  local_9d0 = local_9d0 + -1;
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00453e67;
    }
    local_a48 = local_1c + -0xc;
    local_a4c = local_1c + -0xc;
    operator_delete();
    local_a50 = 0;
    local_a54 = local_24;
    local_1c = 0;
  }
LAB_00453e67:
  if (local_9f0 == 1) {
    local_a7c = param_1[0x1b4];
    local_a78 = *(int *)(local_a7c * 4 + param_1[0x1ad]);
    local_9dc = 0x20;
    if (param_1[0x23] == 1) {
      hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
      local_a80 = SetCursor(hCursor);
      local_9dc = 0xbc;
      FUN_004d18dc(local_1d8,0,local_c,8,0x1b6);
      local_9d0 = local_9d0 + 8;
      local_9dc = 200;
      local_a84 = FUN_0042ba08(*(int *)(local_a78 + 8));
      iVar4 = 0;
      while ((iVar4 < local_a84 && (*(int *)(local_1d8[0] + 0x30) == 0))) {
        local_a88 = (uint *)FUN_0042baf8(*(int *)(local_a78 + 8),iVar4);
        local_9dc = 200;
        puVar9 = &LAB_0045422c;
        piVar3 = FUN_004d5374(local_1d8,local_a88);
        FUN_004d4e64(piVar3,puVar9);
        iVar4 = iVar4 + 1;
      }
      if (*(int *)(local_1d8[0] + 0x30) == 0) {
        FUN_004d7e64(local_1d8);
      }
      SetCursor(local_a80);
      if (*(int *)(local_1d8[0] + 0x30) != 0) {
        local_a8c = *param_1;
        (**(code **)(*(int *)(*(int *)(local_a8c + 0x6c) + 0x1b) + 0x30))();
      }
      local_9d0 = local_9d0 + -8;
      std::basic_ofstream_char::_dtor(local_1d8,2);
      local_9dc = 0x20;
    }
    else if (param_1[0x23] == 2) {
      if (param_1[0x19] == 3) {
        FUN_0045c6d4((int)param_1,1);
      }
      local_a90 = 0;
      local_a94 = 0;
      FUN_0045e830(local_a78,&local_a90,&local_a94);
      local_9dc = 0xd4;
      puVar7 = local_14;
      iVar6 = local_a78 + 0x10;
      iVar4 = param_1[0x1b4];
      iVar8 = local_a90;
      iVar10 = local_a94;
      iVar5 = FUN_00466b18(param_1[0xe]);
      FUN_0043c6fc(local_9c8,0,*param_1,param_1[0xe],*(int *)(local_a78 + 8),iVar5,iVar4,(int)puVar7
                   ,iVar6,iVar8,iVar10);
      local_9d0 = local_9d0 + 0x39;
      local_9dc = 0xe0;
      (**(code **)(local_9bc + 0x14))();
      FUN_0045c6d4((int)param_1,param_1[0x19]);
      local_9d0 = local_9d0 + -0x39;
      TSDictionarySaveTEADialog::_dtor(local_9c8,2);
      local_9dc = 0x20;
    }
  }
  local_9d0 = local_9d0 + -1;
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar4 = *piVar3 + 1;
      }
      if (iVar4 != 0) goto LAB_00454185;
    }
    operator_delete();
  }
LAB_00454185:
  *in_FS_OFFSET = local_9ec;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045424c  FUN_0045424c   (410 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Type propagation algorithm not settling */
void __cdecl FUN_0045424c(int *param_1)

{
  int iVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  int local_54 [8];
  HGLOBAL local_34;
  HCURSOR local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  char local_5;
  
  __InitExceptBlockLDTC(0x4f87e0);
  iVar1 = *(int *)(*(int *)(param_1[0x1ad] + param_1[0x1b4] * 4) + 8);
  local_2c = FUN_0042ba14(iVar1);
  if (local_2c < 1) {
    *in_FS_OFFSET = local_28;
  }
  else {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    local_30 = SetCursor(hCursor);
    ShowCursor(1);
    local_18 = 8;
    FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
    local_c = local_c + 1;
    local_18 = 0x14;
    BVar2 = EmptyClipboard();
    if (BVar2 != 0) {
      pcVar6 = (char *)0x0;
      FUN_0043061c(local_54,iVar1);
      while( true ) {
        iVar4 = FUN_00430678(local_54);
        if (iVar4 < 0) break;
        puVar3 = (uint *)FUN_0042baf8(iVar1,iVar4);
        pcVar5 = strlen(puVar3);
        pcVar6 = pcVar6 + (int)pcVar5;
      }
      if (1 < local_2c) {
        pcVar6 = pcVar6 + local_2c * 2;
      }
      local_34 = GlobalAlloc(0x42,(SIZE_T)(pcVar6 + 1));
      if (local_34 != (HGLOBAL)0x0) {
        pcVar6 = GlobalLock(local_34);
        local_18 = 0x14;
        FUN_00430730(local_54,0);
        while( true ) {
          iVar4 = FUN_00430678(local_54);
          if (iVar4 < 0) break;
          pcVar5 = (char *)FUN_0042baf8(iVar1,iVar4);
          local_18 = 0x14;
          for (; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
            *pcVar6 = *pcVar5;
            pcVar6 = pcVar6 + 1;
          }
          if (1 < local_2c) {
            *pcVar6 = '\r';
            pcVar6[1] = '\n';
            pcVar6 = pcVar6 + 2;
          }
        }
        GlobalUnlock(local_34);
        SetClipboardData(1,local_34);
      }
    }
    FUN_0048bc08(&local_5);
    ShowCursor(0);
    SetCursor(local_30);
    local_c = local_c + -1;
    OWL::TClipboard::_dtor(&local_5,2);
    *in_FS_OFFSET = local_28;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454434  FUN_00454434   (35 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00454434(int param_1)

{
  FUN_0042ed34(*(int **)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454458  FUN_00454458   (31 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00454458(int *param_1)

{
  undefined4 uVar1;
  
  if (param_1[0x18] == 0) {
    uVar1 = *(undefined4 *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  else {
    uVar1 = *(undefined4 *)(*param_1 + 0xc);
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454478  TEAViewWindows::CeShared_454478   (171 bytes)   [owl:response-table message-handler]
//   one handler for 13 table entries: &File > &Open...	Ctrl+O; &File > Save Results from * &As...	Ctrl+S; id 7630; id 12470; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &File > &Print Results from *...	Ctrl+P; &File > Print Pre&view Results from *...; &File > P&roperties from *; &Word Search	Ctrl+W; …
//   also: TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]; TEAViewWindows::CeShared_454478 [owl:response-table]
void __cdecl TEAViewWindows::CeShared_454478(int param_1,int *param_2)

{
  int iVar1;
  
  FUN_00454524(param_1,param_2[1]);
  (**(code **)*param_2)();
  iVar1 = param_2[1];
  if (iVar1 < 0x31d9) {
    if (iVar1 != 0x31d8) {
      if ((iVar1 != 0x2e54) && (iVar1 != 0x2e5e)) {
        return;
      }
      (**(code **)(*param_2 + 8))();
      return;
    }
  }
  else if (iVar1 != 0x31e2) {
    if (iVar1 != 0x3a16) {
      return;
    }
    (**(code **)(*param_2 + 8))();
    return;
  }
  (**(code **)(*param_2 + 8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454524  FUN_00454524   (932 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00454524(int param_1,int param_2)

{
  HWND pHVar1;
  BOOL BVar2;
  int iVar3;
  uint local_c;
  uint local_8;
  
  if (0x1db0 < param_2) {
    if (param_2 < 0x2e5f) {
      if (param_2 != 0x2e5e) {
        if (param_2 == 0x1dba) {
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          return BVar2 != 0;
        }
        if (param_2 == 0x1dc4) {
LAB_00454750:
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          if (BVar2 == 0) {
            return false;
          }
          iVar3 = FUN_004acea4((int *)(param_1 + 0x158),&local_8,&local_c);
          if (iVar3 == -1) {
            return false;
          }
          return (int)local_8 < (int)local_c;
        }
        if (param_2 == 0x1dce) {
          return false;
        }
        if (param_2 != 0x2e54) goto LAB_00454881;
      }
      if (*(int *)(param_1 + 100) != 2) {
        iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (1 < (uint)(iVar3 >> 2)) {
          return true;
        }
      }
      return false;
    }
    if (param_2 == 0x30b6) {
      return false;
    }
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      return *(int *)(param_1 + 100) != 2;
    }
    if (param_2 == 0x3a16) {
      return true;
    }
LAB_00454881:
    pHVar1 = GetFocus();
    BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
    if (BVar2 == 0) {
      iVar3 = FUN_00452d1c(param_1);
      return iVar3 == 1;
    }
    return *(int *)(*(int *)(param_1 + 0x6a0) + -4) != 0;
  }
  if (param_2 == 0x1db0) {
    if (*(int *)(param_1 + 100) != 2) {
      iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (*(int *)(param_1 + 0x6d0) < (iVar3 >> 2) + -1) {
        return true;
      }
    }
    return false;
  }
  if (param_2 < 0x1d75) {
    if (param_2 != 0x1d74) {
      if (param_2 < 0x1d57) {
        if (param_2 == 0x1d56) {
LAB_004547fb:
          iVar3 = FUN_00452d7c(param_1);
          if ((0 < iVar3) &&
             ((iVar3 = FUN_00464af0(*(int *)(param_1 + 0x38)), iVar3 != 0 || (param_2 == 0x1d56))))
          {
            return true;
          }
          return false;
        }
        if (param_2 == 0x1d38) {
          if ((*(int *)(param_1 + 100) != 2) && (iVar3 = FUN_00452d7c(param_1), 0 < iVar3)) {
            return true;
          }
          return false;
        }
        if (param_2 == 0x1d4c) {
          pHVar1 = GetFocus();
          BVar2 = IsChild(*(HWND *)(*(int *)(param_1 + 0x158) + 0xc),pHVar1);
          if (BVar2 == 0) {
            iVar3 = FUN_00452d1c(param_1);
            return 0 < iVar3;
          }
          goto LAB_00454750;
        }
      }
      else if ((param_2 == 0x1d60) || (param_2 == 0x1d6a)) goto LAB_004547fb;
      goto LAB_00454881;
    }
  }
  else {
    if (param_2 == 0x1d7e) {
      if (*(int *)(param_1 + 100) != 2) {
        iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) < 10) {
          return true;
        }
      }
      return false;
    }
    if (param_2 == 0x1d88) {
      return *(int *)(param_1 + 100) != 2;
    }
    if (param_2 != 0x1d9c) {
      if (param_2 == 0x1da6) {
        if ((*(int *)(param_1 + 100) != 2) && (0 < *(int *)(param_1 + 0x6d0))) {
          return true;
        }
        return false;
      }
      goto LAB_00454881;
    }
  }
  if (*(int *)(param_1 + 100) != 2) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 != 0) {
      return true;
    }
  }
  return false;
}

// ----------------------------------------------------------------------------------------------------
// 0x004548d0  TEAViewWindows::CmShared_4548d0   (592 bytes)   [owl:response-table message-handler]
//   one handler for 13 table entries: &File > P&roperties from *; &File > &Open...	Ctrl+O; &File > Save Results from * &As...	Ctrl+S; id 7630; id 12470; &Edit > &Lookup...	Ctrl+Enter; &Edit > Lookup in &New Window...	Shift+Ctrl+Enter; &Edit > &Copy	Ctrl+C; &Edit > &Select All	Ctrl+A; &File > &Print Results from *...	Ctrl+P; &File > Print Pre&view Results from *...; &Word Search	Ctrl+W; …
//   also: TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]; TEAViewWindows::CmShared_4548d0 [owl:response-table]
void __cdecl TEAViewWindows::CmShared_4548d0(int *param_1,int param_2)

{
  bool bVar1;
  HWND pHVar2;
  BOOL BVar3;
  
  bVar1 = FUN_00454524((int)param_1,param_2);
  if (!bVar1) {
    return;
  }
  if (param_2 < 0x1dbb) {
    if (param_2 == 0x1dba) {
      FUN_004a76a8(param_1[0x56],0x302,0,0);
      return;
    }
    if (param_2 < 0x1d61) {
      if (param_2 == 0x1d60) {
        FUN_004534b8((int)param_1);
        return;
      }
      if (param_2 == 0x1d38) {
        FUN_00453724(param_1);
        return;
      }
      if (param_2 == 0x1d4c) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_0045424c(param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x301,0,0);
        return;
      }
      if (param_2 == 0x1d56) {
        pHVar2 = GetFocus();
        BVar3 = IsChild(*(HWND *)(param_1[0x56] + 0xc),pHVar2);
        if (BVar3 == 0) {
          FUN_00454434((int)param_1);
          return;
        }
        FUN_004a76a8(param_1[0x56],0x142,0,-0x10000);
        return;
      }
    }
    else {
      if (param_2 == 0x1d6a) {
        FUN_0045318c(param_1);
        return;
      }
      if (param_2 == 0x1d74) {
        FUN_004525f4((int)param_1);
        return;
      }
      if (param_2 == 0x1d7e) {
        FUN_004526b4(param_1);
        return;
      }
    }
  }
  else if (param_2 < 0x2e5f) {
    if (param_2 == 0x2e5e) {
      param_1[0x29] = 1;
      FUN_00451784(param_1,5);
      return;
    }
    if (param_2 == 0x1dc4) {
      FUN_004a76a8(param_1[0x56],0x300,0,0);
      return;
    }
    if (param_2 == 0x1dce) {
LAB_00454a3d:
      FUN_0045734c();
      return;
    }
    if (param_2 == 0x2e54) {
      param_1[0x29] = 0;
      FUN_00451784(param_1,5);
      return;
    }
  }
  else {
    if (param_2 == 0x30b6) goto LAB_00454a3d;
    if ((param_2 == 0x31d8) || (param_2 == 0x31e2)) {
      param_1[0x1a4] = (uint)(param_2 == 0x31e2);
      FUN_0045269c(param_1);
      return;
    }
  }
  FUN_00457354(param_1,*param_1,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454b20  TEAViewWindows::vf15   (32 bytes)   [rtti:vtable virtual slot 15]
void __cdecl TEAViewWindows::vf15(int *param_1)

{
  PropertiesViewWindows::vf15(param_1);
  SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00454b40  TEAViewWindows::vf19   (6143 bytes, 3 ranges)   [rtti:vtable virtual slot 19]
/* WARNING: Removing unreachable block (ram,0x00455078) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::vf19(int *param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  BOOL BVar6;
  int iVar7;
  HWND pHVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *in_FS_OFFSET;
  char cVar11;
  uint local_43c [27];
  undefined4 local_3d0;
  undefined4 local_3b0;
  undefined4 local_3a0;
  undefined4 local_390;
  undefined4 local_380;
  undefined4 local_360;
  undefined4 local_350;
  undefined4 local_340;
  undefined4 local_330;
  undefined4 local_310;
  undefined *local_300;
  undefined4 local_2f0;
  uint *local_2d8;
  int local_2cc;
  int local_2c8;
  int *local_2c4;
  undefined1 *local_2c0;
  undefined4 local_2bc;
  int local_2b8;
  int local_2b4;
  int *local_2b0;
  int *local_2a4;
  int local_2a0;
  undefined1 *local_29c;
  undefined4 local_298;
  undefined *local_294;
  undefined *local_290;
  int *local_28c;
  int local_280;
  int local_27c;
  undefined1 *local_278;
  undefined4 local_274;
  undefined *local_270;
  undefined *local_26c;
  int local_268;
  int local_264;
  int local_260;
  undefined1 *local_25c;
  undefined4 local_258;
  int local_254;
  int local_250;
  int *local_24c;
  int local_248;
  int local_244;
  undefined1 *local_240;
  undefined4 local_23c;
  int local_238;
  int local_234;
  int *local_230;
  undefined1 *local_22c;
  undefined4 local_228;
  int local_224;
  int local_220;
  int *local_21c;
  int local_210;
  int local_20c;
  int *local_208;
  undefined1 *local_204;
  undefined4 local_200;
  undefined *local_1fc;
  undefined *local_1f8;
  int *local_1f4;
  undefined1 *local_1f0;
  undefined4 local_1ec;
  int local_1e8;
  int local_1e4;
  int *local_1e0;
  int local_1dc;
  int local_1d8;
  undefined1 *local_1d4;
  undefined4 local_1d0;
  int local_1cc;
  int local_1c8;
  int *local_1c4;
  undefined1 *local_1c0;
  undefined4 local_1bc;
  int local_1b8;
  int local_1b4;
  int *local_1b0;
  int local_1ac;
  int local_1a8;
  int local_1a4 [3];
  int local_198;
  int local_194;
  undefined1 *local_190;
  undefined4 local_18c;
  undefined *local_188;
  undefined *local_184;
  uint local_180;
  char *local_17c;
  int local_178;
  int local_174;
  int local_170;
  byte local_169;
  char *local_168;
  char *local_164;
  char *local_160;
  int local_15c;
  int local_158;
  uint *local_154;
  undefined1 *local_150;
  undefined *local_14c;
  undefined4 local_148;
  int local_144;
  int *local_140;
  int local_13c;
  int local_138;
  int *local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_124;
  int *local_120;
  uint local_11c;
  int *local_118;
  int local_114;
  int local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  byte *local_104;
  byte *local_100;
  byte *local_fc;
  int *local_f8;
  undefined1 *local_f4;
  int local_f0;
  int local_ec;
  undefined4 local_e8;
  undefined2 local_d8;
  int local_cc;
  undefined1 local_c4 [8];
  int local_bc;
  undefined1 local_b4 [8];
  int local_ac;
  undefined1 local_9c [4];
  int local_98;
  int local_94;
  undefined1 local_7c [4];
  int local_78;
  int local_74;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined4 local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  byte *local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8880);
  iVar2 = param_1[0xe];
  local_ec = FUN_00466b28(iVar2);
  if (param_3 != 0x10b8) {
    if (param_3 == 0x10cc) {
      FUN_00452dc8(param_1);
    }
    else if (param_3 == 0x5fa) {
      (**(code **)(param_1[3] + 0xb4))();
    }
    else {
      (**(code **)(param_1[3] + 0x24))(local_ec,param_1[3],iVar2,param_1,2);
    }
    goto LAB_00456335;
  }
  if (param_1[0x19] == 2) {
    FUN_0045c6d4((int)param_1,3);
    goto LAB_00456335;
  }
  iVar2 = FUN_004581a0(param_1);
  if (iVar2 == 0) goto LAB_00456335;
  local_d8 = 0x14;
  FUN_00464a94((int)local_14,param_1[0xe],0x16a8);
  local_cc = local_cc + 1;
  local_d8 = 8;
  (*(undefined4 *)&DAT_004f3434) = 0;
  local_f0 = param_1[0x19];
  FUN_0045c6d4((int)param_1,2);
  if (local_f0 == 1) {
    local_d8 = 0x20;
    FUN_0041c780((int)local_24,(int)(param_1 + 0x56),0);
    local_f4 = local_24;
    local_cc = local_cc + 1;
    local_f8 = param_1 + 0x1a6;
    uVar3 = FUN_004d40d0((int)local_f8,0,*(uint *)(param_1[0x1a8] + -4),local_1c,
                         *(uint *)(local_1c + -4));
    cVar11 = uVar3 != 0;
    local_cc = local_cc + -1;
    if (local_1c != (byte *)0x0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_fc = local_1c + -0xc;
        if (local_fc == (byte *)&DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_fc == (byte *)&DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *(int *)local_fc = *(int *)local_fc + -1;
          iVar2 = *(int *)local_fc + 1;
        }
        if (iVar2 != 0) goto LAB_00454d24;
      }
      local_100 = local_1c + -0xc;
      local_104 = local_1c + -0xc;
      operator_delete();
      local_108 = 0;
      local_10c = local_24;
      local_1c = (byte *)0x0;
      local_2f0 = 0;
    }
LAB_00454d24:
    if (cVar11 != '\0') {
      (**(code **)(param_1[0x59] + 100))();
    }
    FUN_00466b10();
    FUN_00456480((int)param_1);
    local_110 = 0;
    local_d8 = 8;
    if (*(int *)(local_ec + 0x1b0) != 0) {
      local_114 = 1;
      local_118 = param_1 + 0x1ac;
      iVar2 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if (iVar2 >> 2 != 0) {
        local_114 = FUN_00479b7c(*(int *)param_1[0x1ad] + 0x28);
      }
      if (*(int *)(local_ec + 0x1b8) == 0) {
        local_110 = 1;
      }
      else if ((*(int *)(local_ec + 0x1bc) == 1) ||
              ((*(int *)(local_ec + 0x1bc) == 0 && (local_114 == 1)))) {
        local_110 = 3;
      }
      else {
        local_110 = 5;
      }
      if (*(int *)(local_ec + 0x1b4) == 0) {
        local_110 = local_110 + 1;
      }
    }
    local_11c = 0;
    while( true ) {
      local_120 = param_1 + 0x1ac;
      iVar2 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar2 < 0) {
        iVar2 = iVar2 + 3;
      }
      if ((uint)(iVar2 >> 2) <= local_11c) break;
      if ((*(int *)(local_ec + 0x24) != 2) || (local_11c == param_1[0x1b4])) {
        local_124 = local_11c;
        FUN_004cf384(*(int *)(local_11c * 4 + param_1[0x1ad]) + 0x10,(int)(param_1 + 0x1a6));
        local_128 = local_11c;
        FUN_00429084(*(int **)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 4),0);
        local_12c = local_11c;
        FUN_0042bb18(*(int **)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 8));
        if ((*(int *)(local_ec + 0x24) == 0) && (*(int *)(local_ec + 0x1b0) == 0)) {
          local_134 = param_1 + 0x1ac;
          iVar2 = param_1[0x1ae] - param_1[0x1ad];
          if (iVar2 < 0) {
            iVar2 = iVar2 + 3;
          }
          if ((uint)(iVar2 >> 2) <= local_11c + 1) goto LAB_00454f32;
          uVar5 = 1;
        }
        else {
LAB_00454f32:
          uVar5 = 0;
        }
        local_130 = local_11c;
        FUN_0042b9ec(*(int *)(*(int *)(local_11c * 4 + param_1[0x1ad]) + 8),local_110,uVar5);
      }
      local_11c = local_11c + 1;
    }
  }
  SetFocus(*(HWND *)(param_1[0x84] + 0xc));
  (**(code **)(param_1[3] + 0xa4))();
  FUN_00466e78();
  FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
LAB_00456077:
  if (param_1[0x1a] != -1) {
    local_138 = FUN_00466b18(param_1[0xe]);
    local_13c = param_1[0x1a];
    iVar2 = *(int *)(local_13c * 4 + param_1[0x1ad]);
    local_140 = *(int **)(iVar2 + 8);
    local_144 = 0;
    local_148 = 0;
    local_150 = local_34;
    local_14c = &DAT_00513d64;
    local_2c = &DAT_00513d64;
    local_300 = &DAT_00513d64;
    local_cc = local_cc + 1;
    local_d8 = 0x50;
    local_154 = (uint *)0x0;
    if (param_1[0x1b] != 0) {
      local_158 = 0;
      uVar3 = 0;
      do {
        if (*(int *)(local_ec + 0x1cc + uVar3 * 4) == 0) {
          local_158 = 1;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < 4);
      FUN_0044fdb8(param_1 + 0x1b5,local_138,param_1[0x1a],*(int *)(iVar2 + 0xc),
                   *(int *)(param_1[0x1b] + 0x1c));
LAB_004550ee:
      FUN_0044ffb8(param_1 + 0x1b5,*(int *)(param_1[0x1b] + 0x1c));
      local_15c = 400;
      local_d8 = 0x50;
      do {
        while( true ) {
          pcVar4 = InputEngine::NextMatch(param_1[0x1b],iVar2 + 0x28);
          if (pcVar4 == (char *)0x0) goto LAB_00455425;
          if (*pcVar4 == -1) {
            FUN_0045e800(iVar2);
            goto LAB_00455177;
          }
          puVar10 = (uint *)(param_1[0x1b] + 0x408);
          local_160 = strlen(puVar10);
          if (local_158 != 0) break;
LAB_00455342:
          if (*(int *)(local_ec + 0x24) != 0) {
LAB_004553b5:
            if (*(int *)(local_ec + 0x1c0) != 0) {
              local_154 = (uint *)InputEngine::GetAnnotation(param_1[0x1b]);
            }
            if (*(int *)(local_ec + 0x1c4) != 0) {
              FUN_00479518(iVar2 + 0x28,(int)local_14,(int)local_34);
            }
            FUN_0042bdf0(local_140,'\0');
            FUN_0042dc18(local_140,puVar10,local_154,(int)local_34,0);
            goto LAB_00455425;
          }
          local_180 = 0;
          local_d8 = 0x50;
          while( true ) {
            if ((uint)param_1[0x1a] <= local_180) goto LAB_004553b5;
            bVar1 = FUN_0042ea44(*(int *)(*(int *)(local_180 * 4 + param_1[0x1ad]) + 8),puVar10,
                                 local_160);
            if (bVar1) break;
            local_180 = local_180 + 1;
          }
          iVar7 = local_15c + -1;
          bVar1 = local_15c < 1;
          local_15c = iVar7;
          if (bVar1) goto LAB_00455425;
        }
        pcVar4 = (char *)0x0;
        local_164 = local_160;
        if (*(char **)(iVar2 + 0xc) != local_160) {
          pcVar4 = (char *)0xffffffff;
          local_168 = (char *)0x0;
          for (local_2d8 = puVar10; (byte)*local_2d8 != 0; local_2d8 = (uint *)((int)local_2d8 + 1))
          {
            local_169 = (byte)*local_2d8;
            local_170 = param_1[0x1a];
            local_174 = *(int *)(*(int *)(*(int *)(local_138 + 0xc) + local_170 * 4) + 8 +
                                (uint)local_169 * 8);
            if ((local_174 != 0xff) && (local_164 = local_168 + 1, pcVar4 == (char *)0xffffffff)) {
              pcVar4 = local_168;
            }
            local_168 = local_168 + 1;
          }
        }
        local_178 = 0;
        local_d8 = 0x50;
        if (pcVar4 + *(int *)(iVar2 + 0xc) == local_164) {
          local_17c = pcVar4;
          if (pcVar4 < local_164) {
            do {
              BVar6 = IsCharUpperA(*(CHAR *)((int)puVar10 + (int)local_17c));
              if (BVar6 != 0) {
                local_178 = 1;
              }
              local_17c = local_17c + 1;
            } while (local_17c < local_164);
          }
        }
        else {
          pcVar4 = thunk_FUN_004dc924((char *)puVar10,' ');
          if (pcVar4 == (char *)0x0) {
            local_178 = 2;
          }
          else {
            local_178 = 3;
          }
        }
        if (*(int *)(local_ec + 0x1cc + local_178 * 4) != 0) goto LAB_00455342;
        iVar7 = local_15c + -1;
        bVar1 = 0 < local_15c;
        local_15c = iVar7;
      } while (bVar1);
      goto LAB_00455425;
    }
    if (param_1[0x1c] == 0) {
      FUN_00410da0((int *)param_1[0x1d],&local_260,&local_264);
      FUN_0044fd7c(param_1 + 0x1b5,local_264,local_260);
      do {
        puVar10 = (uint *)TSDictionaryDefinitionSearchSequential::Next((int *)param_1[0x1d],200);
        local_d8 = 0x50;
        FUN_00410da0((int *)param_1[0x1d],&local_260,&local_268);
        FUN_0044ffb8(param_1 + 0x1b5,local_260);
        if (puVar10 != (uint *)0x0) {
          if ((char)*puVar10 == '\0') goto LAB_00455fa5;
          FUN_0042bdf0(local_140,'\0');
          FUN_004cf41c((int)local_34,(uint *)(param_1[0x1d] + 0x90));
          FUN_0042dc18(local_140,puVar10,(uint *)0x0,(int)local_34,
                       *(undefined4 *)(param_1[0x1d] + 0x110));
        }
        iVar2 = FUN_00456728(param_1,&local_144);
        if (iVar2 != 0) {
          local_cc = local_cc + -1;
          if (local_2c != (undefined *)0x0) {
            if (*(int *)(local_2c + -0xc) != -1) {
              piVar9 = (int *)(local_2c + -0xc);
              if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *piVar9 = *piVar9 + -1;
                iVar2 = *piVar9 + 1;
              }
              if (iVar2 != 0) goto LAB_00455ef9;
            }
            local_26c = local_2c + -0xc;
            local_270 = local_2c + -0xc;
            operator_delete();
            local_274 = 0;
            local_278 = local_34;
            local_2c = (undefined *)0x0;
            local_3b0 = 0;
          }
LAB_00455ef9:
          local_cc = local_cc + -1;
          if (local_c != 0) {
            if (*(int *)(local_c + -0xc) != -1) {
              piVar9 = (int *)(local_c + -0xc);
              if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (piVar9 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *piVar9 = *piVar9 + -1;
                iVar2 = *piVar9 + 1;
              }
              if (iVar2 != 0) goto LAB_00455f8f;
            }
            local_27c = local_c + -0xc;
            local_280 = local_c + -0xc;
            operator_delete();
          }
LAB_00455f8f:
          *in_FS_OFFSET = local_e8;
          return;
        }
      } while( true );
    }
    FUN_00410750(param_1[0x1c],local_1a4,&local_1a8);
    FUN_0044fd7c(param_1 + 0x1b5,local_1a8,local_1a4[0]);
    local_d8 = 0x74;
    FUN_00473df0((int)local_b4);
    local_cc = local_cc + 6;
    local_d8 = 0x80;
    while (iVar2 = TSDictionaryDefinitionSearchIndexed::Next((int *)param_1[0x1c],(int)local_b4), iVar2 != 0) {
      FUN_00410750(param_1[0x1c],local_1a4,&local_1ac);
      FUN_0044ffb8(param_1 + 0x1b5,local_1a4[0]);
      FUN_0042bdf0(local_140,'\0');
      FUN_0042dc18(local_140,*(uint **)(local_98 + 8),(uint *)0x0,local_78,local_3c);
      iVar2 = FUN_00456728(param_1,&local_144);
      if (iVar2 != 0) {
        local_cc = local_cc + -2;
        if (local_44 != 0) {
          if (*(int *)(local_44 + -0xc) != -1) {
            local_1b0 = (int *)(local_44 + -0xc);
            if (local_1b0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1b0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1b0 = *local_1b0 + -1;
              iVar2 = *local_1b0 + 1;
            }
            if (iVar2 != 0) goto LAB_00455743;
          }
          local_1b4 = local_44 + -0xc;
          local_1b8 = local_44 + -0xc;
          operator_delete();
          local_1bc = 0;
          local_1c0 = local_4c;
          local_44 = 0;
          local_330 = 0;
        }
LAB_00455743:
        local_d8 = 0x80;
        local_cc = local_cc + -1;
        if (local_54 != 0) {
          if (*(int *)(local_54 + -0xc) != -1) {
            local_1c4 = (int *)(local_54 + -0xc);
            if (local_1c4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1c4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1c4 = *local_1c4 + -1;
              iVar2 = *local_1c4 + 1;
            }
            if (iVar2 != 0) goto LAB_004557fe;
          }
          local_1c8 = local_54 + -0xc;
          local_1cc = local_54 + -0xc;
          operator_delete();
          local_1d0 = 0;
          local_1d4 = local_5c;
          local_54 = 0;
          local_340 = 0;
        }
LAB_004557fe:
        local_cc = local_cc + -1;
        FUN_0040b4f0(local_7c,local_78,local_74);
        local_1d8 = local_78;
        operator_delete();
        local_cc = local_cc + -1;
        FUN_0040b4f0(local_9c,local_98,local_94);
        local_1dc = local_98;
        operator_delete();
        local_cc = local_cc + -1;
        if (local_ac != 0) {
          if (*(int *)(local_ac + -0xc) != -1) {
            local_1e0 = (int *)(local_ac + -0xc);
            if (local_1e0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1e0 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1e0 = *local_1e0 + -1;
              iVar2 = *local_1e0 + 1;
            }
            if (iVar2 != 0) goto LAB_00455931;
          }
          local_1e4 = local_ac + -0xc;
          local_1e8 = local_ac + -0xc;
          operator_delete();
          local_1ec = 0;
          local_1f0 = local_b4;
          local_ac = 0;
          local_350 = 0;
        }
LAB_00455931:
        local_cc = local_cc + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            local_1f4 = (int *)(local_2c + -0xc);
            if (local_1f4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_1f4 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_1f4 = *local_1f4 + -1;
              iVar2 = *local_1f4 + 1;
            }
            if (iVar2 != 0) goto LAB_004559e3;
          }
          local_1f8 = local_2c + -0xc;
          local_1fc = local_2c + -0xc;
          operator_delete();
          local_200 = 0;
          local_204 = local_34;
          local_2c = (undefined *)0x0;
          local_360 = 0;
        }
LAB_004559e3:
        local_cc = local_cc + -1;
        if (local_c != 0) {
          if (*(int *)(local_c + -0xc) != -1) {
            local_208 = (int *)(local_c + -0xc);
            if (local_208 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else if (local_208 == &DAT_00513d58) {
              iVar2 = 1;
            }
            else {
              *local_208 = *local_208 + -1;
              iVar2 = *local_208 + 1;
            }
            if (iVar2 != 0) goto LAB_00455a95;
          }
          local_20c = local_c + -0xc;
          local_210 = local_c + -0xc;
          operator_delete();
        }
LAB_00455a95:
        *in_FS_OFFSET = local_e8;
        return;
      }
    }
    local_cc = local_cc + -2;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_21c = (int *)(local_44 + -0xc);
        if (local_21c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_21c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_21c = *local_21c + -1;
          iVar2 = *local_21c + 1;
        }
        if (iVar2 != 0) goto LAB_00455b79;
      }
      local_220 = local_44 + -0xc;
      local_224 = local_44 + -0xc;
      operator_delete();
      local_228 = 0;
      local_22c = local_4c;
      local_44 = 0;
      local_380 = 0;
    }
LAB_00455b79:
    local_d8 = 0x80;
    local_cc = local_cc + -1;
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        local_230 = (int *)(local_54 + -0xc);
        if (local_230 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_230 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_230 = *local_230 + -1;
          iVar2 = *local_230 + 1;
        }
        if (iVar2 != 0) goto LAB_00455c34;
      }
      local_234 = local_54 + -0xc;
      local_238 = local_54 + -0xc;
      operator_delete();
      local_23c = 0;
      local_240 = local_5c;
      local_54 = 0;
      local_390 = 0;
    }
LAB_00455c34:
    local_cc = local_cc + -1;
    FUN_0040b4f0(local_7c,local_78,local_74);
    local_244 = local_78;
    operator_delete();
    local_cc = local_cc + -1;
    FUN_0040b4f0(local_9c,local_98,local_94);
    local_248 = local_98;
    operator_delete();
    local_cc = local_cc + -1;
    if (local_ac != 0) {
      if (*(int *)(local_ac + -0xc) != -1) {
        local_24c = (int *)(local_ac + -0xc);
        if (local_24c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (local_24c == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *local_24c = *local_24c + -1;
          iVar2 = *local_24c + 1;
        }
        if (iVar2 != 0) goto LAB_00455d67;
      }
      local_250 = local_ac + -0xc;
      local_254 = local_ac + -0xc;
      operator_delete();
      local_258 = 0;
      local_25c = local_b4;
      local_ac = 0;
      local_3a0 = 0;
    }
LAB_00455d67:
    local_d8 = 0x50;
    goto LAB_00455fa5;
  }
  FUN_0045c6d4((int)param_1,1);
  pHVar8 = GetFocus();
  if (pHVar8 == *(HWND *)(param_1[0x84] + 0xc)) {
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  (**(code **)(param_1[3] + 0xa4))();
  local_2a0 = 0;
  local_d8 = 8;
  for (local_2a4 = (int *)param_1[0x1ad]; local_2a4 < (int *)param_1[0x1ae];
      local_2a4 = local_2a4 + 1) {
    iVar2 = FUN_0042ba08(*(int *)(*local_2a4 + 8));
    local_2a0 = local_2a0 + iVar2;
  }
  FUN_004e0344((undefined1 *)local_43c,(byte *)"%d result%s found");
  local_d8 = 0x140;
  std::string::string_from_cstr((int)local_c4,local_43c);
  local_cc = local_cc + 1;
  FUN_00465a64(param_1[0xe],(int)local_c4);
  local_cc = local_cc + -1;
  if (local_bc != 0) {
    if (*(int *)(local_bc + -0xc) != -1) {
      local_2b0 = (int *)(local_bc + -0xc);
      if (local_2b0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2b0 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2b0 = *local_2b0 + -1;
        iVar2 = *local_2b0 + 1;
      }
      if (iVar2 != 0) goto LAB_0045623b;
    }
    local_2b4 = local_bc + -0xc;
    local_2b8 = local_bc + -0xc;
    operator_delete();
    local_2bc = 0;
    local_2c0 = local_c4;
    local_bc = 0;
  }
LAB_0045623b:
  local_d8 = 8;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      local_2c4 = (int *)(local_c + -0xc);
      if (local_2c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_2c4 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_2c4 = *local_2c4 + -1;
        iVar2 = *local_2c4 + 1;
      }
      if (iVar2 != 0) goto LAB_00456335;
    }
    local_2c8 = local_c + -0xc;
    local_2cc = local_c + -0xc;
    operator_delete();
  }
LAB_00456335:
  *in_FS_OFFSET = local_e8;
  return;
LAB_00455177:
  uVar5 = FUN_0045e810(iVar2);
  if ((char)uVar5 == '\0') goto LAB_00455182;
  bVar1 = InputEngine::StartLength(param_1[0x1b],*(int *)(iVar2 + 0xc));
  if (CONCAT31(extraout_var,bVar1) != 0) {
    FUN_00479484(iVar2 + 0x28,*(int *)(iVar2 + 0xc));
    local_d8 = 0x50;
    goto LAB_00455182;
  }
  FUN_0045e800(iVar2);
  goto LAB_00455177;
LAB_00455588:
  FUN_0044ffb8(param_1 + 0x1b5,*(int *)(param_1[0x1b] + 0x1c));
LAB_00455fa5:
  FUN_0045db98((int)param_1);
  FUN_00456480((int)param_1);
  local_cc = local_cc + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      local_28c = (int *)(local_2c + -0xc);
      if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_28c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_28c = *local_28c + -1;
        iVar2 = *local_28c + 1;
      }
      if (iVar2 != 0) goto LAB_00456065;
    }
    local_290 = local_2c + -0xc;
    local_294 = local_2c + -0xc;
    operator_delete();
    local_298 = 0;
    local_29c = local_34;
    local_2c = (undefined *)0x0;
    local_3d0 = 0;
  }
LAB_00456065:
  local_d8 = 8;
  goto LAB_00456077;
LAB_00455182:
  uVar5 = FUN_0045e810(iVar2);
  if ((char)uVar5 == '\0') goto LAB_00455588;
  FUN_0044fdb8(param_1 + 0x1b5,local_138,param_1[0x1a],*(int *)(iVar2 + 0xc),
               *(int *)(param_1[0x1b] + 0x1c));
LAB_00455425:
  iVar7 = FUN_00456728(param_1,&local_144);
  if (iVar7 == 0) goto LAB_004550ee;
  local_cc = local_cc + -1;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar9 = (int *)(local_2c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_004554d3;
    }
    local_184 = local_2c + -0xc;
    local_188 = local_2c + -0xc;
    operator_delete();
    local_18c = 0;
    local_190 = local_34;
    local_2c = (undefined *)0x0;
    local_310 = 0;
  }
LAB_004554d3:
  local_d8 = 0x50;
  local_cc = local_cc + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar9 = (int *)(local_c + -0xc);
      if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar2 = *piVar9 + 1;
      }
      if (iVar2 != 0) goto LAB_00455572;
    }
    local_194 = local_c + -0xc;
    local_198 = local_c + -0xc;
    operator_delete();
  }
LAB_00455572:
  *in_FS_OFFSET = local_e8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045634c  TEAViewWindows::vf43   (240 bytes)   [rtti:vtable virtual slot 43]
void __cdecl TEAViewWindows::vf43(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8a04);
  local_28 = 0x14;
  uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  FUN_00464a94((int)local_14,*(int *)(param_1 + 0x38),uVar1);
  local_1c = local_1c + 1;
  local_28 = 8;
  local_40 = (int)(short)param_3[3];
  local_3c = (int)(short)((uint)param_3[3] >> 0x10);
  FUN_0045e060(param_1,(int)local_14,*param_3,param_3[2],(undefined2 *)&local_40,(int)param_3);
  local_1c = local_1c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0045642b;
    }
    operator_delete();
  }
LAB_0045642b:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045643c  TEAViewWindows::vf44   (68 bytes)   [rtti:vtable virtual slot 44]
int __cdecl TEAViewWindows::vf44(int param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f8a40);
  FUN_00458310(param_1,param_2,0,0,0,(undefined4 *)0x0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456480  FUN_00456480   (675 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00456480(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  undefined4 uVar3;
  undefined3 extraout_var_00;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  int local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  undefined2 local_2c;
  int *local_18;
  int local_14;
  int *local_10;
  undefined4 *local_c;
  int local_8;
  
  __InitExceptBlockLDTC(0x4f8aa4);
  iVar2 = FUN_00466b28(*(int *)(param_1 + 0x38));
  local_40 = (uint)(*(int *)(iVar2 + 0x24) == 2);
  iVar2 = FUN_00466b18(*(int *)(param_1 + 0x38));
  do {
    InputEngine::_dtor(*(int *)(param_1 + 0x6c),3);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    local_8 = *(int *)(param_1 + 0x70);
    if (local_8 != 0) {
      local_2c = 0x14;
      TSDictionaryDefinitionSearchIndexed::_dtor(local_8,3);
      local_2c = 8;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    TSDictionaryDefinitionSearchSequential::_dtor(*(int *)(param_1 + 0x74),3);
    *(undefined4 *)(param_1 + 0x74) = 0;
    if (*(int *)(param_1 + 0x68) == -1) {
      if (local_40 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x6d0);
      }
      *(undefined4 *)(param_1 + 0x68) = uVar3;
    }
    else {
      if (local_40 != 0) {
LAB_0045654b:
        *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
        *in_FS_OFFSET = local_3c;
        return;
      }
      iVar4 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
      if ((uint)(iVar4 >> 2) <= *(uint *)(param_1 + 0x68)) goto LAB_0045654b;
    }
    iVar4 = *(int *)(*(int *)(param_1 + 0x68) * 4 + *(int *)(param_1 + 0x6b4));
    if (*(int *)(param_1 + 0x690) == 0) {
      local_c = (undefined4 *)operator_new();
      if (local_c != (undefined4 *)0x0) {
        local_2c = 0x2c;
        InputEngine::InputEngine(local_c,iVar2,*(int *)(param_1 + 0x68));
        local_2c = 0x20;
      }
      *(undefined4 **)(param_1 + 0x6c) = local_c;
      FUN_0045e7c8(iVar4,param_1,*(int *)(param_1 + 0x68));
      while (uVar3 = FUN_0045e810(iVar4), (char)uVar3 != '\0') {
        bVar1 = InputEngine::StartLength(*(int *)(param_1 + 0x6c),*(int *)(iVar4 + 0xc));
        if (CONCAT31(extraout_var,bVar1) != 0) {
          FUN_00479484(iVar4 + 0x28,*(int *)(iVar4 + 0xc));
          *in_FS_OFFSET = local_3c;
          return;
        }
        FUN_0045e800(iVar4);
      }
    }
    else {
      bVar1 = FUN_00408dfc(iVar2,*(int *)(param_1 + 0x68));
      if (CONCAT31(extraout_var_00,bVar1) != 0) {
        local_10 = (int *)operator_new();
        if (local_10 != (int *)0x0) {
          local_2c = 0x44;
          TSDictionaryDefinitionSearchIndexed::TSDictionaryDefinitionSearchIndexed(local_10,iVar2,*(int *)(param_1 + 0x68),iVar4 + 0x28,
                       (undefined4 *)(iVar4 + 0x20));
          local_2c = 0x38;
        }
        *(int **)(param_1 + 0x70) = local_10;
        if (*(int *)(*(int *)(param_1 + 0x70) + 4) == 0) {
          local_14 = *(int *)(param_1 + 0x70);
          if (local_14 != 0) {
            local_2c = 0x5c;
            TSDictionaryDefinitionSearchIndexed::_dtor(local_14,3);
            local_2c = 0x50;
          }
          *(undefined4 *)(param_1 + 0x70) = 0;
          local_18 = (int *)operator_new();
          if (local_18 != (int *)0x0) {
            local_2c = 0x74;
            TSDictionaryDefinitionSearchSequential::TSDictionaryDefinitionSearchSequential(local_18,iVar2,*(int *)(param_1 + 0x68),iVar4 + 0x28,
                         (undefined4 *)(iVar4 + 0x20));
            local_2c = 0x68;
          }
          *(int **)(param_1 + 0x74) = local_18;
          FUN_00410da0(*(int **)(param_1 + 0x74),&local_44,&local_48);
        }
        else {
          FUN_00410750(*(int *)(param_1 + 0x70),&local_44,&local_48);
        }
        if (0 < local_48) {
          *in_FS_OFFSET = local_3c;
          return;
        }
      }
    }
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00456728  FUN_00456728   (225 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00456728(int *param_1,int *param_2)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  HWND pHVar6;
  
  DVar1 = GetTickCount();
  if ((DVar1 < DAT_004f75d4) || (DAT_004f75d4 + 100 < DVar1)) {
    iVar3 = *(int *)(*(int *)(param_1[0x1a] * 4 + param_1[0x1ad]) + 8);
    DAT_004f75d4 = DVar1;
    iVar2 = FUN_0042ba08(iVar3);
    if (*param_2 < iVar2) {
      iVar3 = FUN_0042ba08(iVar3);
      *param_2 = iVar3;
      FUN_0045db98((int)param_1);
    }
  }
  piVar4 = (int *)(*(int *)(*param_1 + 0x6c) + 0x11);
  uVar5 = FUN_00498d7c(piVar4);
  if (param_1[0x19] == 4) {
    (**(code **)(param_1[3] + 0x20))(uVar5,param_1[3],piVar4,param_1,1);
    uVar5 = 1;
  }
  else {
    if (DAT_004f3434 != 0) {
      FUN_0045c6d4((int)param_1,3);
      DAT_004f3434 = 0;
    }
    if (param_1[0x19] == 3) {
      FUN_0045db98((int)param_1);
      pHVar6 = GetFocus();
      if (pHVar6 == *(HWND *)(param_1[0x84] + 0xc)) {
        SetFocus(*(HWND *)(param_1[0x56] + 0xc));
      }
      (**(code **)(param_1[3] + 0xa4))();
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
  }
  return uVar5;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045680c  TEAViewWindows::vf29   (228 bytes)   [rtti:vtable virtual slot 29]
void __cdecl TEAViewWindows::vf29(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8b34);
  iVar1 = (**(code **)(param_1[0x59] + 0x6c))();
  if (iVar1 < 0) goto LAB_004568df;
  FUN_0041c780((int)local_14,(int)(param_1 + 0x56),iVar1);
  FUN_004cf384((int)(param_1 + 0x1a6),(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004568d8;
    }
    operator_delete();
    local_c = 0;
  }
LAB_004568d8:
  FUN_0045269c(param_1);
LAB_004568df:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004568f0  TEAViewWindows::Child4270_Notify5   (95 bytes)   [owl:response-table message-handler]
//   EV_CHILD_NOTIFY(id 4270, code 5)
void __cdecl TEAViewWindows::Child4270_Notify5(int *param_1)

{
  int iVar1;
  uint *lpString;
  
  iVar1 = GetWindowTextLengthA(*(HWND *)(param_1[0x56] + 0xc));
  lpString = (uint *)operator_new_array();
  GetWindowTextA(*(HWND *)(param_1[0x56] + 0xc),(LPSTR)lpString,iVar1 + 1);
  FUN_004cf41c((int)(param_1 + 0x1a6),lpString);
  operator_delete_array();
  FUN_0045269c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00456950  FUN_00456950   (2307 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00456b99) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00456950(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  uint *puVar7;
  int local_124;
  int local_120;
  int local_11c;
  undefined1 *local_118;
  undefined4 local_114;
  undefined *local_110;
  undefined *local_10c;
  undefined1 *local_108;
  undefined4 local_104;
  int local_100;
  int local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  int *local_e8;
  undefined1 *local_e4;
  undefined4 local_e0;
  int local_dc;
  int local_d8;
  int *local_d4;
  int local_d0;
  char local_c9;
  int local_c8;
  undefined1 *local_c4;
  undefined4 local_c0;
  int local_bc;
  int local_b8;
  int *local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined2 local_98;
  int local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8bf0);
  local_ac = FUN_00466b18(*(int *)(param_1 + 0x38));
  local_b0 = TSDictionaryList::GetCount(local_ac);
  if (local_b0 < 1) {
    local_98 = 8;
    FUN_00464a94((int)local_24,*(int *)(param_1 + 0x38),0x1a0e);
    local_8c = local_8c + 1;
    FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_24);
    local_8c = local_8c + -1;
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        local_b4 = (int *)(local_1c + -0xc);
        if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_b4 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_b4 = *local_b4 + -1;
          iVar4 = *local_b4 + 1;
        }
        if (iVar4 != 0) goto LAB_00456a7f;
      }
      local_b8 = local_1c + -0xc;
      local_bc = local_1c + -0xc;
      operator_delete();
      local_c0 = 0;
      local_c4 = local_24;
      local_1c = 0;
    }
LAB_00456a7f:
    FUN_0045c6d4(param_1,0);
    *in_FS_OFFSET = local_a8;
    return;
  }
  local_c8 = FUN_00466b28(*(int *)(param_1 + 0x38));
  local_98 = 0x2c;
  ExpandQueryMacros((int)local_14,local_c8,param_1 + 0x698);
  local_8c = local_8c + 1;
  local_98 = 0x20;
  local_c9 = '\0';
  local_d0 = 1;
  for (iVar4 = 0; (local_d0 == 1 && (iVar4 < local_b0)); iVar4 = iVar4 + 1) {
    iVar1 = FUN_00408c68(local_ac,iVar4);
    if (iVar1 == 0) {
      local_d0 = 0;
    }
    else {
      iVar1 = *(int *)(local_c8 + 0x20);
      iVar2 = FUN_0041b280((int *)(param_1 + 0x50c));
      iVar3 = FUN_0041b280((int *)(param_1 + 0x2d8));
      iVar1 = MatchEngineSet::Compile(*(int *)(iVar4 * 4 + *(int *)(param_1 + 0x6b4)) + 0x28,local_ac,iVar4,
                           (int)local_14,iVar3,iVar2,iVar1);
      local_98 = 0x20;
      if (iVar1 == 0) {
        iVar1 = FUN_00452bdc(param_1,iVar4,&local_11c,&local_120,&local_124);
        if (iVar1 == 0) {
          iVar1 = local_11c;
          if (local_11c <= local_120) {
            do {
              iVar2 = FUN_00408e54(local_ac,iVar4,iVar1);
              if (0 < iVar2) {
                local_c9 = '\x01';
              }
              iVar1 = iVar1 + 1;
            } while (iVar1 <= local_120);
          }
        }
        else if (iVar1 != 1) {
          if (iVar1 == 2) {
            uVar6 = 0x32d2;
          }
          else {
            uVar6 = 13000;
          }
          local_98 = 0xa4;
          FUN_00464a94((int)local_74,*(int *)(param_1 + 0x38),uVar6);
          local_8c = local_8c + 1;
          FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_74);
          local_8c = local_8c + -1;
          if (local_6c != 0) {
            if (*(int *)(local_6c + -0xc) != -1) {
              piVar5 = (int *)(local_6c + -0xc);
              if (piVar5 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar5 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar5 = *piVar5 + -1;
                iVar1 = *piVar5 + 1;
              }
              if (iVar1 != 0) goto LAB_00457042;
            }
            operator_delete();
            local_6c = 0;
          }
LAB_00457042:
          local_98 = 0x20;
          local_d0 = 0;
        }
      }
      else {
        local_2c = &DAT_00513d64;
        local_8c = local_8c + 1;
        if (iVar1 != 1) {
          local_98 = 0x5c;
          puVar7 = (uint *)&DAT_004f775a;
          FUN_00408cbc(local_44,local_ac,iVar4);
          local_8c = local_8c + 1;
          FUN_00401d10((int)local_54,(int)local_44,puVar7);
          local_8c = local_8c + 1;
          FUN_004cf384((int)local_34,(int)local_54);
          local_8c = local_8c + -1;
          if (local_4c != 0) {
            if (*(int *)(local_4c + -0xc) != -1) {
              local_d4 = (int *)(local_4c + -0xc);
              if (local_d4 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_d4 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_d4 = *local_d4 + -1;
                iVar2 = *local_d4 + 1;
              }
              if (iVar2 != 0) goto LAB_00456cb7;
            }
            local_d8 = local_4c + -0xc;
            local_dc = local_4c + -0xc;
            operator_delete();
            local_e0 = 0;
            local_e4 = local_54;
            local_4c = 0;
          }
LAB_00456cb7:
          local_98 = 0x50;
          local_8c = local_8c + -1;
          if (local_3c != 0) {
            if (*(int *)(local_3c + -0xc) != -1) {
              local_e8 = (int *)(local_3c + -0xc);
              if (local_e8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else if (local_e8 == &DAT_00513d58) {
                iVar2 = 1;
              }
              else {
                *local_e8 = *local_e8 + -1;
                iVar2 = *local_e8 + 1;
              }
              if (iVar2 != 0) goto LAB_00456d72;
            }
            local_ec = local_3c + -0xc;
            local_f0 = local_3c + -0xc;
            operator_delete();
            local_f4 = 0;
            local_f8 = local_44;
            local_3c = 0;
          }
        }
LAB_00456d72:
        local_98 = 0x80;
        FUN_00464a94((int)local_64,*(int *)(param_1 + 0x38),iVar1 + 0x3318);
        local_8c = local_8c + 1;
        std::string::append((int)local_34,(int)local_64);
        local_8c = local_8c + -1;
        if (local_5c != 0) {
          if (*(int *)(local_5c + -0xc) != -1) {
            piVar5 = (int *)(local_5c + -0xc);
            if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar5 = *piVar5 + -1;
              iVar1 = *piVar5 + 1;
            }
            if (iVar1 != 0) goto LAB_00456e3e;
          }
          local_fc = local_5c + -0xc;
          local_100 = local_5c + -0xc;
          operator_delete();
          local_104 = 0;
          local_108 = local_64;
          local_5c = 0;
        }
LAB_00456e3e:
        local_98 = 0x50;
        FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_34);
        local_d0 = 0;
        local_8c = local_8c + -1;
        if (local_2c != (undefined *)0x0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar5 = (int *)(local_2c + -0xc);
            if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar5 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar5 = *piVar5 + -1;
              iVar1 = *piVar5 + 1;
            }
            if (iVar1 != 0) goto LAB_00456ef5;
          }
          local_10c = local_2c + -0xc;
          local_110 = local_2c + -0xc;
          operator_delete();
          local_114 = 0;
          local_118 = local_34;
          local_2c = (undefined *)0x0;
        }
LAB_00456ef5:
        local_98 = 0x20;
      }
    }
  }
  if (((local_d0 == 1) && (*(int *)(param_1 + 0x690) == 0)) && (local_c9 == '\0')) {
    local_98 = 0xbc;
    FUN_00464a94((int)local_84,*(int *)(param_1 + 0x38),0x36ce);
    local_8c = local_8c + 1;
    FUN_00465a64(*(int *)(param_1 + 0x38),(int)local_84);
    local_8c = local_8c + -1;
    if (local_7c != 0) {
      if (*(int *)(local_7c + -0xc) != -1) {
        piVar5 = (int *)(local_7c + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) goto LAB_00457180;
      }
      operator_delete();
      local_7c = 0;
    }
LAB_00457180:
    local_98 = 0x20;
    local_d0 = 0;
  }
  FUN_0045c6d4(param_1,local_d0);
  local_8c = local_8c + -1;
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_00457237;
    }
    operator_delete();
  }
LAB_00457237:
  *in_FS_OFFSET = local_a8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457254  TEAViewWindows::vf21   (230 bytes)   [rtti:vtable virtual slot 21]
void __cdecl TEAViewWindows::vf21(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_3 == 0x1112) {
    iVar1 = FUN_0041b280(param_1 + 0x143);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    iVar2 = FUN_0041b280(param_1 + 0x143);
    if (iVar1 != iVar2) {
      FUN_0041b218(param_1 + 0x143);
    }
    iVar2 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 < iVar2) {
      FUN_0041b218(param_1 + 0xb6);
    }
  }
  else if (param_3 == 0x111c) {
    iVar1 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 < 1) {
      iVar1 = 1;
    }
    else if (100 < iVar1) {
      iVar1 = 100;
    }
    iVar2 = FUN_0041b280(param_1 + 0xb6);
    if (iVar1 != iVar2) {
      FUN_0041b218(param_1 + 0xb6);
    }
    iVar2 = FUN_0041b280(param_1 + 0x143);
    if (iVar2 < iVar1) {
      FUN_0041b218(param_1 + 0x143);
    }
  }
  if (param_1[0x19] != 2) {
    FUN_0045269c(param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045733c  TEAViewWindows::vf22   (15 bytes)   [rtti:vtable virtual slot 22]
void __cdecl TEAViewWindows::vf22(int *param_1)

{
  FUN_0045269c(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045734c  FUN_0045734c   (5 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_0045734c(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00457354  FUN_00457354   (3267 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00457399) */
/* WARNING: Removing unreachable block (ram,0x004573c5) */
void __cdecl FUN_00457354(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  undefined *local_14c;
  undefined *local_148;
  int *local_144;
  undefined1 *local_140;
  undefined4 local_13c;
  undefined *local_138;
  undefined *local_134;
  int *local_130;
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined2 local_108;
  int local_fc;
  undefined1 local_f4 [8];
  int local_ec;
  undefined1 local_dc [4];
  int local_d8;
  int local_d4;
  undefined1 local_bc [4];
  int local_b8;
  int local_b4;
  int local_94;
  int local_84;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_5c;
  int local_54 [8];
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  __InitExceptBlockLDTC(0x4f8d74);
  local_c = &DAT_00513d64;
  local_1c = &DAT_00513d64;
  local_fc = local_fc + 2;
  local_108 = 0x44;
  FUN_00458310((int)local_34,(int)param_1,param_3,(int)local_14,(int)local_24,&local_11c);
  local_fc = local_fc + 1;
  local_108 = 0x20;
  if (*(int *)(local_2c + -4) != 0) {
    if (((param_4 == 0x1d42) || (param_4 == 0x3160)) && (local_11c != 0)) {
      iVar1 = FUN_004581a0(param_1);
      if (iVar1 != 0) {
        local_158 = FUN_00466b18(param_1[0xe]);
        local_160 = param_1[0x1b4];
        local_15c = *(int *)(local_160 * 4 + param_1[0x1ad]);
        local_108 = 0x74;
        TSDictionaryDefinitionRetriever::TSDictionaryDefinitionRetriever(local_54,local_158,param_1[0x1b4],&local_168);
        local_fc = local_fc + 2;
        local_108 = 0x80;
        if ((*(int *)(local_15c + 0x20) == local_168) && (*(int *)(local_15c + 0x24) == local_164))
        {
          local_70 = 0;
          local_6c = 0;
          local_5c = 0;
          local_108 = 200;
          FUN_00473df0((int)local_f4);
          local_fc = local_fc + 6;
          FUN_00458090(&local_74,1,(int)local_f4);
          local_fc = local_fc + -2;
          if (local_84 != 0) {
            if (*(int *)(local_84 + -0xc) != -1) {
              piVar2 = (int *)(local_84 + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_004579d1;
            }
            operator_delete();
            local_84 = 0;
          }
LAB_004579d1:
          local_fc = local_fc + -1;
          if (local_94 != 0) {
            if (*(int *)(local_94 + -0xc) != -1) {
              piVar2 = (int *)(local_94 + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457a8b;
            }
            operator_delete();
            local_94 = 0;
          }
LAB_00457a8b:
          local_fc = local_fc + -1;
          FUN_0040b4f0(local_bc,local_b8,local_b4);
          operator_delete();
          local_fc = local_fc + -1;
          FUN_0040b4f0(local_dc,local_d8,local_d4);
          operator_delete();
          local_fc = local_fc + -1;
          if (local_ec != 0) {
            if (*(int *)(local_ec + -0xc) != -1) {
              piVar2 = (int *)(local_ec + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457bb7;
            }
            operator_delete();
            local_ec = 0;
          }
LAB_00457bb7:
          local_fc = local_fc + 1;
          local_108 = 0x80;
          TSDictionaryDefinitionRetriever::ReadDefinition((int)local_54,local_11c,local_70);
          piVar2 = (int *)FUN_00466e80(param_1[0xe],(uint)(param_4 == 0x3160));
          FUN_004733d8(piVar2,(int)&local_74,(int)local_34,(int)local_14,(int)local_24,
                       local_15c + 0x28,local_158,param_1[0x1b4]);
          local_fc = local_fc + -1;
          FUN_0040b62c(&local_74,local_70,local_6c);
          operator_delete();
          local_fc = local_fc + -2;
          TSDictionaryDefinitionRetriever::_dtor((int)local_54,2);
          local_fc = local_fc + -1;
          if (local_2c != 0) {
            if (*(int *)(local_2c + -0xc) != -1) {
              piVar2 = (int *)(local_2c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457cfa;
            }
            operator_delete();
            local_2c = 0;
          }
LAB_00457cfa:
          local_fc = local_fc + -1;
          if (local_1c != (undefined *)0x0) {
            if (*(int *)(local_1c + -0xc) != -1) {
              piVar2 = (int *)(local_1c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457d9f;
            }
            operator_delete();
            local_1c = (undefined *)0x0;
          }
LAB_00457d9f:
          local_fc = local_fc + -1;
          if (local_c != (undefined *)0x0) {
            if (*(int *)(local_c + -0xc) != -1) {
              piVar2 = (int *)(local_c + -0xc);
              if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else if (piVar2 == &DAT_00513d58) {
                iVar1 = 1;
              }
              else {
                *piVar2 = *piVar2 + -1;
                iVar1 = *piVar2 + 1;
              }
              if (iVar1 != 0) goto LAB_00457e44;
            }
            operator_delete();
          }
LAB_00457e44:
          *in_FS_OFFSET = local_118;
          return;
        }
        (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
        local_fc = local_fc + -2;
        TSDictionaryDefinitionRetriever::_dtor((int)local_54,2);
        local_fc = local_fc + -1;
        if (local_2c != 0) {
          if (*(int *)(local_2c + -0xc) != -1) {
            piVar2 = (int *)(local_2c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_0045778e;
          }
          operator_delete();
          local_2c = 0;
        }
LAB_0045778e:
        local_fc = local_fc + -1;
        if (local_1c != (undefined *)0x0) {
          if (*(int *)(local_1c + -0xc) != -1) {
            piVar2 = (int *)(local_1c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_00457833;
          }
          operator_delete();
          local_1c = (undefined *)0x0;
        }
LAB_00457833:
        local_fc = local_fc + -1;
        if (local_c != (undefined *)0x0) {
          if (*(int *)(local_c + -0xc) != -1) {
            piVar2 = (int *)(local_c + -0xc);
            if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else if (piVar2 == &DAT_00513d58) {
              iVar1 = 1;
            }
            else {
              *piVar2 = *piVar2 + -1;
              iVar1 = *piVar2 + 1;
            }
            if (iVar1 != 0) goto LAB_004578d8;
          }
          operator_delete();
        }
LAB_004578d8:
        *in_FS_OFFSET = local_118;
        return;
      }
      local_fc = local_fc + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar2 = (int *)(local_2c + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar1 = *piVar2 + 1;
          }
          if (iVar1 != 0) goto LAB_004574c5;
        }
        local_120 = local_2c + -0xc;
        local_124 = local_2c + -0xc;
        operator_delete();
        local_128 = 0;
        local_12c = local_34;
        local_2c = 0;
      }
LAB_004574c5:
      local_fc = local_fc + -1;
      if (local_1c != (undefined *)0x0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          local_130 = (int *)(local_1c + -0xc);
          if (local_130 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_130 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_130 = *local_130 + -1;
            iVar1 = *local_130 + 1;
          }
          if (iVar1 != 0) goto LAB_0045756a;
        }
        local_134 = local_1c + -0xc;
        local_138 = local_1c + -0xc;
        operator_delete();
        local_13c = 0;
        local_140 = local_24;
        local_1c = (undefined *)0x0;
      }
LAB_0045756a:
      local_fc = local_fc + -1;
      if (local_c != (undefined *)0x0) {
        if (*(int *)(local_c + -0xc) != -1) {
          local_144 = (int *)(local_c + -0xc);
          if (local_144 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (local_144 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *local_144 = *local_144 + -1;
            iVar1 = *local_144 + 1;
          }
          if (iVar1 != 0) goto LAB_0045760f;
        }
        local_148 = local_c + -0xc;
        local_14c = local_c + -0xc;
        operator_delete();
      }
LAB_0045760f:
      *in_FS_OFFSET = local_118;
      return;
    }
    FUN_0046524c(param_1[0xe],param_2,param_4,(int)local_34,0,0);
  }
  local_fc = local_fc + -1;
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar2 = (int *)(local_2c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00457efa;
    }
    operator_delete();
    local_2c = 0;
  }
LAB_00457efa:
  local_108 = 0x20;
  local_fc = local_fc + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar2 = (int *)(local_1c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00457f87;
    }
    operator_delete();
    local_1c = (undefined *)0x0;
  }
LAB_00457f87:
  local_fc = local_fc + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0045800e;
    }
    operator_delete();
  }
LAB_0045800e:
  *in_FS_OFFSET = local_118;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458090  FUN_00458090   (234 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x004580b9) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x004580c1 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_00458090(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  undefined **local_8;
  
  __InitExceptBlockLDTC(0x4f8f08);
  *param_1 = 8;
  iVar1 = operator_new();
  if (iVar1 == 0) {
    local_8 = &std::bad_alloc::vftable;
    FUN_004e7cc4((uint *)&DAT_004040dc,(undefined4*)&local_8,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = iVar1;
  FUN_0040ae88(iVar1,param_2,param_3);
  param_1[2] = param_1[1] + param_2 * 0x80;
  param_1[6] = param_1[2];
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004581a0  FUN_004581a0   (368 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_004581a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *in_FS_OFFSET;
  int local_3c;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4f8f48);
  local_3c = 1;
  iVar2 = FUN_00466b18(param_1[0xe]);
  iVar3 = TSDictionaryList::GetCount(iVar2);
LAB_004582df:
  do {
    do {
      iVar7 = iVar3 + -1;
      if (iVar3 < 1) {
        if (local_3c == 0) {
          FUN_00456950((int)param_1);
        }
        *in_FS_OFFSET = local_38;
        return local_3c;
      }
      iVar4 = FUN_00408c68(iVar2,iVar7);
      iVar3 = iVar7;
    } while (iVar4 != 0);
    puVar5 = (uint *)FUN_00408c98(iVar2,iVar7);
    std::string::string_from_cstr((int)local_14,puVar5);
    uVar1 = *(uint *)(local_c + -4);
    pcVar6 = strlen((uint *)"\nis no longer a valid TEA&Sympathy Dictionary File");
    FUN_004cfad4((int)local_14,uVar1,0,0x4f77b9,(uint)pcVar6,0,(uint)pcVar6);
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x30))();
    local_3c = 0;
  } while (local_c == 0);
  if (*(int *)(local_c + -0xc) != -1) goto code_r0x00458276;
  goto LAB_004582a3;
code_r0x00458276:
  piVar8 = (int *)(local_c + -0xc);
  if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else if (piVar8 == &DAT_00513d58) {
    iVar7 = 1;
  }
  else {
    *piVar8 = *piVar8 + -1;
    iVar7 = *piVar8 + 1;
  }
  if (iVar7 == 0) {
LAB_004582a3:
    operator_delete();
    local_c = 0;
  }
  goto LAB_004582df;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458310  FUN_00458310   (2431 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0045838c) */
/* WARNING: Removing unreachable block (ram,0x0045835a) */
/* WARNING: Removing unreachable block (ram,0x004583be) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl FUN_00458310(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  uint uVar1;
  undefined1 uVar2;
  HWND hWnd;
  BOOL BVar3;
  int iVar4;
  int iVar5;
  undefined3 extraout_var;
  uint *puVar6;
  int *piVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar8;
  undefined *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 local_2d4 [248];
  undefined4 local_1dc;
  undefined4 local_1cc;
  undefined *local_1bc;
  undefined *local_1ac;
  undefined *local_19c;
  undefined4 *local_18c;
  undefined4 *local_188;
  int *local_184;
  undefined1 *local_180;
  undefined4 local_17c;
  undefined *local_178;
  undefined *local_174;
  undefined1 *local_170;
  undefined4 local_16c;
  undefined *local_168;
  undefined *local_164;
  undefined4 *local_160;
  undefined4 *local_15c;
  uint local_158;
  int local_154;
  int *local_150;
  int *local_14c;
  uint local_148;
  int *local_144;
  int local_140;
  undefined4 *local_13c;
  undefined4 local_138;
  uint local_134;
  undefined1 local_12d;
  uint local_12c;
  undefined1 *local_128;
  undefined4 local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  int *local_110;
  uint local_10c;
  undefined1 *local_108;
  int *local_104;
  int *local_100;
  uint local_fc;
  int *local_f8;
  undefined1 *local_f4;
  int *local_f0;
  undefined4 local_ec;
  uint *local_e0;
  uint local_dc;
  undefined1 *local_d8;
  undefined4 local_d4;
  int local_d0;
  int local_cc;
  int *local_c8;
  uint local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  int *local_b0;
  uint local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [8];
  int *local_74;
  undefined **local_6c [2];
  undefined1 local_64 [8];
  int *local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  undefined *local_2c;
  undefined1 local_24 [8];
  undefined *local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x4f9038);
  local_a4 = 0;
  local_c = (undefined4 *)&DAT_00513d64;
  local_19c = &DAT_00513d64;
  local_1c = &DAT_00513d64;
  local_1ac = &DAT_00513d64;
  local_2c = &DAT_00513d64;
  local_1bc = &DAT_00513d64;
  local_84 = local_84 + 3;
  local_90 = 0x20;
  hWnd = GetFocus();
  BVar3 = IsChild(*(HWND *)(*(int *)(param_2 + 0x158) + 0xc),hWnd);
  if (BVar3 == 0) {
    iVar4 = *(int *)(*(int *)(*(int *)(param_2 + 0x6d0) * 4 + *(int *)(param_2 + 0x6b4)) + 8);
    if ((param_3 != 0) || (iVar5 = FUN_0042ba14(iVar4), iVar5 == 1)) {
      uVar2 = FUN_0042eca0(iVar4,param_3,(int)local_14,&local_a4);
      local_c4 = CONCAT31(extraout_var,uVar2);
      local_90 = 0x74;
      FUN_004d6118((int)local_54,(int)local_14,local_c4,DAT_005140ac);
      local_84 = local_84 + 1;
      FUN_004cf384((int)local_34,(int)local_54);
      local_84 = local_84 + -1;
      if (local_4c != 0) {
        if (*(int *)(local_4c + -0xc) != -1) {
          local_c8 = (int *)(local_4c + -0xc);
          if (local_c8 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_c8 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_c8 = *local_c8 + -1;
            iVar4 = *local_c8 + 1;
          }
          if (iVar4 != 0) goto LAB_00458653;
        }
        local_cc = local_4c + -0xc;
        local_d0 = local_4c + -0xc;
        operator_delete();
        local_d4 = 0;
        local_d8 = local_54;
        local_4c = 0;
        local_1dc = 0;
      }
LAB_00458653:
      uVar1 = local_c4;
      local_90 = 0x20;
      local_dc = DAT_005140ac;
      if ((uint)local_c[-1] < local_c4) {
        uVar13 = 0;
        uVar12 = 0;
        uVar11 = 0;
        uVar10 = 1;
        puVar9 = &LAB_004084c8;
        uVar8 = 0;
        local_90 = 0x98;
        local_e0 = (uint *)FUN_004dc320(local_2d4,PTR_s_string_index_out_of_range_in_fun_00516d2c);
        std::string::string_from_cstr((int)local_7c,local_e0);
        local_84 = local_84 + 2;
        local_6c[0] = &std::logic_error::vftable;
        local_ec = 0;
        local_5c = (int *)0x0;
        local_90 = 0xa4;
        if (local_74[-3] == -1 || local_74[-3] + 1 < 0) {
          local_fc = local_74[-1];
          local_104 = std::string::__getRep(local_64,local_fc,local_fc);
          local_108 = local_64;
          local_114 = local_104 + 3;
          local_10c = local_fc;
          local_110 = local_74;
          local_100 = local_114;
          local_5c = local_114;
          memcpy(local_114,local_74,local_fc);
        }
        else {
          local_f4 = local_64;
          local_f0 = local_74;
          local_5c = local_74;
          local_f8 = local_74 + -3;
          if (local_f8 != &DAT_00513d58) {
            *local_f8 = *local_f8 + 1;
          }
        }
        local_90 = 0x98;
        local_6c[0] = &std::out_of_range::vftable;
        local_84 = local_84 + 2;
        if (local_74 != (int *)0x0) {
          if (local_74[-3] != -1) {
            local_118 = local_74 + -3;
            if (local_118 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else if (local_118 == &DAT_00513d58) {
              iVar4 = 1;
            }
            else {
              *local_118 = *local_118 + -1;
              iVar4 = *local_118 + 1;
            }
            if (iVar4 != 0) goto LAB_004588bb;
          }
          local_11c = local_74 + -3;
          local_120 = local_74 + -3;
          operator_delete();
          local_124 = 0;
          local_128 = local_7c;
          local_74 = (int *)0x0;
        }
LAB_004588bb:
        local_90 = 0x8c;
        FUN_004e7cc4((uint *)&DAT_0040846c,(undefined4*)local_6c,uVar8,puVar9,uVar10,uVar11,uVar12,uVar13);
      }
      local_12c = local_c[-1] - uVar1;
      local_12d = 0;
      local_134 = local_12c;
      if (local_dc < local_12c) {
        local_134 = local_dc;
      }
      FUN_004cfad4((int)local_14,uVar1,local_134,(uint)&local_12d,0,0,0);
      iVar4 = *(int *)(param_2 + 0x6d0);
      iVar5 = FUN_00466b18(*(int *)(param_2 + 0x38));
      puVar6 = (uint *)FUN_00408c98(iVar5,iVar4);
      FUN_004cf41c((int)local_24,puVar6);
    }
  }
  else {
    FUN_004cf384((int)local_14,param_2 + 0x698);
    iVar4 = FUN_004acea4((int *)(param_2 + 0x158),&local_a8,&local_ac);
    if ((iVar4 != -1) && ((int)local_a8 < (int)local_ac)) {
      local_90 = 0x5c;
      FUN_004d6118((int)local_44,(int)local_14,local_a8,local_ac - local_a8);
      local_84 = local_84 + 1;
      FUN_004cf384((int)local_14,(int)local_44);
      local_84 = local_84 + -1;
      if (local_3c != 0) {
        if (*(int *)(local_3c + -0xc) != -1) {
          local_b0 = (int *)(local_3c + -0xc);
          if (local_b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (local_b0 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *local_b0 = *local_b0 + -1;
            iVar4 = *local_b0 + 1;
          }
          if (iVar4 != 0) goto LAB_00458521;
        }
        local_b4 = local_3c + -0xc;
        local_b8 = local_3c + -0xc;
        operator_delete();
        local_bc = 0;
        local_c0 = local_44;
        local_3c = 0;
        local_1cc = 0;
      }
LAB_00458521:
      local_90 = 0x20;
    }
  }
  if (param_4 != 0) {
    FUN_004cf384(param_4,(int)local_24);
  }
  if (param_5 != 0) {
    FUN_004cf384(param_5,(int)local_34);
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = local_a4;
  }
  local_90 = 200;
  local_138 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    local_148 = local_c[-1];
    local_150 = std::string::__getRep(param_1,local_148,local_148);
    local_14c = local_150 + 3;
    *(int **)(param_1 + 8) = local_14c;
    local_154 = param_1;
    local_158 = local_148;
    local_15c = local_c;
    local_160 = *(undefined4 **)(param_1 + 8);
    memcpy(local_160,local_c,local_148);
  }
  else {
    local_13c = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_140 = param_1;
    local_144 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (local_144 != &DAT_00513d58) {
      *local_144 = *local_144 + 1;
    }
  }
  local_90 = 0xe0;
  if (local_2c != (undefined *)0x0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar7 = (int *)(local_2c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar4 = *piVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00458b42;
    }
    local_164 = local_2c + -0xc;
    local_168 = local_2c + -0xc;
    operator_delete();
    local_16c = 0;
    local_170 = local_34;
    local_2c = (undefined *)0x0;
  }
LAB_00458b42:
  local_84 = local_84 + -1;
  if (local_1c != (undefined *)0x0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar7 = (int *)(local_1c + -0xc);
      if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar7 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar7 = *piVar7 + -1;
        iVar4 = *piVar7 + 1;
      }
      if (iVar4 != 0) goto LAB_00458bc9;
    }
    local_174 = local_1c + -0xc;
    local_178 = local_1c + -0xc;
    operator_delete();
    local_17c = 0;
    local_180 = local_24;
    local_1c = (undefined *)0x0;
  }
LAB_00458bc9:
  local_84 = local_84 + -1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      local_184 = local_c + -3;
      if (local_184 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_184 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_184 = *local_184 + -1;
        iVar4 = *local_184 + 1;
      }
      if (iVar4 != 0) goto LAB_00458c6e;
    }
    local_188 = local_c + -3;
    local_18c = local_c + -3;
    operator_delete();
  }
LAB_00458c6e:
  *in_FS_OFFSET = local_a0;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458c90  TEAViewWindows::vf24   (63 bytes)   [rtti:vtable virtual slot 24]
void __cdecl TEAViewWindows::vf24(int param_1,int param_2)

{
  if (param_2 == 0x1108) {
    (**(code **)(*(int *)(param_1 + 0xc) + 0x54))();
    return;
  }
  (**(code **)(*(int *)(param_1 + 0xc) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00458cd0  TEAViewWindows::vf47   (1151 bytes)   [rtti:vtable virtual slot 47]
void __cdecl TEAViewWindows::vf47(int *param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  tagRECT local_78;
  LONG local_68 [3];
  int local_5c;
  undefined4 local_58;
  undefined2 local_48;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  int *local_18;
  int *local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  bVar4 = 0;
  __InitExceptBlockLDTC(0x4f9208);
  local_78.left = 0;
  local_78.top = 0;
  local_78.right = 0;
  local_78.bottom = 0;
  FUN_004a7a6c(*param_1,&local_78);
  ptVar2 = &local_78;
  pLVar3 = local_68;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)((int)ptVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pLVar3 = pLVar3 + (uint)bVar4 * -2 + 1;
  }
  local_8 = (int *)operator_new();
  if (local_8 != (int *)0x0) {
    local_48 = 0x14;
    if (param_1[0x18] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = 3;
    }
    FUN_004173c0(local_8,(int)local_68,param_1[0x2a],3,iVar1);
    local_48 = 8;
  }
  FUN_00417498((int)param_1,local_8);
  local_c = (int *)operator_new();
  if (local_c != (int *)0x0) {
    local_48 = 0x2c;
    FUN_004173c0(local_c,(int)local_68,param_1[0x56],3,0);
    local_48 = 0x20;
  }
  FUN_00417498((int)param_1,local_c);
  local_10 = (int *)operator_new();
  if (local_10 != (int *)0x0) {
    local_48 = 0x44;
    FUN_004173c0(local_10,(int)local_68,param_1[0x84],2,0);
    local_48 = 0x38;
  }
  FUN_00417498((int)param_1,local_10);
  local_14 = (int *)operator_new();
  if (local_14 != (int *)0x0) {
    local_48 = 0x5c;
    FUN_004173c0(local_14,(int)local_68,param_1[0x1b5],3,0);
    local_48 = 0x50;
  }
  FUN_00417498((int)param_1,local_14);
  local_18 = (int *)operator_new();
  if (local_18 != (int *)0x0) {
    local_48 = 0x74;
    FUN_004173c0(local_18,(int)local_68,param_1[0x116],2,0);
    local_48 = 0x68;
  }
  FUN_00417498((int)param_1,local_18);
  local_1c = (int *)operator_new();
  if (local_1c != (int *)0x0) {
    local_48 = 0x8c;
    FUN_004173c0(local_1c,(int)local_68,param_1[0x143],2,0);
    local_48 = 0x80;
  }
  FUN_00417498((int)param_1,local_1c);
  local_20 = (int *)operator_new();
  if (local_20 != (int *)0x0) {
    local_48 = 0xa4;
    FUN_004173c0(local_20,(int)local_68,param_1[0x172],2,0);
    local_48 = 0x98;
  }
  FUN_00417498((int)param_1,local_20);
  if (param_1[0x1a3] != 0) {
    local_24 = (int *)operator_new();
    if (local_24 != (int *)0x0) {
      local_48 = 0xbc;
      if (param_1[0x1a3] == 0) {
        iVar1 = param_1[0x1a3];
      }
      else {
        iVar1 = *(int *)param_1[0x1a3];
      }
      FUN_004173c0(local_24,(int)local_68,iVar1,2,0);
      local_48 = 0xb0;
    }
    FUN_00417498((int)param_1,local_24);
  }
  param_1[0x1ed] =
       *(int *)(param_1[0x1b5] + 0x24) -
       (*(int *)(param_1[0x143] + 0x24) + *(int *)(param_1[0x143] + 0x2c));
  if (param_1[0x18] == 0) {
    param_1[0x1ee] = 0;
  }
  else {
    local_28 = (int *)operator_new();
    if (local_28 != (int *)0x0) {
      local_48 = 0xd4;
      if (param_1[0x329] == 0) {
        iVar1 = param_1[0x329];
      }
      else {
        iVar1 = *(int *)param_1[0x329];
      }
      FUN_004173c0(local_28,(int)local_68,iVar1,3,0);
      local_48 = 200;
    }
    FUN_00417498((int)param_1,local_28);
    local_2c = (int *)operator_new();
    if (local_2c != (int *)0x0) {
      local_48 = 0xec;
      if (param_1[0x32a] == 0) {
        iVar1 = param_1[0x32a];
      }
      else {
        iVar1 = *(int *)param_1[0x32a];
      }
      FUN_004173c0(local_2c,(int)local_68,iVar1,0,2);
      local_48 = 0xe0;
    }
    FUN_00417498((int)param_1,local_2c);
    local_30 = (int *)operator_new();
    if (local_30 != (int *)0x0) {
      local_48 = 0x104;
      if (param_1[0x32b] == 0) {
        iVar1 = param_1[0x32b];
      }
      else {
        iVar1 = *(int *)param_1[0x32b];
      }
      FUN_004173c0(local_30,(int)local_68,iVar1,2,2);
      local_48 = 0xf8;
    }
    FUN_00417498((int)param_1,local_30);
    local_34 = (int *)operator_new();
    if (local_34 != (int *)0x0) {
      local_48 = 0x11c;
      if (param_1[0x32c] == 0) {
        iVar1 = param_1[0x32c];
      }
      else {
        iVar1 = *(int *)param_1[0x32c];
      }
      FUN_004173c0(local_34,(int)local_68,iVar1,2,2);
      local_48 = 0x110;
    }
    FUN_00417498((int)param_1,local_34);
    param_1[0x1ee] =
         (local_5c - (*(int *)(param_1[0x2a] + 0x24) + *(int *)(param_1[0x2a] + 0x2c))) +
         param_1[0x1ed];
  }
  *in_FS_OFFSET = local_58;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459150  FUN_00459150   (171 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
LONG * __cdecl FUN_00459150(LONG *param_1,int *param_2)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT local_14;
  
  local_14.left = 0;
  local_14.top = 0;
  local_14.right = 0;
  local_14.bottom = 0;
  FUN_004a7a6c(*param_2,&local_14);
  if (param_2[0x18] == 0) {
    iVar1 = param_2[0x2a];
    local_14.left = local_14.left + *(int *)(iVar1 + 0x20);
    local_14.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + param_2[0x1ed];
    local_14.right = local_14.right - *(int *)(iVar1 + 0x20);
    local_14.bottom = local_14.bottom - (param_2[0x1ed] + param_2[0x1ee]);
  }
  else {
    iVar1 = param_2[0x1b5];
    local_14.left = local_14.left + *(int *)(iVar1 + 0x20);
    local_14.top = *(int *)(iVar1 + 0x24) + *(int *)(iVar1 + 0x2c) + param_2[0x1ed];
    local_14.right = local_14.right - *(int *)(iVar1 + 0x20);
    local_14.bottom = local_14.bottom - (param_2[0x1ed] + param_2[0x1ee]);
  }
  ptVar2 = &local_14;
  pLVar3 = param_1;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004591fc  FUN_004591fc   (223 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_004591fc(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int local_c;
  
  if (((param_2 != (char *)0x0) && (*param_2 != '\0')) &&
     (iVar2 = FUN_004e03c0(param_2,&DAT_004f75f3), iVar2 == 1)) {
    local_c = 0;
    while (*param_2 != '\0') {
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      if (cVar1 == ',') {
        local_c = local_c + 1;
      }
      if ((param_5 == local_c + -1) && (iVar2 = FUN_004e03c0(param_2,&DAT_004f75f3), iVar2 == 1)) {
        iVar2 = FUN_004e3c04();
        return iVar2;
      }
    }
  }
  iVar2 = FUN_004e3c04();
  iVar3 = FUN_004e3c04();
  return iVar2 - iVar3;
}

// ----------------------------------------------------------------------------------------------------
// 0x004592e0  TEAViewWindows::vf11   (2403 bytes)   [rtti:vtable virtual slot 11]
/* WARNING: Removing unreachable block (ram,0x004598f2) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAViewWindows::vf11(int *param_1)

{
  undefined4 uVar1;
  HDC hdc;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  char cVar4;
  int iVar5;
  undefined1 *puVar6;
  tagTEXTMETRICA *lptm;
  tagTEXTMETRICA local_294;
  undefined4 local_254;
  undefined4 local_244;
  undefined4 local_234;
  undefined *local_224;
  uint local_21c [15];
  undefined4 local_1e0;
  undefined4 local_1d0;
  undefined4 local_1c0;
  undefined4 local_1b0;
  undefined4 local_1a0;
  undefined1 *local_198;
  undefined4 local_194;
  undefined *local_190;
  undefined *local_18c;
  undefined1 *local_188;
  undefined4 local_184;
  undefined *local_180;
  undefined *local_17c;
  undefined1 *local_178;
  undefined4 local_174;
  int local_170;
  int local_16c;
  int local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 *local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  int *local_144;
  int local_138 [3];
  undefined1 *local_12c;
  undefined4 local_128;
  int local_124;
  int local_120;
  int *local_11c;
  int local_110;
  undefined1 *local_10c;
  undefined4 local_108;
  int local_104;
  int local_100;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  undefined1 *local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  int *local_cc;
  undefined4 local_c8;
  undefined2 local_b8;
  int local_ac;
  undefined1 local_a4 [8];
  int local_9c;
  undefined1 local_94 [8];
  undefined *local_8c;
  undefined1 local_84 [8];
  int local_7c;
  undefined1 local_74 [8];
  int local_6c;
  undefined1 local_64 [8];
  int local_5c;
  undefined1 local_54 [8];
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  int local_34;
  int local_2f;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f93e8);
  PropertiesViewWindows::vf11(param_1);
  FUN_0045d86c((int)param_1);
  FUN_0045d938((int)param_1);
  local_b8 = 0x14;
  iVar5 = 0;
  iVar3 = 0;
  FUN_004649b0((int)local_44);
  local_ac = local_ac + 1;
  Persist::Persist(local_c,(int)local_44,iVar3,iVar5);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      local_cc = (int *)(local_3c + -0xc);
      if (local_cc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_cc == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_cc = *local_cc + -1;
        iVar3 = *local_cc + 1;
      }
      if (iVar3 != 0) goto LAB_004593f4;
    }
    local_d0 = local_3c + -0xc;
    local_d4 = local_3c + -0xc;
    operator_delete();
    local_d8 = 0;
    local_dc = local_44;
    local_3c = 0;
    local_1a0 = 0;
  }
LAB_004593f4:
  piVar2 = param_1 + 0x28;
  local_b8 = 0x2c;
  std::string::string_from_cstr((int)local_54,(uint *)"WindowTopMost");
  local_ac = local_ac + 1;
  Persist::QueryValue((int)local_c,(int)local_54,piVar2);
  local_ac = local_ac + -1;
  if (local_4c != 0) {
    if (*(int *)(local_4c + -0xc) != -1) {
      piVar2 = (int *)(local_4c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004594d1;
    }
    local_e8 = local_4c + -0xc;
    local_ec = local_4c + -0xc;
    operator_delete();
    local_f0 = 0;
    local_f4 = local_54;
    local_4c = 0;
    local_1b0 = 0;
  }
LAB_004594d1:
  piVar2 = param_1 + 0x29;
  local_b8 = 0x44;
  std::string::string_from_cstr((int)local_64,(uint *)"PaneOrientation");
  local_ac = local_ac + 1;
  Persist::QueryValue((int)local_c,(int)local_64,piVar2);
  local_ac = local_ac + -1;
  if (local_5c != 0) {
    if (*(int *)(local_5c + -0xc) != -1) {
      piVar2 = (int *)(local_5c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_004595a9;
    }
    local_100 = local_5c + -0xc;
    local_104 = local_5c + -0xc;
    operator_delete();
    local_108 = 0;
    local_10c = local_64;
    local_5c = 0;
    local_1c0 = 0;
  }
LAB_004595a9:
  piVar2 = &local_110;
  local_110 = 1;
  local_b8 = 0x5c;
  std::string::string_from_cstr((int)local_74,(uint *)"RangeShortest");
  local_ac = local_ac + 1;
  Persist::QueryValue((int)local_c,(int)local_74,piVar2);
  local_ac = local_ac + -1;
  if (local_6c != 0) {
    if (*(int *)(local_6c + -0xc) != -1) {
      local_11c = (int *)(local_6c + -0xc);
      if (local_11c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_11c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_11c = *local_11c + -1;
        iVar3 = *local_11c + 1;
      }
      if (iVar3 != 0) goto LAB_004596a5;
    }
    local_120 = local_6c + -0xc;
    local_124 = local_6c + -0xc;
    operator_delete();
    local_128 = 0;
    local_12c = local_74;
    local_6c = 0;
    local_1d0 = 0;
  }
LAB_004596a5:
  local_b8 = 8;
  if (local_110 < 1) {
    local_110 = 1;
  }
  else if (100 < local_110) {
    local_110 = 100;
  }
  FUN_0041b218(param_1 + 0xb6);
  local_138[2] = 100;
  local_138[1] = 1;
  FUN_004a76a8(param_1[0xe5],0x465,0,0x10064);
  piVar2 = local_138;
  local_138[0] = 100;
  local_b8 = 0x74;
  std::string::string_from_cstr((int)local_84,(uint *)"RangeLongest");
  local_ac = local_ac + 1;
  Persist::QueryValue((int)local_c,(int)local_84,piVar2);
  local_ac = local_ac + -1;
  if (local_7c != 0) {
    if (*(int *)(local_7c + -0xc) != -1) {
      local_144 = (int *)(local_7c + -0xc);
      if (local_144 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_144 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_144 = *local_144 + -1;
        iVar3 = *local_144 + 1;
      }
      if (iVar3 != 0) goto LAB_00459819;
    }
    local_148 = local_7c + -0xc;
    local_14c = local_7c + -0xc;
    operator_delete();
    local_150 = 0;
    local_154 = local_84;
    local_7c = 0;
    local_1e0 = 0;
  }
LAB_00459819:
  local_b8 = 8;
  if (local_138[0] < 1) {
    local_138[0] = 1;
  }
  else if (100 < local_138[0]) {
    local_138[0] = 100;
  }
  FUN_0041b218(param_1 + 0x143);
  local_158 = 100;
  local_15c = 1;
  FUN_004a76a8(param_1[0x172],0x465,0,0x10064);
  local_160 = 0;
  do {
    FUN_004e0344((undefined1 *)local_21c,&DAT_004f7826 /* "%s%d" */);
    local_8c = &DAT_00513d64;
    local_224 = &DAT_00513d64;
    local_ac = local_ac + 1;
    puVar6 = local_94;
    local_b8 = 0xb0;
    std::string::string_from_cstr((int)local_a4,local_21c);
    local_ac = local_ac + 1;
    uVar1 = Persist::QueryValueSized((int)local_c,(int)local_a4,(int)puVar6);
    if (((char)uVar1 == '\0') || (*(int *)(local_8c + -4) == 0)) {
      cVar4 = '\0';
    }
    else {
      cVar4 = '\x01';
    }
    local_ac = local_ac + -1;
    if (local_9c != 0) {
      if (*(int *)(local_9c + -0xc) != -1) {
        piVar2 = (int *)(local_9c + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_00459a06;
      }
      local_16c = local_9c + -0xc;
      local_170 = local_9c + -0xc;
      operator_delete();
      local_174 = 0;
      local_178 = local_a4;
      local_9c = 0;
      local_234 = 0;
    }
LAB_00459a06:
    if (cVar4 == '\0') {
      local_ac = local_ac + -1;
      if (local_8c == (undefined *)0x0) break;
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar2 = (int *)(local_8c + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) break;
      }
      local_17c = local_8c + -0xc;
      local_180 = local_8c + -0xc;
      operator_delete();
      local_184 = 0;
      local_188 = local_94;
      local_8c = (undefined *)0x0;
      local_244 = 0;
      break;
    }
    (**(code **)(param_1[0x59] + 0x60))();
    local_ac = local_ac + -1;
    if (local_8c != (undefined *)0x0) {
      if (*(int *)(local_8c + -0xc) != -1) {
        piVar2 = (int *)(local_8c + -0xc);
        if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else if (piVar2 == &DAT_00513d58) {
          iVar3 = 1;
        }
        else {
          *piVar2 = *piVar2 + -1;
          iVar3 = *piVar2 + 1;
        }
        if (iVar3 != 0) goto LAB_00459b7e;
      }
      local_18c = local_8c + -0xc;
      local_190 = local_8c + -0xc;
      operator_delete();
      local_194 = 0;
      local_198 = local_94;
      local_8c = (undefined *)0x0;
      local_254 = 0;
    }
LAB_00459b7e:
    local_b8 = 8;
    local_160 = local_160 + 1;
  } while (local_160 < 100);
  local_b8 = 0xe0;
  FUN_004a8760(&local_34);
  local_ac = local_ac + 3;
  local_b8 = 8;
  (**(code **)(local_2f + 0x14))();
  lptm = &local_294;
  hdc = (HDC)(**(code **)(local_2f + 0x5c))();
  GetTextMetricsA(hdc,lptm);
  param_1[0x31e] = local_294.tmHeight + 4;
  local_ac = local_ac + -3;
  OWL::TWindowDC::_dtor(&local_34,0);
  local_ac = local_ac + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_c8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459c44  TEAViewWindows::vf48   (86 bytes)   [rtti:vtable virtual slot 48]
void __cdecl TEAViewWindows::vf48(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = FUN_0045dcb8(param_1,param_3);
  if (piVar1 != (int *)0x0) {
    FUN_0045c57c((int)param_1,(int)piVar1);
  }
  iVar2 = FUN_0045dc48((int)param_1,param_3);
  param_1[0x1ec] = iVar2;
  if (iVar2 != 0) {
    SetCapture(*(HWND *)(*param_1 + 0xc));
  }
  OWL::TWindow::EvLButtonDown(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00459c9c  TEAViewWindows::vf49   (1411 bytes)   [rtti:vtable virtual slot 49]
/* WARNING: Removing unreachable block (ram,0x00459e90) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
int __cdecl TEAViewWindows::vf49(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int *in_FS_OFFSET;
  byte bVar8;
  uint uVar9;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  tagRECT local_e8;
  undefined *local_d0;
  LONG local_c8 [2];
  int local_c0;
  int local_bc;
  undefined *local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  int *local_a0;
  int local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  int local_90;
  int local_8c;
  char local_85;
  int local_84;
  tagPOINT local_80;
  int local_78;
  int local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  undefined2 local_48;
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  bVar8 = 0;
  __InitExceptBlockLDTC(0x4f9514);
  iVar1 = FUN_0045dc48((int)param_1,param_3);
  if (iVar1 < 1) {
    FUN_004a7bfc(*param_1,0,0x7f00);
  }
  else {
    if (param_1[0x29] == 0) {
      iVar1 = 0x7f85;
    }
    else {
      iVar1 = 0x7f84;
    }
    FUN_004a7bfc(*param_1,0,iVar1);
  }
  if (0 < param_1[0x1ec]) {
    if ((param_2 & 1) == 0) {
      param_1[0x1ec] = 0;
      FUN_0045b89c(param_1);
      *in_FS_OFFSET = local_58;
      return local_58;
    }
    FUN_00459150(local_c8,param_1);
    if (param_1[0x29] != 0) {
      local_bc = local_c0;
    }
    local_5c = local_bc + param_1[0x1ed];
    iVar1 = param_1[0x1ed] >> 1;
    if (iVar1 < 0) {
      iVar1 = iVar1 + (uint)((param_1[0x1ed] & 1U) != 0);
    }
    if (param_1[0x29] == 0) {
      iVar3 = param_3[1];
    }
    else {
      iVar3 = *param_3;
    }
    iVar1 = iVar1 + iVar3;
    iVar3 = **(int **)(param_1[0x1ec] * 4 + param_1[0x1ad]);
    iVar2 = iVar1 - iVar3;
    if (iVar1 != iVar3) {
      local_60 = param_1[0x1ed] * 10;
      local_68 = param_1[0x1ec] + -1;
      local_64 = **(int **)(local_68 * 4 + param_1[0x1ad]);
      local_70 = param_1 + 0x1ac;
      iVar3 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      local_6c = local_5c;
      if (param_1[0x1ec] + 1 < iVar3 >> 2) {
        local_74 = param_1[0x1ec] + 1;
        local_6c = **(int **)(local_74 * 4 + param_1[0x1ad]);
      }
      if (((iVar2 < 1) || (local_60 <= local_6c - iVar1)) &&
         ((-1 < iVar2 || (local_60 <= iVar1 - local_64)))) {
        local_78 = param_1[0x1ec];
        **(int **)(local_78 * 4 + param_1[0x1ad]) = iVar1;
        FUN_00451784(param_1,6);
      }
    }
  }
  local_c = &DAT_00513d64;
  local_d0 = &DAT_00513d64;
  local_3c = local_3c + 1;
  local_48 = 0x20;
  local_80.x = *param_3;
  local_80.y = param_3[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_80);
  uVar5 = 0;
  while( true ) {
    iVar1 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar5) break;
    local_84 = **(int **)(*(int *)(uVar5 * 4 + param_1[0x1ad]) + 4);
    local_e8.left = 0;
    local_e8.top = 0;
    local_e8.right = 0;
    local_e8.bottom = 0;
    FUN_004a7a30(local_84,&local_e8);
    ptVar6 = &local_e8;
    pLVar7 = &local_f8;
    for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)((int)ptVar6 + ((uint)bVar8 * -2 + 1) * 4);
      pLVar7 = pLVar7 + (uint)bVar8 * -2 + 1;
    }
    if ((((local_80.x < local_f8) || (local_f0 <= local_80.x)) || (local_80.y < local_f4)) ||
       (local_ec <= local_80.y)) {
      local_85 = '\0';
    }
    else {
      local_85 = '\x01';
    }
    if (local_85 != '\0') {
      local_48 = 0x2c;
      uVar9 = uVar5;
      iVar1 = FUN_00466b18(param_1[0xe]);
      FUN_00408d5c(local_24,iVar1,uVar9);
      local_3c = local_3c + 1;
      FUN_004cf384((int)local_14,(int)local_24);
      local_3c = local_3c + -1;
      if (local_1c != 0) {
        if (*(int *)(local_1c + -0xc) != -1) {
          piVar4 = (int *)(local_1c + -0xc);
          if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else if (piVar4 == &DAT_00513d58) {
            iVar1 = 1;
          }
          else {
            *piVar4 = *piVar4 + -1;
            iVar1 = *piVar4 + 1;
          }
          if (iVar1 != 0) goto LAB_0045a027;
        }
        local_8c = local_1c + -0xc;
        local_90 = local_1c + -0xc;
        operator_delete();
        local_94 = 0;
        local_98 = local_24;
        local_1c = 0;
      }
LAB_0045a027:
      local_48 = 0x20;
    }
    uVar5 = uVar5 + 1;
  }
  if ((*(int *)(local_c + -4) == 0) &&
     (local_9c = FUN_004a7590(*param_1,(undefined*)FUN_0044f9f0), local_9c != 0)) {
    local_48 = 0x44;
    uVar5 = GetDlgCtrlID(*(HWND *)(local_9c + 0xc));
    FUN_00464a94((int)local_34,param_1[0xe],uVar5);
    local_3c = local_3c + 1;
    FUN_004cf384((int)local_14,(int)local_34);
    local_3c = local_3c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        local_a0 = (int *)(local_2c + -0xc);
        if (local_a0 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (local_a0 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *local_a0 = *local_a0 + -1;
          iVar1 = *local_a0 + 1;
        }
        if (iVar1 != 0) goto LAB_0045a163;
      }
      local_a4 = local_2c + -0xc;
      local_a8 = local_2c + -0xc;
      operator_delete();
      local_ac = 0;
      local_b0 = local_34;
      local_2c = 0;
    }
LAB_0045a163:
    local_48 = 0x20;
  }
  FUN_0045e060((int)param_1,(int)local_14,*(undefined4 *)(*param_1 + 0xc),param_2,
               (undefined2 *)param_3,0);
  iVar1 = FUN_004a5774(*param_1);
  local_3c = local_3c + -1;
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar1 = *piVar4 + 1;
      }
      if (iVar1 != 0) goto LAB_0045a208;
    }
    local_b4 = local_c + -0xc;
    operator_delete();
    iVar1 = 0;
  }
LAB_0045a208:
  *in_FS_OFFSET = local_58;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a220  TEAViewWindows::vf50   (48 bytes)   [rtti:vtable virtual slot 50]
void __cdecl TEAViewWindows::vf50(int *param_1)

{
  if (0 < param_1[0x1ec]) {
    param_1[0x1ec] = 0;
    ReleaseCapture();
    FUN_0045b89c(param_1);
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a250  TEAViewWindows::vf51   (34 bytes)   [rtti:vtable virtual slot 51]
void __cdecl TEAViewWindows::vf51(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0045dcb8(param_1,param_3);
  if (piVar1 != (int *)0x0) {
    FUN_004525f4((int)param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a274  TEAViewWindows::vf52   (46 bytes)   [rtti:vtable virtual slot 52]
void __cdecl TEAViewWindows::vf52(int *param_1,undefined4 param_2,int *param_3)

{
  int *piVar1;
  
  piVar1 = FUN_0045dcb8(param_1,param_3);
  if (piVar1 != (int *)0x0) {
    FUN_0045c57c((int)param_1,(int)piVar1);
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a2a4  TEAViewWindows::vf53   (340 bytes)   [rtti:vtable virtual slot 53]
void __cdecl TEAViewWindows::vf53(int *param_1,undefined4 param_2,LPPOINT param_3)

{
  int *piVar1;
  HWND hWnd;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_40;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4f95a8);
  piVar1 = FUN_0045dcb8(param_1,&param_3->x);
  if (piVar1 != (int *)0x0) {
    DAT_0051ac88 = 0x19f0;
    (*(undefined4 *)&DAT_0051ac84) = 0x19f0;
    iVar3 = 1;
    piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)0x19f0);
    FUN_00497fac(&local_10,piVar1,iVar3);
    OWL::TMenu::_dtor(local_1c,2);
    ClientToScreen(*(HWND *)(*param_1 + 0xc),param_3);
    iVar3 = GetSystemMetrics(0);
    if (param_3->x < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->x;
    }
    if (iVar2 < iVar3) {
      if (param_3->x < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->x;
      }
    }
    else {
      iVar3 = GetSystemMetrics(0);
    }
    param_3->x = iVar3;
    iVar3 = GetSystemMetrics(1);
    if (param_3->y < 1) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_3->y;
    }
    if (iVar2 < iVar3) {
      if (param_3->y < 1) {
        iVar3 = 0;
      }
      else {
        iVar3 = param_3->y;
      }
    }
    else {
      iVar3 = GetSystemMetrics(1);
    }
    param_3->y = iVar3;
    hWnd = (HWND)FUN_00454458(param_1);
    TrackPopupMenu(local_c,2,param_3->x,param_3->y,0,hWnd,(RECT *)0x0);
    OWL::TMenu::_dtor(&local_10,0);
  }
  FUN_004a5774(*param_1);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a3f8  TEAViewWindows::vf40   (49 bytes)   [rtti:vtable virtual slot 40]
void __cdecl TEAViewWindows::vf40(int *param_1,int param_2)

{
  if ((param_2 == 0) || (param_2 == 2)) {
    FUN_00451784(param_1,5);
  }
  PropertiesViewWindows::vf40(param_1,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a42c  TEAViewWindows::vf54   (153 bytes)   [rtti:vtable virtual slot 54]
void __cdecl TEAViewWindows::vf54(int *param_1)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  while( true ) {
    uVar4 = FUN_004a87e0();
    if (uVar4 <= uVar5) break;
    iVar1 = FUN_004a87f8();
    puVar2 = (uint *)operator_new_array();
    FUN_004a87c4();
    *(undefined1 *)((int)puVar2 + iVar1) = 0;
    FUN_00464bb4(param_1[0xe],puVar2);
    puVar3 = FUN_0041238c(param_1[0xe],param_1[0x18]);
    FUN_0041251c((int)puVar3,puVar2);
    FUN_0045269c(param_1);
    operator_delete_array();
    uVar5 = uVar5 + 1;
  }
  FUN_004a8814();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a4c8  TEAViewWindows::vf55   (191 bytes)   [rtti:vtable virtual slot 55]
void __cdecl TEAViewWindows::vf55(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f95d8);
  if (*(uint **)(param_1 + 0xc7c) != (uint *)0x0) {
    OWL::TBrush::_dtor(*(uint **)(param_1 + 0xc7c),3);
  }
  *(undefined4 *)(param_1 + 0xc7c) = 0;
  uVar4 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar4) break;
    piVar3 = (int *)(*(int *)(param_1 + 0xc84) + uVar4 * 4);
    if (*piVar3 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar2,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_00467844((int)puVar1);
    }
    uVar4 = uVar4 + 1;
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a61c  TEAViewWindows::vf39   (468 bytes)   [rtti:vtable virtual slot 39; function defined from vtable-slot]
undefined4 __cdecl TEAViewWindows::vf39(int *param_1,HDC param_2,HWND param_3,int param_4)

{
  HWND pHVar1;
  DWORD DVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  COLORREF local_4c;
  COLORREF local_48;
  int local_44;
  int *local_40;
  COLORREF local_3c;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  undefined2 local_20;
  uint *local_c;
  uint *local_8;
  
  __InitExceptBlockLDTC(0x4f9618);
  local_34 = FUN_00466b28(param_1[0xe]);
  local_38 = PropertiesViewWindows::vf39(param_1,param_2,param_3,param_4);
  if (param_4 == 1) {
    if ((*(HWND *)(param_1[0xb6] + 0xc) != param_3) && (*(HWND *)(param_1[0x143] + 0xc) != param_3))
    {
      SetTextColor(param_2,*(COLORREF *)(local_34 + 0x30));
    }
  }
  else if (param_4 == 6) {
    iVar4 = 0;
    while( true ) {
      iVar3 = param_1[0x1ae] - param_1[0x1ad];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if (iVar3 >> 2 <= iVar4) break;
      if ((*(HWND *)(**(int **)(*(int *)(iVar4 * 4 + param_1[0x1ad]) + 4) + 0xc) == param_3) &&
         (SelectObject(param_2,(HGDIOBJ)param_1[0x31c]), iVar4 == param_1[0x1b4])) {
        local_40 = *(int **)(*(int *)(iVar4 * 4 + param_1[0x1ad]) + 8);
        local_44 = iVar4;
        pHVar1 = GetFocus();
        if (pHVar1 == *(HWND *)(*local_40 + 0xc)) {
          DVar2 = GetSysColor(9);
          SetTextColor(param_2,DVar2);
          local_3c = GetSysColor(2);
        }
        else {
          DVar2 = GetSysColor(0x13);
          SetTextColor(param_2,DVar2);
          local_3c = GetSysColor(3);
        }
        SetBkColor(param_2,local_3c);
        local_8 = (uint *)param_1[799];
        if (local_8 != (uint *)0x0) {
          local_20 = 0x14;
          OWL::TBrush::_dtor(local_8,3);
          local_20 = 8;
        }
        local_c = (uint *)operator_new();
        if (local_c != (uint *)0x0) {
          local_20 = 0x2c;
          local_48 = local_3c;
          local_4c = local_3c;
          FUN_004ab84c(local_c,&local_4c,'\x01');
          local_20 = 0x20;
        }
        param_1[799] = (int)local_c;
        local_38 = *(undefined4 *)param_1[799];
      }
      iVar4 = iVar4 + 1;
    }
  }
  *in_FS_OFFSET = local_30;
  return local_38;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045a7f0  FUN_0045a7f0   (1533 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045a7f0(int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  CHAR local_ba [2];
  undefined1 *local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  int local_a0;
  undefined1 *local_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f96cc);
  local_80 = 0x14;
  iVar6 = 0;
  iVar5 = 0;
  FUN_004649b0((int)local_1c);
  local_74 = local_74 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar5,iVar6);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045a8bc;
    }
    local_94 = local_14 + -0xc;
    operator_delete();
    local_98 = 0;
    local_9c = local_1c;
    local_14 = 0;
  }
LAB_0045a8bc:
  piVar2 = &local_a0;
  local_a0 = 0;
  local_80 = 0x2c;
  std::string::string_from_cstr((int)local_2c,(uint *)"PrintingMarginUnits");
  local_74 = local_74 + 1;
  Persist::QueryValue((int)local_c,(int)local_2c,piVar2);
  local_74 = local_74 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045a995;
    }
    local_ac = local_24 + -0xc;
    local_b0 = local_24 + -0xc;
    operator_delete();
    local_b4 = 0;
    local_b8 = local_2c;
    local_24 = 0;
  }
LAB_0045a995:
  local_80 = 8;
  if ((local_a0 == 4) || (local_a0 == 8)) {
    *(int *)(param_1 + 0xcb4) = local_a0;
  }
  else {
    local_ba[0] = '\0';
    GetLocaleInfoA(0x400,0xd,local_ba,2);
    if (local_ba[0] == '1') {
      *(undefined4 *)(param_1 + 0xcb4) = 4;
    }
    else {
      *(undefined4 *)(param_1 + 0xcb4) = 8;
    }
  }
  if (*(int *)(param_1 + 0xcb4) == 4) {
    uVar3 = 1000;
  }
  else {
    uVar3 = 0x9ec;
  }
  puVar7 = &local_c0;
  local_80 = 0x44;
  std::string::string_from_cstr((int)local_3c,(uint *)"PrintingLeftMargin");
  local_74 = local_74 + 1;
  uVar1 = Persist::QueryValue((int)local_c,(int)local_3c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045aae5;
    }
    operator_delete();
    local_34 = 0;
  }
LAB_0045aae5:
  if (cVar4 != '\0') {
    local_c0 = uVar3;
  }
  puVar7 = &local_c4;
  local_80 = 0x5c;
  std::string::string_from_cstr((int)local_4c,(uint *)"PrintingRightMargin");
  local_74 = local_74 + 1;
  uVar1 = Persist::QueryValue((int)local_c,(int)local_4c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar2 = (int *)(local_44 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045abc8;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_0045abc8:
  if (cVar4 != '\0') {
    local_c4 = uVar3;
  }
  puVar7 = &local_c8;
  local_80 = 0x74;
  std::string::string_from_cstr((int)local_5c,(uint *)"PrintingTopMargin");
  local_74 = local_74 + 1;
  uVar1 = Persist::QueryValue((int)local_c,(int)local_5c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar2 = (int *)(local_54 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045acab;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_0045acab:
  if (cVar4 != '\0') {
    local_c8 = uVar3;
  }
  puVar7 = &local_cc;
  local_80 = 0x8c;
  std::string::string_from_cstr((int)local_6c,(uint *)"PrintingBottomMargin");
  local_74 = local_74 + 1;
  uVar1 = Persist::QueryValue((int)local_c,(int)local_6c,puVar7);
  cVar4 = (uVar1 & 0xff) == 0;
  local_74 = local_74 + -1;
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar2 = (int *)(local_64 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar5 = *piVar2 + 1;
      }
      if (iVar5 != 0) goto LAB_0045ad8e;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_0045ad8e:
  if (cVar4 != '\0') {
    local_cc = uVar3;
  }
  *(undefined4 *)(param_1 + 0xcb8) = local_c0;
  *(undefined4 *)(param_1 + 0xcc0) = local_c4;
  *(undefined4 *)(param_1 + 0xcbc) = local_c8;
  *(undefined4 *)(param_1 + 0xcc4) = local_cc;
  local_74 = local_74 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_90;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045adf0  FUN_0045adf0   (2562 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0045adf0(int param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  undefined4 local_d0;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f982c);
  iVar6 = 0;
  iVar5 = 1;
  FUN_004649b0((int)local_1c);
  Persist::Persist(local_c,(int)local_1c,iVar5,iVar6);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045aed8;
    }
    operator_delete();
    local_14 = 0;
  }
LAB_0045aed8:
  uVar4 = 0;
  while( true ) {
    iVar5 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uint)(iVar5 >> 2) <= uVar4) break;
    piVar3 = (int *)(uVar4 * 4 + *(int *)(param_1 + 0xc84));
    if (*piVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_004677b8((int)puVar1);
      std::string::string_from_cstr((int)local_2c,(uint *)"QuickReference");
      FUN_0044eca8((int)local_c,(int)local_2c);
      if (local_24 != 0) {
        if (*(int *)(local_24 + -0xc) != -1) {
          piVar3 = (int *)(local_24 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar5 = *piVar3 + 1;
          }
          if (iVar5 != 0) goto LAB_0045b019;
        }
        operator_delete();
        local_24 = 0;
      }
    }
LAB_0045b019:
    piVar3 = (int *)(uVar4 * 4 + *(int *)(param_1 + 0xc84));
    if (*piVar3 == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = *(int *)(*piVar3 + 8);
    }
    puVar1 = FUN_004dd744(*piVar3,iVar5,(int *)&DAT_0040299c,(int *)&DAT_0045b7f4,0);
    if (puVar1 != (undefined4 *)0x0) {
      FUN_0047af2c((int)puVar1);
      std::string::string_from_cstr((int)local_3c,(uint *)"StartupTips");
      FUN_0044eca8((int)local_c,(int)local_3c);
      if (local_34 != 0) {
        if (*(int *)(local_34 + -0xc) != -1) {
          piVar3 = (int *)(local_34 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar5 = *piVar3 + 1;
          }
          if (iVar5 != 0) goto LAB_0045b14a;
        }
        operator_delete();
        local_34 = 0;
      }
    }
LAB_0045b14a:
    uVar4 = uVar4 + 1;
  }
  std::string::string_from_cstr((int)local_4c,(uint *)"WindowTopMost");
  FUN_0044eca8((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b23d;
    }
    operator_delete();
    local_44 = 0;
  }
LAB_0045b23d:
  std::string::string_from_cstr((int)local_5c,(uint *)"PaneOrientation");
  FUN_0044eca8((int)local_c,(int)local_5c);
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      piVar3 = (int *)(local_54 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b31a;
    }
    operator_delete();
    local_54 = 0;
  }
LAB_0045b31a:
  puVar2 = FUN_0041238c(*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x60));
  FUN_00412830((int)puVar2);
  std::string::string_from_cstr((int)local_6c,(uint *)"PrintingMarginUnits");
  FUN_0044eca8((int)local_c,(int)local_6c);
  if (local_64 != 0) {
    if (*(int *)(local_64 + -0xc) != -1) {
      piVar3 = (int *)(local_64 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b40e;
    }
    operator_delete();
    local_64 = 0;
  }
LAB_0045b40e:
  std::string::string_from_cstr((int)local_7c,(uint *)"PrintingLeftMargin");
  FUN_0044eca8((int)local_c,(int)local_7c);
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar3 = (int *)(local_74 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b4eb;
    }
    operator_delete();
    local_74 = 0;
  }
LAB_0045b4eb:
  std::string::string_from_cstr((int)local_8c,(uint *)"PrintingRightMargin");
  FUN_0044eca8((int)local_c,(int)local_8c);
  if (local_84 != 0) {
    if (*(int *)(local_84 + -0xc) != -1) {
      piVar3 = (int *)(local_84 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b5d1;
    }
    operator_delete();
    local_84 = 0;
  }
LAB_0045b5d1:
  std::string::string_from_cstr((int)local_9c,(uint *)"PrintingTopMargin");
  FUN_0044eca8((int)local_c,(int)local_9c);
  if (local_94 != 0) {
    if (*(int *)(local_94 + -0xc) != -1) {
      piVar3 = (int *)(local_94 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b6c9;
    }
    operator_delete();
    local_94 = 0;
  }
LAB_0045b6c9:
  std::string::string_from_cstr((int)local_ac,(uint *)"PrintingBottomMargin");
  FUN_0044eca8((int)local_c,(int)local_ac);
  if (local_a4 != 0) {
    if (*(int *)(local_a4 + -0xc) != -1) {
      piVar3 = (int *)(local_a4 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b7c1;
    }
    operator_delete();
    local_a4 = 0;
  }
LAB_0045b7c1:
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_d0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045b89c  FUN_0045b89c   (926 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0045b89c(int *param_1)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  int iVar5;
  int iVar6;
  uint local_c4 [5];
  LONG local_b0 [2];
  int local_a8;
  int local_a4;
  undefined4 local_98;
  undefined1 *local_90;
  int local_8c;
  undefined1 *local_88;
  int local_84;
  int local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f9994);
  local_50 = 0x14;
  iVar6 = 0;
  iVar5 = 1;
  FUN_004649b0((int)local_3c);
  local_44 = local_44 + 1;
  Persist::Persist(local_c,(int)local_3c,iVar5,iVar6);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045b959;
    }
    local_64 = local_34 + -0xc;
    operator_delete();
    local_68 = 0;
    local_6c = local_3c;
    local_34 = 0;
    local_98 = 0;
  }
LAB_0045b959:
  local_50 = 8;
  FUN_00459150(local_b0,param_1);
  if (param_1[0x29] != 0) {
    local_a4 = local_a8;
  }
  local_70 = local_a4 + param_1[0x1ed];
  local_50 = 0x2c;
  std::string::string_from_cstr((int)local_1c,(uint *)"Panes");
  local_44 = local_44 + 1;
  local_50 = 8;
  FUN_004e0344((undefined1 *)local_c4,&DAT_004f76b2 /* "%c%d" */);
  uVar4 = *(uint *)(local_14 + -4);
  pcVar2 = strlen(local_c4);
  FUN_004cfad4((int)local_1c,uVar4,0,(uint)local_c4,(uint)pcVar2,0,(uint)pcVar2);
  FUN_004e0344((undefined1 *)local_c4,&DAT_004f75f3);
  local_50 = 0x38;
  std::string::string_from_cstr((int)local_2c,local_c4);
  local_44 = local_44 + 1;
  local_50 = 8;
  uVar4 = 0;
  while( true ) {
    iVar5 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    if ((uint)(iVar5 >> 2) <= uVar4) break;
    FUN_004e0344((undefined1 *)local_c4,&DAT_004f782b /* ",%d" */);
    uVar1 = *(uint *)(local_24 + -4);
    pcVar2 = strlen(local_c4);
    FUN_004cfad4((int)local_2c,uVar1,0,(uint)local_c4,(uint)pcVar2,0,(uint)pcVar2);
    uVar4 = uVar4 + 1;
  }
  FUN_0044ec78((int)local_c,(int)local_1c,(int)local_2c);
  local_44 = local_44 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045bb99;
    }
    local_84 = local_24 + -0xc;
    operator_delete();
    local_88 = local_2c;
    local_24 = 0;
  }
LAB_0045bb99:
  local_50 = 8;
  local_44 = local_44 + -1;
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar5 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar5 = *piVar3 + 1;
      }
      if (iVar5 != 0) goto LAB_0045bc18;
    }
    local_8c = local_14 + -0xc;
    operator_delete();
    local_90 = local_1c;
    local_14 = 0;
  }
LAB_0045bc18:
  local_44 = local_44 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_60;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045bc3c  FUN_0045bc3c   (2058 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0045bc3c(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  uint local_1f8 [15];
  undefined4 local_1bc;
  undefined4 local_1ac;
  undefined4 local_19c;
  undefined4 local_18c;
  undefined4 local_17c;
  undefined1 *local_174;
  undefined4 local_170;
  uint *local_16c;
  uint *local_168;
  undefined1 *local_164;
  undefined4 local_160;
  int local_15c;
  int local_158;
  undefined1 *local_154;
  undefined4 local_150;
  int local_14c;
  int local_148;
  undefined1 *local_134;
  undefined4 local_130;
  int local_12c;
  int local_128;
  int *local_124;
  undefined1 *local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  int *local_108;
  int local_fc;
  undefined1 *local_f8;
  undefined4 local_f4;
  int local_f0;
  int local_ec;
  undefined1 *local_e0;
  undefined4 local_dc;
  int local_d8;
  int local_d4;
  int local_c8;
  int local_c4;
  undefined1 *local_c0;
  undefined4 local_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  uint *local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  __InitExceptBlockLDTC(0x4f9a98);
  local_a0 = 0x14;
  iVar5 = 0;
  iVar4 = 1;
  FUN_004649b0((int)local_1c);
  local_94 = local_94 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar4,iVar5);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar2 = (int *)(local_14 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045bd24;
    }
    local_b4 = local_14 + -0xc;
    local_b8 = local_14 + -0xc;
    operator_delete();
    local_bc = 0;
    local_c0 = local_1c;
    local_14 = 0;
    local_17c = 0;
  }
LAB_0045bd24:
  local_c4 = 1;
  local_c8 = 100;
  piVar2 = &local_c4;
  local_a0 = 0x2c;
  std::string::string_from_cstr((int)local_2c,(uint *)"RangeShortest");
  local_94 = local_94 + 1;
  Persist::QueryValue((int)local_c,(int)local_2c,piVar2);
  local_94 = local_94 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar2 = (int *)(local_24 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045be15;
    }
    local_d4 = local_24 + -0xc;
    local_d8 = local_24 + -0xc;
    operator_delete();
    local_dc = 0;
    local_e0 = local_2c;
    local_24 = 0;
    local_18c = 0;
  }
LAB_0045be15:
  piVar2 = &local_c8;
  local_a0 = 0x44;
  std::string::string_from_cstr((int)local_3c,(uint *)"RangeLongest");
  local_94 = local_94 + 1;
  Persist::QueryValue((int)local_c,(int)local_3c,piVar2);
  local_94 = local_94 + -1;
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar2 = (int *)(local_34 + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar4 = *piVar2 + 1;
      }
      if (iVar4 != 0) goto LAB_0045bef2;
    }
    local_ec = local_34 + -0xc;
    local_f0 = local_34 + -0xc;
    operator_delete();
    local_f4 = 0;
    local_f8 = local_3c;
    local_34 = 0;
    local_19c = 0;
  }
LAB_0045bef2:
  local_a0 = 8;
  iVar4 = FUN_0041b280(param_1 + 0xb6);
  iVar5 = FUN_0041b280(param_1 + 0x143);
  if ((iVar4 == local_c4) && (iVar5 == local_c8)) goto LAB_0045c174;
  local_fc = *param_1;
  iVar1 = (**(code **)(*(int *)(*(int *)(local_fc + 0x6c) + 0x1b) + 0x30))();
  if (iVar1 != 6) goto LAB_0045c174;
  if ((0 < iVar4) && (iVar4 < 0x65)) {
    local_a0 = 0x5c;
    std::string::string_from_cstr((int)local_4c,(uint *)"RangeShortest");
    local_94 = local_94 + 1;
    FUN_0044eca8((int)local_c,(int)local_4c);
    local_94 = local_94 + -1;
    if (local_44 != 0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        local_108 = (int *)(local_44 + -0xc);
        if (local_108 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (local_108 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *local_108 = *local_108 + -1;
          iVar4 = *local_108 + 1;
        }
        if (iVar4 != 0) goto LAB_0045c066;
      }
      local_10c = local_44 + -0xc;
      local_110 = local_44 + -0xc;
      operator_delete();
      local_114 = 0;
      local_118 = local_4c;
      local_44 = 0;
      local_1ac = 0;
    }
LAB_0045c066:
    local_a0 = 8;
  }
  if ((iVar5 < 1) || (100 < iVar5)) goto LAB_0045c174;
  local_a0 = 0x74;
  std::string::string_from_cstr((int)local_5c,(uint *)"RangeLongest");
  local_94 = local_94 + 1;
  FUN_0044eca8((int)local_c,(int)local_5c);
  local_94 = local_94 + -1;
  if (local_54 != 0) {
    if (*(int *)(local_54 + -0xc) != -1) {
      local_124 = (int *)(local_54 + -0xc);
      if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (local_124 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *local_124 = *local_124 + -1;
        iVar4 = *local_124 + 1;
      }
      if (iVar4 != 0) goto LAB_0045c16b;
    }
    local_128 = local_54 + -0xc;
    local_12c = local_54 + -0xc;
    operator_delete();
    local_130 = 0;
    local_134 = local_5c;
    local_54 = 0;
    local_1bc = 0;
  }
LAB_0045c16b:
  local_a0 = 8;
LAB_0045c174:
  iVar4 = 0;
  do {
    iVar5 = (**(code **)(param_1[0x59] + 0x24))();
    if ((iVar5 <= iVar4) || (99 < iVar4)) {
      local_94 = local_94 + -1;
      Persist::_dtor((int)local_c,2);
      *in_FS_OFFSET = local_b0;
      return;
    }
    local_a0 = 0x98;
    FUN_0041c780((int)local_6c,(int)(param_1 + 0x56),iVar4);
    local_94 = local_94 + 1;
    local_a0 = 0x8c;
    if (local_64[-1] != 0) {
      FUN_004e0344((undefined1 *)local_1f8,&DAT_004f7826 /* "%s%d" */);
      local_a0 = 0xa4;
      std::string::string_from_cstr((int)local_7c,local_64);
      local_94 = local_94 + 1;
      puVar6 = local_7c;
      std::string::string_from_cstr((int)local_8c,local_1f8);
      local_94 = local_94 + 1;
      FUN_0044ec78((int)local_c,(int)local_8c,(int)puVar6);
      local_94 = local_94 + -1;
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar2 = (int *)(local_84 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar5 = *piVar2 + 1;
          }
          if (iVar5 != 0) goto LAB_0045c2c1;
        }
        local_148 = local_84 + -0xc;
        local_14c = local_84 + -0xc;
        operator_delete();
        local_150 = 0;
        local_154 = local_8c;
        local_84 = 0;
      }
LAB_0045c2c1:
      local_a0 = 0x8c;
      local_94 = local_94 + -1;
      if (local_74 != 0) {
        if (*(int *)(local_74 + -0xc) != -1) {
          piVar2 = (int *)(local_74 + -0xc);
          if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else if (piVar2 == &DAT_00513d58) {
            iVar5 = 1;
          }
          else {
            *piVar2 = *piVar2 + -1;
            iVar5 = *piVar2 + 1;
          }
          if (iVar5 != 0) goto LAB_0045c360;
        }
        local_158 = local_74 + -0xc;
        local_15c = local_74 + -0xc;
        operator_delete();
        local_160 = 0;
        local_164 = local_7c;
        local_74 = 0;
      }
    }
LAB_0045c360:
    local_94 = local_94 + -1;
    if (local_64 != (uint *)0x0) {
      if (local_64[-3] != 0xffffffff) {
        puVar3 = local_64 + -3;
        if (puVar3 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else if (puVar3 == &DAT_00513d58) {
          iVar5 = 1;
        }
        else {
          *puVar3 = *puVar3 - 1;
          iVar5 = *puVar3 + 1;
        }
        if (iVar5 != 0) goto LAB_0045c3f6;
      }
      local_168 = local_64 + -3;
      local_16c = local_64 + -3;
      operator_delete();
      local_170 = 0;
      local_174 = local_6c;
      local_64 = (uint *)0x0;
    }
LAB_0045c3f6:
    local_a0 = 8;
    iVar4 = iVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c448  FUN_0045c448   (213 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045c448(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar2) break;
    if (param_2 == *(int *)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 8)) {
      if ((param_3 == 1) && (iVar2 != *(int *)(param_1 + 0x6d0))) {
        (**(code **)(*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 +
                                                 *(int *)(param_1 + 0x6b4)) + 4) + 8) + 0x68))();
        *(int *)(param_1 + 0x6d0) = iVar2;
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 4) + 8) +
                    0x68))();
        if (*(int *)(param_1 + 100) != 2) {
          FUN_0045c6d4(param_1,*(int *)(param_1 + 100));
        }
      }
      else {
        (**(code **)(*(int *)(**(int **)(*(int *)(iVar2 * 4 + *(int *)(param_1 + 0x6b4)) + 4) + 8) +
                    0x68))();
      }
      return;
    }
    iVar2 = iVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c520  FUN_0045c520   (92 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045c520(int *param_1)

{
  SHORT SVar1;
  int iVar2;
  
  if (param_1[0x18] == 0) {
    iVar2 = FUN_00452d7c((int)param_1);
    if (0 < iVar2) {
      iVar2 = FUN_00466b28(param_1[0xe]);
      if (*(int *)(iVar2 + 0x1c8) == 0) {
        SVar1 = GetKeyState(0x10);
        if (SVar1 < 0) {
          iVar2 = 0x3160;
        }
        else {
          iVar2 = 0x1d42;
        }
      }
      else {
        iVar2 = 0x31a6;
      }
      FUN_00457354(param_1,*param_1,1,iVar2);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c57c  FUN_0045c57c   (96 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045c57c(int param_1,int param_2)

{
  uint uVar1;
  HWND pHVar2;
  int iVar3;
  
  uVar1 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar1) break;
    iVar3 = *(int *)(*(int *)(param_1 + 0x6b4) + uVar1 * 4);
    if (*(int *)(iVar3 + 4) == param_2) {
      pHVar2 = GetFocus();
      if (pHVar2 == *(HWND *)(**(int **)(iVar3 + 8) + 0xc)) {
        return;
      }
      SetFocus(*(HWND *)(**(int **)(iVar3 + 8) + 0xc));
      return;
    }
    uVar1 = uVar1 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c5dc  TEAViewWindows::Cmd12690   (19 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(12690)
void __cdecl TEAViewWindows::Cmd12690(int *param_1)

{
  FUN_0045c5f0(param_1,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c5f0  FUN_0045c5f0   (228 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045c5f0(int *param_1,UINT param_2)

{
  int *piVar1;
  HWND hWnd;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  tagPOINT local_48;
  undefined4 local_40;
  undefined2 local_30;
  int local_24;
  undefined4 local_1c [3];
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4f9b98);
  local_30 = 0x14;
  iVar2 = 1;
  DAT_0051ac88 = 0x31ce;
  (*(undefined4 *)&DAT_0051ac84) = 0x31ce;
  piVar1 = FUN_00497b98(local_1c,*(HINSTANCE *)(*(int *)(*param_1 + 0x6c) + 0xc),(LPCSTR)0x31ce);
  local_24 = local_24 + 1;
  FUN_00497fac(&local_10,piVar1,iVar2);
  local_24 = local_24 + 1;
  OWL::TMenu::_dtor(local_1c,2);
  local_30 = 8;
  local_48.x = 0;
  local_48.y = 0;
  ClientToScreen(*(HWND *)(param_1[0x84] + 0xc),&local_48);
  hWnd = (HWND)FUN_00454458(param_1);
  TrackPopupMenu(local_c,param_2,local_48.x,local_48.y,0,hWnd,(RECT *)0x0);
  local_24 = local_24 + -2;
  OWL::TMenu::_dtor(&local_10,0);
  *in_FS_OFFSET = local_40;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045c6d4  FUN_0045c6d4   (1253 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045c6d4(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int iVar8;
  undefined4 local_4c;
  undefined1 local_28 [8];
  int local_20;
  undefined1 local_18 [8];
  int local_10;
  int local_8;
  
  __InitExceptBlockLDTC(0x4f9be8);
  if (param_2 < 4) {
    if (param_2 == 2) {
      pcVar1 = "&Stop";
    }
    else if (param_2 == 3) {
      pcVar1 = "Re&sume";
    }
    else if (*(int *)(param_1 + 0x690) == 0) {
      pcVar1 = "Word &Search";
    }
    else {
      pcVar1 = "Full Text &Search";
    }
    FUN_004a7780(*(int *)(param_1 + 0x210),(uint *)pcVar1);
  }
  if ((param_2 != *(int *)(param_1 + 100)) && (*(int *)(param_1 + 100) = param_2, param_2 < 4)) {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x210) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x158) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x2d8) + 8) + 0x60))();
    (**(code **)(*(int *)(*(int *)(param_1 + 0x50c) + 8) + 0x60))();
    if (*(int **)(param_1 + 0xca8) == (int *)0x0) {
      FUN_004a8278();
      (**(code **)(*(int *)(**(int **)(param_1 + 0x68c) + 8) + 0x60))();
    }
    else {
      (**(code **)(*(int *)(**(int **)(param_1 + 0xca8) + 8) + 0x60))();
    }
    uVar6 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      if ((uint)(iVar4 >> 2) <= uVar6) break;
      piVar5 = (int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84));
      if (*piVar5 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(*piVar5 + 8);
      }
      piVar5 = FUN_004dd744(*piVar5,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00406af0,0);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*(int *)(*piVar5 + 8) + 0x60))();
      }
      uVar6 = uVar6 + 1;
    }
  }
  switch(*(undefined4 *)(param_1 + 100)) {
  case 0:
    FUN_0044fdb8((int *)(param_1 + 0x6d4),0,0,0,0);
    break;
  case 1:
    InputEngine::_dtor(*(int *)(param_1 + 0x6c),3);
    local_8 = *(int *)(param_1 + 0x70);
    if (local_8 != 0) {
      TSDictionaryDefinitionSearchIndexed::_dtor(local_8,3);
    }
    TSDictionaryDefinitionSearchSequential::_dtor(*(int *)(param_1 + 0x74),3);
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0xffffffff;
  case 3:
    iVar8 = 0;
    iVar7 = 0;
    iVar4 = *(int *)(param_1 + 0x6d0);
    iVar2 = FUN_00466b18(*(int *)(param_1 + 0x38));
    FUN_0044fdb8((int *)(param_1 + 0x6d4),iVar2,iVar4,iVar7,iVar8);
    if (*(int *)(param_1 + 100) == 1) {
      uVar6 = 0x3318;
    }
    else {
      uVar6 = 0x136a;
    }
    iVar4 = *(int *)(param_1 + 0x38);
    FUN_00464a94((int)local_18,iVar4,uVar6);
    FUN_00465a64(iVar4,(int)local_18);
    if (local_10 != 0) {
      if (*(int *)(local_10 + -0xc) != -1) {
        piVar5 = (int *)(local_10 + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) break;
      }
      operator_delete();
    }
    break;
  case 2:
    iVar4 = *(int *)(param_1 + 0x38);
    FUN_00464a94((int)local_28,iVar4,0x1360);
    FUN_00465a64(iVar4,(int)local_28);
    if (local_20 != 0) {
      if (*(int *)(local_20 + -0xc) != -1) {
        piVar5 = (int *)(local_20 + -0xc);
        if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else if (piVar5 == &DAT_00513d58) {
          iVar4 = 1;
        }
        else {
          *piVar5 = *piVar5 + -1;
          iVar4 = *piVar5 + 1;
        }
        if (iVar4 != 0) break;
      }
      operator_delete();
    }
    break;
  case 4:
    uVar6 = 0;
    while( true ) {
      iVar4 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 3;
      }
      if ((uint)(iVar4 >> 2) <= uVar6) break;
      if (*(int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84)) != 0) {
        piVar5 = (int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84));
        if (*piVar5 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)(*piVar5 + 8);
        }
        puVar3 = FUN_004dd744(*piVar5,iVar4,(int *)&DAT_0040299c,(int *)&DAT_00402910,0);
        if (puVar3 != (undefined4 *)0x0) {
          (**(code **)(puVar3[3] + 0x90))();
        }
        (**(code **)(*(int *)(*(int *)(uVar6 * 4 + *(int *)(param_1 + 0xc84)) + 8) + 0x24))();
      }
      uVar6 = uVar6 + 1;
    }
    FUN_0045adf0(param_1);
  }
  *in_FS_OFFSET = local_4c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cbd0  FUN_0045cbd0   (298 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0045cbd0(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4f9c48);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(param_1[0x321] + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    local_34 = uVar3;
    local_30 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045a588,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_004671dc(local_8,0,param_1,param_1[0xe],param_2);
      local_1c = 8;
    }
    local_30 = local_8;
    (**(code **)(local_8[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = *local_30;
    }
    piVar2 = (int *)param_1[0x322];
    if (piVar2 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar2,&local_38);
    }
    else {
      *piVar2 = local_38;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *in_FS_OFFSET = local_2c;
  return local_30;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045cd28  FUN_0045cd28   (290 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045cd28(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  int local_38;
  uint local_34;
  int *local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4f9c78);
  local_30 = (int *)0x0;
  uVar3 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(param_1[0x321] + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    local_34 = uVar3;
    local_30 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045b7f4,0);
    if (local_30 != (int *)0x0) break;
    uVar3 = uVar3 + 1;
  }
  if (local_30 == (int *)0x0) {
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_0047ab54(local_8,0,param_1,param_1[0xe]);
      local_1c = 8;
    }
    local_30 = local_8;
    (**(code **)(local_8[3] + 0xc))();
    if (local_30 == (int *)0x0) {
      local_38 = 0;
    }
    else {
      local_38 = *local_30;
    }
    piVar2 = (int *)param_1[0x322];
    if (piVar2 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar2,&local_38);
    }
    else {
      *piVar2 = local_38;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  (**(code **)(local_30[3] + 0x3c))();
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045ce74  FUN_0045ce74   (1982 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0045d0d9) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl FUN_0045ce74(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  tagRECT *ptVar5;
  LONG *pLVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  int iVar8;
  char cVar9;
  int iVar10;
  uint local_29c [64];
  tagRECT local_19c;
  LONG local_18c [6];
  undefined *local_174;
  undefined4 local_164;
  undefined4 local_154;
  undefined1 *local_14c;
  undefined4 local_148;
  int local_144;
  int local_140;
  undefined1 *local_134;
  undefined4 local_130;
  int local_12c;
  int local_128;
  undefined1 *local_124;
  undefined4 local_120;
  undefined *local_11c;
  undefined *local_118;
  undefined1 *local_114;
  undefined4 local_110;
  int local_10c;
  int local_108;
  int *local_104;
  undefined4 *local_f8;
  undefined1 *local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int *local_e4;
  int *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  int local_c4;
  int local_c0;
  int local_b4;
  undefined1 *local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined2 local_90;
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  undefined *local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  bVar7 = 0;
  __InitExceptBlockLDTC(0x4f9d40);
  local_90 = 0x14;
  iVar10 = 0;
  iVar8 = 1;
  FUN_004649b0((int)local_1c);
  local_84 = local_84 + 1;
  Persist::Persist(local_c,(int)local_1c,iVar8,iVar10);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar4 = (int *)(local_14 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045cf56;
    }
    local_a4 = local_14 + -0xc;
    local_a8 = local_14 + -0xc;
    operator_delete();
    local_ac = 0;
    local_b0 = local_1c;
    local_14 = 0;
    local_154 = 0;
  }
LAB_0045cf56:
  piVar4 = &local_b4;
  local_90 = 0x2c;
  std::string::string_from_cstr((int)local_2c,(uint *)"QuickReference");
  local_84 = local_84 + 1;
  uVar2 = Persist::QueryValue((int)local_c,(int)local_2c,piVar4);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  local_84 = local_84 + -1;
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar4 = (int *)(local_24 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045d03e;
    }
    local_c0 = local_24 + -0xc;
    local_c4 = local_24 + -0xc;
    operator_delete();
    local_c8 = 0;
    local_cc = local_2c;
    local_24 = 0;
    local_164 = 0;
  }
LAB_0045d03e:
  if (cVar9 != '\0') {
    local_d0 = FUN_0045cbd0(param_1,1);
    local_90 = 0x44;
    std::string::string_from_cstr((int)local_3c,(uint *)"Definition1");
    local_84 = local_84 + 1;
    local_90 = 0x50;
    uVar1 = *(uint *)(local_34 + -4);
    pcVar3 = strlen((uint *)"Position");
    FUN_004cfad4((int)local_3c,uVar1,0,0x4f7360,(uint)pcVar3,0,(uint)pcVar3);
    local_44 = &DAT_00513d64;
    local_174 = &DAT_00513d64;
    local_84 = local_84 + 1;
    local_90 = 0x50;
    Persist::QueryValueSized((int)local_c,(int)local_3c,(int)local_4c);
    if (*(int *)(local_44 + -4) == 0) {
      local_19c.left = 0;
      local_19c.top = 0;
      local_19c.right = 0;
      local_19c.bottom = 0;
      FUN_004a7a30(*(int *)(*param_1 + 0x14),&local_19c);
      ptVar5 = &local_19c;
      pLVar6 = local_18c;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        *pLVar6 = ptVar5->left;
        ptVar5 = (tagRECT *)((int)ptVar5 + ((uint)bVar7 * -2 + 1) * 4);
        pLVar6 = pLVar6 + (uint)bVar7 * -2 + 1;
      }
      GetSystemMetrics(0);
      FUN_0044eee4((undefined1 *)local_29c);
      local_90 = 0x74;
      iVar8 = std::string::string_from_cstr((int)local_5c,local_29c);
      local_84 = local_84 + 1;
      FUN_0044ec78((int)local_c,(int)local_3c,iVar8);
      local_84 = local_84 + -1;
      if (local_54 != 0) {
        if (*(int *)(local_54 + -0xc) != -1) {
          local_e4 = (int *)(local_54 + -0xc);
          if (local_e4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (local_e4 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *local_e4 = *local_e4 + -1;
            iVar8 = *local_e4 + 1;
          }
          if (iVar8 != 0) goto LAB_0045d279;
        }
        local_e8 = local_54 + -0xc;
        local_ec = local_54 + -0xc;
        operator_delete();
        local_f0 = 0;
        local_f4 = local_5c;
        local_54 = 0;
      }
LAB_0045d279:
      local_90 = 0x50;
      if (1 < *(int *)(local_34 + -0xc) + 1) {
        FUN_004d48d8((int)local_3c);
      }
      local_f8 = (undefined4 *)(local_34 + -0xc);
      if (local_f8 != &DAT_00513d58) {
        *local_f8 = 0xffffffff;
      }
      *(undefined1 *)(local_34 + 10) = 0x32;
      GetSystemMetrics(0);
      FUN_0044eee4((undefined1 *)local_29c);
      local_90 = 0x8c;
      iVar8 = std::string::string_from_cstr((int)local_6c,local_29c);
      local_84 = local_84 + 1;
      FUN_0044ec78((int)local_c,(int)local_3c,iVar8);
      local_84 = local_84 + -1;
      if (local_64 != 0) {
        if (*(int *)(local_64 + -0xc) != -1) {
          local_104 = (int *)(local_64 + -0xc);
          if (local_104 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else if (local_104 == &DAT_00513d58) {
            iVar8 = 1;
          }
          else {
            *local_104 = *local_104 + -1;
            iVar8 = *local_104 + 1;
          }
          if (iVar8 != 0) goto LAB_0045d3e0;
        }
        local_108 = local_64 + -0xc;
        local_10c = local_64 + -0xc;
        operator_delete();
        local_110 = 0;
        local_64 = 0;
        local_114 = local_6c;
      }
LAB_0045d3e0:
      local_90 = 0x50;
    }
    local_84 = local_84 + -1;
    if (local_44 != (undefined *)0x0) {
      if (*(int *)(local_44 + -0xc) != -1) {
        piVar4 = (int *)(local_44 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar8 = *piVar4 + 1;
        }
        if (iVar8 != 0) goto LAB_0045d479;
      }
      local_118 = local_44 + -0xc;
      local_11c = local_44 + -0xc;
      operator_delete();
      local_120 = 0;
      local_44 = (undefined *)0x0;
      local_124 = local_4c;
    }
LAB_0045d479:
    local_84 = local_84 + -1;
    if (local_34 != 0) {
      if (*(int *)(local_34 + -0xc) != -1) {
        piVar4 = (int *)(local_34 + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar8 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar8 = *piVar4 + 1;
        }
        if (iVar8 != 0) goto LAB_0045d512;
      }
      local_128 = local_34 + -0xc;
      local_12c = local_34 + -0xc;
      operator_delete();
      local_130 = 0;
      local_134 = local_3c;
      local_34 = 0;
    }
  }
LAB_0045d512:
  piVar4 = &local_b4;
  local_90 = 0xbc;
  std::string::string_from_cstr((int)local_7c,(uint *)"StartupTips");
  local_84 = local_84 + 1;
  uVar2 = Persist::QueryValue((int)local_c,(int)local_7c,piVar4);
  if (((char)uVar2 == '\0') || (local_b4 != 0)) {
    cVar9 = '\x01';
  }
  else {
    cVar9 = '\0';
  }
  local_84 = local_84 + -1;
  if (local_74 != 0) {
    if (*(int *)(local_74 + -0xc) != -1) {
      piVar4 = (int *)(local_74 + -0xc);
      if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar8 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar8 = *piVar4 + 1;
      }
      if (iVar8 != 0) goto LAB_0045d5f4;
    }
    local_140 = local_74 + -0xc;
    local_144 = local_74 + -0xc;
    operator_delete();
    local_148 = 0;
    local_14c = local_7c;
    local_74 = 0;
  }
LAB_0045d5f4:
  if (cVar9 == '\0') {
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  else {
    FUN_0045cd28(param_1);
  }
  local_84 = local_84 + -1;
  Persist::_dtor((int)local_c,2);
  *in_FS_OFFSET = local_a0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d634  TEAViewWindows::vf9   (61 bytes)   [rtti:vtable virtual slot 9]
void __cdecl TEAViewWindows::vf9(int *param_1,int param_2)

{
  if (param_1[0x19] == 2) {
    FUN_0045c6d4((int)param_1,3);
  }
  if ((param_1[0x18] != 0) || (param_2 != 2)) {
    PropertiesViewWindows::vf9(param_1,param_2);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d674  TEAViewWindows::vf7   (501 bytes, 2 ranges)   [rtti:vtable virtual slot 7]
bool __cdecl TEAViewWindows::vf7(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  SHORT SVar3;
  HWND pHVar4;
  int iVar5;
  tagRECT *ptVar6;
  LONG *pLVar7;
  int local_60 [4];
  tagRECT local_50;
  int local_40 [4];
  tagRECT local_30 [2];
  tagPOINT local_c;
  
  if (param_2->message == 0x100) {
    if (((param_2->wParam == 0xd) && (SVar3 = GetKeyState(0x11), -1 < SVar3)) &&
       (bVar2 = FUN_00454524((int)param_1,0x1dce), bVar2)) {
      FUN_0045734c();
      return true;
    }
    WVar1 = param_2->wParam;
    if ((WVar1 == 0x73) || (WVar1 == 0x74)) {
      FUN_0045de08(param_1,WVar1,0);
      return true;
    }
    if ((param_1[0x18] == 0) && (param_2->wParam == 0x70)) {
      (**(code **)(param_1[3] + 0xb4))();
      return true;
    }
  }
  else if (param_2->message == 0x205) {
    local_c.x = 0;
    local_c.y = 0;
    GetCursorPos(&local_c);
    local_30[0].left = 0;
    local_30[0].top = 0;
    local_30[0].right = 0;
    local_30[0].bottom = 0;
    FUN_004a7a30(*(int *)param_1[0x1a3],local_30);
    ptVar6 = local_30;
    pLVar7 = local_40;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    local_50.left = 0;
    local_50.top = 0;
    local_50.right = 0;
    local_50.bottom = 0;
    FUN_004a7a30(param_1[0x84],&local_50);
    ptVar6 = &local_50;
    pLVar7 = local_60;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pLVar7 = ptVar6->left;
      ptVar6 = (tagRECT *)&ptVar6->top;
      pLVar7 = pLVar7 + 1;
    }
    if (local_40[3] < local_60[3]) {
      local_40[3] = local_60[3];
    }
    if (local_40[2] < local_60[2]) {
      local_40[2] = local_60[2];
    }
    if (local_60[1] < local_40[1]) {
      local_40[1] = local_60[1];
    }
    if (local_60[0] < local_40[0]) {
      local_40[0] = local_60[0];
    }
    if (((local_c.x < local_40[0]) || (local_40[2] <= local_c.x)) ||
       ((local_c.y < local_40[1] || (local_40[3] <= local_c.y)))) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      FUN_0045c5f0(param_1,2);
      return true;
    }
  }
  else if (((param_2->message == 0x101) && (param_2->wParam == 0x5d)) &&
          (pHVar4 = GetFocus(), pHVar4 == *(HWND *)(param_1[0x84] + 0xc))) {
    FUN_0045c5f0(param_1,2);
    return true;
  }
  bVar2 = PropertiesViewWindows::vf7(param_1,param_2);
  return bVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d86c  FUN_0045d86c   (202 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045d86c(int param_1)

{
  int iVar1;
  tagRECT *ptVar2;
  LONG *pLVar3;
  tagRECT local_24;
  LONG local_14;
  int local_10;
  int local_8;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((int *)(param_1 + 0x7bc),(undefined4 *)(iVar1 + 0x30));
  FUN_0041e9dc((int *)(param_1 + 0x7bc),(int *)(param_1 + 0x158));
  local_24.left = 0;
  local_24.top = 0;
  local_24.right = 0;
  local_24.bottom = 0;
  FUN_004a7a30(*(int *)(param_1 + 0x158),&local_24);
  ptVar2 = &local_24;
  pLVar3 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pLVar3 = ptVar2->left;
    ptVar2 = (tagRECT *)&ptVar2->top;
    pLVar3 = pLVar3 + 1;
  }
  FUN_004a7aa0(*(int *)(param_1 + 0x210),(HWND)0x0,0,0,*(int *)(*(int *)(param_1 + 0x210) + 0x28),
               local_8 - local_10,0x216);
  if (*(int *)(param_1 + 0x68c) != 0) {
    FUN_004a7aa0(**(int **)(param_1 + 0x68c),(HWND)0x0,0,0,
                 *(int *)(**(int **)(param_1 + 0x68c) + 0x28),local_8 - local_10,0x216);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d938  FUN_0045d938   (174 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045d938(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((undefined4 *)(param_1 + 0x800),(undefined4 *)(iVar1 + 0x70));
  FUN_0041e940((undefined4 *)(param_1 + 0x844),(undefined4 *)(iVar1 + 0xb0));
  uVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar3) break;
    iVar2 = *(int *)(*(int *)(uVar3 * 4 + *(int *)(param_1 + 0x6b4)) + 8);
    FUN_0042dbdc(iVar2,(undefined4 *)(param_1 + 0x800),(undefined4 *)(param_1 + 0x844),
                 *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0xb0));
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x24))();
    uVar3 = uVar3 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045d9e8  FUN_0045d9e8   (122 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045d9e8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(*(int *)(param_1 + 0xc84) + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    piVar2 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
    if (piVar2 != (int *)0x0) {
      FUN_00473488(piVar2);
    }
    uVar3 = uVar3 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045daf8  FUN_0045daf8   (157 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045daf8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4f9e24);
  for (piVar5 = *(int **)(param_1 + 0x6b4); piVar5 < *(int **)(param_1 + 0x6b8); piVar5 = piVar5 + 1
      ) {
    if (*piVar5 != 0) {
      TEAViewWindows::OutputGroup::_dtor(*piVar5,3);
    }
  }
  puVar1 = *(undefined4 **)(param_1 + 0x6b8);
  puVar2 = *(undefined4 **)(param_1 + 0x6b4);
  puVar4 = FUN_0045233c(puVar1,puVar1,puVar2);
  iVar3 = *(int *)(param_1 + 0x6b8);
  iVar6 = (int)puVar1 - (int)puVar2;
  if (iVar6 < 0) {
    iVar6 = iVar6 + 3;
  }
  *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + (iVar6 >> 2) * -4;
  FUN_0045176c(param_1 + 0x6b0,(int)puVar4,iVar3);
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045db98  FUN_0045db98   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045db98(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x68) * 4 + *(int *)(param_1 + 0x6b4));
  iVar2 = FUN_0042ba08(*(int *)(iVar1 + 8));
  FUN_00429084(*(int **)(iVar1 + 4),iVar2);
  FUN_0042bdf0(*(int **)(iVar1 + 8),'\x01');
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dbd8  FUN_0045dbd8   (111 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045dbd8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    if (param_2 != *(int *)(uVar2 * 4 + param_1[0x321])) {
      (**(code **)(*(int *)(*(int *)(uVar2 * 4 + param_1[0x321]) + 8) + 0x60))();
    }
    uVar2 = uVar2 + 1;
  }
  if (param_2 != *param_1) {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x14) + 8) + 0x60))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dc48  FUN_0045dc48   (111 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0045dc48(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    iVar2 = param_2[1];
  }
  else {
    iVar2 = *param_2;
  }
  iVar1 = 1;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if (iVar3 >> 2 <= iVar1) break;
    if ((**(int **)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)) - *(int *)(param_1 + 0x7b4) <= iVar2) &&
       (iVar2 <= **(int **)(iVar1 * 4 + *(int *)(param_1 + 0x6b4)))) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dcb8  FUN_0045dcb8   (209 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0045dcb8(int *param_1,int *param_2)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int *piVar6;
  int local_30 [4];
  tagRECT local_20;
  undefined1 local_d;
  tagPOINT local_c;
  
  local_c.x = *param_2;
  local_c.y = param_2[1];
  ClientToScreen(*(HWND *)(*param_1 + 0xc),&local_c);
  uVar4 = 0;
  while( true ) {
    iVar3 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar4) break;
    piVar1 = *(int **)(*(int *)(param_1[0x1ad] + uVar4 * 4) + 4);
    local_20.left = 0;
    local_20.top = 0;
    local_20.right = 0;
    local_20.bottom = 0;
    FUN_004a7a30(*piVar1,&local_20);
    ptVar5 = &local_20;
    piVar6 = local_30;
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *piVar6 = ptVar5->left;
      ptVar5 = (tagRECT *)&ptVar5->top;
      piVar6 = piVar6 + 1;
    }
    if ((((local_c.x < local_30[0]) || (local_30[2] <= local_c.x)) || (local_c.y < local_30[1])) ||
       (local_30[3] <= local_c.y)) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if (bVar2) {
      return piVar1;
    }
    uVar4 = uVar4 + 1;
    local_d = 0;
  }
  return (int *)0x0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dd8c  FUN_0045dd8c   (123 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_0045dd8c(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int local_28 [9];
  
  iVar3 = 0;
  piVar1 = local_28;
  do {
    *piVar1 = 0;
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  uVar2 = 0;
  while( true ) {
    iVar3 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar3 < 0) {
      iVar3 = iVar3 + 3;
    }
    if ((uint)(iVar3 >> 2) <= uVar2) break;
    local_28[*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x6b4) + uVar2 * 4) + 8) + 0xec) +
             -0x10a4] = 1;
    uVar2 = uVar2 + 1;
  }
  iVar3 = 0;
  piVar1 = local_28;
  do {
    if (*piVar1 == 0) {
      return iVar3;
    }
    iVar3 = iVar3 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar3 < 9);
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045de08  FUN_0045de08   (435 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045de08(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_18;
  uint local_14;
  uint local_10;
  uint local_c;
  HWND local_8;
  
  if (param_2 == 0x73) {
    FUN_0044faac(*param_1);
    SetFocus(*(HWND *)(param_1[0x56] + 0xc));
  }
  else if ((param_2 == 0x74) && (param_3 != 0)) {
    FUN_0044faac(param_3);
  }
  else {
    local_8 = GetTopWindow((HWND)0x0);
    local_c = 0xffffffff;
    local_10 = 0xffffffff;
    local_14 = 0xffffffff;
    local_18 = 0;
    while ((local_18 < 1000 && (local_8 != (HWND)0x0))) {
      uVar4 = 0;
      while( true ) {
        iVar3 = param_1[0x322] - param_1[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if ((uint)(iVar3 >> 2) <= uVar4) break;
        iVar3 = *(int *)(param_1[0x321] + uVar4 * 4);
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = BVar2 != 0;
        }
        uVar1 = local_c;
        if ((((bVar5) && (*(HWND *)(*(int *)(param_1[0x321] + uVar4 * 4) + 0xc) == local_8)) &&
            (local_14 = uVar4, uVar1 = uVar4, local_c != 0xffffffff)) &&
           (uVar1 = local_c, local_10 == 0xffffffff)) {
          local_10 = uVar4;
        }
        local_c = uVar1;
        uVar4 = uVar4 + 1;
      }
      local_8 = GetWindow(local_8,2);
      local_18 = local_18 + 1;
    }
    if (((param_2 == 0x75) && (local_c != 0xffffffff)) && (local_c != local_14)) {
      FUN_004a7aa0(*(int *)(param_1[0x321] + local_c * 4),
                   *(HWND *)(*(int *)(param_1[0x321] + local_14 * 4) + 0xc),0,0,0,0,0x53);
      local_c = local_10;
    }
    if (local_c != 0xffffffff) {
      BringWindowToTop(*(HWND *)(*(int *)(param_1[0x321] + local_c * 4) + 0xc));
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045dfbc  FUN_0045dfbc   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045dfbc(int *param_1,uint *param_2)

{
  char *pcVar1;
  BOOL BVar2;
  
  if (param_1[0x19] != 2) {
    SetWindowTextA(*(HWND *)(param_1[0x56] + 0xc),(LPCSTR)param_2);
    pcVar1 = strlen(param_2);
    FUN_004a76a8(param_1[0x56],0x142,0,(int)pcVar1 << 0x10);
    FUN_004cf41c((int)(param_1 + 0x1a6),param_2);
    FUN_0045269c(param_1);
    BVar2 = IsWindowEnabled(*(HWND *)(param_1[0x84] + 0xc));
    if (BVar2 != 0) {
      (**(code **)(param_1[3] + 0x4c))();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e060  FUN_0045e060   (505 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045e060(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 *param_5, int param_6)

{
  BOOL BVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  char *local_8c;
  undefined4 local_88;
  undefined2 local_78;
  int local_6c;
  undefined4 local_64 [12];
  undefined4 local_34 [12];
  
  __InitExceptBlockLDTC(0x4f9e74);
  BVar1 = IsWindow(*(HWND *)(**(int **)(param_1 + 0x58) + 0xc));
  if (BVar1 != 0) {
    local_8c = strlen((uint *)(param_1 + 0x888));
    uVar2 = FUN_004d40d0(param_2,0,*(uint *)(*(int *)(param_2 + 8) + -4),(byte *)(param_1 + 0x888),
                         (uint)local_8c);
    if (uVar2 != 0) {
      FUN_004dcc40((undefined4 *)(param_1 + 0x888),*(uint **)(param_2 + 8),(char *)0x3e7);
      *(undefined1 *)(param_1 + 0xc6f) = 0;
      iVar3 = FUN_004a76a8(**(int **)(param_1 + 0x58),0x40d,0,0);
      if (iVar3 != 0) {
        local_78 = 8;
        FUN_0049f374(local_34,'\0');
        local_6c = local_6c + 2;
        local_78 = 0x14;
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x40e,0,(LPARAM)local_34);
        FUN_004a76a8(**(int **)(param_1 + 0x58),0x405,0,(LPARAM)local_34);
        local_6c = local_6c + -2;
        operator_delete_array();
      }
      local_78 = 0x2c;
      puVar4 = FUN_0049f498(local_64,param_3,param_3,(uint *)(param_1 + 0x888));
      local_6c = local_6c + 2;
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x404,0,(LPARAM)puVar4);
      local_6c = local_6c + -2;
      operator_delete_array();
    }
    if (param_6 == 0) {
      local_a8 = param_3;
      local_a4 = 0x200;
      local_a0 = param_4;
      local_9c = CONCAT22(param_5[2],*param_5);
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,(LPARAM)&local_a8);
    }
    else {
      FUN_004a76a8(**(int **)(param_1 + 0x58),0x407,0,param_6);
    }
  }
  *in_FS_OFFSET = local_88;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e25c  FUN_0045e25c   (602 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_0045e25c(undefined4 *param_1,int param_2)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  bool bVar5;
  int local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  int local_38;
  HWND local_34;
  int local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  __InitExceptBlockLDTC(0x4f9ec8);
  piVar4 = (int *)0x0;
  local_30 = 1;
  if (param_2 == 0) {
    local_34 = GetTopWindow((HWND)0x0);
    local_38 = 0;
    while (((local_38 < 1000 && (local_34 != (HWND)0x0)) && (piVar4 == (int *)0x0))) {
      local_3c = 0;
      while( true ) {
        iVar3 = param_1[0x322] - param_1[0x321];
        if (iVar3 < 0) {
          iVar3 = iVar3 + 3;
        }
        if (((uint)(iVar3 >> 2) <= local_3c) || (piVar4 != (int *)0x0)) break;
        local_40 = local_3c;
        piVar4 = (int *)(param_1[0x321] + local_3c * 4);
        if (*piVar4 == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(*piVar4 + 8);
        }
        piVar4 = FUN_004dd744(*piVar4,iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
        if (piVar4 != (int *)0x0) {
          iVar3 = piVar4[1];
          if (*(int *)(iVar3 + 0xc) == 0) {
            bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
          }
          else {
            BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
            bVar5 = BVar2 != 0;
          }
          if ((!bVar5) || (*(HWND *)(piVar4[1] + 0xc) != local_34)) {
            piVar4 = (int *)0x0;
          }
        }
        local_3c = local_3c + 1;
      }
      local_34 = GetWindow(local_34,2);
      local_38 = local_38 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    local_44 = 0;
    while( true ) {
      iVar3 = param_1[0x322] - param_1[0x321];
      if (iVar3 < 0) {
        iVar3 = iVar3 + 3;
      }
      if ((uint)(iVar3 >> 2) <= local_44) break;
      local_48 = local_44;
      piVar4 = (int *)(param_1[0x321] + local_44 * 4);
      if (*piVar4 == 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(*piVar4 + 8);
      }
      piVar4 = FUN_004dd744(*piVar4,iVar3,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
      if (piVar4 != (int *)0x0) {
        iVar3 = piVar4[1];
        if (*(int *)(iVar3 + 0xc) == 0) {
          bVar5 = (*(byte *)(iVar3 + 0x1b) & 0x10) != 0;
        }
        else {
          BVar2 = IsWindowVisible(*(HWND *)(iVar3 + 0xc));
          bVar5 = BVar2 != 0;
        }
        if (!bVar5) break;
        piVar4 = (int *)0x0;
        local_30 = local_30 + 1;
      }
      local_44 = local_44 + 1;
    }
  }
  if (piVar4 == (int *)0x0) {
    iVar3 = FUN_00466b28(param_1[0xe]);
    local_8 = (int *)operator_new();
    if (local_8 != (int *)0x0) {
      local_1c = 0x14;
      FUN_004723b0(local_8,0,*param_1,param_1[0xe],local_30,iVar3);
      local_1c = 8;
    }
    piVar4 = local_8;
    (**(code **)(*(int *)(local_8[1] + 8) + 0x10))();
    if (piVar4 == (int *)0x0) {
      local_4c = 0;
    }
    else {
      local_4c = piVar4[1];
    }
    piVar1 = (int *)param_1[0x322];
    if (piVar1 == (int *)param_1[0x326]) {
      FUN_00452ef8((int)(param_1 + 800),piVar1,&local_4c);
    }
    else {
      *piVar1 = local_4c;
      param_1[0x322] = param_1[0x322] + 4;
    }
  }
  *in_FS_OFFSET = local_2c;
  return piVar4;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e4dc  FUN_0045e4dc   (190 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0045e4dc(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 < 1) {
    iVar2 = 0x26;
  }
  else {
    iVar2 = 0x28;
  }
  iVar3 = param_1[0x1b4];
  while( true ) {
    if (iVar3 < 0) {
      return 0;
    }
    iVar1 = param_1[0x1ae] - param_1[0x1ad];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 <= iVar3) break;
    iVar2 = FUN_0042ec10(*(int **)(*(int *)(iVar3 * 4 + param_1[0x1ad]) + 8),iVar2,param_4);
    if (iVar2 != 0) {
      if (param_4 == 0) {
        if (iVar3 != param_1[0x1b4]) {
          param_1[0x1b4] = iVar3;
          (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
        }
        FUN_00457354(param_1,param_2,0,0x1d42);
      }
      return 1;
    }
    if (param_3 < 1) {
      iVar2 = 0x23;
    }
    else {
      iVar2 = 0x24;
    }
    iVar3 = iVar3 + param_3;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e59c  FUN_0045e59c   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x0045e5f6) */
int __cdecl FUN_0045e59c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f9ef8);
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  *(undefined4 *)(param_1 + 0xc) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00513d64;
  FUN_00477ca0((undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x60) = 0x7fffffff;
  *(undefined4 *)(param_1 + 100) = 0x7fffffff;
  *(undefined4 *)(param_1 + 0x68) = 0x7fffffff;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e640  TEAViewWindows::OutputGroup::~OutputGroup   (308 bytes)   [rtti:dtor destructor]
//   written in code as TEAViewWindows::OutputGroup::_dtor
void __cdecl TEAViewWindows::OutputGroup::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  
  __InitExceptBlockLDTC(0x4f9f48);
  if (param_1 == 0) goto LAB_0045e763;
  if (*(int *)(param_1 + 8) != 0) {
    (*(code *)**(undefined4 **)(*(int *)(param_1 + 8) + 0xc))();
  }
  if (*(int *)(param_1 + 4) != 0) {
    (*(code *)**(undefined4 **)(*(int *)(param_1 + 4) + 0xc))();
  }
  MatchEngineSet::_dtor(param_1 + 0x28,2);
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0045e74d;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0045e74d:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0045e763:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e7c8  FUN_0045e7c8   (55 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045e7c8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00452bdc(param_2,param_3,(int *)(param_1 + 0x60),(int *)(param_1 + 100),
               (int *)(param_1 + 0x68));
  if (*(int *)(param_1 + 0x68) < 1) {
    uVar1 = *(undefined4 *)(param_1 + 100);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e800  FUN_0045e800   (14 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045e800(int param_1)

{
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + *(int *)(param_1 + 0x68);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e810  FUN_0045e810   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0045e810(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xc) < *(int *)(param_1 + 0x60)) ||
     (*(int *)(param_1 + 100) < *(int *)(param_1 + 0xc))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e830  FUN_0045e830   (24 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0045e830(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = *(undefined4 *)(param_1 + 0x60);
  *param_3 = *(undefined4 *)(param_1 + 100);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045e8c4  OWL::TFileOpenDialog::~TFileOpenDialog   (175 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TFileOpenDialog::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TFileOpenDialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f9f98);
  if (param_1 != (int *)0x0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x5c;
    OWL::TCommonDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x5c;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x5c;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x22,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x20,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
