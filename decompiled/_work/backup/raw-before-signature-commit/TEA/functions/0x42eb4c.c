// name: FUN_0042eb4c
// address: 0x42eb4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0042eb4c(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_40 [2];
  undefined4 local_38;
  int local_28;
  undefined4 local_20 [2];
  int local_18;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_2 + 0x24);
  iVar2 = *(int *)(*(int *)(param_2 + 0x24) + 4);
  while (iVar2 != 0) {
    cVar1 = FUN_00430548(param_2 + 0x30,*(int *)(iVar2 + 0x10),*param_3);
    if (cVar1 == '\0') {
      local_8 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
    else {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
  }
  local_18 = local_8;
  local_28 = *(int *)(param_2 + 0x24);
  if (*(int *)(param_2 + 0x24) != local_8) {
    local_c = local_8;
    cVar1 = FUN_00430548(param_2 + 0x30,*param_3,*(int *)(local_8 + 0x10));
    if (cVar1 == '\0') {
      puVar3 = local_20;
      goto LAB_0042ebed;
    }
  }
  puVar3 = local_40;
  local_10 = *(undefined4 *)(param_2 + 0x24);
  local_38 = *(undefined4 *)(param_2 + 0x24);
LAB_0042ebed:
  *param_1 = *puVar3;
  param_1[1] = puVar3[1];
  param_1[2] = puVar3[2];
  return param_1;
}

