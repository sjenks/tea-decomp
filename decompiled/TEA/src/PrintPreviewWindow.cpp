// TEA.exe — application module "PrintPreviewWindow"
// 25 functions, 0x00426498..0x004283a8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00426498  PrintPreviewWindow::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: PrintPreviewWindow::Find [rtti:vtable]; PrintPreviewWindow::vf14 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindow::Find(undefined4 *self,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)self;
  uVar1 = FUN_0048e808(self[2],(int *)&PrintPreviewWindow::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TDecoratedFrame::Find(self,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004264e0  PrintPreviewWindow::EvSize   (10 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_SIZE
void __stdcall PrintPreviewWindow::EvSize(int self)

{
                    /* WARNING: Could not recover jumptable at 0x004264e7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(self + 0x35) + 0x54))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004264ec  PrintPreviewWindow::PrintPreviewWindow   (2207 bytes)   [analysis]
//   constructor: the preview frame ("Print Page ()") with its scroller, placed from the saved Position (fitted to a monitor)
/* WARNING: Removing unreachable block (ram,0x00426770) */
/* WARNING: Removing unreachable block (ram,0x00426b63) */
int * __cdecl PrintPreviewWindow::PrintPreviewWindow(int *self,int vbasesBuilt,uint *title,int parent,int printer,int printout,int client, int module,uint *caption,undefined4 flags,int *rect)

{
  uint *pwszDevice;
  char *len;
  LPCSTR port;
  LPCSTR pwszDriver;
  undefined4 uVar5;
  int iVar6;
  tagRECT *pRect;
  int *strRep;
  LONG *pLVar9;
  undefined4 *sehChainHead;
  byte bVar10;
  DEVMODEA *pdm;
  int tryLocalMachine;
  LONG local_118;
  int local_114;
  int local_10c;
  tagRECT rect2;
  int local_f8 [2];
  int local_f0;
  tagRECT rect3;
  int unused;
  int unused2;
  int unused3;
  undefined1 *unused4;
  undefined4 unused5;
  char *unused6;
  char *unused7;
  int bottom2;
  int right2;
  int top2;
  int left2;
  int showCmd;
  undefined1 *unused8;
  undefined4 unused9;
  int unused10;
  int unused11;
  int local_84;
  int local_80;
  int *str;
  uint *s;
  int *local_6c;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 local_44 [8];
  int str2;
  undefined4 *myScroller;
  int *local_30;
  undefined1 out [8];
  char *text;
  int persist [2];
  undefined1 local_14 [8];
  int str3;
  
  bVar10 = 0;
  __InitExceptBlockLDTC(0x4f1af0);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x142;
    *(int **)((int)self + 0x142) = self + 0x2e;
    self[0x2e] = (int)(self + 0x2b);
    self[0x2f] = (int)(self + 0x2c);
    *(int **)((int)self + 0x146) = self + 0x2b;
    *(int **)((int)self + 0x14a) = self + 0x2c;
    self[1] = (int)(self + 0x2e);
    self[2] = (int)(self + 0x2b);
    self[3] = (int)(self + 0x2c);
    self[0x2a] = 0;
    self[0x2d] = 0;
    *(undefined4 *)((int)self + 0x13e) = 0;
    self[0x2b] = (int)&OWL::TEventHandler::vftable;
    local_6c = self + 0x2c;
    *local_6c = (int)&OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x2e,1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::TFrameWindow_4bda48((int *)((int)self + 0x142),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
  }
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x61;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x61;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x61;
  if (rect == (int *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = *rect;
  }
  FUN_004ae248(self,1,parent,caption,iVar6,0,0);
  ehDtorCount = ehDtorCount + 2;
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x61;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x61;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x61;
  *(undefined ***)((int)self + 0x35) = &PrintPreviewWindow::vftable;
  self[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)self[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)self[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(self[1] + 8) = &PrintPreviewWindow::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &PrintPreviewWindow::vftable_TFrameWindow;
  self[0x14] = client;
  self[0x15] = module;
  self[0x16] = 0;
  self[0x17] = 0;
  self[0x18] = 0;
  self[0x19] = 0;
  self[0x1a] = 0;
  self[0x1b] = 0;
  std::string::string_from_cstr((int)(self + 0x1c),title);
  self[0x22] = 0;
  self[0x22] = (int)&g_emptyStringData;
  unused = self[0x22];
  ehDtorCount = ehDtorCount + 2;
  self[0x24] = printer;
  self[0x25] = (int)rect;
  self[0x26] = printout;
  self[0x27] = 1;
  self[0x28] = 0;
  iVar6 = *(int *)(self[0x14] + 8);
  pwszDevice = (uint *)FUN_004c3f38(iVar6);
  std::string::assign_cstr((int)(self + 0x20),(uint *)"Print Page ()");
  str = self + 0x20;
  s = pwszDevice;
  len = strlen(pwszDevice);
  std::string::replace((int)str,0xc,0,(uint)s,(uint)len,0,(uint)len);
  local_30 = (int *)operator_new();
  if (local_30 != (int *)0x0) {
    ehContext = 0x38;
    pdm = *(DEVMODEA **)(iVar6 + 0x56);
    port = (LPCSTR)FUN_004c3f58(iVar6);
    pwszDriver = (LPCSTR)FUN_004c3f18(iVar6);
    FUN_0049caa8(local_30,pwszDriver,(LPCSTR)pwszDevice,port,pdm);
    ehContext = 0x2c;
  }
  self[0x16] = (int)local_30;
  (**(code **)(*(int *)self[0x14] + 0x14))();
  local_84 = *(int *)(self[0x14] + 0x26);
  local_80 = *(int *)(self[0x14] + 0x2a);
  self[0x17] = local_84;
  self[0x18] = local_80;
  *(undefined4 *)(self[1] + 0x5c) = DAT_0051b1d4;
  (**(code **)(*(int *)((int)self + 0x35) + 0x4c))();
  if (self[0x18] < self[0x17]) {
    *(uint *)(*(int *)self[0x25] + 0x18) = *(uint *)(*(int *)self[0x25] + 0x18) | 0x100000;
    *(uint *)(*(int *)self[0x25] + 0x18) = *(uint *)(*(int *)self[0x25] + 0x18) & 0xffdfffff;
  }
  else {
    *(uint *)(*(int *)self[0x25] + 0x18) = *(uint *)(*(int *)self[0x25] + 0x18) | 0x200000;
    *(uint *)(*(int *)self[0x25] + 0x18) = *(uint *)(*(int *)self[0x25] + 0x18) & 0xffefffff;
  }
  myScroller = (undefined4 *)operator_new();
  if (myScroller != (undefined4 *)0x0) {
    ehContext = 0x50;
    if (self[0x25] == 0) {
      iVar6 = self[0x25];
    }
    else {
      iVar6 = *(int *)self[0x25];
    }
    MyScroller::MyScroller(myScroller,iVar6,1,1,0,0);
    ehContext = 0x44;
  }
  *(undefined4 **)(*(int *)self[0x25] + 0x44) = myScroller;
  myScroller[0xb] = 0x18;
  myScroller[10] = 0x18;
  iVar6 = self[1];
  *(undefined4 *)(iVar6 + 0x20) = 0;
  *(undefined4 *)(iVar6 + 0x24) = 0xffffffff;
  rect3.left = 0;
  rect3.top = 0;
  rect3.right = 0;
  rect3.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&rect3);
  pRect = &rect3;
  pLVar9 = local_f8;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = self[1];
  *(int *)(iVar6 + 0x28) = local_f0 - local_f8[0];
  rect2.left = 0;
  rect2.top = 0;
  rect2.right = 0;
  rect2.bottom = 0;
  FUN_004a7a6c(*(int *)(iVar6 + 0x14),&rect2);
  pRect = &rect2;
  pLVar9 = &local_118;
  for (iVar6 = 4; iVar6 != 0; iVar6 = iVar6 + -1) {
    *pLVar9 = pRect->left;
    pRect = (tagRECT *)((int)pRect + ((uint)bVar10 * -2 + 1) * 4);
    pLVar9 = pLVar9 + (uint)bVar10 * -2 + 1;
  }
  iVar6 = self[1];
  *(int *)(iVar6 + 0x2c) = (local_10c - local_114) + 1;
  MapWindowPoints(*(HWND *)(parent + 0xc),*(HWND *)(iVar6 + 0xc),(LPPOINT)(iVar6 + 0x20),1);
  ehContext = 0x68;
  FindWordInString((int)local_14,(int)(self + 0x1c),(uint *)"Position");
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x74;
  tryLocalMachine = 0;
  iVar6 = 0;
  GetProfileKeyPath((int)local_44);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_44,iVar6,tryLocalMachine);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar6 = *strRep + 1;
      }
      if (iVar6 != 0) goto LAB_00426b32;
    }
    unused11 = str2 + -0xc;
    unused10 = str2 + -0xc;
    operator_delete();
    unused9 = 0;
    unused8 = local_44;
    str2 = 0;
  }
LAB_00426b32:
  text = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x5c;
  uVar5 = Persist::QueryString((int)persist,(int)local_14,(int)out);
  if ((char)uVar5 != '\0') {
    ParseWindowPlacement(text,&showCmd,&left2,&top2,&right2,&bottom2);
    iVar6 = FitRectToMonitor(left2,top2,right2,bottom2);
    if (iVar6 != 0) {
      if (top2 < 0) {
        top2 = 0;
      }
      self[0x28] = showCmd;
      *(int *)(self[1] + 0x20) = left2;
      *(int *)(self[1] + 0x24) = top2;
      *(int *)(self[1] + 0x28) = right2;
      *(int *)(self[1] + 0x2c) = bottom2;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (text != (char *)0x0) {
    if (*(int *)(text + -0xc) != -1) {
      strRep = (int *)(text + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar6 = *strRep + 1;
      }
      if (iVar6 != 0) goto LAB_00426ccf;
    }
    unused7 = text + -0xc;
    unused6 = text + -0xc;
    operator_delete();
    unused5 = 0;
    unused4 = out;
    text = (char *)0x0;
  }
LAB_00426ccf:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar6 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar6 = *strRep + 1;
      }
      if (iVar6 != 0) goto LAB_00426d73;
    }
    unused3 = str3 + -0xc;
    unused2 = str3 + -0xc;
    operator_delete();
  }
LAB_00426d73:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00426de4  PrintPreviewWindow::~PrintPreviewWindow   (780 bytes)   [rtti:dtor destructor]
//   written in code as PrintPreviewWindow::_dtor
void __cdecl PrintPreviewWindow::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1bec);
  if (self == (int *)0x0) goto LAB_004270df;
  *(undefined ***)((int)self + 0x35) = &PrintPreviewWindow::vftable;
  self[4] = (int)&PTR_LAB_004f1f44;
  *(undefined ***)self[2] = &PTR_LAB_004f1f5c;
  *(undefined ***)self[3] = &PTR_LAB_004f1f68;
  *(undefined ***)(self[1] + 8) = &PrintPreviewWindow::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &PrintPreviewWindow::vftable_TFrameWindow;
  if (self[0x1a] != 0) {
    (*(code *)**(undefined4 **)(self[0x1a] + 8))();
  }
  if (self[0x1b] != 0) {
    (*(code *)**(undefined4 **)(self[0x1b] + 8))();
  }
  if (self[0x16] != 0) {
    (*(code *)**(undefined4 **)(self[0x16] + 5))();
  }
  if (self[0x22] != 0) {
    if (*(int *)(self[0x22] + -0xc) != -1) {
      strRep = (int *)(self[0x22] + -0xc);
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
      if (prevRefs != 0) goto LAB_00426f60;
    }
    operator_delete();
    self[0x22] = 0;
  }
LAB_00426f60:
  if (self[0x1e] != 0) {
    if (*(int *)(self[0x1e] + -0xc) != -1) {
      strRep = (int *)(self[0x1e] + -0xc);
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
      if (prevRefs != 0) goto LAB_00426fe0;
    }
    operator_delete();
    self[0x1e] = 0;
  }
LAB_00426fe0:
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x61;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x61;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x61;
  OWL::TDecoratedFrame::_dtor(self,0);
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x61;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x61;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x61;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::_dtor((int *)((int)self + 0x142),0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x2e,0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x2c,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004270df:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427134  PrintPreviewWindow::vf19   (942 bytes)   [rtti:vtable virtual slot 19]
void __cdecl PrintPreviewWindow::vf19(int self,int *param_2)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *textGadget;
  undefined4 *sehChainHead;
  int iVar4;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1d00);
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    iVar4 = 0;
    puVar2 = (uint *)operator_new();
    if (puVar2 != (uint *)0x0) {
      FUN_00490fa8(puVar2,10,'\0',0);
    }
    OWL::TControlBar::TControlBar(piVar1,0,*(undefined4 *)(self + 4),0,puVar2,iVar4);
  }
  *(int **)(self + 100) = piVar1;
  *(undefined1 *)((int)piVar1 + 0x36) = 2;
  if (param_2 != (int *)0x0) {
    for (; param_2[1] != 0; param_2 = param_2 + 2) {
      for (iVar4 = 0; puVar2 = *(uint **)(param_2[1] + iVar4 * 4), puVar2 != (uint *)0x0;
          iVar4 = iVar4 + 1) {
        piVar1 = (int *)operator_new();
        if (piVar1 != (int *)0x0) {
          OWL::TButtonGadget::TButtonGadget(piVar1,puVar2,puVar2,'\x01',1,puVar2 == (uint *)*param_2,'\0');
        }
        (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
      }
      piVar1 = (int *)operator_new();
      if (piVar1 != (int *)0x0) {
        OWL::TSeparatorGadget::TSeparatorGadget(piVar1,0x14,0,1);
      }
      (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
    }
  }
  textGadget = (undefined4 *)operator_new();
  if (textGadget != (undefined4 *)0x0) {
    OWL::TTextGadget::TTextGadget(textGadget,0x1680,3,0,8,(uint *)0x0,0);
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TSeparatorGadget::TSeparatorGadget(piVar1,6,0,1);
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TButtonGadget::TButtonGadget(piVar1,(uint *)0x1658,0x1658,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TButtonGadget::TButtonGadget(piVar1,(uint *)0x1662,0x1662,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TSeparatorGadget::TSeparatorGadget(piVar1,0x14,0,1);
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  piVar1 = (int *)operator_new();
  if (piVar1 != (int *)0x0) {
    OWL::TButtonGadget::TButtonGadget(piVar1,(uint *)0x163a,0x163a,'\0',1,0,'\0');
  }
  (**(code **)(*(int *)(*(int *)(self + 100) + 0x18) + 0x14))();
  (**(code **)(*(int *)(self + 0x35) + 4))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004274e4  OWL::TControl::Streamer::vf4   (12 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
//   file placement: inferred (address adjacency)
/* WARNING: Instruction at (ram,0x004275e1) overlaps instruction at (ram,0x004275de)
    */
/* WARNING: Removing unreachable block (ram,0x004275b0) */
/* WARNING: Removing unreachable block (ram,0x0042759a) */
/* WARNING: Removing unreachable block (ram,0x004275af) */
void OWL::TControl::Streamer::vf4(char *self,int param_2,byte param_3)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  char *pcVar5;
  undefined3 uVar10;
  undefined3 uVar11;
  byte *lParam;
  int iVar7;
  int metric;
  undefined4 uVar9;
  undefined2 uVar12;
  byte *pbVar13;
  int unaff_EBX;
  byte *pbVar14;
  undefined4 *unaff_ESI;
  byte *pbVar15;
  byte *unaff_EDI;
  byte *lParam2;
  bool bVar17;
  bool bVar18;
  byte *in_stack_ffffbd6b;
  byte *pbStack_4291;
  undefined4 uStack_4289;
  byte *pbStack_4285;
  byte *decoratedFrame;
  byte *pbStack_427d;
  byte *pbStack_4279;
  char cStack_4275;
  char *pcStack_4271;
  undefined1 *puStack_426d;
  byte *pbStack_4261;
  byte *pbStack_425d;
  char cStack_4259;
  char *pcStack_4255;
  char acStack_4224 [16928];
  
  *self = *self + (char)self;
  lParam2 = (byte *)((int)self * 2);
  bVar2 = *lParam2;
  *lParam2 = *lParam2 + param_3;
  lParam2 = (byte *)&uStack_4289;
  uVar12 = (undefined2)param_2;
  out(*unaff_ESI,uVar12);
  out(*(undefined1 *)(unaff_ESI + 1),uVar12);
  if (unaff_EBX == -1) {
code_r0x0042756d:
    lParam = pbStack_4279;
    pbVar14 = pbStack_4285;
    if (unaff_EDI != (byte *)0xffffffff) {
      uStack_4289 = (byte *)&uStack_4289;
      OWL::TDecoratedFrame::SetupWindow((int *)decoratedFrame);
      lParam = *(byte **)(*(int *)(decoratedFrame + 0x90) + 0x168);
      pbVar14 = decoratedFrame;
    }
    if (lParam != (byte *)0x0) {
code_r0x00427598:
      FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,1,(LPARAM)lParam);
    }
    lParam2 = *(byte **)(*(int *)(pbVar14 + 0x90) + 0x16c);
    if (lParam2 == (byte *)0x0) goto LAB_004275d0;
  }
  else {
    out(*(undefined4 *)((int)unaff_ESI + 5),uVar12);
    bVar3 = in(uVar12);
    *unaff_EDI = bVar3;
    bVar17 = param_2 == -1;
    pcVar5 = pcStack_4271;
    pbVar13 = pbStack_4279;
    pbVar14 = pbStack_427d;
    pbVar15 = uStack_4289;
    if (!CARRY1(bVar2,param_3)) {
      cVar4 = (char)pcStack_4271 - *pcStack_4271;
      pcVar5 = (char *)CONCAT31((int3)((uint)pcStack_4271 >> 8),cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      pcStack_4271 = (char *)0x54004285;
      bVar18 = (int)&uStack_4289 + 1 < 0;
      bVar17 = &GHIDRA_STACK(0x00000000) == (undefined1 *)0x4288;
      lParam2 = (byte *)0x54004285;
      unaff_EDI = lParam2;
      if (!bVar17) {
        pbVar15 = puStack_426d + 1;
        out(*puStack_426d,(short)pbStack_425d);
        pcVar5 = pcStack_4255;
        pbVar13 = pbStack_425d;
        pbVar14 = pbStack_4261;
        cStack_4275 = cStack_4259;
        goto code_r0x0042751c;
      }
code_r0x0042756b:
      if (bVar18) {
        pbVar14 = pbStack_4261 + 1;
        goto LAB_004275d0;
      }
      goto code_r0x0042756d;
    }
code_r0x0042751c:
    uVar10 = (undefined3)((uint)pbStack_4279 >> 8);
    if (!bVar17) {
      uVar11 = (undefined3)((uint)pcVar5 >> 8);
      cVar4 = (char)pcVar5 - *pcVar5;
      pcVar5 = (char *)CONCAT31(uVar11,cVar4);
      *pcVar5 = *pcVar5 + cVar4;
      *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
      lParam = (byte *)(CONCAT31(uVar11,cVar4) | 0x85);
      pbVar1 = pbVar13 + (int)lParam * 2 + 0x76;
      *pbVar1 = *pbVar1 + (char)(pbVar13 + 1);
      if (*pbVar1 != 0) {
        uVar12 = SUB42(pbVar13 + 1,0);
        out(*(undefined4 *)pbVar15,uVar12);
        out(pbVar15[4],uVar12);
        if (lParam2 != (byte *)0xffffffff) {
          pcVar5 = (char *)CONCAT31(uVar10,(char)pbStack_4279 - *pbStack_4279);
          pbVar13 = decoratedFrame;
          pbVar14 = pbStack_4285;
          pbVar15 = pbStack_4291;
          cStack_4275 = (char)pbStack_427d;
          goto code_r0x0042753e;
        }
        pbStack_4279[4] = pbStack_4279[4] + (char)decoratedFrame;
        lParam2 = pbStack_4279;
        goto code_r0x00427561;
      }
      *(int *)lParam = *(int *)lParam + 1;
      *lParam = *lParam | (byte)lParam;
      goto code_r0x00427598;
    }
code_r0x0042753e:
    *pcVar5 = *pcVar5 + (char)pcVar5;
    *(char *)((int)pcVar5 * 2) = *(char *)((int)pcVar5 * 2) + cStack_4275;
    bVar2 = *pbVar15;
    lParam2 = (byte *)CONCAT31((int3)((uint)pcVar5 >> 8),bVar2);
    if ((*pbVar13 & bVar2) != 0) {
      cVar4 = (char)pbStack_4279 - *pbStack_4279;
      lParam2 = (byte *)CONCAT31(uVar10,cVar4);
      *lParam2 = *lParam2 + cVar4;
      in_stack_ffffbd6b = pbVar14;
code_r0x00427561:
      *(char *)((int)lParam2 * 2) = *(char *)((int)lParam2 * 2) + (char)pbStack_427d;
      in_stack_ffffbd6b[0x42] = in_stack_ffffbd6b[0x42] ^ (byte)((uint)pbStack_4285 >> 8);
      pcVar5 = acStack_4224 + (int)decoratedFrame * 2;
      *pcVar5 = *pcVar5 + (char)decoratedFrame;
      bVar18 = *pcVar5 < '\0';
      pbStack_4261 = pbStack_4285;
      unaff_EDI = in_stack_ffffbd6b;
      goto code_r0x0042756b;
    }
    *lParam2 = *lParam2;
    pbVar14[-0x17affbbd] = pbVar14[-0x17affbbd] + cStack_4275;
    *lParam2 = *lParam2 | bVar2;
    lParam2 = pbVar14;
  }
  FUN_004a76a8(*(int *)(pbVar14 + 4),0x80,0,(LPARAM)lParam2);
LAB_004275d0:
  (**(code **)(**(int **)(pbVar14 + 0x54) + 4))();
  iVar7 = *(int *)(*(int *)(pbVar14 + 0x50) + 8);
  (**(code **)(**(int **)(pbVar14 + 0x54) + 0x24))();
  *(undefined4 *)(iVar7 + 0xc) = 1;
  *(undefined4 *)(iVar7 + 8) = 1;
  iVar7 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x48))();
  *(int *)(pbVar14 + 0x68) = iVar7;
  (**(code **)(*(int *)(iVar7 + 8) + 0x10))();
  pbVar14[0x6c] = 0;
  pbVar14[0x6d] = 0;
  pbVar14[0x6e] = 0;
  pbVar14[0x6f] = 0;
  iVar7 = GetSystemMetrics(2);
  metric = GetSystemMetrics(3);
  iVar7 = iVar7 + metric;
  if (iVar7 < 0) {
    iVar7 = iVar7 + 3;
  }
  *(int *)(pbVar14 + 0x9c) = iVar7 >> 2;
  lParam2 = pbVar14;
  uVar9 = (**(code **)(*(int *)(pbVar14 + 0x35) + 0x44))();
  (**(code **)(*(int *)(pbVar14 + 0x35) + 0x50))(uVar9,*(int *)(pbVar14 + 0x35),lParam2,pbVar14);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427578  PrintPreviewWindow::SetupWindow   (297 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from PrintPreviewWindow's OWL::TWindow subobject vtable at 0x004f1f74 (through the this-adjusting thunk at 0x00428862); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PrintPreviewWindow::vf9 [rtti:vtable]
void __cdecl PrintPreviewWindow::SetupWindow(int *self)

{
  int iVar1;
  int metric;
  undefined4 uVar3;
  int *self2;
  
  OWL::TDecoratedFrame::SetupWindow(self);
  if (*(int *)(self[0x24] + 0x168) != 0) {
    FUN_004a76a8(self[1],0x80,1,*(int *)(self[0x24] + 0x168));
  }
  if (*(int *)(self[0x24] + 0x16c) != 0) {
    FUN_004a76a8(self[1],0x80,0,*(int *)(self[0x24] + 0x16c));
  }
  (**(code **)(*(int *)self[0x15] + 4))();
  iVar1 = *(int *)(self[0x14] + 8);
  (**(code **)(*(int *)self[0x15] + 0x24))();
  *(undefined4 *)(iVar1 + 0xc) = 1;
  *(undefined4 *)(iVar1 + 8) = 1;
  iVar1 = (**(code **)(*(int *)((int)self + 0x35) + 0x48))();
  self[0x1a] = iVar1;
  (**(code **)(*(int *)(iVar1 + 8) + 0x10))();
  self[0x1b] = 0;
  iVar1 = GetSystemMetrics(2);
  metric = GetSystemMetrics(3);
  iVar1 = iVar1 + metric;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 3;
  }
  self[0x27] = iVar1 >> 2;
  self2 = self;
  uVar3 = (**(code **)(*(int *)((int)self + 0x35) + 0x44))();
  (**(code **)(*(int *)((int)self + 0x35) + 0x50))
            (uVar3,*(int *)((int)self + 0x35),self2,self);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004276a4  PrintPreviewWindow::Create   (58 bytes)   [rtti:vtable virtual slot 4]
//   override of OWL::TWindow vtable slot 4, from PrintPreviewWindow's OWL::TWindow subobject vtable at 0x004f1f74 (through the this-adjusting thunk at 0x0042890a); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PrintPreviewWindow::vf15 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindow::Create(int self)

{
  int iVar1;
  undefined4 uVar2;
  int window;
  
  window = *(int *)(self + 4);
  uVar2 = OWL::TWindow::Create(window);
  if (*(int *)(self + 0xa0) != 0) {
    iVar1 = *(int *)(self + 4);
    (**(code **)(*(int *)(iVar1 + 8) + 100))(iVar1,*(int *)(iVar1 + 8),window,iVar1,3);
    *(undefined4 *)(self + 0xa0) = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004276e0  PrintPreviewWindow::PreProcessMsg   (153 bytes, 2 ranges)   [rtti:vtable virtual slot 10]
//   override of OWL::TWindow vtable slot 10, from PrintPreviewWindow's OWL::TWindow subobject vtable at 0x004f1f74 (through the this-adjusting thunk at 0x004288e0); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PrintPreviewWindow::vf3 [rtti:vtable]
undefined4 __cdecl PrintPreviewWindow::PreProcessMsg(int *self,LPMSG lParam2)

{
  undefined4 uVar1;
  
  if (lParam2->message == 0x100) {
    switch(lParam2->wParam) {
    case 0x1b:
      uVar1 = PrintPreviewWindow::GetPageCount((int)self);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x21:
    case 0x25:
    case 0x26:
      uVar1 = PrintPreviewWindow::Cmd5720((int)self);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x22:
    case 0x27:
    case 0x28:
      uVar1 = PrintPreviewWindow::Cmd5730((int)self);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x23:
      uVar1 = PrintPreviewWindow::PreviousPage((int)self);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    case 0x24:
      uVar1 = PrintPreviewWindow::NextPage((int)self);
      return CONCAT31((int3)((uint)uVar1 >> 8),1);
    }
  }
  if (lParam2->message == 0x20a) {
    lParam2->message = 0x115;
    lParam2->wParam = (uint)((int)lParam2->wParam < 0);
    lParam2->lParam = 0;
  }
  uVar1 = OWL::TDecoratedFrame::PreProcessMsg(self,lParam2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004277a0  PrintPreviewWindow::Destroy   (719 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from PrintPreviewWindow's OWL::TWindow subobject vtable at 0x004f1f74 (through the this-adjusting thunk at 0x004288f5); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PrintPreviewWindow::vf16 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl PrintPreviewWindow::Destroy(int self,undefined4 param_2)

{
  BOOL ok;
  int *strRep;
  undefined4 *sehChainHead;
  int create;
  int tryLocalMachine;
  uint buf [66];
  undefined4 unused;
  WINDOWPLACEMENT placement;
  undefined1 *unused2;
  undefined4 unused3;
  int unused4;
  undefined1 *unused5;
  undefined4 unused6;
  int unused7;
  undefined1 *unused8;
  undefined4 unused9;
  int unused10;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 value [8];
  int str;
  undefined1 local_2c [8];
  int str2;
  int persist [2];
  undefined1 local_14 [8];
  int str3;
  
  __InitExceptBlockLDTC(0x4f1e44);
  placement.length = 0x2c;
  ok = GetWindowPlacement(*(HWND *)(*(int *)(self + 4) + 0xc),&placement);
  if (ok == 0) goto LAB_00427a4e;
  ehContext = 0x14;
  FindWordInString((int)local_14,self + 0x70,(uint *)"Position");
  ehDtorCount = ehDtorCount + 1;
  ehContext = 0x20;
  tryLocalMachine = 0;
  create = 1;
  GetProfileKeyPath((int)local_2c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_2c,create,tryLocalMachine);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_004278bb;
    }
    unused10 = str2 + -0xc;
    operator_delete();
    unused9 = 0;
    unused8 = local_2c;
    str2 = 0;
    unused = 0;
  }
LAB_004278bb:
  ehContext = 8;
  IsZoomed(*(HWND *)(*(int *)(self + 4) + 0xc));
  FormatWindowPlacement((undefined1 *)buf);
  ehContext = 0x38;
  std::string::string_from_cstr((int)value,buf);
  ehDtorCount = ehDtorCount + 1;
  Persist::SetString((int)persist,(int)local_14,(int)value);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      strRep = (int *)(str + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_004279b1;
    }
    unused7 = str + -0xc;
    operator_delete();
    unused6 = 0;
    unused5 = value;
    str = 0;
  }
LAB_004279b1:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else if (strRep == &g_nullStringRep) {
        create = 1;
      }
      else {
        *strRep = *strRep + -1;
        create = *strRep + 1;
      }
      if (create != 0) goto LAB_00427a48;
    }
    unused4 = str3 + -0xc;
    operator_delete();
    unused3 = 0;
    unused2 = local_14;
    str3 = 0;
  }
LAB_00427a48:
  ehContext = 0;
LAB_00427a4e:
  OWL::TWindow::Destroy(*(int *)(self + 4),param_2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427a70  PrintPreviewWindow::EvCommandEnable   (88 bytes)   [rtti:vtable virtual slot 20]
//   override of OWL::TWindow vtable slot 20, from PrintPreviewWindow's OWL::TWindow subobject vtable at 0x004f1f74 (through the this-adjusting thunk at 0x00428877); slot name identified from OWL::TWindow's own implementation of that slot
//   also: PrintPreviewWindow::vf13 [rtti:vtable]
void __cdecl PrintPreviewWindow::EvCommandEnable(undefined4 *self,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_2;
  }
  puVar2 = FUN_004dd744((int)param_2,iVar1,(int *)&DAT_00427ac8,(int *)&DAT_00427b08,0);
  if ((puVar2 == (undefined4 *)0x0) || (param_2[1] != 0x163a)) {
    OWL::TDecoratedFrame::EvCommandEnable(self,param_2);
  }
  else {
    (**(code **)(*param_2 + 4))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427b54  PrintPreviewWindow::vf18   (102 bytes)   [rtti:vtable virtual slot 18; function defined from vtable-slot]
int * __cdecl PrintPreviewWindow::vf18(undefined4 self,undefined4 param_2,undefined4 param_3,undefined4 param_4, undefined4 *param_5,undefined4 param_6)

{
  int *previewPage;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f1eb0);
  previewPage = (int *)operator_new();
  if (previewPage != (int *)0x0) {
    OWL::TPreviewPage::TPreviewPage(previewPage,0,param_2,param_3,param_4,param_5,param_6);
  }
  *sehChainHead = sehPrevFrame;
  return previewPage;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427bd8  PrintPreviewWindow::vf17   (599 bytes)   [rtti:vtable virtual slot 17]
void __cdecl PrintPreviewWindow::vf17(int self)

{
  undefined4 local_5c;
  byte local_58;
  byte local_57;
  byte local_56;
  int unused;
  undefined4 unused2;
  byte local_4d;
  byte local_4c;
  byte local_4b;
  undefined4 unused3;
  undefined4 unused4;
  byte local_42;
  byte local_41;
  byte local_40;
  undefined4 unused5;
  undefined4 unused6;
  byte local_37;
  byte local_36;
  byte local_35;
  undefined4 unused7;
  undefined4 local_30;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  int local_29;
  undefined4 unused8;
  byte local_21;
  byte local_20;
  byte local_1f;
  int unused9;
  undefined4 unused10;
  byte local_16;
  byte local_15;
  byte local_14;
  int unused11;
  undefined4 unused12;
  byte local_b;
  byte local_a;
  byte local_9;
  int local_8;
  
  FUN_00495f90(&local_30);
  FUN_00496088((int)&local_30,'\0');
  local_29 = *(int *)(self + 0x9c);
  local_30 = 0;
  local_2c = local_2c & 0xf0;
  local_2b = local_2b & 0xf0 | 3;
  local_2a = local_2a & 0xf0;
  unused8 = 0;
  local_21 = local_21 & 0xf0 | 1;
  local_20 = local_20 & 0xf0 | 3;
  local_1f = local_1f & 0xf0 | 1;
  local_8 = *(int *)(self + 0x5c);
  if (*(int *)(self + 0x60) < local_8) {
    unused12 = 0;
    local_b = local_b & 0xf0 | 3;
    local_a = local_a & 0xf0 | 2;
    local_9 = local_9 & 0xf0 | 3;
    unused11 = (local_8 * 0x5f) / *(int *)(self + 0x60);
    unused10 = *(undefined4 *)(self + 0x68);
    local_16 = local_16 & 0xf0 | 5;
    local_15 = local_15 & 0xf0 | 1;
    local_14 = local_14 & 0xf0 | 6;
    local_8 = local_29;
  }
  else {
    local_8 = (*(int *)(self + 0x60) * 0x5f) / local_8;
    unused12 = *(undefined4 *)(self + 0x68);
    local_b = local_b & 0xf0 | 6;
    local_a = local_a & 0xf0 | 1;
    local_9 = local_9 & 0xf0 | 5;
    unused10 = 0;
    local_16 = local_16 & 0xf0 | 2;
    local_15 = local_15 & 0xf0 | 2;
    local_14 = local_14 & 0xf0 | 2;
    unused11 = local_29;
  }
  unused9 = local_29;
  FUN_00494fc8(*(int *)(self + 0x94),*(int *)(self + 0x68),&local_30);
  if (*(int *)(self + 0x6c) != 0) {
    FUN_00495f90(&local_5c);
    local_5c = *(undefined4 *)(self + 0x68);
    unused = *(int *)(self + 0x9c) * 2;
    local_58 = local_58 & 0xf0;
    local_57 = local_57 & 0xf0 | 3;
    local_56 = local_56 & 0xf0 | 2;
    local_4d = local_4d & 0xf0 | 1;
    local_4c = local_4c & 0xf0 | 4;
    local_4b = local_4b & 0xf0 | 1;
    unused3 = 0;
    local_42 = local_42 & 0xf0 | 5;
    local_41 = local_41 & 0xf0 | 4;
    local_40 = local_40 & 0xf0 | 5;
    unused5 = 0;
    local_37 = local_37 & 0xf0 | 3;
    local_36 = local_36 & 0xf0 | 4;
    local_35 = local_35 & 0xf0 | 3;
    unused7 = 0;
    unused2 = local_5c;
    unused4 = local_5c;
    unused6 = local_5c;
    FUN_00494fc8(*(int *)(self + 0x94),*(int *)(self + 0x6c),&local_5c);
  }
  (**(code **)(*(int *)(*(int *)(self + 0x94) + 0xc) + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427e30  PrintPreviewWindow::vf20   (179 bytes)   [rtti:vtable virtual slot 20]
void __cdecl PrintPreviewWindow::vf20(int self)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint local_68 [25];
  
  piVar1 = (int *)FUN_00490dd0(*(int *)(self + 100) + 4,0x1680);
  if (piVar1 == (int *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
  }
  puVar2 = FUN_004dd744((int)piVar1,iVar3,(int *)&DAT_00427ee4,(int *)&DAT_00427f30,0);
  if (puVar2 != (undefined4 *)0x0) {
    if ((*(int *)(self + 0x6c) == 0) || (*(int *)(*(int *)(self + 0x6c) + 0x86) == 0)) {
      sprintf((undefined1 *)local_68,(byte *)"Page %d of %d");
    }
    else {
      sprintf((undefined1 *)local_68,(byte *)"Page %d - %d");
    }
    FUN_0049ed44((int)puVar2,local_68);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427f8c  PrintPreviewWindow::EvHelp   (39 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   WM_HELP
void __stdcall PrintPreviewWindow::EvHelp(void)

{
  ShowHelpContents();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00427fb4  PrintPreviewWindow::vf21   (178 bytes)   [rtti:vtable virtual slot 21]
void __cdecl PrintPreviewWindow::vf21(undefined4 *self,WPARAM wParam,int *size)

{
  int *myScroller;
  
  myScroller = FUN_004dd744((int)*(int **)(*(int *)self[0x25] + 0x44),
                        **(int **)(*(int *)self[0x25] + 0x44),(int *)&DAT_00428068,
                        (int *)&DAT_004280c0,1);
  MyScroller::SetAutoScroll((int)myScroller,0);
  if (wParam != 1) {
    (**(code **)(*myScroller + 0x14))();
    (**(code **)(*myScroller + 0x2c))();
  }
  OWL::TDecoratedFrame::EvSize(self,wParam,size);
  MyScroller::SetAutoScroll((int)myScroller,1);
  if ((wParam != 1) && (self[0x1a] != 0)) {
    (**(code **)(*myScroller + 0x14))();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428114  PrintPreviewWindow::CeCmd5690   (18 bytes)   [owl:response-table message-handler; function defined from response-handler]
//   EV_COMMAND_ENABLE(5690)
void __cdecl PrintPreviewWindow::CeCmd5690(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428128  PrintPreviewWindow::CeCmd5720   (36 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(5720)
void __cdecl PrintPreviewWindow::CeCmd5720(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042814c  PrintPreviewWindow::CeCmd5730   (38 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(5730)
void __cdecl PrintPreviewWindow::CeCmd5730(undefined4 self,undefined4 *commandEnabler)

{
  (**(code **)*commandEnabler)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428174  PrintPreviewWindow::Cmd5690   (306 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5690)
void __cdecl PrintPreviewWindow::Cmd5690(int self)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  char cVar4;
  int i;
  
  iVar1 = *(int *)(*(int *)(self + 0x50) + 8);
  (**(code **)(**(int **)(self + 0x54) + 4))();
  (**(code **)(**(int **)(self + 0x54) + 0xc))();
  puVar2 = *(undefined4 **)(self + 0x58);
  *(undefined4 *)((int)puVar2 + 0x25) = *(undefined4 *)(*(int *)(self + 0x54) + 4);
  *(undefined4 *)((int)puVar2 + 0x29) = 0;
  *(undefined4 *)((int)puVar2 + 0x2d) = 0;
  StartDocA((HDC)*puVar2,(DOCINFOA *)((int)puVar2 + 0x21));
  (**(code **)(**(int **)(self + 0x54) + 0x10))();
  for (i = *(int *)(iVar1 + 8); i <= *(int *)(iVar1 + 8); i = i + 1) {
    cVar4 = (**(code **)(**(int **)(self + 0x54) + 0x14))();
    if (cVar4 == '\0') break;
    StartPage((HDC)**(undefined4 **)(self + 0x58));
    (**(code **)(**(int **)(self + 0x54) + 0x18))();
    piVar3 = *(int **)(self + 0x58);
    FUN_0048db40(piVar3);
    EndPage((HDC)*piVar3);
  }
  (**(code **)(**(int **)(self + 0x54) + 0x1c))();
  EndDoc((HDC)**(undefined4 **)(self + 0x58));
  (**(code **)(**(int **)(self + 0x54) + 0x20))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004282a8  PrintPreviewWindow::Cmd5720   (76 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5720)
undefined4 __cdecl PrintPreviewWindow::Cmd5720(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(self + 0x50) + 8);
  if (*(int *)(iVar1 + 0x10) < *(int *)(iVar1 + 8)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + -1;
    FUN_0049c744(*(int *)(self + 0x68),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(self + 0x6c) != 0) {
      FUN_0049c744(*(int *)(self + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
  }
  uVar2 = (**(code **)(*(int *)(self + 0x35) + 0x50))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004282f4  PrintPreviewWindow::Cmd5730   (76 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(5730)
undefined4 __cdecl PrintPreviewWindow::Cmd5730(int self)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(self + 0x50) + 8);
  if (*(int *)(iVar1 + 0xc) < *(int *)(iVar1 + 0x14)) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
    FUN_0049c744(*(int *)(self + 0x68),*(undefined4 *)(iVar1 + 8));
    if (*(int *)(self + 0x6c) != 0) {
      FUN_0049c744(*(int *)(self + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
  }
  uVar2 = (**(code **)(*(int *)(self + 0x35) + 0x50))();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00428340  PrintPreviewWindow::GetPageCount   (28 bytes)   [analysis]
//   number of pages (+0x94)
undefined4 __cdecl PrintPreviewWindow::GetPageCount(int self)

{
  undefined4 uVar1;
  
  uVar1 = (**(code **)(*(int *)(**(int **)(self + 0x94) + 8) + 0x24))();
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042835c  PrintPreviewWindow::NextPage   (76 bytes)   [analysis]
//   shows the next page(s) if any
int __cdecl PrintPreviewWindow::NextPage(int self)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(self + 0x50);
  iVar1 = *(int *)(iVar2 + 8);
  if (1 < *(int *)(iVar1 + 8)) {
    *(undefined4 *)(iVar1 + 0xc) = 1;
    *(undefined4 *)(iVar1 + 8) = 1;
    FUN_0049c744(*(int *)(self + 0x68),1);
    if (*(int *)(self + 0x6c) != 0) {
      FUN_0049c744(*(int *)(self + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = (**(code **)(*(int *)(self + 0x35) + 0x50))();
  }
  return iVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004283a8  PrintPreviewWindow::PreviousPage   (75 bytes)   [analysis]
//   shows the previous page(s) if any
int __cdecl PrintPreviewWindow::PreviousPage(int self)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(*(int *)(self + 0x50) + 8);
  iVar2 = *(int *)(iVar1 + 0x14);
  if (*(int *)(iVar1 + 0xc) < iVar2) {
    *(int *)(iVar1 + 0xc) = iVar2;
    *(int *)(iVar1 + 8) = iVar2;
    FUN_0049c744(*(int *)(self + 0x68),iVar2);
    if (*(int *)(self + 0x6c) != 0) {
      FUN_0049c744(*(int *)(self + 0x6c),*(undefined4 *)(iVar1 + 0xc));
    }
    iVar2 = (**(code **)(*(int *)(self + 0x35) + 0x50))();
  }
  return iVar2;
}

} // namespace tea
