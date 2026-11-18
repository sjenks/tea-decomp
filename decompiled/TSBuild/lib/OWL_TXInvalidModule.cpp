// TSBuild.exe — runtime / library code "OWL_TXInvalidModule"
// 4 functions, 0x00450388..0x00450690. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450388  OWL::TXInvalidModule::TXInvalidModule   (231 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXInvalidModule's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXInvalidModule::TXInvalidModule(undefined4 *self,undefined4 param_2)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 uVar3;
  undefined4 sehPrevFrame;
  undefined1 str [8];
  int str2;
  
  __InitExceptBlockLDTC(0x4832cc);
  uVar3 = 0;
  FUN_004235b8((int)str,0x7ff8,param_2,DAT_00484890);
  OWL::TXOwl::TXOwl(self,(int)str,uVar3);
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
      if (prevRefs != 0) goto LAB_00450446;
    }
    operator_delete();
  }
LAB_00450446:
  *self = &OWL::TXInvalidModule::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450494  OWL::TXInvalidModule::vf2   (126 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXInvalidModule::vf2(int *self)

{
  undefined4 *txInvalidModule;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483314);
  txInvalidModule = (undefined4 *)operator_new();
  if (txInvalidModule != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_422cfc(txInvalidModule,self);
    txInvalidModule[2] = self[2];
    *txInvalidModule = &OWL::TXOwl::vftable;
    *txInvalidModule = &OWL::TXInvalidModule::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txInvalidModule;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450514  OWL::TXInvalidModule::vf3   (116 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXInvalidModule::vf3(int *self)

{
  undefined4 objectDtor;
  undefined *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txInvalidModule [2];
  int unused;
  
  __InitExceptBlockLDTC(0x483344);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = &LAB_004505e8;
  objectDtor = 0;
  OWL::TXBase::TXBase_422cfc((undefined4*)txInvalidModule,self);
  unused = self[2];
  txInvalidModule[0] = &OWL::TXInvalidModule::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00450588,(undefined4*)txInvalidModule,objectDtor,copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450690  OWL::TXInvalidModule::~TXInvalidModule   (67 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXInvalidModule::_dtor
void __cdecl OWL::TXInvalidModule::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x483388);
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
