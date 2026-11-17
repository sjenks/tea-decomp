// TSBuild.exe — application module "DictionaryMaintainer"
// 21 functions, 0x00405fbc..0x00415fb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00405fbc  DictionaryMaintainer::~DictionaryMaintainer   (32 bytes)   [rtti:dtor destructor]
//   written in code as DictionaryMaintainer::_dtor
void __cdecl DictionaryMaintainer::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &DictionaryMaintainer::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a94  DictionaryMaintainer::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall DictionaryMaintainer::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414a9c  DictionaryMaintainer::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall DictionaryMaintainer::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041576c  std::map<std::string,long,std::less<std::string>>::~map   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::map_std_string_long_std_less_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::map_std_string_long_std_less_std_string::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x476aac);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_00412010(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0041221c(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004157ec  std::pair<const std::string,std::vector<long> *>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_std_vector_long_ptr::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476ac0);
  if (param_1 == 0) goto LAB_00415881;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_00415874;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00415874:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00415881:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415894  std::pair<const std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_long::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476ad4);
  if (param_1 == 0) goto LAB_00415929;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_0041591c;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0041591c:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00415929:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041593c  std::pair<std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_std_string_long::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476ae8);
  if (param_1 == 0) goto LAB_004159d1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
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
      if (iVar1 != 0) goto LAB_004159c4;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_004159c4:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004159d1:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004159e4  std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>::~map   (125 bytes)   [rtti:dtor destructor]
//   written in code as std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x476afc);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_004062a0(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_00406ec8(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415a64  std::multimap<std::string,long,WordListMapComparator>::~multimap   (125 bytes)   [rtti:dtor destructor]
//   written in code as std::multimap_std_string_long_WordListMapComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::multimap_std_string_long_WordListMapComparator::_dtor(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff98;
  undefined4 in_stack_ffffff9c;
  undefined4 local_3c [4];
  undefined4 local_2c;
  undefined4 local_28;
  int local_c;
  
  __InitExceptBlockLDTC(0x476b10);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_0040f198(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0040fdb4(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415ae4  std::bad_alloc::vf1   (10 bytes)   [rtti:vtable virtual slot 1]
//   file placement: inferred (address adjacency)
undefined * __stdcall std::bad_alloc::vf1(void)

{
  return PTR_s_bad_alloc_exception_thrown_004888ec;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415af0  FUN_00415af0   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415af0(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00414a7c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b28  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00414020(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b60  std::vector<long>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_long::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004061b8(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b98  FUN_00415b98   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415b98(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_00410620(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415d40  FUN_00415d40   (54 bytes)   [unnamed; function defined from prologue-scan]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415d40(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_004061d0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415d78  FUN_00415d78   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415d78(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476b58);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0040f198(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0040fdb4(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415dec  FUN_00415dec   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415dec(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476b60);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_004062a0(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_00406ec8(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e60  FUN_00415e60   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_00415e60(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476b68);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00412010(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0041221c(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415ed4  FUN_00415ed4   (61 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00415ed4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476b88);
  std::string::string_from_cstr(0x48c354,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415f14  FUN_00415f14   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __stdcall FUN_00415f14(void)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476b9c);
  if (DAT_0048c35c != 0) {
    if (*(int *)(DAT_0048c35c + -0xc) != -1) {
      piVar2 = (int *)(DAT_0048c35c + -0xc);
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
      if (iVar1 != 0) goto LAB_00415fa7;
    }
    operator_delete();
    DAT_0048c35c = 0;
  }
LAB_00415fa7:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415fb8  FUN_00415fb8   (222 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00416036) */
/* WARNING: Removing unreachable block (ram,0x00415ff2) */
/* WARNING: Removing unreachable block (ram,0x00416014) */
/* WARNING: Removing unreachable block (ram,0x00416058) */
int __cdecl FUN_00415fb8(int param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x476c58);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined **)(param_1 + 0x18) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x28) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_00485bd8;
  *(undefined4 *)(param_1 + 0x40) = 1;
  *(undefined4 *)(param_1 + 0x44) = 100;
  *(undefined4 *)(param_1 + 0x48) = 10;
  *(undefined4 *)(param_1 + 0x4c) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

} // namespace tea
