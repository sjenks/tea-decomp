// TSBuild.exe — runtime / library code "OWL_TOpenSaveDialog"
// 4 functions, 0x00450c68..0x00451034. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00450c68  OWL::TOpenSaveDialog::TData::~TData   (45 bytes)   [rtti:dtor destructor]
//   written in code as OWL::TOpenSaveDialog::TData::_dtor
void __cdecl OWL::TOpenSaveDialog::TData::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    operator_delete_array();
    operator_delete_array();
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450d4c  OWL::TOpenSaveDialog::vf14   (69 bytes)   [rtti:vtable virtual slot 14]
undefined4 __cdecl OWL::TOpenSaveDialog::vf14(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  param_2[2] = (int)param_1;
  uVar1 = FUN_00422b68(param_1[1],(int *)&DAT_004834d4,param_2,param_3);
  if (((char)uVar1 == '\0') && (uVar1 = OWL::TCommonDialog::Find(param_1,param_2,param_3), (char)uVar1 == '\0'))
  {
    return 0;
  }
  return 1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00450ff0  OWL::TOpenSaveDialog::vf1   (67 bytes)   [rtti:vtable virtual slot 1]
bool __cdecl OWL::TOpenSaveDialog::vf1(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = OWL::TDialog::vf1(param_1,param_2,param_3);
  if (bVar1) {
    bVar1 = true;
  }
  else if (param_2 == DAT_004834ec) {
    iVar2 = (**(code **)(param_1[3] + 0x3c))();
    bVar1 = iVar2 != 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

// ----------------------------------------------------------------------------------------------------
// 0x00451034  OWL::TOpenSaveDialog::vf15   (7 bytes)   [rtti:vtable virtual slot 15]
undefined4 __stdcall OWL::TOpenSaveDialog::vf15(void)

{
  return 0;
}

} // namespace tea
