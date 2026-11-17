// TEA.exe — runtime / library code "rwstd_locale_vector"
// 3 functions, 0x004cf250..0x004cffb0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004cf250  __rwstd::locale_vector<__rwstd::__rwcat *>::~locale_vector   (40 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_rwstd_rwcat_ptr::_dtor
void __cdecl __rwstd::locale_vector_rwstd_rwcat_ptr::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      operator_delete_array();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf33c  __rwstd::locale_vector<__rwstd::facet_imp *>::~locale_vector   (40 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_rwstd_facet_imp_ptr::_dtor
void __cdecl __rwstd::locale_vector_rwstd_facet_imp_ptr::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      operator_delete_array();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cffb0  __rwstd::locale_vector<std::string>::~locale_vector   (96 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_std_string::_dtor
void __cdecl __rwstd::locale_vector_std_string::_dtor(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  __InitExceptBlockLDTC(0x5140c0);
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      _vector_delete_ldtc_(*param_1,0x10,0,0x19,(undefined*)std::string::_dtor);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

} // namespace tea
