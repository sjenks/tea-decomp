// TEA.exe — runtime / library code "OWL_TXBase"
// 6 functions, 0x0048e860..0x0048ebb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048e860  OWL::TXBase::TXBase   (288 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBase's vtable at its vptr offset (+0x0) in this
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 * __cdecl OWL::TXBase::TXBase(undefined4 *self,int param_2)

{
  int refs;
  uint len;
  int iVar3;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506124);
  *self = &std::exception::vftable;
  *self = &OWL::TXBase::vftable;
  _DAT_00506100 = _DAT_00506100 + 1;
  iVar3 = operator_new();
  if (iVar3 != 0) {
    *(undefined4 *)(iVar3 + 8) = 0;
    refs = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (refs == -1 || refs + 1 < 0) {
      len = *(uint *)(*(int *)(param_2 + 8) + -4);
      rep = std::string::__getRep(iVar3,len,len);
      *(int **)(iVar3 + 8) = rep + 3;
      memcpy(*(undefined4 **)(iVar3 + 8),*(undefined4 **)(param_2 + 8),len);
    }
    else {
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(param_2 + 8);
      rep = (int *)(*(int *)(iVar3 + 8) + -0xc);
      if (rep != &g_nullStringRep) {
        *rep = *rep + 1;
      }
    }
  }
  self[1] = iVar3;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048e99c  OWL::TXBase::TXBase_48e99c   (135 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TXBase's vtable at its vptr offset (+0x0) in this
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
undefined4 * __cdecl OWL::TXBase::TXBase_48e99c(undefined4 *self,int *param_2)

{
  int str;
  uint *s;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x50617c);
  *self = &std::exception::vftable;
  *self = &OWL::TXBase::vftable;
  _DAT_00506100 = _DAT_00506100 + 1;
  str = operator_new();
  if (str != 0) {
    s = (uint *)(**(code **)(*param_2 + 4))();
    std::string::string_from_cstr(str,s);
  }
  self[1] = str;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ea24  OWL::TXBase::~TXBase   (233 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TXBase::_dtor
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
void __cdecl OWL::TXBase::_dtor(undefined4 *self,byte dtorFlags)

{
  int iVar1;
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5061bc);
  if (self == (undefined4 *)0x0) goto LAB_0048eafc;
  *self = &OWL::TXBase::vftable;
  _DAT_00506100 = _DAT_00506100 + -1;
  iVar1 = self[1];
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 8) != 0) {
      if (*(int *)(*(int *)(iVar1 + 8) + -0xc) != -1) {
        strRep = (int *)(*(int *)(iVar1 + 8) + -0xc);
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
        if (prevRefs != 0) goto LAB_0048ead6;
      }
      operator_delete();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
LAB_0048ead6:
    operator_delete();
  }
  std::exception::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0048eafc:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eb10  OWL::TXBase::vf2   (82 bytes)   [rtti:vtable virtual slot 2]
undefined4 * __cdecl OWL::TXBase::vf2(int *self)

{
  undefined4 *txBase;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5061ec);
  txBase = (undefined4 *)operator_new();
  if (txBase != (undefined4 *)0x0) {
    OWL::TXBase::TXBase_48e99c(txBase,self);
  }
  *sehChainHead = sehPrevFrame;
  return txBase;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048eb64  OWL::TXBase::vf3   (84 bytes)   [rtti:vtable virtual slot 3]
void __cdecl OWL::TXBase::vf3(int *self)

{
  undefined4 objectDtor;
  code *copyCtor;
  uint copyCtorMask;
  undefined4 throwFlags;
  undefined4 throwFile;
  undefined4 throwLine;
  undefined4 txBase [2];
  
  __InitExceptBlockLDTC(0x50621c);
  throwLine = 0;
  throwFile = 0;
  throwFlags = 0;
  copyCtorMask = 1;
  copyCtor = OWL::TXBase::TXBase_48e99c;
  objectDtor = 0;
  OWL::TXBase::TXBase_48e99c(txBase,self);
  _ThrowExceptionLDTC((uint *)&DAT_004874c8,txBase,objectDtor,(undefined*)copyCtor,copyCtorMask,throwFlags,throwFile,throwLine);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0048ebb8  OWL::TXBase::vf1   (41 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TXBase::vf1(int self)

{
  undefined4 uVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x506234);
  uVar1 = *(undefined4 *)(*(int *)(self + 4) + 8);
  *sehChainHead = sehPrevFrame;
  return uVar1;
}

} // namespace tea
