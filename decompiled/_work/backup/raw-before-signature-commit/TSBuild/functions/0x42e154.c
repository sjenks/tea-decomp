// name: FUN_0042e154
// address: 0x42e154
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e154(int *param_1,int *param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47c8b8);
  if (*(int *)(*param_1 + 8) == 0) {
    FUN_0042d744((int *)param_1[2],(int)param_2);
    if (param_2 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *param_2;
    }
    puVar1 = FUN_00468310((int)param_2,iVar4,0x403c1c);
    puVar2 = (uint *)FUN_00468420((int)puVar1);
    puVar1 = (undefined4 *)FUN_0042caf4(param_3,puVar2);
    piVar3 = (int *)(*(code *)*puVar1)();
    (**(code **)(*piVar3 + 0xc))();
    FUN_0042df1c(param_1);
    (**(code **)(*piVar3 + 8))();
    FUN_0045680c();
  }
  *in_FS_OFFSET = local_2c;
  return;
}

