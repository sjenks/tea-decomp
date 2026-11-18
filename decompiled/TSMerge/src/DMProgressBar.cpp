// TSMerge.exe — application module "DMProgressBar"
// 9 functions, 0x00401000..0x004014b4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00401000  entry   (2 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall entry(void)

{
  undefined **startupTable;
  
  _DAT_004612cb = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_0044c698();
  FUN_0044ba34();
  FUN_0044c69c();
  FUN_00456b8c((undefined4 *)0x0);
  startupTable = &PTR_DAT_00461270;
  _DAT_004612cf = GetModuleHandleA((LPCSTR)0x0);
  FUN_0045e358((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401012  __startup   (71 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00401012. C runtime start: records the TLS index, initialises the RTL and calls the program's main through the startup table
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __stdcall __startup(void)

{
  undefined **startupTable;
  
  _DAT_004612cb = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_0044c698();
  FUN_0044ba34();
  FUN_0044c69c();
  FUN_00456b8c((undefined4 *)0x0);
  startupTable = &PTR_DAT_00461270;
  _DAT_004612cf = GetModuleHandleA((LPCSTR)0x0);
  FUN_0045e358((int)startupTable);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401059  __GetExceptDLLinfo   (5 bytes)   [unnamed]
//   file placement: inferred (precedes first anchor)
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl __GetExceptDLLinfo(undefined4 *info)

{
                    /* 0x1059  1  __GetExceptDLLinfo */
  _DAT_00474598 = __getTlsBlock();
  _DAT_00474598 = _DAT_00474598 + 0x1c;
  *info = 0x82727349;
  info[1] = &DAT_00474584;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401140  __getTlsBlock   (15 bytes)   [analysis]
//   this thread's TLS block (FS:[0x2c][tls index])
//   file placement: inferred (precedes first anchor)
undefined4 __stdcall __getTlsBlock(void)

{
  int *piVar1;
  undefined2 in_FS;
  
  piVar1 = (int *)segment(in_FS,0x2c);
  return *(undefined4 *)(*piVar1 + _tls_index * 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x00401150  InitStaticStrings   (85 bytes)   [analysis]
//   static initialiser of two global strings
//   file placement: inferred (precedes first anchor)
/* WARNING: Removing unreachable block (ram,0x0040118f) */
void __stdcall InitStaticStrings(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4612f0);
  (*(undefined * *)&DAT_004768a4) = &g_emptyStringData;
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004011a8  DestroyStaticStrings   (163 bytes)   [analysis]
//   static destructor of two global strings
//   file placement: inferred (precedes first anchor)
void __stdcall DestroyStaticStrings(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x461310);
  if (DAT_004768a4 != 0) {
    if (*(int *)(DAT_004768a4 + -0xc) != -1) {
      strRep = (int *)(DAT_004768a4 + -0xc);
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
      if (prevRefs != 0) goto LAB_0040123b;
    }
    operator_delete();
    DAT_004768a4 = 0;
  }
LAB_0040123b:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0040124c  DMProgressBar::DMProgressBar   (300 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DMProgressBar's vtable at its vptr offset (+0xc) in this
int * __cdecl DMProgressBar::DMProgressBar(int *self,int vbasesBuilt,undefined4 param_3,undefined4 param_4)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4617c0);
  if (vbasesBuilt == 0) {
    *self = (int)(self + 0xb);
    self[0xb] = (int)(self + 8);
    self[0xc] = (int)(self + 9);
    self[1] = (int)(self + 8);
    self[2] = (int)(self + 9);
    self[7] = 0;
    self[10] = 0;
    self[8] = (int)&OWL::TEventHandler::vftable;
    self[9] = (int)&OWL::TStreamableBase::vftable;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
    OWL::TWindow::TWindow_42ab84(self + 0xb,1);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
  }
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -6;
  *(int *)(*self + -4) = *(int *)(*self + -4) + -6;
  OWL::TButton::TButton(self,1,param_3,param_4,0);
  *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 6;
  *(int *)(*self + -4) = *(int *)(*self + -4) + 6;
  self[3] = (int)&DMProgressBar::vftable;
  *(undefined ***)self[1] = &PTR_LAB_00462178;
  *(undefined ***)self[2] = &PTR_LAB_00462184;
  *(undefined ***)(*self + 8) = &DMProgressBar::vftable_TWindow;
  self[6] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00401394  DMProgressBar::~DMProgressBar   (251 bytes)   [rtti:dtor destructor]
//   written in code as DMProgressBar::_dtor
void __cdecl DMProgressBar::_dtor(int *self,uint dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4617e4);
  if (self != (int *)0x0) {
    self[3] = (int)&DMProgressBar::vftable;
    *(undefined ***)self[1] = &PTR_LAB_00462178;
    *(undefined ***)self[2] = &PTR_LAB_00462184;
    *(undefined ***)(*self + 8) = &DMProgressBar::vftable_TWindow;
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -6;
    *(int *)(*self + -4) = *(int *)(*self + -4) + -6;
    OWL::TButton::_dtor(self,0);
    *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 6;
    *(int *)(*self + -4) = *(int *)(*self + -4) + 6;
    if ((dtorFlags & 2) != 0) {
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + 0x96;
      OWL::TWindow::_dtor(self + 0xb,0);
      *(int *)(self[1] + -4) = *(int *)(self[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(self + 9,0);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004014b4  DMProgressBar::vf5   (367 bytes)   [rtti:vtable virtual slot 5]
void __cdecl DMProgressBar::vf5(int self,int param_2)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  HDC tdc [9];
  
  __InitExceptBlockLDTC(0x461818);
  FUN_00416a98((undefined4*)tdc,*(undefined4 *)(param_2 + 0x18));
  iVar1 = ((*(int *)(param_2 + 0x24) - *(int *)(param_2 + 0x1c)) * *(int *)(self + 0x18)) / 100;
  OWL::TDC::vf6((undefined4*)tdc,7);
  OWL::TDC::vf6((undefined4*)tdc,5);
  Rectangle(tdc[0],*(int *)(param_2 + 0x1c),*(int *)(param_2 + 0x20),*(int *)(param_2 + 0x24),
            *(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)tdc,8);
  OWL::TDC::vf6((undefined4*)tdc,2);
  Rectangle(tdc[0],*(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x1c) + iVar1,*(int *)(param_2 + 0x28));
  OWL::TDC::vf6((undefined4*)tdc,0);
  Rectangle(tdc[0],iVar1 + *(int *)(param_2 + 0x1c) + 1,*(int *)(param_2 + 0x20) + 1,
            *(int *)(param_2 + 0x24) + -1,*(int *)(param_2 + 0x28));
  OWL::TDC::_dtor((int *)tdc,2);
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
