// TSBuild.exe — runtime / library code "OWL_TTooltipEnabler"
// 3 functions, 0x004308d4..0x00430950. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004308d4  OWL::TTooltipEnabler::TTooltipEnabler   (88 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TTooltipEnabler's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TTooltipEnabler::TTooltipEnabler(undefined4 *self,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47cee0);
  if ((*(byte *)(param_2 + 100) & 1) == 0) {
    iVar1 = *(int *)(param_2 + 4);
  }
  else {
    iVar1 = GetDlgCtrlID(*(HWND *)(param_2 + 4));
  }
  OWL::TCommandEnabler::TCommandEnabler(self,iVar1,param_3);
  *self = &OWL::TTooltipEnabler::vftable;
  self[4] = param_2;
  self[3] = self[3] | 2;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043092c  OWL::TTooltipEnabler::vf1   (35 bytes)   [rtti:vtable virtual slot 1]
void __cdecl OWL::TTooltipEnabler::vf1(int self,uint *src)

{
  OWL::TCommandEnabler::vf0(self);
  FUN_004308b8(*(int *)(self + 0x10),src);
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00430950  OWL::TTooltipEnabler::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TTooltipEnabler::vf2(void)

{
  return;
}

} // namespace tea
