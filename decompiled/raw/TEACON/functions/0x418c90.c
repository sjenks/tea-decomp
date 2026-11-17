// name: FUN_00418c90
// address: 0x418c90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00418c90(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined3 extraout_var;
  undefined4 extraout_EDX;
  int *piVar6;
  
  uVar2 = FUN_00418cd4((int)param_1);
  piVar6 = param_1;
  uVar3 = FUN_00418ce0((int)param_1);
  if (uVar2 < uVar3) {
    puVar5 = (undefined1 *)FUN_00418cd4((int)param_1);
    uVar1 = FUN_00418cc8(puVar5);
    uVar4 = CONCAT31(extraout_var,uVar1);
  }
  else {
    uVar4 = (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar6,param_1);
  }
  return uVar4;
}

