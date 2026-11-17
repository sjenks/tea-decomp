// TSBuild.exe — runtime / library code "rwstd_rb_tree"
// 1 functions, 0x00457f10..0x00457f10. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00457f10  __rwstd::__rb_tree<int,std::pair<const int,std::string>,__rwstd::__select1st<std::pair<const int,std::string>,int>,std::less<int>>::~__rb_tree   (107 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::rb_tree_int_std_pair_const_int_std_string_rwstd_select1st_std_pair_const_int_std_string_int_std_less_int::_dtor
void __cdecl __rwstd::rb_tree_int_std_pair_const_int_std_string_rwstd_select1st_std_pair_const_int_std_string_int_std_less_int::_dtor(int param_1,byte param_2)

{
  undefined1 local_38 [4];
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 local_14 [4];
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      uStack_34 = 0x457f32;
      FUN_00457fec((int)&local_28,param_1);
      FUN_00457f7c((int)local_38,param_1);
      FUN_0045800c(local_14,param_1);
      local_28 = 0x457f5f;
      FUN_00458ec0(param_1,*(int *)(param_1 + 0x24),'\0');
      FUN_00459260(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

} // namespace tea
