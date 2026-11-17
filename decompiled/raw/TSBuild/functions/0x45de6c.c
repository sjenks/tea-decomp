// name: FUN_0045de6c
// address: 0x45de6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045de6c(int *param_1,undefined1 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined3 extraout_var;
  undefined1 *puVar5;
  
  uVar2 = FUN_0045de3c((int)param_1);
  uVar3 = FUN_0045de60((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)param_1[6];
    param_1[6] = param_1[6] + 1;
    *puVar5 = param_2;
    uVar1 = FUN_0045beec(&param_2);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    puVar5 = &param_2;
    uVar1 = FUN_0045beec(puVar5);
    uVar4 = (**(code **)(*param_1 + 0x24))(uVar1,*param_1,puVar5,param_1,uVar1);
  }
  return uVar4;
}

