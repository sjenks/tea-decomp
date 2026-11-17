// name: FUN_00443358
// address: 0x443358
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00443358(int param_1,int *param_2,int param_3)

{
  LPCSTR pCVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_cc;
  int local_a8 [33];
  undefined4 local_22 [6];
  undefined4 local_9;
  
  FUN_00467ba8(0x480860);
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x20) + 0x2b);
  }
  FUN_0042f30c(local_a8,0,uVar3,0x7ef5);
  while (param_3 != 0) {
    iVar2 = *param_2;
    param_2 = param_2 + 1;
    pCVar1 = (LPCSTR)FUN_004448e8(iVar2);
    FUN_0042f460((int)local_a8,pCVar1);
    param_3 = param_3 + -1;
  }
  iVar2 = FUN_0042f49c((int)local_a8);
  iVar2 = iVar2 + 1;
  if (iVar2 == -1) {
    iVar2 = 0;
    FUN_0042bcb0(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    FUN_00435f74(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    FUN_0041e99c(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  else {
    FUN_0042bcb0(local_22,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + -0x11;
    FUN_00435f74(local_a8,0);
    *(int *)(local_a8[0] + -4) = *(int *)(local_a8[0] + -4) + 0x11;
    FUN_0041e99c(&local_9,0);
    *in_FS_OFFSET = local_cc;
  }
  return iVar2;
}

