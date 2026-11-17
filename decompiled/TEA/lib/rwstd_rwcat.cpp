// TEA.exe — runtime / library code "rwstd_rwcat"
// 1 functions, 0x004da158..0x004da158. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004da158  __rwstd::__rwcat::~__rwcat   (172 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::__rwcat::_dtor
void __cdecl __rwstd::__rwcat::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  __InitExceptBlockLDTC(0x51646c);
  local_c = 2;
  if (param_1 != (undefined4 *)0x0) {
    local_18 = 8;
    if ((HMODULE)*param_1 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*param_1);
    }
    *param_1 = 0;
    local_c = local_c + -2;
    iVar1 = param_1[0xb];
    if (iVar1 != 0) {
      local_2c = *(undefined4 *)(iVar1 + 8);
      local_30 = iVar1;
      FUN_004cd8bc(local_40,(int)(param_1 + 2));
      iVar1 = param_1[0xb];
      *(undefined4 *)(iVar1 + 0xc) = param_1[8];
      param_1[8] = iVar1;
      FUN_004ceb10((int)(param_1 + 2));
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
