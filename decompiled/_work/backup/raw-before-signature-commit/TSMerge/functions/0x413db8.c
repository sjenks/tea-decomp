// name: FUN_00413db8
// address: 0x413db8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00413db8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int local_28;
  int local_24;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  if ((*(int *)(param_1 + 0x11) <= *(int *)(param_1 + 0x25)) &&
     (uVar1 = FUN_00414128(param_1,*(int *)(param_1 + 0x11) + *(int *)(param_1 + 0x1d)),
     (char)uVar1 == '\0')) {
    return 0xffffffff;
  }
  FUN_00413ca4(&local_28,param_1,param_3,0);
  local_14 = *(int *)(param_1 + 0x19) * *(int *)(param_1 + 0x29);
  local_18 = *(int *)(param_1 + 0x15);
  piVar2 = &local_18;
  local_10 = local_18;
  FUN_00413c68(local_c,param_1,*(int *)(param_1 + 0x25),0);
  FUN_00413fd8(*(uint **)(param_1 + 4),*(uint **)(param_2 + 4),local_c,piVar2,local_28,local_24);
  uVar1 = *(undefined4 *)(param_1 + 0x25);
  *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + 1;
  return uVar1;
}

