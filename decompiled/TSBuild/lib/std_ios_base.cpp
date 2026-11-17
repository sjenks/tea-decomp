// TSBuild.exe — runtime / library code "std_ios_base"
// 5 functions, 0x00421c58..0x00463ca8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00421c58  std::ios_base::failure::vf2   (22 bytes)   [rtti:vtable virtual slot 2; function defined from vtable-slot]
/* WARNING: Control flow encountered bad instruction data */
void std::ios_base::failure::vf2(char *param_1,byte *param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  iVar2 = CONCAT31((int3)((uint)param_1 >> 8),DAT_4f004175);
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  pcVar1 = (char *)(iVar2 + -0x7c1374ab);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

// ----------------------------------------------------------------------------------------------------
// 0x00463a3c  std::ios_base::failure::~failure   (217 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::failure::_dtor
void __cdecl std::ios_base::failure::_dtor(undefined4 *param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  __InitExceptBlockLDTC(0x4878e8);
  if (param_1 == (undefined4 *)0x0) goto LAB_00463b05;
  *param_1 = &std::ios_base::failure::vftable;
  if (param_1[4] != 0) {
    if (*(int *)(param_1[4] + -0xc) != -1) {
      piVar2 = (int *)(param_1[4] + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00463ae4;
    }
    operator_delete();
    param_1[4] = 0;
  }
LAB_00463ae4:
  std::exception::_dtor(param_1,0);
  if ((param_2 & 1) != 0) {
    operator_delete();
  }
LAB_00463b05:
  *in_FS_OFFSET = local_28;
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463b18  std::ios_base::failure::vf1   (11 bytes)   [rtti:vtable virtual slot 1]
undefined4 __cdecl std::ios_base::failure::vf1(int param_1)

{
  return *(undefined4 *)(param_1 + 0x10);
}

// ----------------------------------------------------------------------------------------------------
// 0x00463bd4  std::ios_base::Init::~Init   (68 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::Init::_dtor
void __cdecl std::ios_base::Init::_dtor(int param_1,byte param_2)

{
  if (param_1 != 0) {
    DAT_0048d068 = DAT_0048d068 + -1;
    if (DAT_0048d068 == 0) {
      FUN_0045be5c((int *)&DAT_0048cfa0);
      FUN_0045be5c(&DAT_0048cfe0);
      FUN_0045be5c(&DAT_0048d020);
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00463ca8  std::ios_base::~ios_base   (225 bytes)   [rtti:dtor destructor]
//   written in code as std::ios_base::_dtor
void __cdecl std::ios_base::_dtor(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  __InitExceptBlockLDTC(0x487970);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &std::ios_base::vftable;
    while (param_1[6] != 0) {
      param_1[6] = param_1[6] + -1;
      (**(code **)(param_1[8] + 4 + param_1[6] * 8))();
    }
    operator_delete_array();
    operator_delete_array();
    puVar1 = (undefined4 *)param_1[4];
    puVar1[1] = puVar1[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

} // namespace tea
