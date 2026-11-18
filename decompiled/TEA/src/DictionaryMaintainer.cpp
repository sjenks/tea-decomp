// TEA.exe — application module "DictionaryMaintainer"
// 17 functions, 0x0043fd98..0x0044e810. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043fd98  DictionaryMaintainer::DictionaryMaintainer   (48 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DictionaryMaintainer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl DictionaryMaintainer::DictionaryMaintainer(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f5f48);
  *self = &DictionaryMaintainer::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043fdec  DictionaryMaintainer::~DictionaryMaintainer   (32 bytes)   [rtti:dtor destructor]
//   written in code as DictionaryMaintainer::_dtor
void __cdecl DictionaryMaintainer::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &DictionaryMaintainer::vftable, (dtorFlags & 1) != 0)) {
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
void __cdecl std::map_std_string_long_std_less_std_string::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x4f72ac);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap3::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_44b780(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e1a4  std::pair<const std::string,std::vector<long> *>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_std_vector_long_ptr::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f72c0);
  if (self == 0) goto LAB_0044e239;
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0044e22c;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0044e22c:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0044e239:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e24c  std::pair<const std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_long::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f72d4);
  if (self == 0) goto LAB_0044e2e1;
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0044e2d4;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0044e2d4:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0044e2e1:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e2f4  std::pair<std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_std_string_long::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f72e8);
  if (self == 0) goto LAB_0044e389;
  if (*(int *)(self + 8) != 0) {
    if (*(int *)(*(int *)(self + 8) + -0xc) != -1) {
      strRep = (int *)(*(int *)(self + 8) + -0xc);
      if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else if (strRep == &g_nullStringRep) {
        prevRefs = 1;
      }
      else {
        *strRep = *strRep + -1;
        prevRefs = *strRep + 1;
      }
      if (prevRefs != 0) goto LAB_0044e37c;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0044e37c:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_0044e389:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e39c  std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>::~map   (125 bytes)   [rtti:dtor destructor]
//   written in code as std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::map_std_string_std_vector_long_ptr_std_less_std_string_std_allocator_std_pair_const_std_string_std_vector_long_ptr::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x4f72fc);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_440cc8(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e41c  std::multimap<std::string,long,WordListMapComparator>::~multimap   (125 bytes)   [rtti:dtor destructor]
//   written in code as std::multimap_std_string_long_WordListMapComparator::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::multimap_std_string_long_WordListMapComparator::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x4f7310);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap2::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_4499b4(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e49c  std::vector_16::_dtor   (54 bytes)   [analysis]
//   destructor of a vector of 16-byte elements
//   file placement: inferred (address adjacency)
void __cdecl std::vector_16::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_16_44d44c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e4d4  std::vector_WordMap2::_dtor   (54 bytes)   [analysis]
//   destructor of a vector of word maps
//   file placement: inferred (address adjacency)
void __cdecl std::vector_WordMap2::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_WordMap2(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e67c  std::vector_WordMap::_dtor   (54 bytes)   [analysis; function defined from prologue-scan]
//   destructor of a vector of word maps
//   file placement: inferred (address adjacency)
void __cdecl std::vector_WordMap::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_WordMap(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e6b4  WordMap2::_dtor   (114 bytes)   [analysis]
//   destructor of a word map
//   file placement: inferred (address adjacency)
void __cdecl WordMap2::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f7344);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap2::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_4499b4(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e728  WordMap::_dtor   (114 bytes)   [analysis]
//   destructor of a word map
//   file placement: inferred (address adjacency)
void __cdecl WordMap::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f734c);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_440cc8(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e79c  WordMap3::_dtor   (114 bytes)   [analysis]
//   destructor of a word map
//   file placement: inferred (address adjacency)
void __cdecl WordMap3::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4f7354);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap3::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_44b780(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044e810  NextTokenInt   (41 bytes)   [analysis (matched TEACON.exe)]
//   identical body to TEACON.exe 0x00411910. atoi of the next strtok token (0 when there is none)
//   file placement: inferred (address adjacency)
int __stdcall NextTokenInt(void)

{
  char *token;
  int value;
  
  token = strtok((char *)0x0,PTR_DAT_004f735c);
  if (token != (char *)0x0) {
    value = atoi(token);
    return value;
  }
  return 0;
}

} // namespace tea
