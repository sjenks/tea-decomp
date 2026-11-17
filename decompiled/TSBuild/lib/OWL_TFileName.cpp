// TSBuild.exe — runtime / library code "OWL_TFileName"
// 1 functions, 0x0042eee8..0x0042eee8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042eee8  OWL::TFileName::~TFileName   (1024 bytes)   [rtti:dtor destructor; function defined from rtti-dtor]
//   written in code as OWL::TFileName::_dtor
void __cdecl OWL::TFileName::_dtor(int param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x47cb3c);
  if (param_1 == 0) goto LAB_0042f2d7;
  if (*(int *)(param_1 + 0x58) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x58) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x58) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042ef8f;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
LAB_0042ef8f:
  if (*(int *)(param_1 + 0x48) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x48) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x48) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f015;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
LAB_0042f015:
  if (*(int *)(param_1 + 0x38) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x38) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x38) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f0b7;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_0042f0b7:
  if (*(int *)(param_1 + 0x28) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x28) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x28) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f159;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
LAB_0042f159:
  if (*(int *)(param_1 + 0x18) != 0) {
    if (*(int *)(*(int *)(param_1 + 0x18) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 0x18) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f21f;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
LAB_0042f21f:
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar1 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else if (piVar1 == &DAT_00485bcc) {
        iVar2 = 1;
      }
      else {
        *piVar1 = *piVar1 + -1;
        iVar2 = *piVar1 + 1;
      }
      if (iVar2 != 0) goto LAB_0042f2ca;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_0042f2ca:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_0042f2d7:
  *in_FS_OFFSET = local_28;
  return;
}

} // namespace tea
