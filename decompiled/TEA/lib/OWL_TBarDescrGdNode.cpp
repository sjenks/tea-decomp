// TEA.exe — runtime / library code "OWL_TBarDescrGdNode"
// 1 functions, 0x004ca578..0x004ca578. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004ca578  OWL::__TBarDescrGdNode::~__TBarDescrGdNode   (95 bytes)   [rtti:dtor destructor]
//   written in code as OWL::__TBarDescrGdNode::_dtor
void __cdecl OWL::__TBarDescrGdNode::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x512184);
  if (param_1 != (int *)0x0) {
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
