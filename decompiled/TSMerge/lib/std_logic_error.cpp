// TSMerge.exe — runtime / library code "std_logic_error"
// 2 functions, 0x0044aeec..0x004556f4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0044aeec  std::logic_error::logic_error   (6 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::logic_error's vtable at its vptr offset (+0x0) in this
undefined4 * __stdcall std::logic_error::logic_error(undefined4 *self,int param_2)

{
  int refs;
  uint uVar2;
  int *rep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x470670);
  *self = &std::exception::vftable;
  self[4] = 0;
  refs = *(int *)(*(int *)(param_2 + 0x10) + -0xc);
  if (refs == -1 || refs + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x10) + -4);
    rep = std::string::__getRep(self + 2,uVar2,uVar2);
    self[4] = rep + 3;
    memcpy((undefined4 *)self[4],*(undefined4 **)(param_2 + 0x10),uVar2);
  }
  else {
    self[4] = *(undefined4 *)(param_2 + 0x10);
    rep = (int *)(self[4] + -0xc);
    if (rep != &g_nullStringRep) {
      *rep = *rep + 1;
    }
  }
  *self = &std::logic_error::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004556f4  std::logic_error::~logic_error   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::logic_error::_dtor
void __cdecl std::logic_error::_dtor(undefined4 *self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x473fd0);
  if (self == (undefined4 *)0x0) goto LAB_004557bd;
  *self = &std::logic_error::vftable;
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
      if (prevRefs != 0) goto LAB_0045579c;
    }
    operator_delete();
    self[4] = 0;
  }
LAB_0045579c:
  std::exception::_dtor(self,0);
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004557bd:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
