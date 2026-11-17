// TSBuild.exe — runtime / library code "OWL_TAppDictionary"
// 1 functions, 0x0041c658..0x0041c658. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c658  OWL::TAppDictionary::~TAppDictionary   (102 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAppDictionary::_dtor
void __cdecl OWL::TAppDictionary::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x478eec);
  if (param_1 != (int *)0x0) {
    FUN_0041c78c(param_1);
    if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*param_1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

} // namespace tea
