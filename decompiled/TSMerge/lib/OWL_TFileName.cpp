// TSMerge.exe — runtime / library code "OWL_TFileName"
// 1 functions, 0x00423d54..0x00423d54. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00423d54  OWL::TFileName::~TFileName   (1024 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFileName::_dtor
void __cdecl OWL::TFileName::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x468d60);
  if (param_1 == 0) goto LAB_00424143;
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x58) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423dfb;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
LAB_00423dfb:
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423e81;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_00423e81:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423f23;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_00423f23:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00423fc5;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_00423fc5:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042408b;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0042408b:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00471d5c) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_00424136;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00424136:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00424143:
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
