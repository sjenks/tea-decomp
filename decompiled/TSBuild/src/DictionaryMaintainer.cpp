// TSBuild.exe — application module "DictionaryMaintainer"
// 21 functions, 0x00405f68..0x00415f14. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00405f68  DictionaryMaintainer::DictionaryMaintainer   (48 bytes)   [rtti:vtable-store constructor]
//   constructor: stores DictionaryMaintainer's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl DictionaryMaintainer::DictionaryMaintainer(undefined4 *self)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4753f4);
  *self = &DictionaryMaintainer::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x00405fbc  DictionaryMaintainer::~DictionaryMaintainer   (32 bytes)   [rtti:dtor destructor]
//   written in code as DictionaryMaintainer::_dtor
void __cdecl DictionaryMaintainer::_dtor(undefined4 *self,byte dtorFlags)

{
  if ((self != (undefined4 *)0x0) && (*self = &DictionaryMaintainer::vftable, (dtorFlags & 1) != 0)) {
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
  
  __InitExceptBlockLDTC(0x476aac);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap3::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_41221c(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004157ec  std::pair<const std::string,std::vector<long> *>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_std_vector_long_ptr::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_std_vector_long_ptr::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476ac0);
  if (self == 0) goto LAB_00415881;
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
      if (prevRefs != 0) goto LAB_00415874;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_00415874:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00415881:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415894  std::pair<const std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_const_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_const_std_string_long::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476ad4);
  if (self == 0) goto LAB_00415929;
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
      if (prevRefs != 0) goto LAB_0041591c;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_0041591c:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_00415929:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0041593c  std::pair<std::string,long>::~pair   (166 bytes)   [rtti:dtor destructor]
//   written in code as std::pair_std_string_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::pair_std_string_long::_dtor(int self,byte dtorFlags)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476ae8);
  if (self == 0) goto LAB_004159d1;
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
      if (prevRefs != 0) goto LAB_004159c4;
    }
    operator_delete();
    *(undefined4 *)(self + 8) = 0;
  }
LAB_004159c4:
  if ((dtorFlags & 1) != 0) {
    operator_delete();
  }
LAB_004159d1:
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x004159e4  std::map<std::string,std::vector<long> *,std::less<std::string>,std::allocator<std::pair<const std::string,std::vector<long> *>>>::~map   (125 bytes)   [rtti:dtor destructor]
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
  
  __InitExceptBlockLDTC(0x476afc);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415a64  std::multimap<std::string,long,WordListMapComparator>::~multimap   (125 bytes)   [rtti:dtor destructor]
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
  
  __InitExceptBlockLDTC(0x476b10);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      WordMap2::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_40fdb4(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
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
// 0x00415af0  std::vector_16::_dtor   (54 bytes)   [analysis]
//   destructor of a vector of 16-byte elements
//   file placement: inferred (address adjacency)
void __cdecl std::vector_16::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_16_414a7c(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b28  std::vector<std::string>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_std_string::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_std_string::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_string(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b60  std::vector<long>::~vector   (54 bytes)   [rtti:dtor destructor]
//   written in code as std::vector_long::_dtor
//   file placement: inferred (address adjacency)
void __cdecl std::vector_long::_dtor(int self,byte dtorFlags)

{
  if (self != 0) {
    std::_Destroy_range_ptr(self,*(int *)(self + 4),*(int *)(self + 8));
    operator_delete();
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415b98  std::vector_WordMap2::_dtor   (54 bytes)   [analysis]
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
// 0x00415d40  std::vector_WordMap::_dtor   (54 bytes)   [analysis; function defined from prologue-scan]
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
// 0x00415d78  WordMap2::_dtor   (114 bytes)   [analysis]
//   destructor of a word map (erases every node, frees the buffers)
//   file placement: inferred (address adjacency)
void __cdecl WordMap2::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 firstLo;
  undefined4 firstHi;
  undefined4 result [4];
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476b58);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap2::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_40fdb4(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415dec  WordMap::_dtor   (114 bytes)   [analysis]
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
  
  __InitExceptBlockLDTC(0x476b60);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415e60  WordMap3::_dtor   (114 bytes)   [analysis]
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
  
  __InitExceptBlockLDTC(0x476b68);
  if (self != 0) {
    if (*(int *)(self + 0x24) != 0) {
      WordMap3::erase_range(result,self,firstLo,firstHi,
                   *(int *)(*(int *)(self + 0x24) + 8));
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      __rwstd::__rb_tree::__deallocate_buffers_41221c(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415ed4  InitRegistryPaths   (61 bytes)   [analysis]
//   static initialiser of the registry key path strings
//   file placement: inferred (address adjacency)
void __stdcall InitRegistryPaths(void)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476b88);
  std::string::string_from_cstr(0x48c354,(uint *)"Software\\Crossword Man\\TEA Crossword Helper 2.11");
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00415f14  DestroyRegistryPaths   (163 bytes)   [analysis]
//   static destructor of the registry key path strings
//   file placement: inferred (address adjacency)
void __stdcall DestroyRegistryPaths(void)

{
  int prevRefs;
  int *strRep;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x476b9c);
  if (DAT_0048c35c != 0) {
    if (*(int *)(DAT_0048c35c + -0xc) != -1) {
      strRep = (int *)(DAT_0048c35c + -0xc);
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
      if (prevRefs != 0) goto LAB_00415fa7;
    }
    operator_delete();
    DAT_0048c35c = 0;
  }
LAB_00415fa7:
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
