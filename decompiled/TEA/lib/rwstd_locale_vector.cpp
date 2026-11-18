// TEA.exe — runtime / library code "rwstd_locale_vector"
// 3 functions, 0x004cf250..0x004cffb0. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004cf250  __rwstd::locale_vector<__rwstd::__rwcat *>::~locale_vector   (40 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_rwstd_rwcat_ptr::_dtor
void __cdecl __rwstd::locale_vector_rwstd_rwcat_ptr::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (*self != 0) {
      operator_delete_array();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cf33c  __rwstd::locale_vector<__rwstd::facet_imp *>::~locale_vector   (40 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_rwstd_facet_imp_ptr::_dtor
void __cdecl __rwstd::locale_vector_rwstd_facet_imp_ptr::_dtor(int *self,byte dtorFlags)

{
  if (self != (int *)0x0) {
    if (*self != 0) {
      operator_delete_array();
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004cffb0  __rwstd::locale_vector<std::string>::~locale_vector   (96 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_vector_std_string::_dtor
void __cdecl __rwstd::locale_vector_std_string::_dtor(int *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x5140c0);
  if (self != (int *)0x0) {
    if (*self != 0) {
      _vector_delete_ldtc_(*self,0x10,0,0x19,(undefined*)std::string::_dtor);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
