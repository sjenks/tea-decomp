// name: FUN_004a0230
// address: 0x4a0230
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004a0230(int param_1,int *param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x509b5c);
  if ((*(int *)(param_1 + 9) < *param_2) || (*(int *)(param_1 + 0xd) < param_2[1])) {
    if (*(int *)(param_1 + 9) < *param_2) {
      *(int *)(param_1 + 9) = *param_2;
    }
    if (*(int *)(param_1 + 0xd) < param_2[1]) {
      *(int *)(param_1 + 0xd) = param_2[1];
    }
    puVar3 = (uint *)FUN_004cc0f0();
    if (puVar3 != (uint *)0x0) {
      FUN_0048842c(puVar3,*(int *)(param_1 + 9),*(int *)(param_1 + 0xd),1,1,(void *)0x0);
    }
    puVar1 = *(uint **)(param_1 + 0x11);
    if (puVar1 != (uint *)0x0) {
      FUN_004886b0(puVar1,3);
    }
    *(uint **)(param_1 + 0x11) = puVar3;
  }
  uVar2 = *(undefined4 *)(param_1 + 0x11);
  *in_FS_OFFSET = local_30;
  return uVar2;
}

