// name: FUN_0049edbc
// address: 0x49edbc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049edbc(int param_1,int *param_2)

{
  int iVar1;
  int local_90 [14];
  LONG local_58 [6];
  int local_40;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c [2];
  
  FUN_00490574(param_1,param_2);
  iVar1 = *(int *)(param_1 + 0x54);
  if (iVar1 == 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 6) + 0x1c);
  }
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x36) == '\0') {
      FUN_004905e8(param_1,&local_10,&local_14,&local_18,&local_1c);
      FUN_0048f8fc(local_58,iVar1);
      local_20 = local_40 * *(int *)(param_1 + 0x50);
      *param_2 = *param_2 +
                 ((local_20 + local_10 + local_14) -
                 (*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10)));
    }
    else {
      FUN_0048f980(local_c,iVar1,*(uint **)(param_1 + 0x44));
      *param_2 = *param_2 + local_c[0];
    }
    if (*(char *)(param_1 + 0x37) != '\0') {
      FUN_0048f8fc(local_90,iVar1);
      param_2[1] = param_2[1] + local_90[0] + 2;
    }
  }
  return;
}

