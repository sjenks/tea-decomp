// name: FUN_004525f4
// address: 0x4525f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004525f4(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int iVar4;
  undefined4 local_b08;
  int local_ae4 [696];
  
  FUN_004dce64(0x4f82f4);
  iVar4 = *(int *)(param_1 + 0x6d0);
  iVar1 = FUN_00466b18(*(int *)(param_1 + 0x38));
  piVar3 = (int *)(*(int *)(*(int *)(param_1 + 0x6d0) * 4 + *(int *)(param_1 + 0x6b4)) + 8);
  if (*piVar3 == 0) {
    iVar2 = *piVar3;
  }
  else {
    iVar2 = *(int *)*piVar3;
  }
  piVar3 = FUN_00401150(local_ae4,0,iVar2,*(int *)(param_1 + 0x38),iVar1,iVar4);
  (**(code **)(piVar3[3] + 0x14))();
  FUN_004014d0(local_ae4,2);
  *in_FS_OFFSET = local_b08;
  return;
}

