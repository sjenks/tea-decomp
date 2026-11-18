// TEA.exe — runtime / library code "OWL_TXGdi"
// 4 functions, 0x00493560..0x00493858. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00493560  OWL::TXGdi::TXGdi   (229 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXGdi's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXGdi::TXGdi(undefined4 *self,uint param_2,undefined4 param_3)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x5070ec);
  FUN_0048f35c((int)str,param_2,param_3,DAT_00512a1c);
  OWL::TXOwl::TXOwl(self,(int)str,param_2);
  if (str2 != 0) {
    if (*(int *)(str2 + -0xc) != -1) {
      strRep = (int *)(str2 + -0xc);
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
      if (prevRefs != 0) goto LAB_0049361c;
    }
    operator_delete();
  }
LAB_0049361c:
  *self = &OWL::TXGdi::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00493664  OWL::TXGdi::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXGdi::vf2(int *self)

{
  undefined4 *txGdi;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x507134);
  txGdi = (undefined4 *)operator_new();
  if (txGdi != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txGdi,self);
    txGdi[2] = self[2];
    *txGdi = &OWL::TXOwl::vftable;
    *txGdi = &OWL::TXGdi::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txGdi;
}

// ----------------------------------------------------------------------------------------------------
// 0x004936e4  OWL::TXGdi::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXGdi::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txGdi [2];
  int unused;
  
  __InitExceptBlockLDTC(0x507164);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_004937ac;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txGdi,self);
  unused = self[2];
  txGdi[0] = &OWL::TXGdi::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00493758,(undefined4*)txGdi,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00493858  OWL::TXGdi::~TXGdi   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXGdi::_dtor
void __cdecl OWL::TXGdi::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5071a8);
  if (self != (undefined4 *)0x0) {
    OWL::TXOwl::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
