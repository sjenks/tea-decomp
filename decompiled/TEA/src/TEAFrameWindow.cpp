// TEA.exe — application module "TEAFrameWindow"
// 31 functions, 0x00473f30..0x00474e1c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00473f30  TEAFrameWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TEAFrameWindow::vf14 [rtti:vtable]
undefined4 __cdecl TEAFrameWindow::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[2],(int *)&TEAFrameWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDecoratedFrame::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473f78  FUN_00473f78   (496 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00473f78(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ff868);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0xea;
    *(int **)((int)param_1 + 0xea) = param_1 + 0x18;
    param_1[0x18] = (int)(param_1 + 0x15);
    param_1[0x19] = (int)(param_1 + 0x16);
    *(int **)((int)param_1 + 0xee) = param_1 + 0x15;
    *(int **)((int)param_1 + 0xf2) = param_1 + 0x16;
    param_1[1] = (int)(param_1 + 0x18);
    param_1[2] = (int)(param_1 + 0x15);
    param_1[3] = (int)(param_1 + 0x16);
    param_1[0x14] = 0;
    param_1[0x17] = 0;
    *(undefined4 *)((int)param_1 + 0xe6) = 0;
    param_1[0x15] = (int)&OWL::TEventHandler::vftable;
    param_1[0x16] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x18,1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
    FUN_004bda48((int *)((int)param_1 + 0xea),1);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
  }
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -9;
  if (param_4 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_4;
  }
  FUN_004ae248(param_1,1,0,(uint *)&DAT_004ff3d1 /* "TEA" */,iVar1,1,0);
  *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 9;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 9;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 9;
  *(undefined ***)((int)param_1 + 0x35) = &TEAFrameWindow::vftable;
  param_1[4] = (int)&PTR_LAB_004ffd28;
  *(undefined ***)param_1[2] = &PTR_LAB_004ffd40;
  *(undefined ***)param_1[3] = &PTR_LAB_004ffd4c;
  *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004ffd58;
  *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004ffde8;
  param_1[0x12] = (int)param_4;
  param_1[0x13] = param_3;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474188  TEAFrameWindow::~TEAFrameWindow   (403 bytes)   [rtti:dtor destructor]
//   written in code as TEAFrameWindow::_dtor
void __cdecl TEAFrameWindow::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ff88c);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 0x35) = &TEAFrameWindow::vftable;
    param_1[4] = (int)&PTR_LAB_004ffd28;
    *(undefined ***)param_1[2] = &PTR_LAB_004ffd40;
    *(undefined ***)param_1[3] = &PTR_LAB_004ffd4c;
    *(undefined ***)(param_1[1] + 8) = &PTR_LAB_004ffd58;
    *(undefined ***)(*param_1 + 0xc) = &PTR_LAB_004ffde8;
    if (DAT_0051ac7c != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_0051ac7c);
    }
    PostQuitMessage(0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -9;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -9;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -9;
    OWL::TDecoratedFrame::_dtor(param_1,0);
    *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 9;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 9;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 9;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)param_1 + 0xea),0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0xe4;
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0xe4;
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x18,0);
      *(int *)(param_1[2] + -4) = *(int *)(param_1[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x16,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047431c  TEAFrameWindow::EvInitMenuPopup   (1093 bytes)   [owl:response-table message-handler]
//   WM_INITMENUPOPUP
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAFrameWindow::EvInitMenuPopup(undefined4 *param_1,HMENU param_2,undefined4 param_3,char param_4)

{
  bool bVar1;
  UINT UVar2;
  int *piVar3;
  int iVar4;
  UINT UVar5;
  UINT *pUVar6;
  UINT_PTR uIDNewItem;
  uint uVar7;
  undefined4 *in_FS_OFFSET;
  undefined4 *puVar8;
  uint local_c0 [9];
  undefined1 *local_9c;
  undefined4 local_98;
  LPCSTR local_94;
  LPCSTR local_90;
  undefined1 *local_8c;
  LPCSTR local_88;
  UINT local_84;
  UINT local_80;
  UINT_PTR local_7c;
  UINT local_78;
  UINT local_74;
  UINT_PTR local_70;
  undefined1 *local_6c;
  undefined4 local_68;
  int local_64;
  int local_60;
  UINT local_5c;
  undefined *local_58;
  undefined4 local_54;
  undefined2 local_44;
  int local_38;
  undefined1 local_30 [8];
  int local_28;
  undefined1 local_20 [8];
  LPCSTR local_18;
  undefined4 local_10;
  HMENU local_c;
  
  __InitExceptBlockLDTC(0x4ff8f0);
  OWL::TFrameWindow::EvInitMenuPopup((int *)*param_1,param_2,param_3,param_4);
  if ((param_2 != (HMENU)0x0) && (param_4 == '\0')) {
    local_44 = 8;
    FUN_00497aec(&local_10,param_2,0);
    local_38 = local_38 + 1;
    local_44 = 0x14;
    uVar7 = 0;
    pUVar6 = &DAT_004ff36c;
    do {
      UVar2 = GetMenuState(local_c,*pUVar6,0);
      if (UVar2 != 0xffffffff) {
        (*(UINT *)&DAT_0051ac84) = pUVar6[1];
        (*(UINT *)&DAT_0051ac88) = (*(UINT *)&DAT_0051ac84);
        break;
      }
      uVar7 = uVar7 + 1;
      pUVar6 = pUVar6 + 2;
    } while (uVar7 < 0xb);
    if ((*(UINT *)&DAT_0051ac84) == 0x3412) {
      bVar1 = FUN_00454524(param_1[0x12],0x1d42);
      uVar7 = (uint)bVar1;
      puVar8 = &local_10;
      piVar3 = (int *)FUN_00422fc4(param_1[0x13]);
      FUN_00423e14(piVar3,(int)puVar8,uVar7);
    }
    UVar2 = FUN_00497c2c((int)&local_10,0);
    if (UVar2 == 0x1d7e) {
      FUN_004663a0(param_1[0x13],(int)&local_10);
      UVar2 = GetMenuItemCount(local_c);
      local_44 = 0x14;
      do {
        UVar2 = UVar2 - 1;
        if ((int)UVar2 < 0) break;
        UVar5 = FUN_00497c2c((int)&local_10,UVar2);
      } while (UVar5 != 0x12e8);
      if (-1 < (int)UVar2) {
        local_58 = FUN_0041238c(param_1[0x13],0);
        if (*(int *)(param_1[0x12] + 100) == 2) {
          local_5c = 0x401;
        }
        else {
          local_5c = 0x400;
        }
        uIDNewItem = 0x12e8;
        do {
          local_44 = 0x2c;
          FUN_00412434((int)local_20,(int)local_58,uIDNewItem - 0x12e8);
          local_44 = 0x20;
          if (*(int *)(local_18 + -4) == 0) {
            if (local_18 == (LPCSTR)0x0) break;
            if (*(int *)(local_18 + -0xc) != -1) {
              piVar3 = (int *)(local_18 + -0xc);
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
              if (iVar4 != 0) break;
            }
            local_88 = local_18 + -0xc;
            operator_delete();
            local_8c = local_20;
            local_18 = (LPCSTR)0x0;
            break;
          }
          local_38 = local_38 + 1;
          FUN_004e0344((undefined1 *)local_c0,&DAT_004ff3d5 /* "&%d " */);
          local_44 = 0x38;
          FUN_00435880((int)local_30,local_c0,(int)local_20);
          local_38 = local_38 + 1;
          FUN_004cf384((int)local_20,(int)local_30);
          local_38 = local_38 + -1;
          if (local_28 != 0) {
            if (*(int *)(local_28 + -0xc) != -1) {
              piVar3 = (int *)(local_28 + -0xc);
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
              if (iVar4 != 0) goto LAB_0047461f;
            }
            local_60 = local_28 + -0xc;
            local_64 = local_28 + -0xc;
            operator_delete();
            local_68 = 0;
            local_6c = local_30;
            local_28 = 0;
          }
LAB_0047461f:
          local_44 = 0x20;
          UVar5 = FUN_00497c2c((int)&local_10,UVar2);
          if (uIDNewItem == UVar5) {
            local_80 = local_5c;
            local_84 = UVar2;
            local_7c = uIDNewItem;
            ModifyMenuA(local_c,UVar2,local_5c,uIDNewItem,local_18);
          }
          else {
            local_74 = local_5c;
            local_78 = UVar2;
            local_70 = uIDNewItem;
            InsertMenuA(local_c,UVar2,local_5c,uIDNewItem,local_18);
          }
          UVar2 = UVar2 + 1;
          local_38 = local_38 + -1;
          if (local_18 != (LPCSTR)0x0) {
            if (*(int *)(local_18 + -0xc) != -1) {
              piVar3 = (int *)(local_18 + -0xc);
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
              if (iVar4 != 0) goto LAB_00474726;
            }
            local_90 = local_18 + -0xc;
            local_94 = local_18 + -0xc;
            operator_delete();
            local_98 = 0;
            local_9c = local_20;
            local_18 = (LPCSTR)0x0;
          }
LAB_00474726:
          local_44 = 0x14;
          uIDNewItem = uIDNewItem + 1;
        } while (uIDNewItem < 0x12f2);
      }
    }
    local_38 = local_38 + -1;
    OWL::TMenu::_dtor(&local_10,2);
  }
  *in_FS_OFFSET = local_54;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474764  TEAFrameWindow::vf15   (10 bytes)   [rtti:vtable virtual slot 15]
char * __stdcall TEAFrameWindow::vf15(void)

{
  return "TEAMainWindow";
}

// ----------------------------------------------------------------------------------------------------
// 0x00474770  TEAFrameWindow::EvRegisteredMsg_474770   (60 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl TEAFrameWindow::EvRegisteredMsg_474770(int param_1)

{
  if (DAT_0051ac84 == 0) {
    FUN_0046495c(*(int *)(param_1 + 0x4c));
  }
  else {
    FUN_0046495c(*(int *)(param_1 + 0x4c));
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004747ac  TEAFrameWindow::vf9   (137 bytes)   [rtti:vtable virtual slot 9]
void __cdecl TEAFrameWindow::vf9(int *param_1)

{
  HINSTANCE hmod;
  DWORD dwThreadId;
  
  OWL::TDecoratedFrame::vf9(param_1);
  if (*(int *)(param_1[0x12] + 0xa0) != 0) {
    FUN_004a7aa0(param_1[1],(HWND)0xffffffff,0,0,0,0,3);
  }
  DAT_0051ac80 = 0;
  DAT_0051ac7c = (HHOOK)0x0;
  (*(undefined4 *)&DAT_0051ac8c) = *(undefined4 *)(param_1[1] + 0xc);
  DAT_0051ac78 = RegisterWindowMessageA("commdlg_help");
  if (DAT_0051ac78 != 0) {
    hmod = *(HINSTANCE *)(*(int *)(param_1[1] + 0x6c) + 0xc);
    dwThreadId = GetCurrentThreadId();
    DAT_0051ac7c = SetWindowsHookExA(-1,MsgHookProc_qqsiuil,hmod,dwThreadId);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474838  TEAFrameWindow::vf16   (101 bytes)   [rtti:vtable virtual slot 16]
bool __cdecl TEAFrameWindow::vf16(int param_1)

{
  bool bVar1;
  
  if ((*(int **)(param_1 + 0x48))[0x19] != 4) {
    FUN_0045bc3c(*(int **)(param_1 + 0x48));
  }
  bVar1 = FUN_00452cf4(*(int *)(param_1 + 0x48));
  if (bVar1) {
    IsZoomed(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
    FUN_00463bfc(*(int *)(param_1 + 0x4c));
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748a0  TEAFrameWindow::CeFilePageSetup   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(3780) — &File > Page Set&up...
void __cdecl TEAFrameWindow::CeFilePageSetup(int param_1,undefined4 *param_2)

{
  FUN_00464af0(*(int *)(param_1 + 0x4c));
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748c8  TEAFrameWindow::CeShared_4748c8   (24 bytes)   [owl:response-table message-handler]
//   one handler for 9 table entries: &File > &Close *; &File > &Demote *; &File > Pro&mote *; T&ools > &Options...; &Edit > Cu&t	Ctrl+X; &Edit > &Paste	Ctrl+V; &Window > Always On &Top; &Window > Tile &Horizontal; &Window > Tile &Vertical
//   also: TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]
void __cdecl TEAFrameWindow::CeShared_4748c8(int param_1,int *param_2)

{
  TEAViewWindows::CeShared_454478(*(int *)(param_1 + 0x48),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748e0  TEAFrameWindow::CmFileClose   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7580) — &File > &Close * | &Close
void __cdecl TEAFrameWindow::CmFileClose(int param_1)

{
  FUN_00464f24(*(int *)(param_1 + 0x4c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748f4  TEAFrameWindow::CmFileDemote   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7600) — &File > &Demote * | &Demote
void __cdecl TEAFrameWindow::CmFileDemote(int param_1)

{
  FUN_004650a8(*(int *)(param_1 + 0x4c),3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047490c  TEAFrameWindow::CmFilePromote   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7590) — &File > Pro&mote * | Pro&mote
void __cdecl TEAFrameWindow::CmFilePromote(int param_1)

{
  FUN_004650a8(*(int *)(param_1 + 0x4c),2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474924  TEAFrameWindow::CmToolsOptions   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7560) — T&ools > &Options...
void __cdecl TEAFrameWindow::CmToolsOptions(int param_1)

{
  FUN_00452dc8(*(undefined4 **)(param_1 + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474938  TEAFrameWindow::CmRange4840to4849   (240 bytes)   [owl:response-table message-handler]
//   one handler for 10 table entries: &File > ; id 4841; id 4842; id 4843; id 4844; id 4845; id 4846; id 4847; id 4848; id 4849
//   also: TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]
void __cdecl TEAFrameWindow::CmRange4840to4849(int param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4ff978);
  puVar1 = FUN_0041238c(*(int *)(param_1 + 0x4c),0);
  FUN_00412434((int)local_14,(int)puVar1,param_2 + -0x12e8);
  FUN_00464bb4(*(int *)(param_1 + 0x4c),local_c);
  FUN_0041251c((int)puVar1,local_c);
  FUN_0045269c(*(int **)(param_1 + 0x48));
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar2 = *local_c + 1;
      }
      if (iVar2 != 0) goto LAB_00474a17;
    }
    operator_delete();
  }
LAB_00474a17:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a28  TEAFrameWindow::CmFilePageSetup   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(3780) — &File > Page Set&up...
void __cdecl TEAFrameWindow::CmFilePageSetup(int param_1)

{
  FUN_004536c4(*(int *)(param_1 + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a3c  TEAFrameWindow::CmShared_474a3c   (24 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: &Edit > Cu&t	Ctrl+X; &Edit > &Paste	Ctrl+V
//   also: TEAFrameWindow::CmShared_474a3c [owl:response-table]
void __cdecl TEAFrameWindow::CmShared_474a3c(int param_1,int param_2)

{
  TEAViewWindows::CmShared_4548d0(*(int **)(param_1 + 0x48),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a54  TEAFrameWindow::CmToolsDictionaryBuilder   (25 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(4980) — T&ools > &Dictionary Builder
void __cdecl TEAFrameWindow::CmToolsDictionaryBuilder(int param_1)

{
  FUN_0046583c(*(undefined4 *)(param_1 + 0x4c),(uint *)"TSBUILD");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a70  TEAFrameWindow::CmToolsWordListMerge   (25 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5120) — T&ools > &Word List Merge
void __cdecl TEAFrameWindow::CmToolsWordListMerge(int param_1)

{
  FUN_0046583c(*(undefined4 *)(param_1 + 0x4c),(uint *)"TSMERGE");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a8c  TEAFrameWindow::CmWindowAlwaysOnTop   (78 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(14870) — &Window > Always On &Top
void __cdecl TEAFrameWindow::CmWindowAlwaysOnTop(int param_1)

{
  HWND pHVar1;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(*(int *)(param_1 + 0x48) + 0xa0) == 0);
  if (uVar2 == 0) {
    pHVar1 = (HWND)0xfffffffe;
  }
  else {
    pHVar1 = (HWND)0xffffffff;
  }
  FUN_004a7aa0(*(int *)(param_1 + 4),pHVar1,0,0,0,0,3);
  *(uint *)(*(int *)(param_1 + 0x48) + 0xa0) = uVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474adc  TEAFrameWindow::CmShared_474adc   (24 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: &Window > Tile &Horizontal; &Window > Tile &Vertical
//   also: TEAFrameWindow::CmShared_474adc [owl:response-table]
void __cdecl TEAFrameWindow::CmShared_474adc(int param_1,int param_2)

{
  TEAViewWindows::CmShared_4548d0(*(int **)(param_1 + 0x48),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474af4  TEAFrameWindow::CmHelpQuickReference   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(4820) — &Help > &Quick Reference...
void __cdecl TEAFrameWindow::CmHelpQuickReference(int param_1)

{
  FUN_0045cbd0(*(undefined4 **)(param_1 + 0x48),0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b0c  TEAFrameWindow::CmHelpStartupTips   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(13390) — &Help > &Startup Tips...
void __cdecl TEAFrameWindow::CmHelpStartupTips(int param_1)

{
  FUN_0045cd28(*(undefined4 **)(param_1 + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b20  TEAFrameWindow::CmHelpContents   (31 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(3770) — &Help > &Contents
void __stdcall TEAFrameWindow::CmHelpContents(void)

{
  FUN_00464980();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b40  TEAFrameWindow::CmHelpOnlineTutorial   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5670) — &Help > Online &Tutorial
void __stdcall TEAFrameWindow::CmHelpOnlineTutorial(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,"http://www.crosswordman.com/teatutor/index.html",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b5c  TEAFrameWindow::CmHelpEmailSupport   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(12110) — &Help > &Email Support
void __stdcall TEAFrameWindow::CmHelpEmailSupport(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,"mailto:support@crosswordman.com\?Subject=TEA Support Request",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b78  TEAFrameWindow::CmHelpOnlineHelp   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(6740) — &Help > Online &Help
void __stdcall TEAFrameWindow::CmHelpOnlineHelp(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,"http://www.crosswordman.com/tea.html",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b94  TEAFrameWindow::CmHelpOnlineOrdering   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(6750) — &Help > Online &Ordering
void __stdcall TEAFrameWindow::CmHelpOnlineOrdering(void)

{
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,"http://www.crosswordman.com/teabuy.html",(LPCSTR)0x0,
                (LPCSTR)0x0,9);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474bb0  TEAFrameWindow::CmHelpOrderForm   (337 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(6760) — &Help > Order &Form...
void __stdcall TEAFrameWindow::CmHelpOrderForm(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  __InitExceptBlockLDTC(0x4ff9d0);
  std::string::string_from_cstr((int)local_24,(uint *)"ordering.url");
  FUN_00437470((int)local_14,(int)local_24);
  if (local_1c != 0) {
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
      if (iVar1 != 0) goto LAB_00474c64;
    }
    operator_delete();
    local_1c = 0;
  }
LAB_00474c64:
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,local_c,(LPCSTR)0x0,(LPCSTR)0x0,9);
  if (local_c != (LPCSTR)0x0) {
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
      if (iVar1 != 0) goto LAB_00474cf0;
    }
    operator_delete();
  }
LAB_00474cf0:
  *in_FS_OFFSET = local_48;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474d04  TEAFrameWindow::CmHelpAboutTEA   (279 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1770) — &Help > &About TEA...
void __cdecl TEAFrameWindow::CmHelpAboutTEA(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3b0;
  int local_38c [222];
  undefined1 local_14 [8];
  int local_c;
  
  __InitExceptBlockLDTC(0x4ffa24);
  iVar3 = *(int *)(param_1 + 0x4c);
  puVar1 = (uint *)FUN_00466a90(iVar3);
  std::string::string_from_cstr((int)local_14,puVar1);
  piVar2 = FUN_00434cd0(local_38c,0,*(undefined4 *)(param_1 + 4),iVar3,(int)local_14);
  (**(code **)(piVar2[3] + 0x14))();
  GridAboutBoxViewWindows::_dtor(local_38c,2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
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
      if (iVar3 != 0) goto LAB_00474e07;
    }
    operator_delete();
  }
LAB_00474e07:
  *in_FS_OFFSET = local_3b0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474e1c  FUN_00474e1c   (182 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00474e1c(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4ffa54);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x20);
    param_1[0x1f] = 0;
    param_1[0x20] = (int)&OWL::TEventHandler::vftable;
  }
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0xd;
  FUN_004a8c70(param_1,1,(uint *)"TEA for Windows",&DAT_00512a1c,(undefined *)0x0);
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0xd;
  *(undefined ***)((int)param_1 + 0x1b) = &TEAAppWindows::vftable;
  param_1[1] = (int)&PTR_LAB_004ffc9c;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_004ffcac;
  *(undefined ***)*param_1 = &PTR_LAB_004ffccc;
  param_1[0x1c] = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
