// name: FUN_0043c9b0
// address: 0x43c9b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043c9b0(int *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  undefined3 extraout_var;
  char *pcVar5;
  
  if (param_1[0x19] == 2) {
    if (param_2 != (undefined4 *)0x0) {
      iVar3 = FUN_0042ba08(param_1[0x1d4]);
      if (iVar3 <= param_1[0x1d5]) {
        return 1;
      }
      puVar4 = (uint *)FUN_0042baf8(param_1[0x1d4],param_1[0x1d5]);
      uVar1 = FUN_0042ed6c(param_1[0x1d4],param_1[0x1d5]);
      pcVar5 = (char *)CONCAT31(extraout_var,uVar1);
      if (param_3 + -2 < (int)pcVar5) {
        pcVar5 = (char *)(param_3 + -2);
      }
      FUN_004dcc40(param_2,puVar4,pcVar5);
      *(char *)((int)param_2 + (int)pcVar5) = '\n';
      *(char *)((int)param_2 + (int)(pcVar5 + 1)) = '\0';
      param_1[0x1d5] = param_1[0x1d5] + 1;
    }
    if ((param_4 & 0xfff) == 0) {
      FUN_00498d7c((int *)(*(int *)(*param_1 + 0x6c) + 0x11));
    }
    uVar2 = 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

