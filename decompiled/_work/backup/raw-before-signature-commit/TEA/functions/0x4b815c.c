// name: FUN_004b815c
// address: 0x4b815c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b815c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_138;
  int local_114;
  int local_110;
  undefined4 local_94 [2];
  undefined4 local_8c [34];
  
  FUN_004dce64(0x50e734);
  cVar1 = (**(code **)(param_1[3] + 0x58))();
  if (cVar1 != '\0') {
    *(undefined1 *)param_1[0x10] = 0;
    piVar2 = FUN_004c2c5c(&local_114,0,*param_1,(int)(param_1 + 0xe),0,0,0);
    iVar3 = (**(code **)(piVar2[3] + 0x14))();
    cVar1 = iVar3 == 1;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + -0x5c;
    FUN_0048c668(&local_114,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x5c;
    *(int *)(local_114 + -4) = *(int *)(local_114 + -4) + 0x5c;
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + 0x96;
    FUN_004a52c0(local_8c,0);
    *(int *)(local_110 + -4) = *(int *)(local_110 + -4) + -0x96;
    FUN_00489c54(local_94,0);
    if (cVar1 != '\0') {
      (**(code **)(param_1[3] + 0x68))();
    }
  }
  *in_FS_OFFSET = local_138;
  return;
}

