// TSBuild.exe — runtime / library code "code_0x00450000"
// 43 functions, 0x00450210..0x00453fd0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450210  FUN_00450210   (95 bytes)   [unnamed]
undefined * __stdcall FUN_00450210(void)

{
  HMODULE hModule;
  undefined4 *sehChainHead;
  char cVar2;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483298);
  if (DAT_00482c51 == '\0') {
    cVar2 = '\0';
    hModule = GetModuleHandleA("USER32");
    OWL::TModule::TModule_44ed8c((undefined4 *)&DAT_0048cd68,(uint *)"USER32",hModule,cVar2);
    DAT_00482c51 = DAT_00482c51 + '\x01';
  }
  *sehChainHead = sehPrevFrame;
  return &DAT_0048cd68;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450270  FUN_00450270   (62 bytes)   [unnamed]
undefined4 __stdcall FUN_00450270(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c52 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd75,(int)puVar1,"LoadIconA");
    DAT_00482c52 = DAT_00482c52 + '\x01';
  }
  uVar2 = ((code *)DAT_0048cd75)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004502b0  FUN_004502b0   (56 bytes)   [unnamed]
void __stdcall FUN_004502b0(void)

{
  undefined *puVar1;
  
  if (DAT_00482c53 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd79,(int)puVar1,"DestroyIcon");
    DAT_00482c53 = DAT_00482c53 + '\x01';
  }
  ((code *)DAT_0048cd79)();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004502e8  FUN_004502e8   (68 bytes)   [unnamed]
undefined4 __stdcall FUN_004502e8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c54 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd7d,(int)puVar1,"GetClassInfoA");
    DAT_00482c54 = DAT_00482c54 + '\x01';
  }
  uVar2 = ((code *)DAT_0048cd7d)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045032c  FUN_0045032c   (91 bytes)   [unnamed]
undefined4 __stdcall FUN_0045032c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c55 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd81,(int)puVar1,"GetMenuStringA");
    DAT_00482c55 = DAT_00482c55 + '\x01';
  }
  uVar2 = ((code *)DAT_0048cd81)();
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045063c  FUN_0045063c   (83 bytes)   [unnamed]
void __cdecl FUN_0045063c(undefined4 param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x483368);
  piVar1 = OWL::TXInvalidModule::TXInvalidModule(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004507d4  FUN_004507d4   (77 bytes)   [unnamed; function defined from prologue-scan]
void __cdecl FUN_004507d4(int param_1,byte param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4833c4);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450824  FUN_00450824   (45 bytes)   [unnamed]
void __cdecl FUN_00450824(int param_1,byte param_2)

{
  if (param_1 != 0) {
    if (*(int *)(param_1 + 9) != 0) {
      free();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450854  InitRichEditStreamer_450854   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_450854(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4833e8);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00450a74;
  puVar1 = FUN_00468310(1,0,0x404d74);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cdd0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004508aa  FUN_004508aa   (48 bytes)   [unnamed]
void __stdcall FUN_004508aa(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4833fc);
  OWL::TStreamableClass::_dtor(0x48cdd0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450984  FUN_00450984   (78 bytes)   [unnamed]
int * __cdecl FUN_00450984(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_00404d74,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004509d4  FUN_004509d4   (26 bytes)   [unnamed]
int * __cdecl FUN_004509d4(int *param_1,int *param_2)

{
  FUN_0042e090(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450a74  FUN_00450a74   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_00450a74(int *module)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483450);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((module == (int *)0x0) && (module = (int *)operator_new(), module != (int *)0x0)) {
      OWL::TModule::TModule_450944(module);
    }
    OWL::TModule::Streamer::Streamer(streamer,module);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450b7c  FUN_00450b7c   (191 bytes)   [unnamed]
uint * __cdecl FUN_00450b7c(uint *param_1,uint param_2,uint *param_3,uint param_4,uint param_5,uint param_6, uint param_7,uint param_8,uint param_9)

{
  char *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4834c0);
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_4;
  param_1[5] = param_8;
  param_1[6] = param_5;
  param_1[7] = param_6;
  if (param_7 == 0) {
    param_7 = 0x104;
  }
  param_1[8] = param_7;
  param_1[9] = param_9;
  uVar3 = operator_new_array();
  param_1[2] = uVar3;
  pcVar1 = (char *)param_1[2];
  *pcVar1 = '\0';
  FUN_00450c98(pcVar1,param_1,param_1,(int)param_1,param_3);
  *param_1 = *param_1 | 0x200000;
  bVar2 = FUN_0041b9e4();
  if (bVar2) {
    *param_1 = *param_1 | 0x80000;
  }
  *sehChainHead = sehPrevFrame;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450c98  FUN_00450c98   (179 bytes)   [unnamed]
char * FUN_00450c98(char *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint *puVar4;
  char *i;
  
  if (param_5 != (uint *)0x0) {
    operator_delete_array();
    pcVar1 = thunk_strchr((char *)param_5,'|');
    puVar4 = param_5;
    if (pcVar1 == (char *)0x0) {
      for (; (char)*puVar4 != '\0'; puVar4 = (uint *)((int)puVar4 + (int)(pcVar1 + 1))) {
        pcVar1 = strlen(puVar4);
      }
      uVar3 = operator_new_array();
      *(undefined4 *)(param_4 + 0xc) = uVar3;
      param_1 = (char *)memcpy(*(undefined4 **)(param_4 + 0xc),param_5,
                                     (int)puVar4 + (1 - (int)param_5));
    }
    else {
      pcVar1 = strlen(param_5);
      pcVar2 = (char *)operator_new_array();
      pcVar2 = FUN_00467770(pcVar2,(char *)param_5);
      *(char **)(param_4 + 0xc) = pcVar2;
      param_1 = *(char **)(param_4 + 0xc);
      param_1[(int)(pcVar1 + 1)] = '\0';
    }
  }
  if (*(int *)(param_4 + 0xc) != 0) {
    param_1 = *(char **)(param_4 + 0xc);
    for (i = *(char **)(param_4 + 0xc); *i != '\0'; i = i + 1) {
      if (*i == '|') {
        *i = '\0';
      }
      param_1 = i;
    }
  }
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450d94  FUN_00450d94   (217 bytes)   [unnamed]
void __cdecl FUN_00450d94(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if ((*(UINT *)&DAT_004834ec) == 0) {
    (*(UINT *)&DAT_004834ec) = RegisterWindowMessageA("commdlg_ShareViolation");
  }
  memset(param_1 + 7,0,0x58);
  puVar1 = FUN_0041b958();
  if (*(uint *)(puVar1 + 4) < 5) {
    iVar2 = 0x4c;
  }
  else {
    iVar2 = 0x58;
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0x14] = *(uint *)param_1[0x1d] | 0x20;
  if (param_2 == 0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    param_1[0x19] = param_2;
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  param_1[0x1c] = *(int *)(param_1[0x1d] + 0x24);
  param_1[0x18] = 0;
  param_1[10] = *(int *)(param_1[0x1d] + 0xc);
  param_1[0xd] = *(int *)(param_1[0x1d] + 0x14);
  param_1[0xe] = *(int *)(param_1[0x1d] + 8);
  param_1[0xf] = *(int *)(param_1[0x1d] + 0x20);
  param_1[0x12] = *(int *)(param_1[0x1d] + 0x18);
  param_1[0x16] = *(int *)(param_1[0x1d] + 0x1c);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045284c  InitRichEditStreamer_45284c   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_45284c(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483a6c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00452c78;
  puVar1 = FUN_00468310(1,0,0x4392c8);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cde0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004528a2  FUN_004528a2   (48 bytes)   [unnamed]
void __stdcall FUN_004528a2(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483a80);
  OWL::TStreamableClass::_dtor(0x48cde0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045297c  FUN_0045297c   (78 bytes)   [unnamed]
int * __cdecl FUN_0045297c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0042ddb0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_00468488((int)local_8,iVar1,(int *)&DAT_00403c1c,(int *)&DAT_004392c8,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004529cc  FUN_004529cc   (26 bytes)   [unnamed]
int * __cdecl FUN_004529cc(int *param_1,int *param_2)

{
  FUN_0042e090(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004529ee  FUN_004529ee   (333 bytes)   [unnamed]
int __stdcall FUN_004529ee(void)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int unaff_EBP;
  
  iVar1 = *(int *)(*(int *)(unaff_EBP + 8) + 8);
  *(int *)(unaff_EBP + -4) = iVar1 + 0x3b;
  *(int *)(unaff_EBP + -8) = iVar1 + 0x3a;
  *(int *)(unaff_EBP + -0xc) = iVar1 + 0x39;
  *(int *)(unaff_EBP + -0x10) = iVar1 + 0x38;
  *(int *)(unaff_EBP + -0x14) = iVar1 + 0x34;
  *(int *)(unaff_EBP + -0x18) = iVar1 + 0x30;
  *(int *)(unaff_EBP + -0x1c) = iVar1 + 0x2c;
  *(int *)(unaff_EBP + -0x20) = iVar1 + 0x28;
  *(int *)(unaff_EBP + -0x24) = iVar1 + 0x14;
  *(int *)(unaff_EBP + -0x28) = iVar1 + 0x10;
  *(int *)(unaff_EBP + -0x2c) = iVar1 + 0x24;
  *(int *)(unaff_EBP + -0x30) = iVar1 + 0x20;
  *(int *)(unaff_EBP + -0x34) = iVar1 + 0xc;
  piVar2 = *(int **)(unaff_EBP + 0xc);
  FUN_0042d9a0(piVar2,iVar1 + 8,4);
  FUN_0042d9a0(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_0042d9a0(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_0042d9a0(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_0042da9c(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_0042db04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_0042db04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_0042db04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_0042db04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_0042db04(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00452c78  FUN_00452c78   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_00452c78(int *scroller)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483ad4);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((scroller == (int *)0x0) && (scroller = (int *)operator_new(), scroller != (int *)0x0)) {
      OWL::TScroller::TScroller(scroller);
    }
    OWL::TScroller::Streamer::Streamer(streamer,scroller);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453004  InitRichEditStreamer_453004   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_453004(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483c78);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_00453270;
  puVar1 = FUN_00468310(1,0,0x4049a0);
  puVar2 = (uint *)FUN_00468420((int)puVar1);
  FUN_0042ce68((undefined4 *)&DAT_0048cdf0,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045305a  FUN_0045305a   (48 bytes)   [unnamed]
void __stdcall FUN_0045305a(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483c8c);
  OWL::TStreamableClass::_dtor(0x48cdf0,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453210  EvRegisteredMsg_453210_453210   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TStatic::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_453210_453210(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_0043cdd0(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_0042da9c(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x00453270  FUN_00453270   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_00453270(int *param_1)

{
  undefined4 *streamer;
  int *static_;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483ce0);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      static_ = (int *)operator_new();
      if (static_ == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TStatic::TStatic_4530f4(static_,0);
        param_1 = (int *)static_[2];
      }
    }
    OWL::TStatic::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004534c4  EvNCHitTest_4534c4   (49 bytes)   [owl:response-table message-handler]
//   WM_NCHITTEST
undefined4 __cdecl EvNCHitTest_4534c4(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 local_8;
  
  local_8 = 0;
  iVar1 = FUN_004534f8(param_1,param_2,&local_8);
  if (iVar1 != 1) {
    local_8 = FUN_00436428(*param_1);
  }
  return local_8;
}

// ----------------------------------------------------------------------------------------------------
// 0x004534f8  FUN_004534f8   (495 bytes)   [unnamed]
undefined4 __cdecl FUN_004534f8(int *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  int i;
  tagRECT *pRect;
  LONG *pLVar6;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38 [4];
  tagRECT rect;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  char local_6;
  char local_5;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_00438580(*param_1);
    local_5 = (uVar3 & 0x10000) != 0;
    local_6 = (uVar3 & 0x20000) != 0;
    rect.left = 0;
    rect.top = 0;
    rect.right = 0;
    rect.bottom = 0;
    FUN_004386c0(*param_1,&rect);
    pRect = &rect;
    pLVar6 = local_38;
    for (i = 4; i != 0; i = i + -1) {
      *pLVar6 = pRect->left;
      pRect = (tagRECT *)&pRect->top;
      pLVar6 = pLVar6 + 1;
    }
    local_14 = param_2[1] - local_38[1];
    local_18 = *param_2 - local_38[0];
    local_10 = local_18;
    local_c = local_14;
    if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
      FUN_00454e7c(&local_48,param_1);
      if ((local_10 < local_48) ||
         (((local_40 <= local_10 || (local_c < local_44)) || (local_3c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 3;
        return 1;
      }
    }
    if (local_6 != '\0') {
      FUN_00454ecc(&local_58,param_1);
      if (((local_10 < local_58) || (local_50 <= local_10)) ||
         ((local_c < local_54 || (local_4c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 8;
        return 1;
      }
    }
    if (local_5 != '\0') {
      FUN_00454f38(&local_68,param_1);
      if (((local_10 < local_68) || (local_60 <= local_10)) ||
         ((local_c < local_64 || (local_5c <= local_c)))) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      if (bVar1) {
        *param_3 = 9;
        return 1;
      }
    }
    FUN_00454dc8(&local_78,param_1);
    if ((((local_10 < local_78) || (local_70 <= local_10)) || (local_c < local_74)) ||
       (local_6c <= local_c)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      *param_3 = 2;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004536e8  EvNCPaint_4536e8   (25 bytes)   [owl:response-table message-handler]
//   WM_NCPAINT
void __cdecl EvNCPaint_4536e8(int *param_1)

{
  FUN_00436428(*param_1);
  FUN_00453704(param_1);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453704  FUN_00453704   (118 bytes)   [unnamed]
undefined4 __cdecl FUN_00453704(int *param_1)

{
  BOOL ok;
  HWND hWnd;
  HWND hWnd2;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
    hWnd = GetFocus();
    hWnd2 = GetActiveWindow();
    if ((hWnd2 != *(HWND *)(*param_1 + 0xc)) && (hWnd != *(HWND *)(*param_1 + 0xc))) {
      IsChild(*(HWND *)(*param_1 + 0xc),hWnd);
    }
    FUN_004549dc(param_1);
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x0045377c  EvNccalcsize_45377c   (46 bytes)   [owl:response-table message-handler]
//   WM_NCCALCSIZE
undefined4 __cdecl EvNccalcsize_45377c(int *param_1,undefined1 param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 extraout_EDX;
  
  uVar1 = FUN_00436428(*param_1);
  FUN_004537ac(param_1,CONCAT31((int3)((uint)extraout_EDX >> 8),param_2),param_3);
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004537ac  FUN_004537ac   (77 bytes)   [unnamed]
undefined4 __cdecl FUN_004537ac(int *param_1,undefined4 param_2,int param_3)

{
  BOOL ok;
  int local_14;
  int local_10;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') &&
     (ok = IsIconic(*(HWND *)(*param_1 + 0xc)), ok == 0)) {
    FUN_00454dc8(&local_14,param_1);
    *(int *)(param_3 + 4) = *(int *)(param_3 + 4) + (local_8 - local_10);
    return 1;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x004537fc  EvNclbuttondown_4537fc   (37 bytes)   [owl:response-table message-handler]
//   WM_NCLBUTTONDOWN
void __cdecl EvNclbuttondown_4537fc(int *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00453824(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453824  FUN_00453824   (801 bytes)   [unnamed]
int __cdecl FUN_00453824(int *param_1,int param_2,ushort *param_3)

{
  int i;
  int *piVar2;
  RECT *pRect;
  int *piVar4;
  undefined4 *sehChainHead;
  byte bVar5;
  int local_dc [4];
  int pRect2 [4];
  int local_bc [4];
  RECT rect;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int x2;
  int y2;
  int local_84;
  int local_80;
  int local_7c [4];
  RECT rect2;
  tagPOINT pt;
  int local_54;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  HDC windowDC [10];
  
  bVar5 = 0;
  __InitExceptBlockLDTC(0x483e6c);
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    local_dc[0] = 0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    ehContext = 8;
    FUN_00439340((int *)windowDC,*(undefined4 *)(*param_1 + 0xc));
    ehDtorCount = ehDtorCount + 2;
    ehContext = 0x14;
    if (param_2 == 3) {
      *(undefined4 *)((int)param_1 + 0x2a) = 3;
      if ((char)param_1[8] == '\0') {
        FUN_00454e7c(&local_9c,param_1);
        local_80 = local_90 + -1;
        local_84 = local_94;
        y2 = local_98 + 1;
        x2 = local_9c + 1;
        PatBlt(windowDC[0],x2,y2,local_94 - x2,local_80 - y2,0x5a0049);
        *(undefined1 *)((int)param_1 + 0x2f) = 1;
        FUN_00438338(*param_1,0x112,0xf093,*(int *)(param_3 + 2) << 0x10 | (uint)*param_3);
        if (*(char *)((int)param_1 + 0x2f) != '\0') {
          pt.x = 0;
          pt.y = 0;
          GetCursorPos(&pt);
          FUN_004534f8(param_1,&pt.x,&local_54);
          if (local_54 == 3) {
            FUN_00438338(*param_1,0x112,0xf103,0);
          }
        }
        if (*(int *)(*param_1 + 0xc) != 0) {
          PatBlt(windowDC[0],x2,y2,local_84 - x2,local_80 - y2,0x5a0049);
        }
      }
      else {
        *(undefined1 *)((int)param_1 + 0x2e) = 1;
        SetCapture(*(HWND *)(*param_1 + 0xc));
        FUN_00454e7c(local_7c,param_1);
        piVar2 = local_7c;
        pRect = &rect2;
        for (i = 4; i != 0; i = i + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
        }
        FUN_00454384(param_1,(undefined4*)windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
      }
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else if (param_2 == 8) {
      *(undefined4 *)((int)param_1 + 0x2a) = 8;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_00454ecc(local_bc,param_1);
      piVar2 = local_bc;
      pRect = &rect;
      for (i = 4; i != 0; i = i + -1) {
        pRect->left = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        pRect = (RECT *)((int)pRect + ((uint)bVar5 * -2 + 1) * 4);
      }
      FUN_00454764(param_1,(undefined4*)windowDC,&rect,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else if (param_2 == 9) {
      *(undefined4 *)((int)param_1 + 0x2a) = 9;
      *(undefined1 *)((int)param_1 + 0x2e) = 1;
      SetCapture(*(HWND *)(*param_1 + 0xc));
      FUN_00454f38(local_dc,param_1);
      piVar2 = local_dc;
      piVar4 = pRect2;
      for (i = 4; i != 0; i = i + -1) {
        *piVar4 = *piVar2;
        piVar2 = piVar2 + (uint)bVar5 * -2 + 1;
        piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
      }
      FUN_00454834(param_1,(undefined4*)windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
      local_dc[0] = 1;
      ehDtorCount = ehDtorCount + -2;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
    else {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      local_dc[0] = 0;
      OWL::TWindowDC::_dtor((int *)windowDC,2);
      *sehChainHead = sehPrevFrame;
    }
  }
  return local_dc[0];
}

// ----------------------------------------------------------------------------------------------------
// 0x00453b48  EvMouseMove_453b48   (37 bytes)   [owl:response-table message-handler]
//   WM_MOUSEMOVE
void __cdecl EvMouseMove_453b48(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00453b70(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453b70  FUN_00453b70   (503 bytes)   [unnamed]
undefined4 __cdecl FUN_00453b70(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  int *piVar2;
  RECT *pRect;
  int *piVar4;
  undefined4 *sehChainHead;
  bool bVar5;
  byte bVar6;
  undefined4 uVar7;
  int local_bc [4];
  int pRect2 [4];
  int local_9c [4];
  RECT rect;
  int local_7c [4];
  RECT rect2;
  tagPOINT pt;
  int local_54;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int ehDtorCount;
  int windowDC [10];
  
  bVar6 = 0;
  __InitExceptBlockLDTC(0x483eac);
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_004534f8(param_1,&pt.x,&local_54);
    bVar5 = local_54 == *(int *)((int)param_1 + 0x2a);
    if (bVar5 != (bool)*(char *)((int)param_1 + 0x2e)) {
      *(bool *)((int)param_1 + 0x2e) = bVar5;
      ehContext = 8;
      FUN_00439340(windowDC,*(undefined4 *)(*param_1 + 0xc));
      ehDtorCount = ehDtorCount + 2;
      ehContext = 0x14;
      iVar1 = *(int *)((int)param_1 + 0x2a);
      if (iVar1 == 3) {
        if ((char)param_1[8] != '\0') {
          FUN_00454e7c(local_7c,param_1);
          piVar2 = local_7c;
          pRect = &rect2;
          for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
            pRect->left = *piVar2;
            piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
            pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
          }
          FUN_00454384(param_1,windowDC,&rect2,*(char *)((int)param_1 + 0x2e));
        }
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 8) {
        FUN_00454ecc(local_9c,param_1);
        piVar2 = local_9c;
        pRect = &rect;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          pRect->left = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          pRect = (RECT *)((int)pRect + ((uint)bVar6 * -2 + 1) * 4);
        }
        FUN_00454764(param_1,windowDC,&rect,*(char *)((int)param_1 + 0x2e));
        uVar7 = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return uVar7;
      }
      if (iVar1 == 9) {
        FUN_00454f38(local_bc,param_1);
        piVar2 = local_bc;
        piVar4 = pRect2;
        for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
          *piVar4 = *piVar2;
          piVar2 = piVar2 + (uint)bVar6 * -2 + 1;
          piVar4 = piVar4 + (uint)bVar6 * -2 + 1;
        }
        FUN_00454834(param_1,windowDC,pRect2,*(char *)((int)param_1 + 0x2e));
        local_bc[0] = 1;
        ehDtorCount = ehDtorCount + -2;
        OWL::TWindowDC::_dtor(windowDC,2);
        *sehChainHead = sehPrevFrame;
        return local_bc[0];
      }
      OWL::TWindowDC::_dtor(windowDC,2);
    }
  }
  *sehChainHead = sehPrevFrame;
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453d68  EvLButtonUp_453d68   (37 bytes)   [owl:response-table message-handler]
//   WM_LBUTTONUP
void __cdecl EvLButtonUp_453d68(int *param_1,undefined4 param_2,LONG *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00453d90(param_1,param_2,param_3);
  if (iVar1 == 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453d90  FUN_00453d90   (269 bytes)   [unnamed]
undefined4 __cdecl FUN_00453d90(int *param_1,undefined4 param_2,LONG *param_3)

{
  BOOL ok;
  undefined4 uVar2;
  undefined4 uVar3;
  tagPOINT pt;
  int local_8;
  
  if ((*(char *)((int)param_1 + 0x21) != '\0') && (*(int *)((int)param_1 + 0x2a) != 0)) {
    ReleaseCapture();
    FUN_00453b70(param_1,param_2,param_3);
    pt.x = *param_3;
    pt.y = param_3[1];
    ClientToScreen(*(HWND *)(*param_1 + 0xc),&pt);
    FUN_004534f8(param_1,&pt.x,&local_8);
    if (local_8 == *(int *)((int)param_1 + 0x2a)) {
      *(undefined4 *)((int)param_1 + 0x2a) = 0;
      if (local_8 == 3) {
        if ((char)param_1[8] != '\0') {
          PostMessageA(*(HWND *)(*param_1 + 0xc),0x10,0,0);
        }
        return 1;
      }
      if (local_8 == 8) {
        FUN_00436d48(*param_1,0x112,0xf020,0);
        return 1;
      }
      if (local_8 == 9) {
        uVar3 = 0;
        ok = IsZoomed(*(HWND *)(*param_1 + 0xc));
        if (ok == 0) {
          uVar2 = 0xf030;
        }
        else {
          uVar2 = 0xf120;
        }
        FUN_00436d48(*param_1,0x112,uVar2,uVar3);
        return 1;
      }
    }
    *(undefined4 *)((int)param_1 + 0x2a) = 0;
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453ea0  EvNcactivate_453ea0   (55 bytes)   [owl:response-table message-handler]
//   WM_NCACTIVATE
undefined1 EvNcactivate_453ea0(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uStack_8;
  
  uStack_8 = param_3;
  iVar1 = FUN_00453ed8(param_4,CONCAT31((int3)((uint)param_2 >> 8),param_5),
                       (undefined1 *)((int)&uStack_8 + 3));
  if (iVar1 == 0) {
    iVar1 = FUN_00436428(*param_4);
    uStack_8 = (uint)(iVar1 != 0) << 0x18;
  }
  return GH_PIECE(uStack_8, 3, undefined1);
}

// ----------------------------------------------------------------------------------------------------
// 0x00453ed8  FUN_00453ed8   (67 bytes)   [unnamed]
undefined4 __cdecl FUN_00453ed8(int *param_1,undefined4 param_2,undefined1 *param_3)

{
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) != '\0') {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
      FUN_004549dc(param_1);
      *param_3 = 1;
      return 1;
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453f5c  FUN_00453f5c   (76 bytes)   [unnamed]
undefined4 __cdecl FUN_00453f5c(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    uVar1 = 0;
  }
  else if (param_2 < 0xf000) {
    *param_5 = 0;
    uVar1 = 0;
  }
  else {
    *(undefined1 *)((int)param_1 + 0x2f) = 0;
    uVar1 = FUN_00436d48(*param_1,0x112,param_2,param_4);
    *param_5 = uVar1;
    uVar1 = 1;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453fa8  EvSysCommand_453fa8   (37 bytes)   [owl:response-table message-handler]
//   WM_SYSCOMMAND
void __cdecl EvSysCommand_453fa8(int *param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = FUN_00453fd0(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00436428(*param_1);
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00453fd0  FUN_00453fd0   (74 bytes)   [unnamed]
undefined4 __cdecl FUN_00453fd0(int *param_1,uint param_2)

{
  BOOL ok;
  
  if (*(char *)((int)param_1 + 0x21) == '\0') {
    return 0;
  }
  if (((param_2 & 0xfff0) == 0xf100) || ((param_2 & 0xfff0) == 0xf090)) {
    ok = IsIconic(*(HWND *)(*param_1 + 0xc));
    if (ok == 0) {
      FUN_00454f88(param_1);
      return 1;
    }
  }
  return 0;
}

} // namespace tea
