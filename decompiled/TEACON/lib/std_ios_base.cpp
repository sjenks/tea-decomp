// TEACON.exe — runtime / library code "std_ios_base"
// 6 functions, 0x0041c778..0x0041caf4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c778  std::ios_base::failure::failure   (232 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::ios_base::failure's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::ios_base::failure::failure(undefined4 *self,int param_2)

{
  int refs;
  uint len;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430c24);
  *self = &std::exception::vftable;
  *self = &std::ios_base::failure::vftable;
  self[4] = 0;
  refs = *(int *)(*(int *)(param_2 + 8) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    len = *(uint *)(*(int *)(param_2 + 8) + -4);
    rep = std::string::__getRep(self + 2,len,len);
    self[4] = rep + 3;
    memcpy((undefined4 *)self[4],*(undefined4 **)(param_2 + 8),len);
  }
  else {
    self[4] = *(undefined4 *)(param_2 + 8);
    rep = (int *)(self[4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c888  std::ios_base::failure::~failure   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::failure::_dtor
void __cdecl std::ios_base::failure::_dtor(undefined4 *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430c60);
  if (self == (undefined4 *)0x0) goto LAB_0041c951;
  *self = &std::ios_base::failure::vftable;
  if (self[4] != 0) {
    if (*(int *)(self[4] + -0xc) != -1) {
      strRep = (int *)(self[4] + -0xc);
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
      if (prevRefs != 0) goto LAB_0041c930;
    }
    operator_delete();
    self[4] = 0;
  }
LAB_0041c930:
  std::exception::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0041c951:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041c964  std::ios_base::failure::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl std::ios_base::failure::vf1(int self)

{
  return *(undefined4 *)(self + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ca20  std::ios_base::Init::~Init   (68 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::Init::_dtor
void __cdecl std::ios_base::Init::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    DAT_00434894 = DAT_00434894 + -1;
    if (DAT_00434894 == 0) {
      FUN_00418c38((int *)&DAT_004347cc);
      FUN_00418c38(&DAT_0043480c);
      FUN_00418c38(&DAT_0043484c);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041ca64  std::ios_base::ios_base   (115 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::ios_base's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::ios_base::ios_base(undefined4 *self)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430cb4);
  *self = &std::ios_base::vftable;
  if (DAT_004348a8 == 0) {
    FUN_0041dd4c();
  }
  iVar1 = DAT_004348a8;
  self[4] = DAT_004348a8;
  *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + 1;
  self[5] = 0;
  self[6] = 0;
  self[7] = 0;
  self[8] = 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041caf4  std::ios_base::~ios_base   (225 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::_dtor
void __cdecl std::ios_base::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *puVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x430ce8);
  if (self != (undefined4 *)0x0) {
    *self = &std::ios_base::vftable;
    while (self[6] != 0) {
      self[6] = self[6] + -1;
      (**(code **)(self[8] + 4 + self[6] * 8))();
    }
    operator_delete_array();
    operator_delete_array();
    puVar1 = (undefined4 *)self[4];
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
