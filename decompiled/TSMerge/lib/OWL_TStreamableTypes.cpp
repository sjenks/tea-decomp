// TSMerge.exe — runtime / library code "OWL_TStreamableTypes"
// 1 functions, 0x00421e4c..0x00421e4c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00421e4c  OWL::TStreamableTypes::~TStreamableTypes   (136 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TStreamableTypes::_dtor
void __cdecl OWL::TStreamableTypes::_dtor(int *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x4688ac);
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      FUN_00421ed4(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        free();
      }
      operator_delete();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
