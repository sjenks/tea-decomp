// TSBuild.exe — runtime / library code "OWL_TPointer"
// 3 functions, 0x0042e364..0x004355cc. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042e364  OWL::TPointer<OWL::TStreamer>::~TPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPointer_OWL_TStreamer::_dtor
void __cdecl OWL::TPointer_OWL_TStreamer::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043270c  OWL::TPointer<OWL::TBitmap>::~TPointer   (87 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPointer_OWL_TBitmap::_dtor
void __cdecl OWL::TPointer_OWL_TBitmap::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47d4d0);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      OWL::TBitmap::_dtor((uint *)*param_1,3);
    }
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004355cc  OWL::TPointer<OWL::TFont>::~TPointer   (99 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TPointer_OWL_TFont::_dtor
void __cdecl OWL::TPointer_OWL_TFont::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x47e12c);
  if (param_1 != (undefined4 *)0x0) {
    if ((uint *)*param_1 != (uint *)0x0) {
      OWL::TGdiObject::_dtor((uint *)*param_1,0);
      operator_delete();
    }
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
