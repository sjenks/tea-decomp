// TSBuild.exe — runtime / library code "OWL_TAPointer"
// 3 functions, 0x0041c210..0x00444758. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0041c210  OWL::TAPointer<char>::~TAPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_char::_dtor
void __cdecl OWL::TAPointer_char::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004278e8  OWL::TAPointer<OWL::TRect>::~TAPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TRect::_dtor
void __cdecl OWL::TAPointer_OWL_TRect::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00444758  OWL::TAPointer<OWL::TDocTemplate *>::~TAPointer   (34 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TAPointer_OWL_TDocTemplate_ptr::_dtor
void __cdecl OWL::TAPointer_OWL_TDocTemplate_ptr::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      *param_1 = 0;
    }
  }
  return;
}

} // namespace tea
