// TEA.exe — application module "DefinitionViewFrame"
// 9 functions, 0x004723b0..0x00473650. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004723b0  DefinitionViewFrame::DefinitionViewFrame   (2836 bytes)   [analysis]
//   constructor: the "DefinitionFrame" window with its DefinitionViewWindows client, toolbar gadgets and grip bar; title " - %s [%d]"
/* WARNING: Removing unreachable block (ram,0x00472632) */
/* WARNING: Removing unreachable block (ram,0x00472c9d) */
int * __cdecl DefinitionViewFrame::DefinitionViewFrame(int *self,int vbasesBuilt,undefined4 parent,int title,undefined4 module,int number)

{
  BOOL ok;
  uint uVar2;
  int tryLocalMachine;
  int *piVar4;
  undefined4 *sehChainHead;
  undefined1 uVar5;
  int create;
  undefined1 *out;
  int param;
  int local_110;
  int local_10c;
  int local_108;
  int unused;
  undefined1 *unused2;
  undefined4 unused3;
  char *unused4;
  char *unused5;
  int bottom;
  int right;
  int top;
  int left;
  int showCmd;
  undefined1 *unused6;
  undefined4 unused7;
  int unused8;
  int unused9;
  undefined1 *unused10;
  undefined4 unused11;
  int unused12;
  int unused13;
  int local_a8;
  int metric;
  int *unused14;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  undefined1 valueName [8];
  int str;
  undefined1 local_68 [8];
  int str2;
  undefined1 newStr [8];
  char *text;
  int persist [2];
  int *buttonGadget;
  int *separatorGadget;
  int *buttonGadget2;
  int *separatorGadget2;
  int *buttonGadget3;
  int *separatorGadget3;
  int *buttonGadget4;
  int *separatorGadget4;
  int *buttonGadget5;
  int *separatorGadget5;
  int *buttonGadget6;
  uint *local_14;
  int *controlBar;
  int *gripBar;
  int *definitionViewWindows;
  
  __InitExceptBlockLDTC(0x4febe0);
  ehContext = 8;
  if (vbasesBuilt == 0) {
    *self = (int)self + 0x132;
    *(int **)((int)self + 0x132) = self + 0x2a;
    self[0x2a] = (int)(self + 0x27);
    self[0x2b] = (int)(self + 0x28);
    *(int **)((int)self + 0x136) = self + 0x27;
    *(int **)((int)self + 0x13a) = self + 0x28;
    self[1] = (int)(self + 0x2a);
    self[2] = (int)(self + 0x27);
    self[3] = (int)(self + 0x28);
    self[0x26] = 0;
    self[0x29] = 0;
    *(undefined4 *)((int)self + 0x12e) = 0;
    self[0x27] = (int)&OWL::TEventHandler::vftable;
    self[0x28] = (int)&OWL::TStreamableBase::vftable;
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::TWindow_4a4fbc(self + 0x2a,1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::TFrameWindow_4bda48((int *)((int)self + 0x132),1);
    ehDtorCount = ehDtorCount + 1;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
  }
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x51;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x51;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x51;
  create = 0;
  uVar5 = 1;
  definitionViewWindows = (int *)operator_new();
  if (definitionViewWindows != (int *)0x0) {
    ehContext = 0x20;
    DefinitionViewWindows::DefinitionViewWindows(definitionViewWindows,0,title,number);
    ehContext = 0x14;
  }
  if (definitionViewWindows == (int *)0x0) {
    tryLocalMachine = 0;
  }
  else {
    tryLocalMachine = *definitionViewWindows;
  }
  FUN_004ae248(self,1,parent,(uint *)"DefinitionFrame",tryLocalMachine,uVar5,create);
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x51;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x51;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x51;
  *(undefined ***)((int)self + 0x35) = &DefinitionViewFrame::vftable;
  self[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)self[2] = &PTR_LAB_004fef50;
  *(undefined ***)self[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(self[1] + 8) = &DefinitionViewFrame::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &DefinitionViewFrame::vftable_TFrameWindow;
  self[0x12] = title;
  unused14 = self + 0x22;
  self[0x24] = 0;
  ehContext = 8;
  self[0x24] = (int)&g_emptyStringData;
  unused = self[0x24];
  ehDtorCount = ehDtorCount + 3;
  gripBar = (int *)operator_new();
  if (gripBar != (int *)0x0) {
    ehContext = 0x44;
    GripBar::GripBar(gripBar,0,self[1],3,0x40);
    ehContext = 0x38;
  }
  self[0x13] = (int)gripBar;
  (**(code **)(*(int *)((int)self + 0x35) + 4))();
  controlBar = (int *)operator_new();
  if (controlBar != (int *)0x0) {
    ehContext = 0x5c;
    create = 0;
    local_14 = (uint *)operator_new();
    if (local_14 != (uint *)0x0) {
      ehContext = 0x68;
      FUN_00490fa8(local_14,10,'\0',0);
      ehContext = 0x5c;
    }
    OWL::TControlBar::TControlBar(controlBar,0,self[1],0,local_14,create);
  }
  piVar4 = controlBar;
  ehContext = 8;
  *(undefined1 *)((int)controlBar + 0x36) = 2;
  metric = GetSystemMetrics(7);
  local_a8 = metric << 3;
  buttonGadget6 = (int *)operator_new();
  if (buttonGadget6 != (int *)0x0) {
    ehContext = 0x80;
    OWL::TButtonGadget::TButtonGadget(buttonGadget6,(uint *)0x31c4,0x31c4,'\0',1,0,'\0');
    ehContext = 0x74;
  }
  (**(code **)(piVar4[6] + 0x14))();
  separatorGadget5 = (int *)operator_new();
  if (separatorGadget5 != (int *)0x0) {
    ehContext = 0x98;
    OWL::TSeparatorGadget::TSeparatorGadget(separatorGadget5,metric,0,1);
    ehContext = 0x8c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  buttonGadget5 = (int *)operator_new();
  if (buttonGadget5 != (int *)0x0) {
    ehContext = 0xb0;
    OWL::TButtonGadget::TButtonGadget(buttonGadget5,(uint *)0x31ba,0x31ba,'\0',1,0,'\0');
    ehContext = 0xa4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  separatorGadget4 = (int *)operator_new();
  if (separatorGadget4 != (int *)0x0) {
    ehContext = 200;
    OWL::TSeparatorGadget::TSeparatorGadget(separatorGadget4,local_a8,0,1);
    ehContext = 0xbc;
  }
  (**(code **)(piVar4[6] + 0x14))();
  buttonGadget4 = (int *)operator_new();
  if (buttonGadget4 != (int *)0x0) {
    ehContext = 0xe0;
    OWL::TButtonGadget::TButtonGadget(buttonGadget4,(uint *)0x1d42,0x1d42,'\0',1,0,'\0');
    ehContext = 0xd4;
  }
  (**(code **)(piVar4[6] + 0x14))();
  separatorGadget3 = (int *)operator_new();
  if (separatorGadget3 != (int *)0x0) {
    ehContext = 0xf8;
    OWL::TSeparatorGadget::TSeparatorGadget(separatorGadget3,metric,0,1);
    ehContext = 0xec;
  }
  (**(code **)(piVar4[6] + 0x14))();
  buttonGadget3 = (int *)operator_new();
  if (buttonGadget3 != (int *)0x0) {
    ehContext = 0x110;
    OWL::TButtonGadget::TButtonGadget(buttonGadget3,(uint *)0x31a6,0x31a6,'\0',1,0,'\0');
    ehContext = 0x104;
  }
  (**(code **)(piVar4[6] + 0x14))();
  separatorGadget2 = (int *)operator_new();
  if (separatorGadget2 != (int *)0x0) {
    ehContext = 0x128;
    OWL::TSeparatorGadget::TSeparatorGadget(separatorGadget2,local_a8,0,1);
    ehContext = 0x11c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  buttonGadget2 = (int *)operator_new();
  if (buttonGadget2 != (int *)0x0) {
    ehContext = 0x140;
    OWL::TButtonGadget::TButtonGadget(buttonGadget2,(uint *)0x1658,0x316a,'\0',1,0,'\0');
    ehContext = 0x134;
  }
  (**(code **)(piVar4[6] + 0x14))();
  separatorGadget = (int *)operator_new();
  if (separatorGadget != (int *)0x0) {
    ehContext = 0x158;
    OWL::TSeparatorGadget::TSeparatorGadget(separatorGadget,metric,0,1);
    ehContext = 0x14c;
  }
  (**(code **)(piVar4[6] + 0x14))();
  buttonGadget = (int *)operator_new();
  if (buttonGadget != (int *)0x0) {
    ehContext = 0x170;
    OWL::TButtonGadget::TButtonGadget(buttonGadget,(uint *)0x1662,0x3174,'\0',1,0,'\0');
    ehContext = 0x164;
  }
  (**(code **)(piVar4[6] + 0x14))();
  (**(code **)(*(int *)((int)self + 0x35) + 4))();
  sprintf((undefined1 *)(self + 0x14),(byte *)" - %s [%d]");
  std::string::assign_cstr((int)(self + 0x22),(uint *)(self + 0x14));
  sprintf((undefined1 *)(self + 0x14),(byte *)"%s%d%s");
  param = 0;
  local_110 = 0;
  local_10c = 0;
  local_108 = 0;
  ehContext = 8;
  ok = SystemParametersInfoA(0x30,0,&param,0);
  if (ok == 0) goto LAB_00472eb2;
  uVar2 = local_10c - param >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_10c - param & 1U) != 0);
  }
  create = self[1];
  *(uint *)(create + 0x28) = uVar2;
  tryLocalMachine = (int)uVar2 >> 1;
  if (tryLocalMachine < 0) {
    tryLocalMachine = tryLocalMachine + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(create + 0x20) = tryLocalMachine + param;
  uVar2 = local_108 - local_110 >> 1;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + ((local_108 - local_110 & 1U) != 0);
  }
  *(uint *)(create + 0x2c) = uVar2;
  tryLocalMachine = (int)uVar2 >> 1;
  if (tryLocalMachine < 0) {
    tryLocalMachine = tryLocalMachine + (uint)((uVar2 & 1) != 0);
  }
  *(int *)(create + 0x24) = tryLocalMachine + local_110;
  ehContext = 0x188;
  tryLocalMachine = 0;
  create = 0;
  GetProfileKeyPath((int)local_68);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_68,create,tryLocalMachine);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      piVar4 = (int *)(str2 + -0xc);
      if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        create = *piVar4 + 1;
      }
      if (create != 0) goto LAB_00472c6c;
    }
    unused13 = str2 + -0xc;
    unused12 = str2 + -0xc;
    operator_delete();
    unused11 = 0;
    unused10 = local_68;
    str2 = 0;
  }
LAB_00472c6c:
  text = &g_emptyStringData;
  ehDtorCount = ehDtorCount + 1;
  out = newStr;
  ehContext = 0x1b8;
  std::string::string_from_cstr((int)valueName,(uint *)(self + 0x14));
  ehDtorCount = ehDtorCount + 1;
  Persist::QueryString((int)persist,(int)valueName,(int)out);
  ehDtorCount = ehDtorCount + -1;
  if (str != 0) {
    if (*(int *)(str + -0xc) != -1) {
      piVar4 = (int *)(str + -0xc);
      if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        create = *piVar4 + 1;
      }
      if (create != 0) goto LAB_00472d75;
    }
    unused9 = str + -0xc;
    unused8 = str + -0xc;
    operator_delete();
    unused7 = 0;
    unused6 = valueName;
    str = 0;
  }
LAB_00472d75:
  ehContext = 0x17c;
  if (*(int *)(text + -4) != 0) {
    ParseWindowPlacement(text,&showCmd,&left,&top,&right,&bottom);
    create = FitRectToMonitor(left,top,right,bottom);
    if (create != 0) {
      create = self[1];
      *(int *)(create + 0x20) = left;
      *(int *)(create + 0x24) = top;
      *(int *)(create + 0x28) = right;
      *(int *)(create + 0x2c) = bottom;
    }
  }
  ehDtorCount = ehDtorCount + -1;
  if (text != (char *)0x0) {
    if (*(int *)(text + -0xc) != -1) {
      piVar4 = (int *)(text + -0xc);
      if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else if (piVar4 == &g_nullStringRep) {
        create = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        create = *piVar4 + 1;
      }
      if (create != 0) goto LAB_00472e9b;
    }
    unused5 = text + -0xc;
    unused4 = text + -0xc;
    operator_delete();
    unused3 = 0;
    unused2 = newStr;
    text = (char *)0x0;
  }
LAB_00472e9b:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
LAB_00472eb2:
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00472edc  DefinitionViewFrame::~DefinitionViewFrame   (517 bytes)   [rtti:dtor destructor]
//   written in code as DefinitionViewFrame::_dtor
void __cdecl DefinitionViewFrame::_dtor(int *self,uint dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4fedcc);
  if (self == (int *)0x0) goto LAB_004730d0;
  *(undefined ***)((int)self + 0x35) = &DefinitionViewFrame::vftable;
  self[4] = (int)&PTR_LAB_004fef38;
  *(undefined ***)self[2] = &PTR_LAB_004fef50;
  *(undefined ***)self[3] = &PTR_LAB_004fef5c;
  *(undefined ***)(self[1] + 8) = &DefinitionViewFrame::vftable_TWindow;
  *(undefined ***)(*self + 0xc) = &DefinitionViewFrame::vftable_TFrameWindow;
  if (self[0x24] != 0) {
    if (*(int *)(self[0x24] + -0xc) != -1) {
      strRep = (int *)(self[0x24] + -0xc);
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
      if (prevRefs != 0) goto LAB_00472fd1;
    }
    operator_delete();
    self[0x24] = 0;
  }
LAB_00472fd1:
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x51;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x51;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -0x51;
  OWL::TDecoratedFrame::_dtor(self,0);
  *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x51;
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x51;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 0x51;
  if ((dtorFlags & 2) != 0) {
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0xe4;
    OWL::TFrameWindow::_dtor((int *)((int)self + 0x132),0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0xe4;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0xe4;
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + 0x96;
    OWL::TWindow::_dtor(self + 0x2a,0);
    *(int *)(self[2] + -4) = *(int *)(self[2] + -4) + -0x96;
    OWL::TStreamableBase::_dtor(self + 0x28,0);
  }
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004730d0:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004730e4  DefinitionViewFrame::SetupWindow   (83 bytes)   [rtti:vtable virtual slot 30]
//   override of OWL::TWindow vtable slot 30, from DefinitionViewFrame's OWL::TWindow subobject vtable at 0x004fef68 (through the this-adjusting thunk at 0x004738be); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DefinitionViewFrame::vf9 [rtti:vtable]
void __cdecl DefinitionViewFrame::SetupWindow(int *self)

{
  OWL::TDecoratedFrame::SetupWindow(self);
  if (*(int *)(self[0x12] + 0x168) != 0) {
    FUN_004a76a8(self[1],0x80,1,*(int *)(self[0x12] + 0x168));
  }
  if (*(int *)(self[0x12] + 0x16c) != 0) {
    FUN_004a76a8(self[1],0x80,0,*(int *)(self[0x12] + 0x16c));
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473138  DefinitionViewFrame::Destroy   (672 bytes)   [rtti:vtable virtual slot 6]
//   override of OWL::TWindow vtable slot 6, from DefinitionViewFrame's OWL::TWindow subobject vtable at 0x004fef68 (through the this-adjusting thunk at 0x00473951); slot name identified from OWL::TWindow's own implementation of that slot
//   also: DefinitionViewFrame::vf15 [rtti:vtable]
/* WARNING: Restarted to delay deadcode elimination for space: stack */
void __cdecl DefinitionViewFrame::Destroy(int self)

{
  BOOL ok;
  int *strRep;
  undefined4 *sehChainHead;
  int iVar3;
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
  undefined1 valueName [8];
  int str2;
  undefined1 str [8];
  int str3;
  undefined1 local_1c [8];
  int str4;
  int persist [2];
  
  __InitExceptBlockLDTC(0x4fee34);
  placement.length = 0x2c;
  ok = GetWindowPlacement(*(HWND *)(*(int *)(self + 4) + 0xc),&placement);
  if (ok == 0) goto LAB_004733b8;
  ehContext = 0x14;
  tryLocalMachine = 0;
  iVar3 = 1;
  GetProfileKeyPath((int)local_1c);
  ehDtorCount = ehDtorCount + 1;
  Persist::Persist(persist,(int)local_1c,iVar3,tryLocalMachine);
  if (str4 != 0) {
    if (*(int *)(str4 + -0xc) != -1) {
      strRep = (int *)(str4 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_0047322c;
    }
    unused10 = str4 + -0xc;
    operator_delete();
    unused9 = 0;
    unused8 = local_1c;
    str4 = 0;
    unused = 0;
  }
LAB_0047322c:
  ehContext = 8;
  FormatWindowPlacement((undefined1 *)buf);
  ehContext = 0x2c;
  iVar3 = std::string::string_from_cstr((int)str,buf);
  ehDtorCount = ehDtorCount + 1;
  std::string::string_from_cstr((int)valueName,(uint *)(self + 0x50));
  ehDtorCount = ehDtorCount + 1;
  Persist::SetString((int)persist,(int)valueName,iVar3);
  ehDtorCount = ehDtorCount + -1;
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_00473318;
    }
    unused7 = str2 + -0xc;
    operator_delete();
    unused6 = 0;
    unused5 = valueName;
    str2 = 0;
  }
LAB_00473318:
  ehContext = 8;
  ehDtorCount = ehDtorCount + -1;
  if (str3 != 0) {
    if (*(int *)(str3 + -0xc) != -1) {
      strRep = (int *)(str3 + -0xc);
      if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else if (strRep == &g_nullStringRep) {
        iVar3 = 1;
      }
      else {
        *strRep = *strRep + -1;
        iVar3 = *strRep + 1;
      }
      if (iVar3 != 0) goto LAB_004733a1;
    }
    unused4 = str3 + -0xc;
    operator_delete();
    unused3 = 0;
    unused2 = str;
    str3 = 0;
  }
LAB_004733a1:
  ehDtorCount = ehDtorCount + -1;
  Persist::_dtor((int)persist,2);
  ehContext = 0;
LAB_004733b8:
  (**(code **)(*(int *)(*(int *)(self + 4) + 8) + 100))();
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004733d8  DefinitionViewFrame::ShowDefinitions   (152 bytes)   [analysis]
//   forwards to the client DefinitionViewWindows and brings the frame forward
void __cdecl DefinitionViewFrame::ShowDefinitions(int *self,int list,int value,int word_,int matchSet,int dictIndex,int flags, int newWindow)

{
  int *definitionViewWindows;
  int iVar2;
  
  if (*(int *)(*self + 0x15) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x15) + 8);
  }
  definitionViewWindows = FUN_004dd744(*(int *)(*self + 0x15),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  DefinitionViewWindows::ShowDefinitions(definitionViewWindows,list,value,word_,matchSet,dictIndex,flags,newWindow);
  IsIconic(*(HWND *)(self[1] + 0xc));
  (**(code **)(*(int *)(self[1] + 8) + 100))();
  SetActiveWindow(*(HWND *)(self[1] + 0xc));
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473470  DefinitionViewFrame::SetStatusText   (24 bytes)   [analysis]
//   text in the frame's status bar
void __cdecl DefinitionViewFrame::SetStatusText(int self,uint *text)

{
  FUN_004987c4(*(int *)(self + 0x4c),text);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473488  DefinitionViewFrame::RefreshDefinition   (58 bytes)   [analysis]
//   re-renders the current definition (after a settings change)
void __cdecl DefinitionViewFrame::RefreshDefinition(int *self)

{
  int *definitionViewWindows;
  int iVar2;
  
  if (*(int *)(*self + 0x15) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*self + 0x15) + 8);
  }
  definitionViewWindows = FUN_004dd744(*(int *)(*self + 0x15),iVar2,(int *)&DAT_0040299c,(int *)&DAT_0046a2bc,0)
  ;
  DefinitionViewWindows::ShowDefinitionNumber(definitionViewWindows);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004734c4  DefinitionViewFrame::SetTitle   (202 bytes)   [analysis]
//   caption: base title plus the looked-up word
void __cdecl DefinitionViewFrame::SetTitle(int self,int word_)

{
  int prevRefs;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 result [8];
  uint *strRep;
  
  __InitExceptBlockLDTC(0x4feea4);
  std::operator_plus((int)result,word_,self + 0x88);
  FUN_004a7780(*(int *)(self + 4),strRep);
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
      if (prevRefs != 0) goto LAB_0047357d;
    }
    operator_delete();
  }
LAB_0047357d:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00473650  OWL::TTreeNode::~TTreeNode   (69 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TTreeNode::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TTreeNode::_dtor(int self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4feed0);
  if (self != 0) {
    operator_delete_array();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
