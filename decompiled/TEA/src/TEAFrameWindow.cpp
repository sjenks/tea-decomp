// TEA.exe — application module "TEAFrameWindow"
// 30 functions, 0x00473f30..0x00474d04. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00473f30  TEAFrameWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TEAFrameWindow::Find [rtti:vtable]; TEAFrameWindow::vf14 [rtti:vtable]
undefined4 __cdecl TEAFrameWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[2],(int *)&TEAFrameWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDecoratedFrame::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473f78  TEAFrameWindow::TEAFrameWindow   (496 bytes)   [analysis]
//   constructor: the "TEA" main frame around the client view
int * __cdecl TEAFrameWindow::TEAFrameWindow(int *self,int vbasesBuilt,int parent,int *client)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ff868);
  if (vbasesBuilt == 0) {
    *self = (int)self + 0xea;
    *(int **)((int)self + 0xea) = self + 0x18;
    self[0x18] = (int)(self + 0x15);
    self[0x19] = (int)(self + 0x16);
    *(int **)((int)self + 0xee) = self + 0x15;
    *(int **)((int)self + 0xf2) = self + 0x16;
    self[1] = (int)(self + 0x18);
    self[2] = (int)(self + 0x15);
    self[3] = (int)(self + 0x16);
    self[0x14] = 0;
    self[0x17] = 0;
    *(undefined4 *)((int)self + 0xe6) = 0;
    self[0x15] = (int)&OWL::TEventHandler::vftable;
    self[0x16] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x18,1);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::TFrameWindow_4bda48((int *)((int)self + 0xea),1);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
  }
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -9;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -9;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -9;
  if (client == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *client;
  }
  FUN_004ae248(self,1,0,(uint *)&DAT_004ff3d1 /* "TEA" */,iVar1,1,0);
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 9;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 9;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 9;
  *(undefined ***)((int)self + 0x35) = &TEAFrameWindow::vftable;
  self[4] = (int)&PTR_LAB_004ffd28;
  *(undefined ***)self[2] = &PTR_LAB_004ffd40;
  *(undefined ***)self[3] = &PTR_LAB_004ffd4c;
  *(undefined ***)(self[1] + 8) = &TEAFrameWindow::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &TEAFrameWindow::vftable_TFrameWindow;
  self[0x12] = (int)client;
  self[0x13] = parent;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474188  TEAFrameWindow::~TEAFrameWindow   (403 bytes)   [rtti:dtor destructor]
//   written in code as TEAFrameWindow::_dtor
void __cdecl TEAFrameWindow::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4ff88c);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 0x35) = &TEAFrameWindow::vftable;
    self[4] = (int)&PTR_LAB_004ffd28;
    *(undefined ***)self[2] = &PTR_LAB_004ffd40;
    *(undefined ***)self[3] = &PTR_LAB_004ffd4c;
    *(undefined ***)(self[1] + 8) = &TEAFrameWindow::vftable_TWindow;
    *(undefined ***)(*self + 0xc) = &TEAFrameWindow::vftable_TFrameWindow;
    if (DAT_0051ac7c != (HHOOK)0x0) {
      UnhookWindowsHookEx(DAT_0051ac7c);
    }
    PostQuitMessage(0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -9;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -9;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -9;
    OWL::TDecoratedFrame::_dtor(self,0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 9;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 9;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 9;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
      OWL::TFrameWindow::_dtor((int *)((int)self + 0xea),0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x18,0);
      *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x16,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047431c  TEAFrameWindow::EvInitMenuPopup   (1093 bytes)   [owl:response-table message-handler]
//   WM_INITMENUPOPUP
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TEAFrameWindow::EvInitMenuPopup(undefined4 *self,HMENU hPopupMenu,undefined4 index,char sysMenu)

{
  bool isCommandEnabled;
  UINT pos;
  int *lookupConfiguration;
  int prevRefs;
  UINT UVar5;
  UINT *pUVar6;
  UINT_PTR uIDNewItem;
  uint position;
  undefined4 *sehChainHead;
  undefined4 *hMenu2;
  uint name [9];
  undefined1 *unused;
  undefined4 unused2;
  LPCSTR unused3;
  LPCSTR unused4;
  undefined1 *unused5;
  LPCSTR unused6;
  UINT unused7;
  UINT unused8;
  UINT_PTR unused9;
  UINT unused10;
  UINT unused11;
  UINT_PTR unused12;
  undefined1 *unused13;
  undefined4 unused14;
  int unused15;
  int unused16;
  UINT flags;
  undefined *fileHistory;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  int str;
  undefined1 local_20 [8];
  LPCSTR newItem;
  undefined4 hMenu3;
  HMENU hMenu;
  
  __InitExceptBlockLDTC(0x4ff8f0);
  OWL::TFrameWindow::EvInitMenuPopup((int *)*self,hPopupMenu,index,sysMenu);
  if ((hPopupMenu != (HMENU)0x0) && (sysMenu == '\0')) {
    ehContext = 8;
    OWL::TMenu::TMenu_497aec(&hMenu3,hPopupMenu,0);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 0x14;
    position = 0;
    pUVar6 = &DAT_004ff36c;
    do {
      pos = GetMenuState(hMenu,*pUVar6,0);
      if (pos != 0xffffffff) {
        (*(UINT *)&g_contextMenuId) = pUVar6[1];
        (*(UINT *)&DAT_0051ac88) = (*(UINT *)&g_contextMenuId);
        break;
      }
      position = position + 1;
      pUVar6 = pUVar6 + 2;
    } while (position < 0xb);
    if ((*(UINT *)&g_contextMenuId) == 0x3412) {
      isCommandEnabled = TEAViewWindows::IsCommandEnabled(self[0x12],0x1d42);
      position = (uint)isCommandEnabled;
      hMenu2 = &hMenu3;
      lookupConfiguration = (int *)GetLookupConfiguration(self[0x13]);
      LookupConfiguration::FillMenu(lookupConfiguration,(int)hMenu2,position);
    }
    pos = FUN_00497c2c((int)&hMenu3,0);
    if (pos == 0x1d7e) {
      TEAAppWindows::UpdateFileMenu(self[0x13],(int)&hMenu3);
      pos = GetMenuItemCount(hMenu);
      ehContext = 0x14;
      do {
        pos = pos - 1;
        if ((int)pos < 0) break;
        UVar5 = FUN_00497c2c((int)&hMenu3,pos);
      } while (UVar5 != 0x12e8);
      if (-1 < (int)pos) {
        fileHistory = GetFileHistory(self[0x13],0);
        if (*(int *)(self[0x12] + 100) == 2) {
          flags = 0x401;
        }
        else {
          flags = 0x400;
        }
        uIDNewItem = 0x12e8;
        do {
          ehContext = 0x2c;
          FileHistory::Get((int)local_20,(int)fileHistory,uIDNewItem - 0x12e8);
          ehContext = 0x20;
          if (*(int *)(newItem + -4) == 0) {
            if (newItem == (LPCSTR)0x0) break;
            if (*(int *)(newItem + -0xc) != -1) {
              lookupConfiguration = (int *)(newItem + -0xc);
              if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else {
                *lookupConfiguration = *lookupConfiguration + -1;
                prevRefs = *lookupConfiguration + 1;
              }
              if (prevRefs != 0) break;
            }
            unused6 = newItem + -0xc;
            operator_delete();
            unused5 = local_20;
            newItem = (LPCSTR)0x0;
            break;
          }
          ehDtorCount = ehDtorCount + 1;
          sprintf((undefined1 *)name,&DAT_004ff3d5 /* "&%d " */);
          ehContext = 0x38;
          ExpandProgramPath((int)result,name,(int)local_20);
          ehDtorCount = ehDtorCount + 1;
          std::string::operator_assign((int)local_20,(int)result);
          ehDtorCount = ehDtorCount + -1;
          if (str != 0) {
            if (*(int *)(str + -0xc) != -1) {
              lookupConfiguration = (int *)(str + -0xc);
              if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else {
                *lookupConfiguration = *lookupConfiguration + -1;
                prevRefs = *lookupConfiguration + 1;
              }
              if (prevRefs != 0) goto LAB_0047461f;
            }
            unused16 = str + -0xc;
            unused15 = str + -0xc;
            operator_delete();
            unused14 = 0;
            unused13 = result;
            str = 0;
          }
LAB_0047461f:
          ehContext = 0x20;
          UVar5 = FUN_00497c2c((int)&hMenu3,pos);
          if (uIDNewItem == UVar5) {
            unused8 = flags;
            unused7 = pos;
            unused9 = uIDNewItem;
            ModifyMenuA(hMenu,pos,flags,uIDNewItem,newItem);
          }
          else {
            unused11 = flags;
            unused10 = pos;
            unused12 = uIDNewItem;
            InsertMenuA(hMenu,pos,flags,uIDNewItem,newItem);
          }
          pos = pos + 1;
          ehDtorCount = ehDtorCount + -1;
          if (newItem != (LPCSTR)0x0) {
            if (*(int *)(newItem + -0xc) != -1) {
              lookupConfiguration = (int *)(newItem + -0xc);
              if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else if (lookupConfiguration == &g_nullStringRep) {
                prevRefs = 1;
              }
              else {
                *lookupConfiguration = *lookupConfiguration + -1;
                prevRefs = *lookupConfiguration + 1;
              }
              if (prevRefs != 0) goto LAB_00474726;
            }
            unused4 = newItem + -0xc;
            unused3 = newItem + -0xc;
            operator_delete();
            unused2 = 0;
            unused = local_20;
            newItem = (LPCSTR)0x0;
          }
LAB_00474726:
          ehContext = 0x14;
          uIDNewItem = uIDNewItem + 1;
        } while (uIDNewItem < 0x12f2);
      }
    }
    ehDtorCount = ehDtorCount + -1;
    OWL::TMenu::_dtor(&hMenu3,2);
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474764  TEAFrameWindow::GetClassName   (10 bytes)   [rtti:vtable virtual slot 29]
//   override of OWL::TWindow vtable slot 29, from TEAFrameWindow's OWL::TWindow subobject vtable at 0x004ffd58 (through the this-adjusting thunk at 0x0047594f); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAFrameWindow::vf15 [rtti:vtable]
char * __stdcall TEAFrameWindow::GetClassName(void)

{
  return "TEAMainWindow";
}

// ----------------------------------------------------------------------------------------------------
// 0x00474770  TEAFrameWindow::EvRegisteredMsg_474770   (60 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
undefined4 __cdecl TEAFrameWindow::EvRegisteredMsg_474770(int self)

{
  if (g_contextMenuId == 0) {
    TEAAppWindows::ShowHelpFor(*(int *)(self + 0x4c));
  }
  else {
    TEAAppWindows::ShowHelpFor(*(int *)(self + 0x4c));
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004747ac  TEAFrameWindow::SetupWindow   (137 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TEAFrameWindow's OWL::TWindow subobject vtable at 0x004ffd58 (through the this-adjusting thunk at 0x0047593c); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAFrameWindow::vf9 [rtti:vtable]
void __cdecl TEAFrameWindow::SetupWindow(int *self)

{
  HINSTANCE hmod;
  DWORD dwThreadId;
  
  OWL::TDecoratedFrame::SetupWindow(self);
  if (*(int *)(self[0x12] + 0xa0) != 0) {
    FUN_004a7aa0(self[1],(HWND)0xffffffff,0,0,0,0,3);
  }
  DAT_0051ac80 = 0;
  DAT_0051ac7c = (HHOOK)0x0;
  (*(undefined4 *)&g_hWndMain) = *(undefined4 *)(self[1] + 0xc);
  g_helpMessageId = RegisterWindowMessageA("commdlg_help");
  if (g_helpMessageId != 0) {
    hmod = *(HINSTANCE *)(*(int *)(self[1] + 0x6c) + 0xc);
    dwThreadId = GetCurrentThreadId();
    DAT_0051ac7c = SetWindowsHookExA(-1,MsgHookProc,hmod,dwThreadId);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474838  TEAFrameWindow::CanClose   (101 bytes)   [rtti:vtable virtual slot 15]
//   override of OWL::TWindow vtable slot 15, from TEAFrameWindow's OWL::TWindow subobject vtable at 0x004ffd58 (through the this-adjusting thunk at 0x00475988); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TEAFrameWindow::vf16 [rtti:vtable]
bool __cdecl TEAFrameWindow::CanClose(int self)

{
  bool bVar1;
  
  if ((*(int **)(self + 0x48))[0x19] != 4) {
    TEAViewWindows::SaveQueryHistory(*(int **)(self + 0x48));
  }
  bVar1 = TEAViewWindows::PrepareToClose(*(int *)(self + 0x48));
  if (bVar1) {
    IsZoomed(*(HWND *)(*(int *)(self + 4) + 0xc));
    TEAAppWindows::SaveMainWindowSettings(*(int *)(self + 0x4c));
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748a0  TEAFrameWindow::CeFilePageSetup   (40 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(3780) — &File > Page Set&up...
void __cdecl TEAFrameWindow::CeFilePageSetup(int self,undefined4 *commandEnabler)

{
  TEAAppWindows::GetPrinter(*(int *)(self + 0x4c));
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748c8  TEAFrameWindow::CeShared_4748c8   (24 bytes)   [owl:response-table message-handler]
//   one handler for 9 table entries: &File > &Close *; &File > &Demote *; &File > Pro&mote *; T&ools > &Options...; &Edit > Cu&t	Ctrl+X; &Edit > &Paste	Ctrl+V; &Window > Always On &Top; &Window > Tile &Horizontal; &Window > Tile &Vertical
//   also: TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]; TEAFrameWindow::CeShared_4748c8 [owl:response-table]
void __cdecl TEAFrameWindow::CeShared_4748c8(int self,int *commandEnabler)

{
  TEAViewWindows::CeShared_454478(*(int *)(self + 0x48),commandEnabler);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748e0  TEAFrameWindow::CmFileClose   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7580) — &File > &Close * | &Close
void __cdecl TEAFrameWindow::CmFileClose(int self)

{
  TEAAppWindows::CloseDictionary(*(int *)(self + 0x4c));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004748f4  TEAFrameWindow::CmFileDemote   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7600) — &File > &Demote * | &Demote
void __cdecl TEAFrameWindow::CmFileDemote(int self)

{
  TEAAppWindows::MoveDictionary(*(int *)(self + 0x4c),3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0047490c  TEAFrameWindow::CmFilePromote   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7590) — &File > Pro&mote * | Pro&mote
void __cdecl TEAFrameWindow::CmFilePromote(int self)

{
  TEAAppWindows::MoveDictionary(*(int *)(self + 0x4c),2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474924  TEAFrameWindow::CmToolsOptions   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(7560) — T&ools > &Options...
void __cdecl TEAFrameWindow::CmToolsOptions(int self)

{
  TEAViewWindows::CmOptions(*(undefined4 **)(self + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474938  TEAFrameWindow::CmRange4840to4849   (240 bytes)   [owl:response-table message-handler]
//   one handler for 10 table entries: &File > ; id 4841; id 4842; id 4843; id 4844; id 4845; id 4846; id 4847; id 4848; id 4849
//   also: TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]; TEAFrameWindow::CmRange4840to4849 [owl:response-table]
void __cdecl TEAFrameWindow::CmRange4840to4849(int self,int param_2)

{
  undefined *fileHistory;
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x4ff978);
  fileHistory = GetFileHistory(*(int *)(self + 0x4c),0);
  FileHistory::Get((int)result,(int)fileHistory,param_2 + -0x12e8);
  TEAAppWindows::OpenDictionaries(*(int *)(self + 0x4c),strRep);
  FileHistory::Add((int)fileHistory,strRep);
  TEAViewWindows::RestartSearch(*(int **)(self + 0x48));
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
      if (prevRefs != 0) goto LAB_00474a17;
    }
    operator_delete();
  }
LAB_00474a17:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a28  TEAFrameWindow::CmFilePageSetup   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(3780) — &File > Page Set&up...
void __cdecl TEAFrameWindow::CmFilePageSetup(int self)

{
  TEAViewWindows::CmPageSetup(*(int *)(self + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a3c  TEAFrameWindow::CmShared_474a3c   (24 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: &Edit > Cu&t	Ctrl+X; &Edit > &Paste	Ctrl+V
//   also: TEAFrameWindow::CmShared_474a3c [owl:response-table]
void __cdecl TEAFrameWindow::CmShared_474a3c(int self,int param_2)

{
  TEAViewWindows::CmShared_4548d0(*(int **)(self + 0x48),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a54  TEAFrameWindow::CmToolsDictionaryBuilder   (25 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(4980) — T&ools > &Dictionary Builder
void __cdecl TEAFrameWindow::CmToolsDictionaryBuilder(int self)

{
  TEAAppWindows::LaunchTool(*(undefined4 *)(self + 0x4c),(uint *)"TSBUILD");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a70  TEAFrameWindow::CmToolsWordListMerge   (25 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5120) — T&ools > &Word List Merge
void __cdecl TEAFrameWindow::CmToolsWordListMerge(int self)

{
  TEAAppWindows::LaunchTool(*(undefined4 *)(self + 0x4c),(uint *)"TSMERGE");
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474a8c  TEAFrameWindow::CmWindowAlwaysOnTop   (78 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(14870) — &Window > Always On &Top
void __cdecl TEAFrameWindow::CmWindowAlwaysOnTop(int self)

{
  HWND hWnd;
  uint uVar2;
  
  uVar2 = (uint)(*(int *)(*(int *)(self + 0x48) + 0xa0) == 0);
  if (uVar2 == 0) {
    hWnd = (HWND)0xfffffffe;
  }
  else {
    hWnd = (HWND)0xffffffff;
  }
  FUN_004a7aa0(*(int *)(self + 4),hWnd,0,0,0,0,3);
  *(uint *)(*(int *)(self + 0x48) + 0xa0) = uVar2;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474adc  TEAFrameWindow::CmShared_474adc   (24 bytes)   [owl:response-table message-handler]
//   one handler for 2 table entries: &Window > Tile &Horizontal; &Window > Tile &Vertical
//   also: TEAFrameWindow::CmShared_474adc [owl:response-table]
void __cdecl TEAFrameWindow::CmShared_474adc(int self,int param_2)

{
  TEAViewWindows::CmShared_4548d0(*(int **)(self + 0x48),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474af4  TEAFrameWindow::CmHelpQuickReference   (22 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(4820) — &Help > &Quick Reference...
void __cdecl TEAFrameWindow::CmHelpQuickReference(int self)

{
  TEAViewWindows::ShowQuickReference(*(undefined4 **)(self + 0x48),0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b0c  TEAFrameWindow::CmHelpStartupTips   (18 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(13390) — &Help > &Startup Tips...
void __cdecl TEAFrameWindow::CmHelpStartupTips(int self)

{
  TEAViewWindows::ShowStartupTips(*(undefined4 **)(self + 0x48));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474b20  TEAFrameWindow::CmHelpContents   (31 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(3770) — &Help > &Contents
void __stdcall TEAFrameWindow::CmHelpContents(void)

{
  ShowHelpContents();
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
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 paths [8];
  int str;
  undefined1 result [8];
  LPCSTR file;
  
  __InitExceptBlockLDTC(0x4ff9d0);
  std::string::string_from_cstr((int)paths,(uint *)"ordering.url");
  ResolveRelativePaths((int)result,(int)paths);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
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
      if (prevRefs != 0) goto LAB_00474c64;
    }
    operator_delete();
    str = 0;
  }
LAB_00474c64:
  ShellExecuteA((HWND)0x0,&DAT_004ff3f8 /* "open" */,file,(LPCSTR)0x0,(LPCSTR)0x0,9);
  if (file != (LPCSTR)0x0) {
    if (*(int *)(file + -0xc) != -1) {
      strRep = (int *)(file + -0xc);
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
      if (prevRefs != 0) goto LAB_00474cf0;
    }
    operator_delete();
  }
LAB_00474cf0:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00474d04  TEAFrameWindow::CmHelpAboutTEA   (279 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(1770) — &Help > &About TEA...
void __cdecl TEAFrameWindow::CmHelpAboutTEA(int self)

{
  uint *licenseInfo;
  int *piVar2;
  int module;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  int gridAboutBoxViewWindows [222];
  undefined1 versionText [8];
  int str;
  
  __InitExceptBlockLDTC(0x4ffa24);
  module = *(int *)(self + 0x4c);
  licenseInfo = (uint *)TEAAppWindows::GetLicenseInfo(module);
  std::string::string_from_cstr((int)versionText,licenseInfo);
  piVar2 = GridAboutBoxViewWindows::GridAboutBoxViewWindows(gridAboutBoxViewWindows,0,*(undefined4 *)(self + 4),module,(int)versionText);
  (**(code **)(piVar2[3] + 0x14))();
  GridAboutBoxViewWindows::_dtor(gridAboutBoxViewWindows,2);
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar2 = (int *)(str + -0xc);
      if (piVar2 == &g_nullStringRep) {
        module = 1;
      }
      else if (piVar2 == &g_nullStringRep) {
        module = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        module = *piVar2 + 1;
      }
      if (module != 0) goto LAB_00474e07;
    }
    operator_delete();
  }
LAB_00474e07:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
