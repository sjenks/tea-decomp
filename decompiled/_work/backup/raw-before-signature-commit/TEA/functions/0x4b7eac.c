// name: FUN_004b7eac
// address: 0x4b7eac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b7eac(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1;
  uVar1 = (**(code **)(param_1[3] + 0x58))();
  if ((char)uVar1 != '\0') {
    (**(code **)(param_1[3] + 0x24))(uVar1,param_1[3],piVar2,param_1);
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    FUN_004a76a8(*param_1,0xb9,0,0);
    FUN_004b7c98(param_1,(uint *)0x0);
  }
  return;
}

