// TEA.exe — application module "TabbyPropertiesViewWindows"
// 15 functions, 0x00467d40..0x00468548. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00467d40  TabbyPropertiesViewWindows::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: TabbyPropertiesViewWindows::Find [rtti:vtable]; TabbyPropertiesViewWindows::vf14 [rtti:vtable]
undefined4 __cdecl TabbyPropertiesViewWindows::Find(undefined4 *self,int *eventInfo,undefined *equal)

{
  undefined4 found;
  
  eventInfo[2] = (int)self;
  found = FUN_0048e808(self[1],(int *)&TabbyPropertiesViewWindows::__entries,eventInfo,equal);
  if (((char)found == '\0') && (found = PropertiesViewWindows::Find(self,eventInfo,equal), (char)found == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467d88  TabbyPropertiesViewWindows::TabbyPropertiesViewWindows   (410 bytes)   [rtti:vtable-store constructor]
//   constructor: stores TabbyPropertiesViewWindows's vtable at its vptr offset (+0xc) in this
int * __cdecl TabbyPropertiesViewWindows::TabbyPropertiesViewWindows(int *self,int vbasesBuilt,int param_3,int param_4,int param_5,int param_6, undefined4 param_7,int param_8,uint *param_9,int param_10)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fc8c8);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0x4c);
    self[0x4c] = (int)(self + 0x49);
    self[0x4d] = (int)(self + 0x4a);
    self[1] = (int)(self + 0x49);
    self[2] = (int)(self + 0x4a);
    self[0x48] = 0;
    self[0x4b] = 0;
    self[0x49] = (int)&OWL::TEventHandler::vftable;
    self[0x4a] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x4c,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc0;
  PropertiesViewWindows::PropertiesViewWindows(self,1,param_6,param_7,param_8,param_9,param_10,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc0;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc0;
  self[3] = (int)&TabbyPropertiesViewWindows::vftable;
  *(undefined ***)self[1] = &PTR_LAB_004fcae4;
  *(undefined ***)self[2] = &PTR_LAB_004fcaf0;
  *(undefined ***)(*self + 8) = &TabbyPropertiesViewWindows::vftable_TWindow;
  PVWTabs::PVWTabs(self + 0x18,0,self,0x1f5e);
  self[0x44] = param_3;
  self[0x45] = param_4;
  self[0x46] = param_5;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00467f50  TabbyPropertiesViewWindows::~TabbyPropertiesViewWindows   (288 bytes)   [rtti:dtor destructor]
//   written in code as TabbyPropertiesViewWindows::_dtor
void __cdecl TabbyPropertiesViewWindows::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fc8f8);
  if (self != (int *)0x0) {
    self[3] = (int)&TabbyPropertiesViewWindows::vftable;
    *(undefined ***)self[1] = &PTR_LAB_004fcae4;
    *(undefined ***)self[2] = &PTR_LAB_004fcaf0;
    *(undefined ***)(*self + 8) = &TabbyPropertiesViewWindows::vftable_TWindow;
    PVWTabs::_dtor(self + 0x18,2);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xc0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -0xc0;
    PropertiesViewWindows::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xc0;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 0xc0;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0x4c,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 0x4a,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468070  TabbyPropertiesViewWindows::SetupTooltips   (54 bytes)   [rtti:vtable virtual slot 15]
//   vtable slot 15 (introduced by PropertiesViewWindows); creates the tooltip control for the window's controls (overrides add their own start-up work)
void __cdecl TabbyPropertiesViewWindows::SetupTooltips(int *self)

{
  PropertiesViewWindows::SetupTooltips(self);
  (**(code **)(self[3] + 0xc0))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004680a8  TabbyPropertiesViewWindows::OnMouseOverControl   (176 bytes)   [rtti:vtable virtual slot 31]
//   vtable slot 31 (introduced by PropertiesViewWindows); the mouse moved over a control (PVWPathListBox::EvMouseMove); used to show its tip
undefined4 __cdecl TabbyPropertiesViewWindows::OnMouseOverControl(int self,int param_2)

{
  BOOL ok;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  WPARAM wParam;
  
  ok = IsWindowEnabled(*(HWND *)(*(int *)(self + 0x60) + 0xc));
  if (ok == 0) {
    uVar2 = 0;
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)(self + 0x60),0x1304,0,0);
    iVar4 = FUN_004a76a8(*(int *)(self + 0x60),0x130b,0,0);
    wParam = iVar4 + param_2;
    if ((int)wParam < 0) {
      wParam = iVar3 - 1;
    }
    else if (iVar3 <= (int)wParam) {
      wParam = 0;
    }
    FUN_004a76a8(*(int *)(self + 0x60),0x130c,wParam,0);
    GetDlgCtrlID(*(HWND *)(*(int *)(self + 0x60) + 0xc));
    uVar2 = (**(code **)(*(int *)(self + 0xc) + 0xc0))();
    uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468158  TabbyPropertiesViewWindows::EvNotify   (68 bytes)   [rtti:vtable virtual slot 19]
//   override of OWL::TWindow vtable slot 19, from TabbyPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004fcafc (through the this-adjusting thunk at 0x004689c4); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TabbyPropertiesViewWindows::vf38 [rtti:vtable]
void __cdecl TabbyPropertiesViewWindows::EvNotify(int *self,int param_2,undefined4 *param_3)

{
  if ((param_3[2] == -0x208) && ((uint)param_3[1] < (uint)self[0x45])) {
    param_3[3] = (uint)*(ushort *)(self[0x44] + 4 + param_3[1] * 0x10);
  }
  PropertiesViewWindows::EvNotify(self,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046819c  TabbyPropertiesViewWindows::PreProcessMsg   (96 bytes)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from TabbyPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004fcafc (through the this-adjusting thunk at 0x004689ee); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TabbyPropertiesViewWindows::vf7 [rtti:vtable]
void __cdecl TabbyPropertiesViewWindows::PreProcessMsg(int *self,LPMSG lParam)

{
  UINT UVar1;
  HWND hWnd;
  
  hWnd = (HWND)FUN_004a76a8(self[0x18],0x132d,0,0);
  if ((hWnd != (HWND)0x0) &&
     (((UVar1 = lParam->message, UVar1 - 0x200 < 3 || (UVar1 - 0x204 < 2)) || (UVar1 - 0x207 < 2)))
     ) {
    SendMessageA(hWnd,0x407,0,(LPARAM)lParam);
  }
  PropertiesViewWindows::PreProcessMsg(self,lParam);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004681fc  TabbyPropertiesViewWindows::ShowControlTip   (62 bytes)   [rtti:vtable virtual slot 43]
//   vtable slot 43 (introduced by PropertiesViewWindows); relays a mouse message to the tooltip, or shows the tip text for a control
void __cdecl TabbyPropertiesViewWindows::ShowControlTip(int self,undefined4 param_2,LPARAM lParam)

{
  HWND hWnd;
  
  if (*(int *)(self + 0x4c) == 0) {
    hWnd = (HWND)FUN_004a76a8(*(int *)(self + 0x60),0x132d,0,0);
    if (hWnd != (HWND)0x0) {
      SendMessageA(hWnd,0x407,0,lParam);
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046823c  TabbyPropertiesViewWindows::SetupWindow   (388 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from TabbyPropertiesViewWindows's OWL::TWindow subobject vtable at 0x004fcafc (through the this-adjusting thunk at 0x00468985); slot name identified from OWL::TWindow's own implementation of that slot
//   also: TabbyPropertiesViewWindows::vf11 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl TabbyPropertiesViewWindows::SetupWindow(int *self)

{
  HWND hWnd;
  WPARAM wParam;
  int prevRefs;
  uint uVar4;
  uint *strRep;
  undefined4 *sehChainHead;
  uint local_78 [11];
  undefined1 *unused;
  undefined4 unused2;
  uint *unused3;
  uint *unused4;
  uint *lParam;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  uint *local_c;
  
  __InitExceptBlockLDTC(0x4fc92c);
  PropertiesViewWindows::SetupWindow(self);
  hWnd = (HWND)FUN_004a76a8(self[0x18],0x132d,0,0);
  SetTooltipMaxWidth(self,hWnd);
  uVar4 = 0;
  do {
    if ((uint)self[0x45] <= uVar4) {
      if (self[0x13] == 0) {
        (**(code **)(self[3] + 0xc0))();
      }
      *sehChainHead = sehPrevFrame;
      return;
    }
    ehContext = 0x14;
    TEAAppWindows::LoadResourceString((int)result,self[0xe],*(uint *)(self[0x44] + uVar4 * 0x10));
    ehDtorCount = ehDtorCount + 1;
    ehContext = 8;
    lParam = FUN_0049e814(local_78,local_c,(char *)0x0,0);
    wParam = FUN_004a76a8(self[0x18],0x1304,0,0);
    FUN_004a76a8(self[0x18],0x1307,wParam,(LPARAM)lParam);
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
        if (prevRefs != 0) goto LAB_0046836a;
      }
      unused4 = local_c + -3;
      unused3 = local_c + -3;
      operator_delete();
      unused2 = 0;
      unused = result;
      local_c = (uint *)0x0;
    }
LAB_0046836a:
    ehContext = 0;
    uVar4 = uVar4 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x004683c0  TabbyPropertiesViewWindows::ShowHelp   (64 bytes)   [rtti:vtable virtual slot 45]
//   vtable slot 45 (introduced by PropertiesViewWindows); opens the window's help topic
void __cdecl TabbyPropertiesViewWindows::ShowHelp(int self)

{
  FUN_004a76a8(*(int *)(self + 0x60),0x130b,0,0);
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468400  TabbyPropertiesViewWindows::EnableControls   (39 bytes)   [rtti:vtable virtual slot 18]
//   vtable slot 18 (introduced by PropertiesViewWindows); enables or disables the window's controls
void __cdecl TabbyPropertiesViewWindows::EnableControls(int *self,byte enable)

{
  TabbyPropertiesViewWindows::EnablePage(self,enable);
  (**(code **)(*(int *)(self[0x18] + 8) + 0x60))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468428  TabbyPropertiesViewWindows::OnPageChanged   (78 bytes)   [rtti:vtable virtual slot 48]
//   vtable slot 48; a tab page was selected: shows its controls
void __cdecl TabbyPropertiesViewWindows::OnPageChanged(int *self)

{
  uint firstId;
  uint firstId2;
  
  firstId = FUN_004a76a8(self[0x18],0x130b,0,0);
  for (firstId2 = 0; firstId2 < (uint)self[0x46]; firstId2 = firstId2 + 1) {
    if (firstId != firstId2) {
      TabbyPropertiesViewWindows::ShowPage(self,firstId2,0);
    }
  }
  TabbyPropertiesViewWindows::ShowPage(self,firstId,5);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468478  TabbyPropertiesViewWindows::ShowPage   (92 bytes)   [analysis]
//   shows/enables the controls of one tab page
void __cdecl TabbyPropertiesViewWindows::ShowPage(int *self,int firstId,int show)

{
  HWND hWnd;
  int i;
  
  for (i = 0; i < *(int *)(self[0x44] + 8 + firstId * 0x10); i = i + 1) {
    hWnd = GetDlgItem(*(HWND *)(*self + 0xc),
                      *(int *)(*(int *)(self[0x44] + 0xc + firstId * 0x10) + i * 4));
    ShowWindow(hWnd,show);
    EnableWindow(hWnd,show);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004684d4  TabbyPropertiesViewWindows::EnablePage   (113 bytes)   [analysis]
//   enables or disables the current page's controls
void __cdecl TabbyPropertiesViewWindows::EnablePage(int *self,byte enable)

{
  int iVar1;
  HWND hWnd;
  int i;
  
  iVar1 = FUN_004a76a8(self[0x18],0x130b,0,0);
  for (i = 0; i < *(int *)(self[0x44] + 8 + iVar1 * 0x10); i = i + 1) {
    hWnd = GetDlgItem(*(HWND *)(*self + 0xc),
                      *(int *)(*(int *)(self[0x44] + 0xc + iVar1 * 0x10) + i * 4));
    EnableWindow(hWnd,(uint)enable);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468548  TabbyPropertiesViewWindows::GetControlTipText   (1061 bytes)   [rtti:vtable virtual slot 46]
//   vtable slot 46 (introduced by PropertiesViewWindows); tooltip text for a control (first line of its string resource)
/* WARNING: Removing unreachable block (ram,0x004685da) */
/* WARNING: Removing unreachable block (ram,0x00468636) */
/* WARNING: Removing unreachable block (ram,0x0046870a) */
/* WARNING: Removing unreachable block (ram,0x004686bc) */
/* WARNING: Removing unreachable block (ram,0x004686fd) */
/* WARNING: Removing unreachable block (ram,0x004687a1) */
/* WARNING: Removing unreachable block (ram,0x004687c5) */
/* WARNING: Removing unreachable block (ram,0x004687d0) */
/* WARNING: Removing unreachable block (ram,0x00468810) */
/* WARNING: Removing unreachable block (ram,0x004687e9) */
/* WARNING: Removing unreachable block (ram,0x00468809) */
/* WARNING: Removing unreachable block (ram,0x004687f6) */
/* WARNING: Removing unreachable block (ram,0x00468815) */
/* WARNING: Removing unreachable block (ram,0x00468819) */
/* WARNING: Removing unreachable block (ram,0x00468867) */
void __cdecl TabbyPropertiesViewWindows::GetControlTipText(int *self,int *param_2)

{
  HWND hWnd;
  uint id;
  char *pcVar2;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 lParam;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  char *unused4;
  char *unused5;
  undefined1 local_100 [144];
  char *unused6;
  int local_6c;
  undefined1 unused7;
  int local_64;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 result [8];
  char *str;
  
  __InitExceptBlockLDTC(0x4fc9a4);
  hWnd = (HWND)FUN_004a76a8(self[0x18],0x132d,0,0);
  if (hWnd != (HWND)0x0) {
    lParam = 0x2c;
    unused = 1;
    unused2 = *(undefined4 *)(*self + 0xc);
    ehContext = 0x14;
    id = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
    TEAAppWindows::LoadResourceString((int)result,self[0xe],id);
    ehDtorCount = ehDtorCount + 1;
    ehContext = 8;
    unused7 = 10;
    local_6c = *(int *)(str + -4);
    unused6 = str;
    pcVar2 = thunk_memchr(str,'\n',local_6c);
    local_64 = (*(int *)&g_stringNpos);
    if (pcVar2 != (char *)0x0) {
      local_64 = (int)pcVar2 - (int)str;
    }
    if (local_64 != -1) {
      local_100[0] = 0;
      id = local_64 + 1U;
      if (*(uint *)(str + -4) <= local_64 + 1U) {
        id = *(uint *)(str + -4);
      }
      std::string::replace((int)result,0,id,(uint)local_100,0,0,0);
    }
    unused4 = str;
    unused3 = *(undefined4 *)(*param_2 + 0xc);
    SendMessageA(hWnd,0x404,0,(LPARAM)&lParam);
    ehContext = 8;
    ehDtorCount = ehDtorCount + -1;
    if (str != (char *)0x0) {
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
        if (prevRefs != 0) goto LAB_0046895c;
      }
      unused5 = str + -0xc;
      operator_delete();
    }
  }
LAB_0046895c:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
