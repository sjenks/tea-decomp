// TEA.exe — runtime / library code "OWL_TRadioButton"
// 3 functions, 0x004c65fc..0x004c679c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004c65fc  OWL::TRadioButton::Find   (69 bytes)   [owl:response-table response-table-find]
//   also: OWL::TRadioButton::vf8 [rtti:vtable]
undefined4 __cdecl OWL::TRadioButton::Find(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_0048e808(param_1[1],(int *)&OWL::TRadioButton::__entries,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCheckBox::vf8(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x004c677c  OWL::TRadioButton::vf9   (31 bytes)   [rtti:vtable virtual slot 9]
char * __cdecl OWL::TRadioButton::vf9(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    return "BorRadio";
  }
  return "BUTTON";
}

// ----------------------------------------------------------------------------------------------------
// 0x004c679c  OWL::TRadioButton::BNClicked   (51 bytes)   [owl:response-table message-handler]
//   EV_NOTIFY_AT_CHILD(code 0 = BN_CLICKED)
void __cdecl OWL::TRadioButton::BNClicked(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004a76a8(*param_1,0xf0,0,0);
  if (iVar1 != 0) {
    BNClicked_4ac788(param_1);
    return;
  }
  FUN_004a5774(*param_1);
  return;
}

} // namespace tea
