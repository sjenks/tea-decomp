// TEA.exe — application module "VariableValues"
// 64 functions, 0x004601e8..0x00469f48. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004601e8  VariableValues::~VariableValues   (53 bytes)   [rtti:dtor destructor]
//   written in code as VariableValues::_dtor
void __cdecl VariableValues::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 == 0) {
      DAT_0051ac64 = 0;
    }
    else if (*param_1 == 1) {
      VariableValues::Restore((int)param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00460220  FUN_00460220   (2838 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00460220(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  
  __InitExceptBlockLDTC(0x4faa48);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0xc2);
    param_1[0xc2] = (int)(param_1 + 0xbf);
    param_1[0xc3] = (int)(param_1 + 0xc0);
    param_1[1] = (int)(param_1 + 0xbf);
    param_1[2] = (int)(param_1 + 0xc0);
    param_1[0xbe] = 0;
    param_1[0xc1] = 0;
    param_1[0xbf] = (int)&OWL::TEventHandler::vftable;
    param_1[0xc0] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0xc2,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x298;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x298;
  FUN_00413cf4(param_1,1,0x4fa904,param_3,param_4,(uint *)0x141e,0,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x298;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x298;
  param_1[3] = (int)&LookupPropertiesViewWindows::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fb1c8;
  *(undefined ***)param_1[2] = &PTR_LAB_004fb1d4;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fb1e0;
  puVar1 = FUN_00422fc4(param_4);
  param_1[0x18] = (int)puVar1;
  FUN_004179f0(param_1 + 0x2a,0,param_1,0x15e0);
  FUN_0041af38(param_1 + 0x5c,0,param_1,0x15d6,0);
  FUN_004179f0(param_1 + 0x8c,0,param_1,0x14dc);
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x3390);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x339a,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33a4,0);
  }
  param_1[0x19] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x33ae);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33b8,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33c2,0);
  }
  param_1[0x1a] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0xb0;
    FUN_00418398(piVar2 + 2,0,param_1,0x33cc);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33d6,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x33e0,0);
  }
  param_1[0x1b] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)param_1[0x18] + 0xe8;
    FUN_00418398(piVar2 + 2,0,param_1,0x33ea);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x33fe,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x3408,0);
  }
  param_1[0x1c] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x14e6);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3354,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x150e,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1536,0);
  }
  param_1[0x1d] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x14f0);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x335e,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1518,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1540,0);
  }
  param_1[0x1e] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0xb0;
    FUN_00418398(piVar2 + 2,0,param_1,0x14fa);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3368,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1522,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x154a,0);
  }
  param_1[0x1f] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 4) + 0xe8;
    FUN_00418398(piVar2 + 2,0,param_1,0x1504);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3372,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x152c,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x1554,0);
  }
  param_1[0x20] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 8) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x155e);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x337c,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1586,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x15ae,0);
  }
  param_1[0x21] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 8) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x1568);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3386,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1590,0);
    FUN_0041af38(piVar2 + 0x92,0,param_1,0x15b8,0);
  }
  param_1[0x22] = (int)piVar2;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 0xc) + 0x40;
    FUN_00418398(piVar2 + 2,0,param_1,0x1428);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x332c,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x1450,0);
    FUN_004179f0(piVar2 + 0x92,0,param_1,0x1478);
    FUN_0041be78(piVar2 + 0xc4,0,param_1,0x2bc0,2,0x4fa8fc);
  }
  param_1[0x25] = (int)piVar2;
  piVar2 = (int *)operator_new();
  if (piVar2 != (int *)0x0) {
    *piVar2 = *(int *)(param_1[0x18] + 0xc) + 0x78;
    FUN_00418398(piVar2 + 2,0,param_1,0x1432);
    FUN_0041af38(piVar2 + 0x34,0,param_1,0x3336,0);
    FUN_0041af38(piVar2 + 99,0,param_1,0x145a,0);
    FUN_004179f0(piVar2 + 0x92,0,param_1,0x1482);
    FUN_0041be78(piVar2 + 0xc4,0,param_1,0x14aa,2,0x4fa8fc);
  }
  param_1[0x26] = (int)piVar2;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *in_FS_OFFSET = local_58;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ab8  VariableValues::Bind   (74 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). 
bool __cdecl VariableValues::Bind(int param_1,char param_2)

{
  int iVar1;
  
  if ((*(int *)&DAT_0051ac64) == 0) {
    VariableValues::Clear();
  }
  if (((&DAT_0051ac68)[param_1] == -2) && (iVar1 = VariableValues::IsLetterBound(param_2), iVar1 == 0)) {
    (&DAT_0051ac68)[param_1] = param_2;
    return true;
  }
  return param_2 == (&DAT_0051ac68)[param_1];
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b04  VariableValues::Get   (27 bytes)   [analysis (matched TEACON.exe by position and size)]
//   corresponds to TEACON.exe by position and size (bodies differ only where the larger GUI structures shift offsets). 
undefined1 * __cdecl VariableValues::Get(int param_1)

{
  if ((*(int *)&DAT_0051ac64) == 0) {
    VariableValues::Clear();
  }
  return &DAT_0051ac68 + param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b20  VariableValues::IsLetterBound   (45 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x0040d9e4. true when the exclusive option is on and another variable already holds this letter
undefined4 __cdecl VariableValues::IsLetterBound(char param_1)

{
  char *pcVar1;
  
  if (DAT_004fcb84 != 0) {
    for (pcVar1 = &DAT_0051ac68; pcVar1 < &DAT_0051ac72; pcVar1 = pcVar1 + 1) {
      if (param_1 == *pcVar1) {
        return 1;
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b50  VariableValues::Clear   (28 bytes)   [analysis]
//   marks all ten variables unbound (0xfe)
void __stdcall VariableValues::Clear(void)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = 0;
  puVar1 = &DAT_0051ac68;
  do {
    *puVar1 = 0xfe;
    iVar2 = iVar2 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  DAT_0051ac64 = 1;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b6c  VariableValues::Save   (32 bytes)   [analysis]
//   copies the ten bindings into a snapshot
void __cdecl VariableValues::Save(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar2 = 0;
  puVar3 = (undefined1 *)(param_1 + 4);
  puVar1 = &DAT_0051ac68;
  do {
    *puVar3 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468b8c  VariableValues::Restore   (42 bytes)   [analysis]
//   restores the ten bindings from a snapshot
void __cdecl VariableValues::Restore(int param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  
  DAT_0051ac64 = 1;
  iVar2 = 0;
  puVar3 = &DAT_0051ac68;
  puVar1 = (undefined1 *)(param_1 + 4);
  do {
    *puVar3 = *puVar1;
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar2 < 10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bb8  MatchEngine::ResetMatchState   (16 bytes)   [analysis]
//   clears the variable-binding flag and the balance flag
void __stdcall MatchEngine::ResetMatchState(void)

{
  DAT_0051ac64 = 0;
  (*(undefined4 *)&DAT_0051ac60) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468bc8  FUN_00468bc8   (129 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00468bc8(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4fcbb0);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *in_FS_OFFSET = local_2c;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c4c  FUN_00468c4c   (64 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00468c4c(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fcbf0);
  if (DAT_004fcb88 != '\0') {
    OWL::TDllLoader_OWL_TRichEditModule::_dtor(0x51ac74,2);
    DAT_004fcb88 = '\0';
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468c8c  OWL::TRichEdit::Find   (70 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRichEdit::vf8 [rtti:vtable]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TRichEdit::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TEditFile::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468cd4  OWL::TRichEdit::Cmd24322   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24322)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24322(int *param_1)

{
  FUN_004a76a8(*param_1,0x300,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468cf0  OWL::TRichEdit::Cmd24323   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24323)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24323(int *param_1)

{
  FUN_004a76a8(*param_1,0x301,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d0c  OWL::TRichEdit::Cmd24324   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24324)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24324(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x44))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d1c  OWL::TRichEdit::Cmd24325   (15 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24325)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24325(int *param_1)

{
  FUN_004b6e50(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d2c  OWL::TRichEdit::Cmd24326   (16 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24326)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24326(int param_1)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d3c  OWL::TRichEdit::Cmd24321   (28 bytes)   [owl:response-table message-handler]
//   EV_COMMAND(24321)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::Cmd24321(int *param_1)

{
  FUN_004a76a8(*param_1,0x304,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468d58  FUN_00468d58   (366 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int * __cdecl FUN_00468d58(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint *param_5, undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9, uint *param_10,int param_11)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fcde8);
  if (param_2 == 0) {
    *param_1 = (int)(param_1 + 0x1e);
    param_1[0x1e] = (int)(param_1 + 0x1b);
    param_1[0x1f] = (int)(param_1 + 0x1c);
    param_1[1] = (int)(param_1 + 0x1b);
    param_1[2] = (int)(param_1 + 0x1c);
    param_1[0x1a] = 0;
    param_1[0x1d] = 0;
    param_1[0x1b] = (int)&OWL::TEventHandler::vftable;
    param_1[0x1c] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_004a4fbc(param_1 + 0x1e,1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_004b76b8(param_1,1,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  param_1[3] = (int)&OWL::TRichEdit::vftable;
  *(undefined ***)param_1[1] = &PTR_LAB_004fd2b4;
  *(undefined ***)param_1[2] = &PTR_LAB_004fd2c0;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_004fd2cc;
  bVar1 = FUN_00468ee0();
  if (!bVar1) {
    FUN_0048739c();
  }
  param_1[0x19] = 2;
  FUN_004a7988(*param_1,0x4b8,0x810000,0);
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468ee0  FUN_00468ee0   (82 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __stdcall FUN_00468ee0(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fce0c);
  if (DAT_004fcb88 == '\0') {
    FUN_00468f98(&DAT_0051ac74);
    DAT_004fcb88 = DAT_004fcb88 + '\x01';
  }
  piVar2 = (int *)FUN_004690e8();
  iVar1 = *piVar2;
  *in_FS_OFFSET = local_28;
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00468f98  FUN_00468f98   (117 bytes, 2 ranges)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00468f98(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4fce60);
  piVar1 = (int *)FUN_004690e8();
  if (*piVar1 == 0) {
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_00469a6c(puVar2);
    }
    *piVar1 = (int)puVar2;
  }
  *in_FS_OFFSET = local_2c;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469054  OWL::TDllLoader<OWL::TRichEditModule>::~TDllLoader   (106 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TDllLoader_OWL_TRichEditModule::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TDllLoader_OWL_TRichEditModule::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x4fcea8);
  if (param_1 != 0) {
    piVar1 = (int *)FUN_004690e8();
    if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar1)();
    }
    *piVar1 = 0;
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004690e8  FUN_004690e8   (6 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined * __stdcall FUN_004690e8(void)

{
  return &DAT_004fcb8c;
}

// ----------------------------------------------------------------------------------------------------
// 0x004690f0  FUN_004690f0   (46 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004690f0(int *param_1,LPARAM param_2,char param_3)

{
  FUN_004a76a8(*param_1,0x43a,(uint)(param_3 != '\0'),param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469120  FUN_00469120   (42 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00469120(int *param_1,LPARAM param_2,WPARAM param_3)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0x444,param_3,param_2);
  return iVar1 != 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046914c  FUN_0046914c   (120 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_0046914c(undefined4 *param_1,int *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  bVar3 = *param_3 == (*(uint *)&DAT_0051b19c);
  if (*param_3 == (*(uint *)&DAT_0051b19c)) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0048c12c(param_3);
  }
  uVar1 = FUN_004a76a8(*param_2,0x443,(uint)bVar3,uVar2);
  *param_1 = uVar1;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004691c4  OWL::TRichEdit::vf13   (54 bytes)   [rtti:vtable virtual slot 13]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::vf13(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = 0;
  local_8 = 0xffffffff;
  FUN_004691fc(param_1,(LPARAM)&local_c);
  *param_2 = local_c;
  *param_3 = local_8;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004691fc  FUN_004691fc   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004691fc(int *param_1,LPARAM param_2)

{
  FUN_004a76a8(*param_1,0x434,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046921c  OWL::TRichEdit::vf15   (48 bytes)   [rtti:vtable virtual slot 15]
//   file placement: inferred (address adjacency)
bool __cdecl OWL::TRichEdit::vf15(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_c = param_2;
  local_8 = param_3;
  iVar1 = FUN_0046924c(param_1,(LPARAM)&local_c);
  return -1 < iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046924c  FUN_0046924c   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_0046924c(int *param_1,LPARAM param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*param_1,0x437,0,param_2);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046926c  FUN_0046926c   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0046926c(int *param_1,LPARAM param_2)

{
  FUN_004a76a8(*param_1,1099,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046928c  OWL::TRichEdit::vf12   (46 bytes)   [rtti:vtable virtual slot 12]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::vf12(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = param_3;
  local_c = param_4;
  local_8 = param_2;
  FUN_0046926c(param_1,(LPARAM)&local_10);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004692bc  FUN_004692bc   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004692bc(int *param_1,WPARAM param_2,LPARAM param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*param_1,0x438,param_2,param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004692dc  OWL::TRichEdit::vf16   (166 bytes)   [rtti:vtable virtual slot 16]
//   file placement: inferred (address adjacency)
int __cdecl OWL::TRichEdit::vf16(int *param_1,int param_2,uint *param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  int local_18 [2];
  uint *local_10;
  int local_c;
  int local_8;
  
  if ((param_3 == (uint *)0x0) || ((char)*param_3 == '\0')) {
    iVar1 = -1;
  }
  else {
    if ((param_2 == -1) && ((**(code **)(param_1[3] + 0x34))(), param_2 = local_c, param_6 != '\0'))
    {
      param_2 = local_8;
    }
    local_18[1] = 0xffffffff;
    local_10 = param_3;
    if (param_4 == '\0') {
      uVar2 = 0;
    }
    else {
      uVar2 = 4;
    }
    if (param_5 == '\0') {
      uVar4 = 0;
    }
    else {
      uVar4 = 2;
    }
    local_18[0] = param_2;
    iVar1 = FUN_004692bc(param_1,uVar2 | uVar4,(LPARAM)local_18);
    if (-1 < iVar1) {
      pcVar3 = strlen(param_3);
      (**(code **)(param_1[3] + 0x3c))
                (pcVar3 + iVar1,param_1[3],param_3,param_1,pcVar3 + iVar1,iVar1);
    }
  }
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469384  OWL::TRichEdit::vf17   (28 bytes)   [rtti:vtable virtual slot 17]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::vf17(int *param_1)

{
  FUN_004a76a8(*param_1,0x302,0,0);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693a0  FUN_004693a0   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004693a0(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x449,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693c4  FUN_004693c4   (34 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_004693c4(int *param_1,WPARAM param_2,LPARAM param_3)

{
  FUN_004a76a8(*param_1,0x44a,param_2,param_3);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004693e8  FUN_004693e8   (30 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_004693e8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004a76a8(*param_1,0x43b,0,0);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469408  FUN_00469408   (32 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00469408(int *param_1,LPARAM param_2)

{
  FUN_004a76a8(*param_1,0x445,0,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469428  OWL::TRichEdit::EvGetDlgCode   (19 bytes)   [owl:response-table message-handler]
//   WM_GETDLGCODE
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvGetDlgCode(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046943c  OWL::TRichEdit::EvChar   (17 bytes)   [owl:response-table message-handler]
//   WM_CHAR
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvChar(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469450  OWL::TRichEdit::EvKeyDown   (17 bytes)   [owl:response-table message-handler]
//   WM_KEYDOWN
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvKeyDown(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469464  OWL::TRichEdit::EvKillFocus   (23 bytes)   [owl:response-table message-handler]
//   WM_KILLFOCUS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvKillFocus(int *param_1)

{
  OWL::TWindow::EvKillFocus(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046947c  OWL::TRichEdit::EvSetFocus   (17 bytes)   [owl:response-table message-handler]
//   WM_SETFOCUS
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::EvSetFocus(int *param_1)

{
  FUN_004a5774(*param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469490  OWL::TRichEdit::CeShared_469490   (55 bytes)   [owl:response-table message-handler]
//   one handler for 3 table entries: id 24322; id 24323; id 24325
//   also: OWL::TRichEdit::CeShared_469490 [owl:response-table]; OWL::TRichEdit::CeShared_469490 [owl:response-table]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeShared_469490(int param_1,undefined4 *param_2)

{
  (**(code **)(*(int *)(param_1 + 0xc) + 0x34))();
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004694c8  OWL::TRichEdit::CeCmd24324   (151 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24324)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24324(int *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  __InitExceptBlockLDTC(0x4fcee8);
  FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  BVar1 = IsClipboardFormatAvailable(1);
  if (BVar1 == 0) {
    BVar1 = IsClipboardFormatAvailable(7);
    if (BVar1 == 0) {
      (**(code **)*param_2)();
      goto LAB_0046953f;
    }
  }
  (**(code **)*param_2)();
LAB_0046953f:
  OWL::TClipboard::_dtor(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469560  OWL::TRichEdit::CeCmd24326   (69 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24326)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24326(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xba,0,0);
  if (iVar1 == 1) {
    FUN_004b6ae8(param_1,0);
  }
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004695a8  OWL::TRichEdit::CeCmd24321   (50 bytes)   [owl:response-table message-handler]
//   EV_COMMAND_ENABLE(24321)
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::CeCmd24321(int *param_1,undefined4 *param_2)

{
  FUN_004a76a8(*param_1,0xc6,0,0);
  (**(code **)*param_2)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004695dc  OWL::TRichEdit::vf11   (37 bytes)   [rtti:vtable virtual slot 11]
//   file placement: inferred (address adjacency)
char * __stdcall OWL::TRichEdit::vf11(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = '\0';
  FUN_00469604();
  iVar1 = FUN_00469b1c(cVar3);
  if (iVar1 < 2) {
    pcVar2 = "RICHEDIT";
  }
  else {
    pcVar2 = "RichEdit20A";
  }
  return pcVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469604  FUN_00469604   (8 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00469604(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004690e8();
  return *puVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0046960c  OWL::TRichEdit::vf20   (206 bytes)   [rtti:vtable virtual slot 20]
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEdit::vf20(int *param_1)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  __InitExceptBlockLDTC(0x4fcf18);
  OWL::TEditFile::vf20(param_1);
  FUN_004c0e0c((int)local_14,*(int *)(*param_1 + 0x70),0x7f2b);
  FUN_004c28b8(local_c,extraout_EDX,extraout_ECX,(int)(param_1 + 0xe),(uint *)local_c);
  if (local_c != (char *)0x0) {
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
      if (iVar1 != 0) goto LAB_004696c9;
    }
    operator_delete();
  }
LAB_004696c9:
  *in_FS_OFFSET = local_38;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004696dc  FUN_004696dc   (69 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_004696dc(int *param_1,undefined1 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  
  if ((*(byte *)(*param_1 + 0x30) & 2) == 0) {
    FUN_004d4534(param_1,param_2,param_3);
    uVar1 = FUN_004d44ec((int)param_1);
    *param_4 = uVar1;
  }
  else {
    *param_4 = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469724  FUN_00469724   (144 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __stdcall FUN_00469724(int *param_1,int param_2,int param_3,int *param_4)

{
  int local_1c [3];
  int local_10 [3];
  
  FUN_004d6cac(local_10,param_1);
  FUN_004d4f98(param_1,param_2,param_3);
  FUN_004d6cac(local_1c,param_1);
  *param_4 = local_1c[0] - local_10[0];
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697b4  OWL::TRichEdit::vf10   (7 bytes)   [rtti:vtable virtual slot 10]
//   file placement: inferred (address adjacency)
undefined4 __stdcall OWL::TRichEdit::vf10(void)

{
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697bc  FUN_004697bc   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004697bc(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_004696dc;
  FUN_004693a0(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004697f8  FUN_004697f8   (58 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_004697f8(int *param_1,undefined4 param_2,WPARAM param_3)

{
  undefined4 local_10;
  int local_c;
  code *local_8;
  
  local_10 = param_2;
  local_c = 0;
  local_8 = FUN_00469724;
  FUN_004693c4(param_1,param_3,(LPARAM)&local_10);
  return local_c == 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469834  OWL::TRichEdit::vf25   (287 bytes)   [rtti:vtable virtual slot 25]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::vf25(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_b0;
  int local_8c [34];
  
  __InitExceptBlockLDTC(0x4fcf58);
  if ((param_2 == (LPCSTR)0x0) && (param_2 = (LPCSTR)param_1[0x18], param_2 == (LPCSTR)0x0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_b0;
  }
  else {
    FUN_004d1208(local_8c,0,param_2,6,0x1b6);
    if ((*(byte *)(local_8c[0] + 0x30) & 5) == 0) {
      (**(code **)(param_1[3] + 0x24))();
      bVar1 = FUN_004697bc(param_1,local_8c,param_1[0x19]);
      if (bVar1) {
        uVar2 = FUN_004a76a8(*param_1,0xb9,0,0);
        uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
        std::basic_ifstream_char::_dtor(local_8c,2);
        *in_FS_OFFSET = local_b0;
        return uVar2;
      }
    }
    uVar2 = 0;
    std::basic_ifstream_char::_dtor(local_8c,2);
    *in_FS_OFFSET = local_b0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469954  OWL::TRichEdit::vf29   (279 bytes)   [rtti:vtable virtual slot 29]
//   file placement: inferred (address adjacency)
undefined4 __cdecl OWL::TRichEdit::vf29(int *param_1,LPCSTR param_2)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_ac;
  int local_88 [33];
  
  __InitExceptBlockLDTC(0x4fcf98);
  if ((param_2 == (LPCSTR)0x0) && (param_2 = (LPCSTR)param_1[0x18], param_2 == (LPCSTR)0x0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_ac;
  }
  else {
    FUN_004d18dc(local_88,0,param_2,10,0x1b6);
    if (((*(byte *)(local_88[0] + 0x30) & 5) == 0) &&
       (bVar1 = FUN_004697f8(param_1,local_88,param_1[0x19]), bVar1)) {
      uVar2 = FUN_004a76a8(*param_1,0xb9,0,0);
      uVar2 = CONCAT31((int3)((uint)uVar2 >> 8),1);
      std::basic_ofstream_char::_dtor(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
    else {
      uVar2 = 0;
      std::basic_ofstream_char::_dtor(local_88,2);
      *in_FS_OFFSET = local_ac;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469a6c  FUN_00469a6c   (97 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 * __cdecl FUN_00469a6c(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  char cVar4;
  char cVar5;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fcfc8);
  cVar5 = '\x01';
  cVar4 = '\x01';
  cVar3 = '\x01';
  iVar1 = FUN_00469b1c('\0');
  if (iVar1 < 2) {
    pcVar2 = "RICHED32.DLL";
  }
  else {
    pcVar2 = "RICHED20.DLL";
  }
  FUN_004c08dc(param_1,(uint *)pcVar2,cVar3,cVar4,cVar5);
  *param_1 = &OWL::TRichEditModule::vftable;
  *in_FS_OFFSET = local_28;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469b1c  FUN_00469b1c   (48 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00469b1c(char param_1)

{
  if (DAT_004fcbec == '\0') {
    if (param_1 == '\0') {
      DAT_004fcbe8 = FUN_00468bc8();
    }
    else {
      DAT_004fcbe8 = 1;
    }
    DAT_004fcbec = DAT_004fcbec + '\x01';
  }
  return DAT_004fcbe8;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469b4c  OWL::TErrorMode::~TErrorMode   (35 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TErrorMode::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TErrorMode::_dtor(UINT *param_1,byte param_2)

{
  if (param_1 != (UINT *)0x0) {
    SetErrorMode(*param_1);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469bd0  OWL::TRichEditModule::~TRichEditModule   (67 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TRichEditModule::_dtor
//   file placement: inferred (address adjacency)
void __cdecl OWL::TRichEditModule::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4fd354);
  if (param_1 != (undefined4 *)0x0) {
    OWL::TModule::_dtor(param_1,0);
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00469e1c  FUN_00469e1c   (299 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __cdecl FUN_00469e1c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte local_5;
  
  pbVar4 = *(byte **)(param_1 + 8);
  pbVar5 = *(byte **)(param_2 + 8);
  *param_3 = 0;
  do {
    while ((local_5 = *pbVar4, local_5 != 0 && (iVar1 = FUN_0043c6d4(local_5), iVar1 == 0))) {
      pbVar4 = pbVar4 + 1;
    }
    while ((bVar3 = *pbVar5, bVar3 != 0 && (iVar1 = FUN_0043c6d4(bVar3), iVar1 == 0))) {
      pbVar5 = pbVar5 + 1;
    }
    if (local_5 == 0) {
      if (bVar3 == 0) {
        return 0;
      }
      return -1;
    }
    if (bVar3 == 0) {
      return 1;
    }
    if ((((char)local_5 < '1') || ('9' < (char)local_5)) &&
       (((char)bVar3 < '1' || ('9' < (char)bVar3)))) {
      if ((&DAT_004f50d8)[local_5] != '\0') {
        local_5 = (&DAT_004f50d8)[local_5];
      }
      if ((&DAT_004f50d8)[bVar3] != '\0') {
        bVar3 = (&DAT_004f50d8)[bVar3];
      }
      if (bVar3 != local_5) {
        return (int)(char)local_5 - (int)(char)bVar3;
      }
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    }
    else {
      iVar1 = FUN_004e39d0((char *)pbVar4);
      iVar2 = FUN_004e39d0((char *)pbVar5);
      if (iVar1 - iVar2 != 0) {
        return iVar1 - iVar2;
      }
      do {
        pbVar4 = pbVar4 + 1;
        if ((char)*pbVar4 < '0') break;
      } while ((char)*pbVar4 < ':');
      do {
        pbVar5 = pbVar5 + 1;
        if ((char)*pbVar5 < '0') break;
      } while ((char)*pbVar5 < ':');
    }
    *param_3 = *param_3 + 1;
  } while( true );
}

// ----------------------------------------------------------------------------------------------------
// 0x00469f48  FUN_00469f48   (198 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
bool __cdecl FUN_00469f48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        local_8 = param_1 + 0x58;
      }
      else if (iVar2 == 0) {
        local_8 = *(int *)(param_1 + 0x1c);
      }
      else {
        local_8 = *(int *)(param_1 + 0x3c);
      }
      iVar1 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        local_c = param_2 + 0x58;
      }
      else if (iVar2 == 0) {
        local_c = *(int *)(param_2 + 0x1c);
      }
      else {
        local_c = *(int *)(param_2 + 0x3c);
      }
      iVar1 = FUN_00469e1c(local_8,local_c,&local_14);
      if (iVar1 != 0) {
        return iVar1 < 0;
      }
      iVar2 = iVar2 + 1;
      local_10 = 0;
    } while (iVar2 < 2);
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10) < 0;
  }
  return bVar3;
}

} // namespace tea
