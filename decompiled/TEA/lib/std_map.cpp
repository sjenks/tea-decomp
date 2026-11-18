// TEA.exe — runtime / library code "std_map"
// 1 functions, 0x004da9a4..0x004da9a4. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004da9a4  std::map<int,std::string,std::less<int>>::~map   (125 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::map_int_std_string_std_less_int::_dtor
void __cdecl std::map_int_std_string_std_less_int::_dtor(int self,byte dtorFlags)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 local_3c [4];
  undefined4 unused;
  undefined4 sehPrevFrame;
  int ehDtorCount;
  
  __InitExceptBlockLDTC(0x5165b0);
  if (self != 0) {
    ehDtorCount = ehDtorCount + -1;
    if (*(int *)(self + 0x24) != 0) {
      unused = *(undefined4 *)(self + 0x24);
      FUN_004cd8bc(local_3c,self);
      iVar1 = *(int *)(self + 0x24);
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(self + 0x18);
      *(int *)(self + 0x18) = iVar1;
      FUN_004ceb10(self);
    }
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

} // namespace tea
