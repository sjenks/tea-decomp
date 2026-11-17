// TSBuild.exe — runtime / library code "std_logic_error"
// 1 functions, 0x00467224..0x00467224. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00467224  std::logic_error::~logic_error   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::logic_error::_dtor
void __cdecl std::logic_error::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x488998);
  if (param_1 == (undefined4 *)0x0) goto LAB_004672ed;
  *param_1 = &std::logic_error::vftable;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004672cc;
    }
    operator_delete();
    param_1[4] = 0;
  }
LAB_004672cc:
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004672ed:
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
