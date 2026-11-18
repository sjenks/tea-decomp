// TSBuild.exe — runtime / library code "rwstd_rwcat"
// 1 functions, 0x00464f04..0x00464f04. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00464f04  __rwstd::__rwcat::~__rwcat   (172 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::__rwcat::_dtor
void __cdecl __rwstd::__rwcat::_dtor(undefined4 *self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 local_40 [4];
  int unused;
  undefined4 unused2;
  undefined4 sehPrevFrame;
  undefined2 ehContext;
  int local_c;
  
  __InitExceptBlockLDTC(0x4881a0);
  local_c = 2;
  if (self != (undefined4 *)0x0) {
    ehContext = 8;
    if ((HMODULE)*self != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*self);
    }
    *self = 0;
    local_c = local_c + -2;
    iVar1 = self[0xb];
    if (iVar1 != 0) {
      unused2 = *(undefined4 *)(iVar1 + 8);
      unused = iVar1;
      FUN_0045800c(local_40,(int)(self + 2));
      iVar1 = self[0xb];
      *(undefined4 *)(iVar1 + 0xc) = self[8];
      self[8] = iVar1;
      FUN_00459260((int)(self + 2));
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
