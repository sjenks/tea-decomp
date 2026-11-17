// TEA.exe — runtime / library code "rwstd_locale_imp"
// 1 functions, 0x004dac7c..0x004dac7c. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x004dac7c  __rwstd::locale_imp::~locale_imp   (390 bytes)   [rtti:dtor destructor]
//   written in code as __rwstd::locale_imp::_dtor
void __cdecl __rwstd::locale_imp::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_34;
  
  __InitExceptBlockLDTC(0x51680c);
  if (param_1 == (undefined4 *)0x0) goto LAB_004dadf2;
  *param_1 = &__rwstd::locale_imp::vftable;
  iVar2 = param_1[5];
  while (iVar2 != 0) {
    iVar2 = iVar2 + -1;
    puVar1 = *(undefined4 **)(param_1[4] + iVar2 * 4);
    if (((puVar1 != (undefined4 *)0x0) && (puVar1[1] = puVar1[1] + -1, puVar1[1] == 0)) &&
       (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
  }
  if (param_1[10] != 0) {
    if (*(int *)(param_1[10] + -0xc) != -1) {
      piVar3 = (int *)(param_1[10] + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004dad7a;
    }
    operator_delete();
    param_1[10] = 0;
  }
LAB_004dad7a:
  if (param_1[4] != 0) {
    operator_delete_array();
  }
  if (param_1[2] != 0) {
    _vector_delete_ldtc_(param_1[2],0x10,0,0x19,(undefined*)std::string::_dtor);
  }
  __rwstd::ref_counted::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_004dadf2:
  *in_FS_OFFSET = local_34;
  return;
}

} // namespace tea
