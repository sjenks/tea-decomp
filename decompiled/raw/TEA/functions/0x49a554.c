// name: FUN_0049a554
// address: 0x49a554
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a554(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x5086d4);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_00499b44((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_004dd5cc((int)param_2,iVar4,0x4027f0);
    puVar2 = (uint *)FUN_004dd6dc((int)puVar1);
    puVar1 = (undefined4 *)FUN_00498ef4(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_0049a31c(param_1);
    (**(code **)(*piVar3 + 8))();
    FUN_004cc0bc();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

