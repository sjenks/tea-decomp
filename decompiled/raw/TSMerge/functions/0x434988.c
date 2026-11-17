// name: FUN_00434988
// address: 0x434988
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434988(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x4d) != '\0') {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x4e) + 0x11))();
  }
  uVar1 = FUN_00445154();
  if (uVar1 == 0) {
    iVar2 = FUN_00445154();
    uVar1 = (uint)(iVar2 != 0);
  }
  uVar3 = (**(code **)(param_1[3] + 0x30))(uVar1);
  *(undefined4 *)(param_2 + 0x24) = uVar3;
  *(undefined4 *)(param_2 + 0x10) = *(undefined4 *)(*(int *)(*param_1 + 0x70) + 8);
  return;
}

