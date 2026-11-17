// TSBuild.exe — runtime / library code "OWL_TMenu"
// 5 functions, 0x0042bcb0..0x0042c290. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042bcb0  OWL::TMenu::~TMenu   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenu::_dtor
void __cdecl OWL::TMenu::_dtor(undefined4 *param_1,byte param_2)

{
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &OWL::TMenu::vftable;
    if ((*(char *)(param_1 + 2) != '\0') && (param_1[1] != 0)) {
      DestroyMenu((HMENU)param_1[1]);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdb0  OWL::TMenu::vf2   (5 bytes)   [rtti:vtable virtual slot 2]
void __stdcall OWL::TMenu::vf2(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bdb8  OWL::TMenu::vf3   (5 bytes)   [rtti:vtable virtual slot 3]
void __stdcall OWL::TMenu::vf3(void)

{
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c25c  OWL::TMenu::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl OWL::TMenu::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c290  OWL::TMenu::vf4   (12 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
/* WARNING: Instruction at (ram,0x0042c2cd) overlaps instruction at (ram,0x0042c2cb)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
void OWL::TMenu::vf4(char *param_1,byte *param_2,char param_3)

{
  int *piVar1;
  undefined6 uVar2;
  char *pcVar3;
  byte *pbVar4;
  uint unaff_EBX;
  undefined4 uVar5;
  char *pcVar6;
  int unaff_EBP;
  undefined4 uVar7;
  char *pcVar8;
  char *pcVar9;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  bool bVar10;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  uVar2 = *(undefined6 *)param_2;
  pcVar3 = (char *)uVar2;
  *(int *)(param_1 + -4) = unaff_EDI + -1;
  bVar10 = (byte)(unaff_EBX >> 8) < *param_2;
  *(char **)(param_1 + -9) = param_1 + -5;
  if (bVar10) {
    uVar7 = *(undefined4 *)(param_1 + 0x1f);
    uVar5 = *(undefined4 *)(param_1 + 0x27);
    pbVar4 = *(byte **)(param_1 + 0x33);
    if (bVar10) {
      *pbVar4 = *pbVar4 | (byte)pbVar4;
    }
    pcVar8 = param_1 + 0x33;
    pcVar9 = param_1 + 0x33;
    *(undefined4 *)(param_1 + 0x33) = uVar7;
    *(undefined4 *)(param_1 + 0xb) = uVar5;
    unaff_EBX = *(uint *)(param_1 + 0x3f);
    param_1[7] = -0x3c;
    param_1[8] = -0x3e;
    param_1[9] = 'B';
    param_1[10] = '\0';
    __InitExceptBlockLDTC(0x47c388);
    param_1[0x2b] = '\x04';
    param_1[0x2c] = '\0';
    param_1[0x2d] = '\0';
    param_1[0x2e] = '\0';
    if (*(int *)(param_1 + 0x3b) == 0) goto LAB_0042c3b1;
    param_1[0x1f] = '\b';
    param_1[0x20] = '\0';
    *(undefined ***)(*(int *)(param_1 + 0x3b) + 0x18) = &OWL::TMessageBar::vftable;
    *(undefined ***)(*(int *)(param_1 + 0x3b) + 4) = &PTR_LAB_0047c420;
    **(undefined4 **)(*(int *)(param_1 + 0x3b) + 0x10) = &PTR_LAB_0047c440;
    **(undefined4 **)(*(int *)(param_1 + 0x3b) + 0x14) = &PTR_LAB_0047c44c;
    *(undefined ***)(**(int **)(param_1 + 0x3b) + 8) = &PTR_LAB_0047c458;
    *(undefined4 *)(param_1 + 7) = *(undefined4 *)(*(int *)(param_1 + 0x3b) + 0x4e);
    param_1[3] = '#';
    param_1[4] = -0x3d;
    param_1[5] = 'B';
    param_1[6] = '\0';
    operator_delete_array();
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + -5;
    *(int *)(**(int **)(param_1 + 0x3b) + -4) = *(int *)(**(int **)(param_1 + 0x3b) + -4) + -5;
    *(int *)(param_1 + 0x2b) = *(int *)(param_1 + 0x2b) + -4;
    param_1[7] = '\0';
    param_1[8] = '\0';
    param_1[9] = '\0';
    param_1[10] = '\0';
    *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_1 + 0x3b);
    param_1[-0xffffffff00000001] = 'E';
    param_1[0] = -0x3d;
    param_1[1] = 'B';
    param_1[2] = '\0';
    OWL::TGadgetWindow::_dtor(*(int **)(param_1 + 3),*(uint *)(param_1 + 7));
    pcVar6 = param_1 + 0xb;
    piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + 5;
    *(int *)(**(int **)(param_1 + 0x3b) + -4) = *(int *)(**(int **)(param_1 + 0x3b) + -4) + 5;
    pcVar3 = param_1 + 0xb;
    pcVar9 = param_1 + 0x33;
    if ((unaff_EBX & 2) != 0) goto code_r0x0042c360;
  }
  else {
    pcVar8 = (char *)(unaff_EBP + -2);
    *(int *)(unaff_EBX + 0x6a02f86d) = *(int *)(unaff_EBX + 0x6a02f86d) + 1;
    *(char *)(unaff_EBX + 0xc2830855) = *(char *)(unaff_EBX + 0xc2830855) + param_3;
    *pcVar3 = *pcVar3 + (char)uVar2;
    pcVar3 = param_1 + -9;
code_r0x0042c360:
    pcVar6 = pcVar3;
    piVar1 = (int *)(*(int *)(*(int *)(pcVar8 + 8) + 0x10) + -4);
    *piVar1 = *piVar1 + 0x96;
    *(int *)(pcVar8 + -8) = *(int *)(pcVar8 + -8) + -2;
    *(undefined4 *)(pcVar6 + -4) = 0;
    *(int *)(pcVar6 + -8) = *(int *)(pcVar8 + 8) + 0x62;
    *(undefined4 *)(pcVar6 + -0xc) = 0x42c37f;
    OWL::TWindow::_dtor(*(undefined4 **)(pcVar6 + -8),*(uint *)(pcVar6 + -4));
    piVar1 = (int *)(*(int *)(*(int *)(pcVar8 + 8) + 0x10) + -4);
    *piVar1 = *piVar1 + -0x96;
    *(int *)(pcVar8 + -8) = *(int *)(pcVar8 + -8) + -1;
    *(undefined4 *)(pcVar6 + -4) = 0;
    *(int *)(pcVar6 + -8) = *(int *)(pcVar8 + 8) + 0x5a;
    *(undefined4 *)(pcVar6 + -0xc) = 0x42c3a0;
    OWL::TStreamableBase::_dtor(*(undefined4 **)(pcVar6 + -8),pcVar6[-4]);
    pcVar9 = pcVar8;
  }
  if ((unaff_EBX & 1) != 0) {
    *(undefined4 *)(pcVar6 + -4) = *(undefined4 *)(pcVar9 + 8);
    *(undefined4 *)(pcVar6 + -8) = 0x42c3b0;
    operator_delete();
  }
LAB_0042c3b1:
  *in_FS_OFFSET = *(undefined4 *)(pcVar9 + -0x24);
  return;
}

} // namespace tea
