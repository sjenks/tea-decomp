// name: FUN_004d34bc
// address: 0x4d34bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d34bc(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar2 = FUN_004d348c((int)param_1);
  uVar3 = FUN_004d34b0((int)param_1);
  if (uVar2 < uVar3) {
    puVar4 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar4 = param_2;
    FUN_004d179c(&param_2);
  }
  else {
    puVar4 = &param_2;
    uVar1 = FUN_004d179c(puVar4);
    (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar4,param_1,uVar1);
  }
  return;
}

