// TEA.exe — runtime / library code "code_0x004c4000"
// 14 functions, 0x004c4074..0x004c7ecc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c4074  FUN_004c4074   (114 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c4074(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x510c64);
  if (*(int *)(param_1 + 0x52) == 0) {
    puVar2 = (undefined4 *)0x0;
    *sehChainHead = sehPrevFrame;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x52) = 0;
    puVar2 = (undefined4 *)operator_new();
    if (puVar2 != (undefined4 *)0x0) {
      FUN_0049ca30(puVar2,uVar1,1);
    }
    *sehChainHead = sehPrevFrame;
  }
  return puVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c4f30  FUN_004c4f30   (92 bytes)   [unnamed]
undefined4 __stdcall FUN_004c4f30(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  puVar1 = (undefined4 *)FUN_00487bc0();
  iVar3 = FUN_00487e08(puVar1,iVar3);
  if (iVar3 != 0) {
    FUN_00498d7c((int *)(iVar3 + 0x11));
  }
  if ((DAT_00510fdc == param_1) || (DAT_00510fdc == -1)) {
    DAT_00510fdc = 0;
    uVar2 = 0;
  }
  else if ((param_2 == 0) || (param_2 == -4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c52b0  FUN_004c52b0   (174 bytes)   [unnamed]
void __cdecl FUN_004c52b0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  char out;
  char local_17;
  undefined4 unused;
  undefined4 unused2;
  undefined4 unused3;
  undefined4 unused4;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    if ((((*(char *)(param_1 + 0x15) == '\0') || (*(int *)(param_1 + 0x16) != 0)) ||
        (*(int *)(param_1 + 0x1a) != 0)) ||
       ((*(int *)(param_1 + 0x1e) != *(int *)(param_1 + 0x26) ||
        (*(int *)(param_1 + 0x22) != *(int *)(param_1 + 0x2a))))) {
      if ((*(uint *)(param_1 + 0x11) & 3) == 1) {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) & 0xfffffffc | 1;
      }
      else {
        *(uint *)(param_1 + 0x11) = *(uint *)(param_1 + 0x11) | 3;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x11) = 2;
    }
  }
  else {
    unused = 0;
    unused2 = 0;
    unused3 = 0;
    unused4 = 0;
    Escape((HDC)*param_2,0x18,0x12,(LPCSTR)0x0,&out);
    uVar1 = (uint)(out != '\0');
    if (local_17 != '\0') {
      uVar1 = 1;
    }
    *(uint *)(param_1 + 0x11) = uVar1 | *(uint *)(param_1 + 0x11) & 0xfffffffc;
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c5f00  FUN_004c5f00   (83 bytes)   [unnamed]
void __cdecl FUN_004c5f00(uint param_1)

{
  int *piVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined4 local_10 [3];
  
  __InitExceptBlockLDTC(0x5112bc);
  piVar1 = OWL::TXPrinter::TXPrinter(local_10,param_1);
  (**(code **)(*piVar1 + 0xc))();
  OWL::TXOwl::_dtor(local_10,0);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7364  InitRichEditStreamer_4c7364   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4c7364(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x51189c);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c7790;
  puVar1 = FUN_004dd5cc(1,0,0x428068);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b954,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c73ba  FUN_004c73ba   (48 bytes)   [unnamed]
void __stdcall FUN_004c73ba(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5118b0);
  OWL::TStreamableClass::_dtor(0x51b954,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7494  FUN_004c7494   (78 bytes)   [unnamed]
int * __cdecl FUN_004c7494(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *local_8;
  
  local_8 = (int *)0x0;
  FUN_0049a1b0(param_1,(int *)&local_8,1);
  if (local_8 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *local_8;
  }
  puVar2 = FUN_004dd744((int)local_8,iVar1,(int *)&DAT_004027f0,(int *)&DAT_00428068,0);
  *param_2 = puVar2;
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c74e4  FUN_004c74e4   (26 bytes)   [unnamed]
int * __cdecl FUN_004c74e4(int *param_1,int *param_2)

{
  FUN_0049a490(param_1,param_2,1);
  return param_1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7506  FUN_004c7506   (333 bytes)   [unnamed]
int __stdcall FUN_004c7506(void)

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
  FUN_00499da0(piVar2,iVar1 + 8,4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x34),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x30) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x2c) = uVar3;
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x28),4);
  FUN_00499da0(piVar2,*(undefined4 *)(unaff_EBP + -0x24),4);
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x20) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x1c) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x18) = uVar3;
  uVar3 = FUN_00499e9c(piVar2);
  **(uint **)(unaff_EBP + -0x14) = uVar3;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0x10) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -0xc) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -8) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)*(undefined4 *)(unaff_EBP + -4) = iVar4 != 0;
  iVar4 = FUN_00499f04(piVar2);
  *(bool *)(iVar1 + 0x3c) = iVar4 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7790  FUN_004c7790   (134 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7790(int *scroller)

{
  undefined4 *streamer;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511904);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if ((scroller == (int *)0x0) && (scroller = (int *)operator_new(), scroller != (int *)0x0)) {
      OWL::TScroller::TScroller_4c7454(scroller);
    }
    OWL::TScroller::Streamer::Streamer(streamer,scroller);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7c60  InitRichEditStreamer_4c7c60   (86 bytes)   [analysis (matched TEA.exe, duplicated code)]
//   same masked bytes as TEA.exe 0x0048687b (86 bytes; the code occurs several times, e.g. one template instance per type). static initialiser of the TRichEdit streamable class registration
void __stdcall InitRichEditStreamer_4c7c60(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511acc);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_004c7ecc;
  puVar1 = FUN_004dd5cc(1,0,0x402af0);
  puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
  FUN_00499268((undefined4 *)&DAT_0051b964,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7cb6  FUN_004c7cb6   (48 bytes)   [unnamed]
void __stdcall FUN_004c7cb6(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511ae0);
  OWL::TStreamableClass::_dtor(0x51b964,2);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7e6c  EvRegisteredMsg_4c7e6c_4c7e6c   (47 bytes)   [owl:response-table message-handler]
//   message id 0 in the static table (filled at run time or WM_NULL)
//   also: OWL::TStatic::Streamer::vf1 [rtti:vtable]
undefined4 __cdecl EvRegisteredMsg_4c7e6c_4c7e6c(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  FUN_004ac1c8(*(int *)(param_1 + 8),param_2);
  iVar1 = *(int *)(param_1 + 8);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x14) = uVar2;
  return *(undefined4 *)(param_1 + 8);
}

// ----------------------------------------------------------------------------------------------------
// 0x004c7ecc  FUN_004c7ecc   (152 bytes)   [unnamed]
undefined4 * __cdecl FUN_004c7ecc(int *param_1)

{
  undefined4 *streamer;
  int *static_;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x511b34);
  streamer = (undefined4 *)operator_new();
  if (streamer != (undefined4 *)0x0) {
    if (param_1 == (int *)0x0) {
      static_ = (int *)operator_new();
      if (static_ == (int *)0x0) {
        param_1 = (int *)0x0;
      }
      else {
        OWL::TStatic::TStatic_4c7d50(static_,0);
        param_1 = (int *)static_[2];
      }
    }
    OWL::TStatic::Streamer::Streamer(streamer,param_1);
  }
  *sehChainHead = sehPrevFrame;
  return streamer;
}

} // namespace tea
