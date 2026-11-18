// TSMerge.exe — runtime / library code "std_locale"
// 3 functions, 0x004112b8..0x004539b8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004112b8  std::locale::facet::~facet   (92 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as std::locale::facet::_dtor
void __cdecl std::locale::facet::_dtor(undefined4 *self,byte dtorFlags)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x465020);
  if (self != (undefined4 *)0x0) {
    *self = &std::locale::facet::vftable;
    __rwstd::ref_counted::_dtor(self,0);
    if ((dtorFlags & 1) != 0) {
      operator_delete();
    }
  }
  *sehChainHead = sehPrevFrame;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0044cce0  std::locale::facet::facet   (72 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::locale::facet's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::locale::facet::facet(undefined4 *self,undefined4 param_2,undefined4 param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x472dfc);
  __rwstd::facet_imp::facet_imp(self,param_2,param_3);
  *self = &std::locale::facet::vftable;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x004539b8  std::locale::facet::facet_4539b8   (566 bytes)   [rtti:vtable-store constructor]
//   constructor: stores std::locale::facet's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl std::locale::facet::facet_4539b8(undefined4 *self,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x4737b8);
  *self = &__rwstd::ref_counted::vftable;
  self[1] = param_4;
  *self = &__rwstd::facet_imp::vftable;
  self[2] = 0;
  self[3] = 0x20;
  *self = &std::locale::facet::vftable;
  *self = &PTR_FUN_00473854;
  self[8] = param_2;
  *(undefined1 *)(self + 9) = param_3;
  if (self[8] == 0) {
    self[8] = &DAT_004733a8;
    *(undefined1 *)(self + 9) = 0;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(self[8] + (uVar4 & 0xff) * 4) & 0x10) != 0) {
      if (uVar4 < 0xff) goto LAB_00453a70;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
  goto LAB_00453a96;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00453b39:
    if ((*(byte *)(self[8] + (uVar5 & 0xff) * 4) & 8) != 0) break;
  }
  goto LAB_00453b5f;
  while (uVar5 = uVar5 - 1, uVar4 < uVar5) {
LAB_00453a70:
    if ((*(byte *)(self[8] + (uVar5 & 0xff) * 4) & 0x10) != 0) break;
  }
LAB_00453a96:
  self[10] = uVar4;
  self[0xb] = uVar5;
  uVar1 = operator_new_array();
  self[0xe] = uVar1;
  puVar2 = (undefined1 *)self[0xe];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if ((((0x60 < uVar4) && (uVar4 < 0x7b)) &&
        ((*(byte *)(self[8] + (uVar4 & 0xff) * 4) & 0x10) != 0)) &&
       ((*(byte *)(self[8] + (uVar4 - 0x20 & 0xff) * 4) & 8) != 0)) {
      uVar3 = uVar4 - 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  uVar4 = 0;
  uVar5 = 0xff;
  do {
    if ((*(byte *)(self[8] + (uVar4 & 0xff) * 4) & 8) != 0) {
      if (uVar4 < 0xff) goto LAB_00453b39;
      break;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 0xff);
LAB_00453b5f:
  self[0xc] = uVar4;
  self[0xd] = uVar5;
  uVar1 = operator_new_array();
  self[0xf] = uVar1;
  puVar2 = (undefined1 *)self[0xf];
  for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
    uVar3 = uVar4;
    if (((0x40 < uVar4) && (uVar4 < 0x5b)) &&
       (((*(byte *)(self[8] + (uVar4 & 0xff) * 4) & 8) != 0 &&
        ((*(byte *)(self[8] + (uVar4 + 0x20 & 0xff) * 4) & 0x10) != 0)))) {
      uVar3 = uVar4 + 0x20;
    }
    *puVar2 = (char)uVar3;
    puVar2 = puVar2 + 1;
  }
  *sehChainHead = sehPrevFrame;
  return self;
}

} // namespace tea
