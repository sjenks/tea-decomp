// TEA.exe — application module "Help"
// 2 functions, 0x00485b70..0x00485bb8. Ghidra 12.1.4 pseudocode; names and grouping added afterwards.
// This is decompiler output, not the original source. It compiles (see ../README.md) but is not a working rebuild.

#include "../decomp.h"

namespace tea {

// ----------------------------------------------------------------------------------------------------
// 0x00485b70  Help::~Help   (72 bytes)   [rtti:dtor destructor]
//   written in code as Help::_dtor
void __cdecl Help::_dtor(int *param_1,byte param_2)

{
  if (param_1 != (int *)0x0) {
    if (param_1[1] != 0) {
      (*(code *)param_1[1])();
      if (*param_1 != 0) {
        (*(code *)param_1[1])();
        FreeLibrary((HMODULE)*param_1);
      }
    }
    if ((param_2 & 1) != 0) {
      operator_delete();
    }
  }
  return;
}

// ----------------------------------------------------------------------------------------------------
// 0x00485bb8  FUN_00485bb8   (784 bytes)   [unnamed]
//   file placement: inferred (address adjacency)
/* WARNING: Removing unreachable block (ram,0x00485bff) */
/* WARNING: Removing unreachable block (ram,0x00485ca3) */
/* WARNING: Removing unreachable block (ram,0x00485d64) */
/* WARNING: Removing unreachable block (ram,0x00485d2c) */
/* WARNING: Removing unreachable block (ram,0x00485d5d) */
/* WARNING: Removing unreachable block (ram,0x00485dbf) */
/* WARNING: Removing unreachable block (ram,0x00485de3) */
/* WARNING: Removing unreachable block (ram,0x00485dee) */
/* WARNING: Removing unreachable block (ram,0x00485e12) */
/* WARNING: Removing unreachable block (ram,0x00485dfc) */
/* WARNING: Removing unreachable block (ram,0x00485e0b) */
/* WARNING: Removing unreachable block (ram,0x00485e04) */
/* WARNING: Removing unreachable block (ram,0x00485e17) */
/* WARNING: Removing unreachable block (ram,0x00485e1b) */
/* WARNING: Removing unreachable block (ram,0x00485e69) */
int __cdecl FUN_00485bb8(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  uint local_1f4 [67];
  undefined4 local_e8;
  undefined1 local_df [143];
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  
  __InitExceptBlockLDTC(0x5039fc);
  local_40 = 8;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined **)(param_1 + 8) = &DAT_00513d64;
  local_e8 = *(undefined4 *)(param_1 + 8);
  local_34 = local_34 + 1;
  iVar2 = import_SHGetFolderPathA();
  if (iVar2 == 0) {
    FUN_004cf41c(param_1,local_1f4);
    std::string::append(param_1,param_2);
    iVar2 = thunk_FUN_004ddd54(*(LPCSTR *)(param_1 + 8),0);
    if (iVar2 == 0) {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      pcVar3 = strlen((uint *)"\\common.ini");
      FUN_004cfad4(param_1,uVar1,0,0x503990,(uint)pcVar3,0,(uint)pcVar3);
    }
    else {
      uVar1 = *(uint *)(*(int *)(param_1 + 8) + -4);
      local_df[0] = 0;
      uVar4 = DAT_005140ac;
      if (uVar1 <= DAT_005140ac) {
        uVar4 = uVar1;
      }
      FUN_004cfad4(param_1,0,uVar4,(uint)local_df,0,0,0);
    }
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

} // namespace tea
