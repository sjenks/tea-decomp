// TEA.exe — runtime / library code "code_0x004ac000"
// 50 functions, 0x004ac190..0x004afdf1. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ac190  EvRegisteredMsg_4ac190_4ac190   (55 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TButton::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_4ac190_4ac190(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_004ac1c8(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x14) = iVar2 != 0;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac1c8  FUN_004ac1c8   (87 bytes)   [unnamed]
void __cdecl FUN_004ac1c8(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = OWL::TControl::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac254  FUN_004ac254   (81 bytes)   [unnamed]
void __cdecl FUN_004ac254(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TControl::Streamer::Streamer(streamer,piVar1);
  local_8 = 2;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TControl::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac2a8  FUN_004ac2a8   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ac2a8(int *param_1)

{
  undefined4 *streamer;
  int *button;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c1bc);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      button = (int *)operator_new();
      if (button == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TButton::TButton_4ac074(button,0);
        param_1 = (int *)button[2];
      }
    }
    OWL::TButton::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac408  EvGetDlgCode_4ac408   (18 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
void __cdecl EvGetDlgCode_4ac408(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac750  FUN_004ac750   (54 bytes)   [unnamed]
void __cdecl FUN_004ac750(int *param_1,WPARAM wParam)

{
  FUN_004a76a8(*param_1,0xf1,wParam,0);
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac788  BNClicked_4ac788   (42 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl BNClicked_4ac788(int *param_1)

{
  if (*(int *)((int)param_1 + 0x16) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x16) + 0xc) + 0x24))();
  }
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac7b4  FUN_004ac7b4   (50 bytes)   [unnamed]
void __cdecl FUN_004ac7b4(int *param_1)

{
  FUN_0049b9d4(*param_1);
  *(undefined4 *)(param_1[1] + 1) = 0;
  param_1[6] = -1;
  std::string::assign_cstr((int)(param_1 + 2),(uint *)&DAT_0050c388);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac7e8  FUN_004ac7e8   (499 bytes)   [unnamed]
void __cdecl FUN_004ac7e8(int *param_1,uint *s,char param_3)

{
  uint len;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  undefined4 *local_c;
  
  __InitExceptBlockLDTC(0x50c3ac);
  std::string::string_from_cstr((int)str,s);
  iVar3 = *param_1;
  if (*(uint *)(iVar3 + 5) <= *(uint *)(iVar3 + 1)) {
    FUN_0049baac(iVar3,*(int *)(iVar3 + 1) + 1);
  }
  piVar4 = (int *)(iVar3 + 0xd);
  if (*piVar4 == 0) {
    piVar2 = (int *)FUN_0048c8fc(iVar3 + 0x11,*(uint *)(iVar3 + 0x22));
  }
  else {
    piVar2 = (int *)*piVar4;
    *piVar4 = *piVar2;
  }
  if (piVar2 != (int *)0x0) {
    piVar2[2] = 0;
    if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
      len = local_c[-1];
      piVar4 = std::string::__getRep(piVar2,len,len);
      piVar2[2] = (int)(piVar4 + 3);
      memcpy((undefined4 *)piVar2[2],local_c,len);
    }
    else {
      piVar2[2] = (int)local_c;
      piVar4 = (int *)(piVar2[2] + -0xc);
      if (piVar4 != &g_nullStringRep) {
        *piVar4 = *piVar4 + 1;
      }
    }
  }
  *(int **)(*(int *)(iVar3 + 9) + *(int *)(iVar3 + 1) * 4) = piVar2;
  *(int *)(iVar3 + 1) = *(int *)(iVar3 + 1) + 1;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004ac9af;
    }
    operator_delete();
    local_c = (undefined4 *)0x0;
  }
LAB_004ac9af:
  if (param_3 != '\0') {
    FUN_004aca24(param_1,*(int *)(*param_1 + 1) + -1);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ac9dc  FUN_004ac9dc   (70 bytes)   [unnamed]
void __cdecl FUN_004ac9dc(int *param_1,uint *s,undefined4 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  if (*(uint *)(iVar1 + 5) <= *(uint *)(iVar1 + 1)) {
    FUN_0048ace4(iVar1,*(int *)(iVar1 + 1) + 1);
  }
  iVar2 = *(int *)(iVar1 + 1);
  *(int *)(iVar1 + 1) = *(int *)(iVar1 + 1) + 1;
  *(undefined4 *)(*(int *)(iVar1 + 9) + iVar2 * 4) = param_3;
  FUN_004ac7e8(param_1,s,param_4);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aca24  FUN_004aca24   (46 bytes)   [unnamed]
void __cdecl FUN_004aca24(int *param_1,int param_2)

{
  if ((param_2 != -1) && (param_1[6] = param_2, param_2 < *(int *)(*param_1 + 1))) {
    std::string::operator_assign((int)(param_1 + 2),*(int *)(*(int *)(*param_1 + 9) + param_2 * 4));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aca54  FUN_004aca54   (322 bytes)   [unnamed]
void __cdecl FUN_004aca54(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *strRep;
  undefined4 *sehChainHead;
  char cVar6;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x50c3f4);
  iVar2 = *(int *)(*param_1 + 1);
  param_1[6] = -1;
  iVar4 = 0;
  if (0 < iVar2) {
    do {
      iVar1 = FUN_004dc978(*(char **)(*(int *)(*(int *)(*param_1 + 9) + iVar4 * 4) + 8),
                           (char *)param_2);
      if (iVar1 == 0) {
        param_1[6] = iVar4;
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  iVar2 = std::string::string_from_cstr((int)str,param_2);
  uVar3 = std::string::compare((int)(param_1 + 2),0,*(uint *)(param_1[4] + -4),*(byte **)(iVar2 + 8),
                       *(uint *)(*(int *)(iVar2 + 8) + -4));
  cVar6 = uVar3 != 0;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar2 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar2 = *strRep + 1;
      }
      if (iVar2 != 0) goto LAB_004acb74;
    }
    operator_delete();
    str2 = 0;
  }
LAB_004acb74:
  if (cVar6 != '\0') {
    std::string::assign_cstr((int)(param_1 + 2),param_2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ace70  FUN_004ace70   (50 bytes)   [unnamed]
void __cdecl FUN_004ace70(int *param_1,int param_2)

{
  param_1[5] = param_2;
  if ((*(int *)(*param_1 + 0xc) != 0) && (param_1[5] != 0)) {
    FUN_004a76a8(*param_1,0x141,param_1[5] - 1,0);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004acea4  FUN_004acea4   (48 bytes)   [unnamed]
uint __cdecl FUN_004acea4(int *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004a76a8(*param_1,0x140,0,0);
  *param_2 = uVar1 & 0xffff;
  *param_3 = uVar1 >> 0x10;
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004aced4  FUN_004aced4   (24 bytes)   [unnamed]
void __cdecl FUN_004aced4(undefined4 param_1,int param_2)

{
  (**(code **)(*(int *)(param_2 + 0xc) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad25c  InitRichEditStreamer_4ad25c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4ad25c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c6f0);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004ad574;
  puVar1 = FUN_004dd5cc(1,0,0x4071ec);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b87c,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad2b2  FUN_004ad2b2   (48 bytes)   [unnamed]
void __stdcall FUN_004ad2b2(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c704);
  OWL::TStreamableClass::_dtor(0x51b87c,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad468  EvRegisteredMsg_4ad468_4ad468   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TComboBox::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_4ad468_4ad468(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ad498(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad498  FUN_004ad498   (87 bytes)   [unnamed]
void __cdecl FUN_004ad498(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  piVar1 = OWL::TListBox::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad520  FUN_004ad520   (81 bytes)   [unnamed]
void __cdecl FUN_004ad520(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 8);
  }
  OWL::TListBox::Streamer::Streamer(streamer,piVar1);
  local_8 = 1;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TListBox::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ad574  FUN_004ad574   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004ad574(int *param_1)

{
  undefined4 *streamer;
  int *comboBox;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c758);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      comboBox = (int *)operator_new();
      if (comboBox == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TComboBox::TComboBox_4ad34c(comboBox,0);
        param_1 = (int *)comboBox[2];
      }
    }
    OWL::TComboBox::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ada9c  EvPaint_4ada9c   (44 bytes)   [owl:response-table message-handler]
//   WM_PAINT
void __cdecl EvPaint_4ada9c(int *param_1)

{
  if ((*(byte *)(*param_1 + 0x74) & 0x80) != 0) {
    FUN_004a5774(*param_1);
    return;
  }
  OWL::TWindow::EvPaint(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adac8  EvCompareitem_4adac8   (21 bytes)   [owl:response-table message-handler]
//   WM_COMPAREITEM
void __cdecl EvCompareitem_4adac8(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb24  EvDeleteitem_4adb24   (21 bytes)   [owl:response-table message-handler]
//   WM_DELETEITEM
void __cdecl EvDeleteitem_4adb24(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 8))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb44  EvMeasureItem_4adb44   (21 bytes)   [owl:response-table message-handler]
//   WM_MEASUREITEM
void __cdecl EvMeasureItem_4adb44(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0xc))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adb84  EvDrawItem_4adb84   (21 bytes)   [owl:response-table message-handler]
//   WM_DRAWITEM
void __cdecl EvDrawItem_4adb84(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x10))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adc5c  InitRichEditStreamer_4adc5c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4adc5c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c984);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004adf64;
  puVar1 = FUN_004dd5cc(1,0,0x402be8);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b88c,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adcb2  FUN_004adcb2   (48 bytes)   [unnamed]
void __stdcall FUN_004adcb2(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c998);
  OWL::TStreamableClass::_dtor(0x51b88c,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ade80  FUN_004ade80   (87 bytes)   [unnamed]
void __cdecl FUN_004ade80(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  local_8 = 0;
  if (param_2[3] != 0) {
    FUN_00499da0(param_2,&local_8,4);
  }
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  piVar1 = OWL::TWindow::Streamer::Streamer(streamer,piVar1);
  (**(code **)(*piVar1 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adf10  FUN_004adf10   (81 bytes)   [unnamed]
void __cdecl FUN_004adf10(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 streamer [3];
  undefined4 local_8;
  
  if (param_1 == 0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = *(int **)(param_1 + 4);
  }
  OWL::TWindow::Streamer::Streamer(streamer,piVar1);
  local_8 = 3;
  FUN_0049a294(param_2,&local_8,4);
  OWL::TWindow::Streamer::vf2((int)streamer,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004adf64  FUN_004adf64   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004adf64(int *param_1)

{
  undefined4 *streamer;
  int *control;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50c9ec);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      control = (int *)operator_new();
      if (control == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TControl::TControl_4add4c(control,0);
        param_1 = (int *)control[2];
      }
    }
    OWL::TControl::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae07c  FUN_004ae07c   (141 bytes)   [unnamed]
int * __cdecl FUN_004ae07c(undefined4 param_1)

{
  int *controlBar;
  uint *puVar2;
  undefined4 *sehChainHead;
  int iVar3;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50ca54);
  controlBar = (int *)operator_new();
  if (controlBar != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_00490fa8(puVar2,10,'\0',0);
    }
    OWL::TControlBar::TControlBar(controlBar,0,param_1,0,puVar2,iVar3);
  }
  *sehChainHead = sehPrevFrame;
  return controlBar;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae109  FUN_004ae109   (86 bytes)   [unnamed]
undefined4 __cdecl FUN_004ae109(int param_1,int *param_2)

{
  undefined4 in_EAX;
  BOOL ok;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == *param_2) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1]) {
      if (*(int *)(param_1 + 0xc) == 0) {
        bVar3 = (*(byte *)(param_1 + 0x1b) & 0x10) != 0;
      }
      else {
        ok = IsWindowVisible(*(HWND *)(param_1 + 0xc));
        bVar3 = ok != 0;
      }
      if (bVar3) {
        param_2[2] = param_1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae15f  FUN_004ae15f   (41 bytes)   [unnamed]
undefined4 __cdecl FUN_004ae15f(int param_1,int *param_2)

{
  if ((param_1 != *param_2) && ((*(uint *)(param_1 + 0x18) & 0xf00) >> 8 == param_2[1])) {
    return CONCAT31((int3)((uint)param_2 >> 8),1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae188  FUN_004ae188   (42 bytes)   [unnamed]
undefined4 __cdecl FUN_004ae188(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = FUN_004a768c(param_1);
    if (iVar1 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae20c  FUN_004ae20c   (58 bytes)   [unnamed]
undefined4 __cdecl FUN_004ae20c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) != 0) {
    (**(code **)(*(int *)(param_2 + 0x18) + 4))();
  }
  uVar1 = (**(code **)(*(int *)(param_1 + 0x35) + 4))();
  return CONCAT31((int3)((uint)uVar1 >> 8),1);
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae248  FUN_004ae248   (1174 bytes)   [unnamed]
int * __cdecl FUN_004ae248(int *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5, undefined1 param_6,int param_7)

{
  undefined4 *sehChainHead;
  undefined4 local_88 [4];
  code *unused;
  undefined4 local_74 [4];
  code *unused2;
  undefined4 local_60;
  byte local_5c;
  byte local_5b;
  byte local_5a;
  undefined4 unused3;
  undefined4 unused4;
  byte local_51;
  byte local_50;
  byte local_4f;
  undefined4 unused5;
  undefined4 unused6;
  byte local_46;
  byte local_45;
  byte local_44;
  undefined4 unused7;
  undefined4 unused8;
  byte local_3b;
  byte local_3a;
  byte local_39;
  undefined4 unused9;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int *window;
  undefined4 *local_c;
  undefined4 *local_8;
  
  __InitExceptBlockLDTC(0x50cb24);
  ehContext = 8;
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0xe1;
    *(int *)((int)param_1 + 0xe1) = (int)param_1 + 0x57;
    *(int *)((int)param_1 + 0x57) = (int)param_1 + 0x4b;
    *(int *)((int)param_1 + 0x5b) = (int)param_1 + 0x4f;
    *(int *)((int)param_1 + 0xe5) = (int)param_1 + 0x4b;
    *(int *)((int)param_1 + 0xe9) = (int)param_1 + 0x4f;
    param_1[1] = (int)param_1 + 0x57;
    param_1[2] = (int)param_1 + 0x4b;
    param_1[3] = (int)param_1 + 0x4f;
    *(undefined4 *)((int)param_1 + 0x47) = 0;
    *(undefined4 *)((int)param_1 + 0x53) = 0;
    *(undefined4 *)((int)param_1 + 0xdd) = 0;
    *(undefined ***)((int)param_1 + 0x4b) = &OWL::TEventHandler::vftable;
    *(undefined ***)((int)param_1 + 0x4f) = &OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc((int *)((int)param_1 + 0x57),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    OWL::TFrameWindow::TFrameWindow_4bda48((int *)((int)param_1 + 0xe1),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x12;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x12;
  OWL::TLayoutWindow::TLayoutWindow(param_1 + 1,1,param_3,param_4,param_7);
  ehDtorCount = ehDtorCount + 1;
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x12;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x12;
  *(undefined ***)((int)param_1 + 0x35) = &OWL::TDecoratedFrame::vftable;
  param_1[4] = (int)&PTR_LAB_0050cc70;
  *(undefined ***)param_1[2] = &PTR_LAB_0050cc88;
  *(undefined ***)param_1[3] = &PTR_LAB_0050cc94;
  *(undefined ***)(param_1[1] + 8) = &OWL::TDecoratedFrame::vftable_TWindow;
  *(undefined ***)(*param_1 + 0xc) = &OWL::TDecoratedFrame::vftable_TFrameWindow;
  FUN_004a5098(param_1[1],param_3,param_4,param_7);
  FUN_004bdb60((int *)*param_1,param_5,'\0');
  FUN_00495f90(&local_60);
  *(undefined1 *)((int)param_1 + 0x39) = param_6;
  *(undefined4 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  local_8 = (undefined4 *)operator_new();
  if (local_8 != (undefined4 *)0x0) {
    local_8[3] = 0;
    *local_8 = 0;
    ehContext = 0x14;
  }
  *(undefined4 **)((int)param_1 + 0x3f) = local_8;
  local_c = (undefined4 *)operator_new();
  if (local_c != (undefined4 *)0x0) {
    local_c[3] = 0;
    *local_c = 0;
    ehContext = 0x2c;
  }
  *(undefined4 **)((int)param_1 + 0x43) = local_c;
  FUN_0048fb40(local_74,0,(undefined4 *)FUN_004ae07c,0);
  unused2 = FUN_004ae754;
  FUN_004ae8fc((int)param_1,local_74);
  FUN_0048fb40(local_88,0,(undefined4 *)FUN_004ae20c,0);
  unused = FUN_004ae764;
  FUN_004ae91c((int)param_1,local_88);
  if (*(int *)(*param_1 + 0x15) == 0) {
    window = (int *)operator_new();
    if (window != (int *)0x0) {
      ehContext = 0x50;
      OWL::TWindow::TWindow_4a4de0(window,0,param_1[1],(uint *)&DAT_0050ca80,0);
      ehContext = 0x44;
    }
    *(int **)(*param_1 + 0x15) = window;
  }
  if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
    local_5b = local_5b & 0xf0 | 3;
    local_50 = local_50 & 0xf0 | 3;
    local_45 = local_45 & 0xf0 | 2;
    local_3a = local_3a & 0xf0 | 2;
  }
  else {
    local_5b = local_5b & 0xf0 | 4;
    local_50 = local_50 & 0xf0 | 4;
    local_45 = local_45 & 0xf0 | 4;
    local_3a = local_3a & 0xf0 | 4;
  }
  local_39 = local_39 & 0xf0 | 3;
  local_3b = local_3b & 0xf0 | 3;
  local_44 = local_44 & 0xf0 | 2;
  local_46 = local_46 & 0xf0 | 2;
  local_4f = local_4f & 0xf0 | 1;
  local_51 = local_51 & 0xf0 | 1;
  local_5a = local_5a & 0xf0;
  local_5c = local_5c & 0xf0;
  unused9 = 0;
  unused8 = 0;
  unused7 = 0;
  unused6 = 0;
  unused5 = 0;
  unused4 = 0;
  unused3 = 0;
  local_60 = 0;
  FUN_00494fc8((int)(param_1 + 1),*(int *)(*param_1 + 0x15),&local_60);
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae754  FUN_004ae754   (14 bytes)   [unnamed]
void __cdecl FUN_004ae754(undefined4 *param_1)

{
  (*(code *)*param_1)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae764  FUN_004ae764   (22 bytes)   [unnamed]
void __cdecl FUN_004ae764(undefined4 *param_1)

{
  (*(code *)*param_1)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae8fc  FUN_004ae8fc   (29 bytes)   [unnamed]
void __cdecl FUN_004ae8fc(int param_1,undefined4 *param_2)

{
  int i;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x3f);
  for (i = 5; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004ae91c  FUN_004ae91c   (29 bytes)   [unnamed]
void __cdecl FUN_004ae91c(int param_1,undefined4 *param_2)

{
  int i;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x43);
  for (i = 5; i != 0; i = i + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004af210  FUN_004af210   (387 bytes)   [unnamed]
void __cdecl FUN_004af210(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 unused;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 unused2;
  undefined4 unused3;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 unused4;
  byte local_1b;
  byte local_1a;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00495f90(&local_40);
  FUN_00495098(param_1 + 4,param_3,&local_40);
  local_8 = local_35;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_35 = param_2;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = bVar1 | local_30 & 0xf0;
  local_2f = local_2f & 0xf0 | 3;
  unused2 = 0;
  FUN_00494fc8(param_1 + 4,param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 1;
  }
  else {
    local_c = 3;
  }
  if (bVar2) {
    local_10 = 3;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 1;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  unused2 = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  unused = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  unused3 = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  unused4 = 0;
  FUN_00494fc8(param_1 + 4,param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004af394  FUN_004af394   (451 bytes)   [unnamed]
void __cdecl FUN_004af394(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  undefined4 local_40;
  byte local_3c;
  byte local_3b;
  byte local_3a;
  undefined4 unused;
  int local_35;
  byte local_31;
  byte local_30;
  byte local_2f;
  undefined4 unused2;
  undefined4 unused3;
  byte local_26;
  byte local_25;
  byte local_24;
  undefined4 unused4;
  int local_1f;
  byte local_1b;
  byte local_1a;
  byte local_19;
  undefined4 unused5;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00495f90(&local_40);
  FUN_00495098((int)(param_1 + 1),param_3,&local_40);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_1f;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_1f = param_2;
    local_1b = local_1b & 0xf0 | 3;
    local_1a = bVar1 | local_1a & 0xf0;
    local_19 = local_19 & 0xf0 | 1;
    unused5 = 0;
  }
  else {
    local_8 = local_35;
    local_35 = param_2;
    local_31 = local_31 & 0xf0 | 3;
    local_30 = local_30 & 0xf0 | 4;
    local_2f = local_2f & 0xf0 | 1;
    unused2 = 0;
  }
  FUN_00494fc8((int)(param_1 + 1),param_3,&local_40);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) == 0;
  if (local_8 == 0) {
    local_c = 3;
  }
  else {
    local_c = 1;
  }
  if (bVar2) {
    local_10 = 2;
  }
  else {
    local_10 = 4;
  }
  local_35 = local_8;
  local_31 = local_31 & 0xf0 | 3;
  local_30 = (byte)local_10 | local_30 & 0xf0;
  local_2f = (byte)local_c | local_2f & 0xf0;
  unused2 = 0;
  local_1b = local_1b & 0xf0 | 6;
  local_1a = local_1a & 0xf0;
  if (bVar2) {
    local_14 = 3;
  }
  else {
    local_14 = 4;
  }
  local_40 = 0;
  local_3c = local_3c & 0xf0;
  local_3b = (byte)local_14 | local_3b & 0xf0;
  local_3a = local_3a & 0xf0;
  unused = 0;
  if (bVar2) {
    bVar1 = 2;
  }
  else {
    bVar1 = 4;
  }
  unused3 = 0;
  local_26 = local_26 & 0xf0 | 2;
  local_25 = bVar1 | local_25 & 0xf0;
  local_24 = local_24 & 0xf0 | 2;
  unused4 = 0;
  FUN_00494fc8((int)(param_1 + 1),param_2,&local_40);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004af558  FUN_004af558   (572 bytes)   [unnamed]
void __cdecl FUN_004af558(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 unused;
  undefined4 unused2;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 unused3;
  byte local_22;
  byte local_21;
  undefined4 unused4;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 unused5;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00495f90(&local_3c);
  FUN_00495098((int)(param_1 + 1),param_3,&local_3c);
  local_8 = local_3c;
  if ((*(byte *)(param_3 + 0x1a) & 0x80) == 0) {
    bVar1 = 3;
  }
  else {
    bVar1 = 4;
  }
  local_3c = param_2;
  local_38 = local_38 & 0xf0;
  local_37 = bVar1 | local_37 & 0xf0;
  local_36 = local_36 & 0xf0 | 2;
  unused = 0;
  FUN_00494fc8((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 0;
  }
  else {
    local_c = 2;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 3;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  unused = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    unused4 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  unused5 = 0;
  unused3 = 0;
  FUN_00494fc8((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004af794  FUN_004af794   (638 bytes)   [unnamed]
void __cdecl FUN_004af794(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  int local_3c;
  byte local_38;
  byte local_37;
  byte local_36;
  undefined4 unused;
  undefined4 unused2;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  undefined4 unused3;
  int local_26;
  byte local_22;
  byte local_21;
  byte local_20;
  undefined4 unused4;
  undefined4 unused5;
  byte local_17;
  byte local_16;
  byte local_15;
  undefined4 unused6;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  FUN_00495f90(&local_3c);
  FUN_00495098((int)(param_1 + 1),param_3,&local_3c);
  if (*(int *)(*param_1 + 0x15) == param_3) {
    local_8 = local_26;
    if ((*(byte *)(*(int *)(*param_1 + 0x15) + 0x1a) & 0x80) == 0) {
      bVar1 = 2;
    }
    else {
      bVar1 = 4;
    }
    local_26 = param_2;
    local_22 = local_22 & 0xf0 | 2;
    local_21 = bVar1 | local_21 & 0xf0;
    local_20 = local_20 & 0xf0;
    unused4 = 0;
  }
  else {
    local_8 = local_3c;
    local_3c = param_2;
    local_38 = local_38 & 0xf0 | 2;
    local_37 = local_37 & 0xf0 | 4;
    local_36 = local_36 & 0xf0;
    unused = 0;
  }
  FUN_00494fc8((int)(param_1 + 1),param_3,&local_3c);
  bVar2 = (*(byte *)(param_2 + 0x1a) & 0x80) != 0;
  if (local_8 == 0) {
    local_c = 2;
  }
  else {
    local_c = 0;
  }
  if (bVar2) {
    local_10 = 4;
  }
  else {
    local_10 = 2;
  }
  local_3c = local_8;
  local_38 = local_38 & 0xf0 | 2;
  local_37 = (byte)local_10 | local_37 & 0xf0;
  local_36 = (byte)local_c | local_36 & 0xf0;
  unused = 0;
  local_22 = local_22 & 0xf0 | 5;
  local_21 = local_21 & 0xf0;
  if (bVar2 == ((*(uint *)(*(int *)(*param_1 + 0x15) + 0x18) & 0x800000) != 0)) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 4;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 4;
    local_15 = local_15 & 0xf0 | 3;
  }
  else if (bVar2) {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 2;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 3;
    local_15 = local_15 & 0xf0 | 3;
  }
  else {
    unused2 = *(undefined4 *)(*param_1 + 0x15);
    local_2d = local_2d & 0xf0 | 1;
    local_2c = local_2c & 0xf0 | 3;
    local_2b = local_2b & 0xf0 | 1;
    unused5 = *(undefined4 *)(*param_1 + 0x15);
    local_17 = local_17 & 0xf0 | 3;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 3;
  }
  unused6 = 0;
  unused3 = 0;
  FUN_00494fc8((int)(param_1 + 1),param_2,&local_3c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004afd49  Child4914547_Notify4914568_4afd49   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4914547, code 4914568)
void __cdecl Child4914547_Notify4914568_4afd49(int param_1)

{
  OWL::TDecoratedFrame::CleanupWindow((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004afd5e  FUN_004afd5e   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_004afd5e(int param_1)

{
  OWL::TDecoratedFrame::SetupWindow((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004afd9d  FUN_004afd9d   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_004afd9d(int param_1,LPMSG lParam)

{
  OWL::TDecoratedFrame::PreProcessMsg((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1),lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004afddc  Child4977508_Notify4972756_4afddc   (21 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_CHILD_NOTIFY(id 4977508, code 4972756)
void __cdecl Child4977508_Notify4972756_4afddc(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf5((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004afdf1  FUN_004afdf1   (21 bytes)   [unnamed; function defined from response-dispatcher]
void __cdecl FUN_004afdf1(int param_1)

{
  OWL::TDecoratedFrame::TFrameWindow_vf4((int *)(param_1 + *(int *)(param_1 + -4) + -0xe1));
  return;
}

} // namespace tea
