// TEA.exe — application module "TSDictionarySaveTEADialog"
// 3 functions, 0x0043c8a4..0x0043ca6c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0043c8a4  TSDictionarySaveTEADialog::~TSDictionarySaveTEADialog   (267 bytes)   [rtti:dtor destructor]
//   written in code as TSDictionarySaveTEADialog::_dtor
void __cdecl TSDictionarySaveTEADialog::_dtor(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4f5260);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&TSDictionarySaveTEADialog::vftable;
    param_1[0x18] = (int)&PTR_LAB_004f5358;
    *(undefined ***)param_1[1] = &PTR_LAB_004f5374;
    *(undefined ***)param_1[2] = &PTR_LAB_004f5380;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_004f538c;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -8;
    TSDictionarySaveDialog::_dtor(param_1,0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 8;
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 8;
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      OWL::TWindow::_dtor(param_1 + 0x1da,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      OWL::TStreamableBase::_dtor(param_1 + 0x1d8,0);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043c9b0  TSDictionarySaveTEADialog::vf50   (187 bytes)   [rtti:vtable virtual slot 50]
undefined4 __cdecl TSDictionarySaveTEADialog::vf50(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined3 extraout_var;
  char *pcVar5;
  
  if (param_1[0x19] == 2) {
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = FUN_0042ba08(param_1[0x1d4]);
      if (iVar3 <= param_1[0x1d5]) {
        return 1;
      }
      puVar4 = (uint *)FUN_0042baf8(param_1[0x1d4],param_1[0x1d5]);
      uVar1 = FUN_0042ed6c(param_1[0x1d4],param_1[0x1d5]);
      pcVar5 = (char *)CONCAT31(extraout_var,uVar1);
      if (param_3 + -2 < (int)pcVar5) {
        pcVar5 = (char *)(param_3 + -2);
      }
      FUN_004dcc40(param_2,puVar4,pcVar5);
      *(char *)((int)param_2 + (int)pcVar5) = '\n';
      *(char *)((int)param_2 + (int)(pcVar5 + 1)) = '\0';
      param_1[0x1d5] = param_1[0x1d5] + 1;
    }
    if ((param_4 & 0xfff) == 0) {
      FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

// ----------------------------------------------------------------------------------------------------
// 0x0043ca6c  TSDictionarySaveTEADialog::vf51   (16 bytes)   [rtti:vtable virtual slot 51]
void __cdecl TSDictionarySaveTEADialog::vf51(int param_1)

{
  *(undefined4 *)(param_1 + 0x754) = 0;
  return;
}

} // namespace tea
