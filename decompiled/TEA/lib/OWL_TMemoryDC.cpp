// TEA.exe — runtime / library code "OWL_TMemoryDC"
// 2 functions, 0x0048e13c..0x00497930. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0048e13c  OWL::TMemoryDC::vf5   (20 bytes)   [rtti:vtable virtual slot 5]
void __cdecl OWL::TMemoryDC::vf5(undefined4 *self,uint *param_2)

{
  OWL::TDC::vf5(self,param_2);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00497930  OWL::TMemoryDC::~TMemoryDC   (147 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMemoryDC::_dtor
int * __cdecl OWL::TMemoryDC::_dtor(int *self,byte dtorFlags)

{
  int *piVar1;
  undefined4 *sehChainHead;
  int iVar2;
  undefined4 sehPrevFrame;
  
  piVar1 = (int *)__InitExceptBlockLDTC(0x507d0c);
  if (self != (int *)0x0) {
    *(undefined ***)((int)self + 5) = &OWL::TMemoryDC::vftable;
    FUN_00497904(self);
    FUN_0048db40(self);
    FUN_00497904(self);
    piVar1 = self;
    if ((char)self[1] == '\0') {
      iVar2 = *self;
      piVar1 = (int *)FUN_0049754c();
      FUN_00497724((int)piVar1,iVar2);
    }
    OWL::TCreatedDC::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      piVar1 = (int *)operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return piVar1;
}

} // namespace tea
