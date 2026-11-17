// name: FUN_004c5094
// address: 0x4c5094
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004c5094(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_1d0;
  int local_1ac;
  int local_1a8;
  undefined4 local_92 [2];
  undefined4 local_8a [33];
  
  FUN_004dce64(0x5110c4);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 1;
  piVar1 = FUN_004c3390(&local_1ac,0,param_2,*(undefined4 *)(param_1 + 8),0,0,0,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + -0xf6;
  FUN_0048c668(&local_1ac,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0xf6;
  *(int *)(local_1ac + -4) = *(int *)(local_1ac + -4) + 0xf6;
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + 0x96;
  FUN_004a52c0(local_8a,0);
  *(int *)(local_1a8 + -4) = *(int *)(local_1a8 + -4) + -0x96;
  FUN_00489c54(local_92,0);
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x48) = 0;
  *in_FS_OFFSET = local_1d0;
  return iVar2 == 1;
}

