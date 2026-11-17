// name: FUN_00464f04
// address: 0x464f04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00464f04(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40 [4];
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  
  FUN_00467ba8(0x4881a0);
  local_c = 2;
  if (param_1 != (undefined4 *)0x0) {
    local_18 = 8;
    if ((HMODULE)*param_1 != (HMODULE)0x0) {
      FreeLibrary((HMODULE)*param_1);
    }
    *param_1 = 0;
    local_c = local_c + -2;
    iVar1 = param_1[0xb];
    if (iVar1 != 0) {
      local_2c = *(undefined4 *)(iVar1 + 8);
      local_30 = iVar1;
      FUN_0045800c(local_40,(int)(param_1 + 2));
      iVar1 = param_1[0xb];
      *(undefined4 *)(iVar1 + 0xc) = param_1[8];
      param_1[8] = iVar1;
      FUN_00459260((int)(param_1 + 2));
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

