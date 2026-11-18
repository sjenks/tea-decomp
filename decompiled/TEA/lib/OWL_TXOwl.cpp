// TEA.exe — runtime / library code "OWL_TXOwl"
// 7 functions, 0x0048ed28..0x0048efdc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048ed28  OWL::TXOwl::TXOwl   (76 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXOwl's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXOwl::TXOwl(undefined4 *self,int param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5062e4);
  OWL::TXBase::TXBase(self,param_2);
  *self = &OWL::TXOwl::vftable;
  self[2] = param_3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ed90  OWL::TXOwl::TXOwl_48ed90   (235 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXOwl's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXOwl::TXOwl_48ed90(undefined4 *self,uint param_2,int param_3)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  undefined1 local_14 [8];
  int str;
  
  __InitExceptBlockLDTC(0x506318);
  FUN_0048f078((int)local_14,(char *)0x0,param_2,param_3);
  OWL::TXBase::TXBase(self,(int)local_14);
  if (str != 0) {
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
      if (prevRefs != 0) goto LAB_0048ee4b;
    }
    operator_delete();
  }
LAB_0048ee4b:
  *self = &OWL::TXOwl::vftable;
  self[2] = param_2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ee7c  OWL::TXOwl::~TXOwl   (93 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXOwl::_dtor
void __cdecl OWL::TXOwl::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506364);
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TXOwl::vftable;
    OWL::TXBase::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eedc  OWL::TXOwl::vf4   (29 bytes)   [rtti:vtable virtual slot 4]
void __cdecl OWL::TXOwl::vf4(undefined4 self,int *param_2)

{
  (**(code **)(*param_2 + 4))();
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eefc  OWL::TXOwl::vf2   (113 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXOwl::vf2(int *self)

{
  undefined4 *txOwl;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506388);
  txOwl = (undefined4 *)operator_new();
  if (txOwl != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txOwl,self);
    txOwl[2] = self[2];
    *txOwl = &OWL::TXOwl::vftable;
  }
  *sehChainHead = sehPrevFrame;
  return txOwl;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ef70  OWL::TXOwl::vf3   (105 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXOwl::vf3(int *self)

{
  undefined4 objectDtor;
  code *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined **txOwl [2];
  int unused;
  
  __InitExceptBlockLDTC(0x5063b8);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = OWL::TXOwl::TXOwl_48efdc;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c((undefined4*)txOwl,self);
  unused = self[2];
  txOwl[0] = &OWL::TXOwl::vftable;
  _ThrowExceptionLDTC((uint *)&DAT_00487430,(undefined4*)txOwl,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048efdc  OWL::TXOwl::TXOwl_48efdc   (69 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXOwl's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TXOwl::TXOwl_48efdc(undefined4 *self,int *param_2)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506624);
  OWL::TXBase::TXBase_48e99c(self,param_2);
  self[2] = param_2[2];
  *self = &OWL::TXOwl::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
