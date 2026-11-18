// TSBuild.exe — runtime / library code "OWL_TMenu"
// 9 functions, 0x0042bb1c..0x0042c290. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x0042bb1c  OWL::TMenu::TMenu   (91 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu(undefined4 *self,int param_2)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c100);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_2 != 0;
  FUN_0042bd98((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bb94  OWL::TMenu::TMenu_42bb94   (109 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_42bb94(undefined4 *self,int *param_2,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c130);
  *self = &OWL::TMenu::vftable;
  hMenu = CreateMenu();
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_0042bd98((int)self,0x7fe8);
  FUN_0042bdc0((int)self,param_2,0,-1);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc04  OWL::TMenu::TMenu_42bc04   (74 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_42bc04(undefined4 *self,undefined4 param_2,int param_3)

{
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c160);
  *self = &OWL::TMenu::vftable;
  self[1] = param_2;
  *(bool *)(self + 2) = param_3 != 0;
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bc50  OWL::TMenu::TMenu_42bc50   (94 bytes)   [rtti:vtable-store constructor]
//   constructor: stores OWL::TMenu's vtable at its vptr offset (+0x0) in this
undefined4 * __cdecl OWL::TMenu::TMenu_42bc50(undefined4 *self,HWND hWnd,int param_3)

{
  HMENU hMenu;
  undefined4 *sehChainHead;
  undefined4 sehPrevFrame;
  
  __InitExceptBlockLDTC(0x47c184);
  *self = &OWL::TMenu::vftable;
  hMenu = GetMenu(hWnd);
  self[1] = hMenu;
  *(bool *)(self + 2) = param_3 != 0;
  FUN_0042bd98((int)self,0x7fe8);
  *sehChainHead = sehPrevFrame;
  return self;
}

// ----------------------------------------------------------------------------------------------------
// 0x0042bcb0  OWL::TMenu::~TMenu   (54 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TMenu::_dtor
void __cdecl OWL::TMenu::_dtor(undefined4 *self,byte dtorFlags)

{
  if (self != (undefined4 *)0x0) {
    *self = &OWL::TMenu::vftable;
    if ((*(char *)(self + 2) != '\0') && (self[1] != 0)) {
      DestroyMenu((HMENU)self[1]);
    }
    if ((dtorFlags & 1) != 0) {
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
undefined4 __cdecl OWL::TMenu::vf1(int self)

{
  return *(undefined4 *)(self + 4);
}

// ----------------------------------------------------------------------------------------------------
// 0x0042c290  OWL::TMenu::vf4   (12 bytes)   [rtti:vtable virtual slot 4; function defined from vtable-slot]
/* WARNING: Instruction at (ram,0x0042c2cd) overlaps instruction at (ram,0x0042c2cb)
    */
/* WARNING: Stack frame is not setup normally: Input value of stackpointer is not used */
void OWL::TMenu::vf4(char *self,byte *param_2,char param_3)

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
  undefined4 *sehChainHead;
  bool bVar10;
  
  *self = *self + (char)self;
  *(char *)((int)self * 2) = *(char *)((int)self * 2) + param_3;
  uVar2 = *(undefined6 *)param_2;
  pcVar3 = (char *)uVar2;
  *(int *)(self + -4) = unaff_EDI + -1;
  bVar10 = (byte)(unaff_EBX >> 8) < *param_2;
  *(char **)(self + -9) = self + -5;
  if (bVar10) {
    uVar7 = *(undefined4 *)(self + 0x1f);
    uVar5 = *(undefined4 *)(self + 0x27);
    pbVar4 = *(byte **)(self + 0x33);
    if (bVar10) {
      *pbVar4 = *pbVar4 | (byte)pbVar4;
    }
    pcVar8 = self + 0x33;
    pcVar9 = self + 0x33;
    *(undefined4 *)(self + 0x33) = uVar7;
    *(undefined4 *)(self + 0xb) = uVar5;
    unaff_EBX = *(uint *)(self + 0x3f);
    self[7] = -0x3c;
    self[8] = -0x3e;
    self[9] = 'B';
    self[10] = '\0';
    __InitExceptBlockLDTC(0x47c388);
    self[0x2b] = '\x04';
    self[0x2c] = '\0';
    self[0x2d] = '\0';
    self[0x2e] = '\0';
    if (*(int *)(self + 0x3b) == 0) goto LAB_0042c3b1;
    self[0x1f] = '\b';
    self[0x20] = '\0';
    *(undefined ***)(*(int *)(self + 0x3b) + 0x18) = &OWL::TMessageBar::vftable;
    *(undefined ***)(*(int *)(self + 0x3b) + 4) = &PTR_LAB_0047c420;
    **(undefined4 **)(*(int *)(self + 0x3b) + 0x10) = &PTR_LAB_0047c440;
    **(undefined4 **)(*(int *)(self + 0x3b) + 0x14) = &PTR_LAB_0047c44c;
    *(undefined ***)(**(int **)(self + 0x3b) + 8) = &OWL::TMessageBar::vftable_TWindow;
    *(undefined4 *)(self + 7) = *(undefined4 *)(*(int *)(self + 0x3b) + 0x4e);
    self[3] = '#';
    self[4] = -0x3d;
    self[5] = 'B';
    self[6] = '\0';
    operator_delete_array();
    piVar1 = (int *)(*(int *)(*(int *)(self + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + -5;
    *(int *)(**(int **)(self + 0x3b) + -4) = *(int *)(**(int **)(self + 0x3b) + -4) + -5;
    *(int *)(self + 0x2b) = *(int *)(self + 0x2b) + -4;
    self[7] = '\0';
    self[8] = '\0';
    self[9] = '\0';
    self[10] = '\0';
    *(undefined4 *)(self + 3) = *(undefined4 *)(self + 0x3b);
    self[-0xffffffff00000001] = 'E';
    self[0] = -0x3d;
    self[1] = 'B';
    self[2] = '\0';
    OWL::TGadgetWindow::_dtor(*(int **)(self + 3),*(uint *)(self + 7));
    pcVar6 = self + 0xb;
    piVar1 = (int *)(*(int *)(*(int *)(self + 0x3b) + 0x10) + -4);
    *piVar1 = *piVar1 + 5;
    *(int *)(**(int **)(self + 0x3b) + -4) = *(int *)(**(int **)(self + 0x3b) + -4) + 5;
    pcVar3 = self + 0xb;
    pcVar9 = self + 0x33;
    if ((unaff_EBX & 2) != 0) goto code_r0x0042c360;
  }
  else {
    pcVar8 = (char *)(unaff_EBP + -2);
    *(int *)(unaff_EBX + 0x6a02f86d) = *(int *)(unaff_EBX + 0x6a02f86d) + 1;
    *(char *)(unaff_EBX + 0xc2830855) = *(char *)(unaff_EBX + 0xc2830855) + param_3;
    *pcVar3 = *pcVar3 + (char)uVar2;
    pcVar3 = self + -9;
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
  *sehChainHead = *(undefined4 *)(pcVar9 + -0x24);
  return;
}

} // namespace tea
