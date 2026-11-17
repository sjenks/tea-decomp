// name: FUN_004c51b8
// address: 0x4c51b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004c51b8(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5110f4);
  piVar1 = *(int **)(param_3 + 10);
  piVar2 = (int *)FUN_004cc0f0();
  if (piVar2 != (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      iVar5 = -1;
    }
    else {
      iVar5 = *piVar1;
    }
    puVar3 = (uint *)FUN_004c3f58(*(int *)(param_1 + 8));
    puVar4 = (uint *)FUN_004c3f38(*(int *)(param_1 + 8));
    FUN_004c49bc(piVar2,0,param_2,(uint *)0x7f57,*(uint **)(param_3 + 4),puVar4,puVar3,iVar5);
  }
  if (piVar2 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *piVar2;
  }
  (**(code **)(*(int *)(iVar5 + 8) + 0x10))();
  *in_FS_OFFSET = local_2c;
  return iVar5;
}

