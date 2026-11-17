// TEA.exe — application module "DictionaryMaintainer"
// 16 functions, 0x0043fdec..0x0044e810. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043fdec  DictionaryMaintainer::~DictionaryMaintainer   (32 bytes)   [rtti:dtor destructor]
//   written in code as DictionaryMaintainer::_dtor
void __cdecl DictionaryMaintainer::_dtor(undefined4 *param_1,byte param_2)

{
  if ((param_1 != (undefined4 *)0x0) && (*param_1 = &DictionaryMaintainer::vftable, (param_2 & 1) != 0)) {
    operator_delete();
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d464  DictionaryMaintainer::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall DictionaryMaintainer::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044d46c  DictionaryMaintainer::vf4   (5 bytes)   [rtti:vtable virtual slot 4]
void __stdcall DictionaryMaintainer::vf4(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e124  std::map<std::string,long,std::less<std::string>>::~map   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
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
  
  __InitExceptBlockLDTC(0x4f72ac);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_0044b574(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0044b780(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e1a4  std::pair<const std::string,std::vector<long> *>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_std_vector_long_ptr::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f72c0);
  if (param_1 == 0) goto LAB_0044e239;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0044e22c;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0044e22c:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0044e239:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e24c  std::pair<const std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_long::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f72d4);
  if (param_1 == 0) goto LAB_0044e2e1;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0044e2d4;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0044e2d4:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0044e2e1:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e2f4  std::pair<std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_std_string_long::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f72e8);
  if (param_1 == 0) goto LAB_0044e389;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_0044e37c;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0044e37c:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0044e389:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e39c  std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>::~map   (125 bytes)   [rtti:dtor destructor]
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
  
  __InitExceptBlockLDTC(0x4f72fc);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_004400a0(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_00440cc8(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e41c  std::multimap<std::string,long,WordListMapComparator>::~multimap   (125 bytes)   [rtti:dtor destructor]
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
  
  __InitExceptBlockLDTC(0x4f7310);
  if (param_1 != 0) {
    local_c = local_c + -1;
    if (*(int *)(param_1 + 0x24) != 0) {
      local_2c = *(undefined4 *)(param_1 + 0x24);
      FUN_00448d98(local_3c,param_1,in_stack_ffffff98,in_stack_ffffff9c,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_004499b4(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e49c  FUN_0044e49c   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e49c(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0044d44c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e4d4  FUN_0044e4d4   (54 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e4d4(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0044a18c(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e67c  FUN_0044e67c   (54 bytes)   [unnamed; function defined from prologue-scan]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e67c(int param_1,byte param_2)

{
  if (param_1 != 0) {
    FUN_0043ffd0(param_1,*(int *)(param_1 + 4),*(int *)(param_1 + 8));
    operator_delete();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e6b4  FUN_0044e6b4   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e6b4(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f7344);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_00448d98(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_004499b4(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e728  FUN_0044e728   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e728(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f734c);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_004400a0(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_00440cc8(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e79c  FUN_0044e79c   (114 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
void __cdecl FUN_0044e79c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 in_stack_ffffff9c;
  undefined4 in_stack_ffffffa0;
  undefined4 local_38 [4];
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f7354);
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      FUN_0044b574(local_38,param_1,in_stack_ffffff9c,in_stack_ffffffa0,
                   *(int *)(*(int *)(param_1 + 0x24) + 8));
      iVar1 = *(int *)(param_1 + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0x18);
      *(int *)(param_1 + 0x18) = iVar1;
      FUN_0044b780(param_1);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e810  FUN_0044e810   (41 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
int __stdcall FUN_0044e810(void)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_004dcd6c((char *)0x0,PTR_DAT_004f735c);
  if (pcVar1 != (char *)0x0) {
    iVar2 = FUN_004e39d0(pcVar1);
    return iVar2;
  }
  return 0;
}

} // namespace tea
