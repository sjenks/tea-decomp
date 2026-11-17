// TEACON.exe — application module "Common"
// 2 functions, 0x00414ddc..0x00414ea8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00414ddc  Common::~Common   (201 bytes)   [rtti:dtor destructor]
//   written in code as Common::_dtor
void __cdecl Common::_dtor(int param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x42e810);
  if (param_1 == 0) goto LAB_00414e95;
  if (*(int *)(param_1 + 8) != 0) {
    if (*(int *)(*(int *)(param_1 + 8) + -0xc) != -1) {
      piVar2 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_0042fab4) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00414e85;
    }
    operator_delete();
    *(undefined4 *)(param_1 + 8) = 0;
  }
LAB_00414e85:
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00414e95:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00414ea8  FUN_00414ea8   (163 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
undefined4 __cdecl FUN_00414ea8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;
  uint local_804 [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      ("License","LicenseOwner",&DAT_0042e763,(LPSTR)local_404,
                       0x3ff,*(LPCSTR *)(param_1 + 8));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          ("License","LicenseKey",&DAT_0042e764,(LPSTR)local_804,
                           0x3ff,*(LPCSTR *)(param_1 + 8)), DVar2 != 0)) {
      FUN_00416c68(param_2,local_404);
      iVar3 = FUN_00416c68(param_3,local_804);
      return CONCAT31((int3)((uint)iVar3 >> 8),2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

} // namespace tea
