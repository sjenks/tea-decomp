// name: FUN_00422fc0
// address: 0x422fc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422fc0(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x468adc);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_004225b0((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_0045666c((int)param_2,iVar4,0x404628);
    puVar2 = (uint *)FUN_0045677c((int)puVar1);
    puVar1 = (undefined4 *)FUN_00421960(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_00422d88(param_1);
    (**(code **)(*piVar3 + 8))();
    FUN_0044b2cc();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

