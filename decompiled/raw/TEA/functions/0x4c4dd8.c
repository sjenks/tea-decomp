// name: FUN_004c4dd8
// address: 0x4c4dd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c4dd8(int param_1)

{
  uint *puVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  FUN_004dce64(0x511070);
  puVar1 = *(uint **)(param_1 + 8);
  *puVar1 = *puVar1 & 0xfffffeff;
  *puVar1 = *puVar1;
  if (*(int *)(*(int *)(param_1 + 0xc) + 0x2b) == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x2b);
  }
  else {
    uVar3 = **(undefined4 **)(*(int *)(param_1 + 0xc) + 0x2b);
  }
  FUN_004c3390(&local_1ac,0,uVar3,*(undefined4 *)(param_1 + 8),0,0,0,0);
  bVar2 = FUN_004c3c90((int)&local_1ac);
  if (!bVar2) {
    *(undefined4 *)(*(int *)(param_1 + 8) + 4) = 0x1008;
  }
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  FUN_0048c668(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  FUN_004a52c0(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  FUN_00489c54(local_92,0);
  *in_FS_OFFSET = local_1d0;
  return;
}

