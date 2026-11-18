// TSMerge.exe — application module "Help"
// 6 functions, 0x0040ed80..0x0040eef8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0040ed80  Help::~Help   (72 bytes)   [rtti:dtor destructor]
//   written in code as Help::_dtor
void __cdecl Help::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (self[1] != 0) {
      (*(code *)self[1])();
      if (*self != 0) {
        (*(code *)self[1])();
        FreeLibrary((HMODULE)*self);
      }
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040edc8  GetRichEditVersion   (127 bytes)   [analysis]
//   2 when RICHED20.DLL can be loaded, else 1
//   file placement: inferred (address adjacency)
undefined4 __stdcall GetRichEditVersion(void)

{
  UINT uMode;
  HMODULE hLibModule;
  undefined4 *sehChainHead;
  undefined4 uVar1;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x464085);
  uMode = SetErrorMode(0x8001);
  hLibModule = LoadLibraryA("RICHED20.DLL");
  if (hLibModule < (HMODULE)0x21) {
    uVar1 = 1;
    SetErrorMode(uMode);
    *sehChainHead = sehPrevFrame;
  }
  else {
    FreeLibrary(hLibModule);
    uVar1 = 2;
    SetErrorMode(uMode);
    *sehChainHead = sehPrevFrame;
  }
  return uVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee47  InitRichEditStreamer   (86 bytes)   [analysis]
//   static initialiser of the TRichEdit streamable class registration
//   file placement: inferred (address adjacency)
void __stdcall InitRichEditStreamer(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  undefined4 *sehChainHead;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4640d5);
  iVar5 = 1;
  uVar4 = 0xffffffff;
  pcVar3 = FUN_0040fcbc;
  puVar1 = FUN_0045666c(1,0,0x40f960);
  puVar2 = (uint *)FUN_0045677c((int)puVar1);
  FUN_00421cd4((undefined4 *)&DAT_004768c9,puVar2,pcVar3,uVar4,iVar5);
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040ee9d  DestroyRichEditStreamer   (82 bytes)   [analysis]
//   static destructor of the TRichEdit streamable class registration
//   file placement: inferred (address adjacency)
void __stdcall DestroyRichEditStreamer(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4640e9);
  OWL::TStreamableClass::_dtor(0x4768c9,2);
  if (DAT_00464064 != '\0') {
    FUN_0040f010(0x4768c8,2);
    DAT_00464064 = '\0';
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eef0  OWL::TRichEdit::GetModule   (8 bytes)   [analysis]
//   the rich-edit DLL module
//   file placement: inferred (address adjacency)
undefined4 __stdcall OWL::TRichEdit::GetModule(void)

{
  undefined4 *moduleInstance;
  
  moduleInstance = (undefined4 *)OWL::TRichEdit::GetModuleInstance();
  return *moduleInstance;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040eef8  OWL::TRichEdit::GetModuleInstance   (6 bytes)   [analysis]
//   the rich-edit DLL module object
//   file placement: inferred (address adjacency)
undefined * __stdcall OWL::TRichEdit::GetModuleInstance(void)

{
  return &DAT_00464060;
}

} // namespace tea
