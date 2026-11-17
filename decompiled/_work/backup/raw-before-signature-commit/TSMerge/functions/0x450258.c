// name: FUN_00450258
// address: 0x450258
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00450258(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_00450228((int)param_1);
  uVar3 = FUN_0045024c((int)param_1);
  if (uVar2 < uVar3) {
    puVar4 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar4 = param_2;
    FUN_0044f290(&param_2);
  }
  else {
    puVar4 = &param_2;
    uVar1 = FUN_0044f290(puVar4);
    (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar4,param_1,uVar1);
  }
  return;
}

