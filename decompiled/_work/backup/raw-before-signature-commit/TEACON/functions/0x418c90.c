// name: FUN_00418c90
// address: 0x418c90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418c90(int *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined4 extraout_EDX;
  int *piVar4;
  
  uVar1 = FUN_00418cd4((int)param_1);
  piVar4 = param_1;
  uVar2 = FUN_00418ce0((int)param_1);
  if (uVar1 < uVar2) {
    puVar3 = (undefined1 *)FUN_00418cd4((int)param_1);
    FUN_00418cc8(puVar3);
  }
  else {
    (**(code **)(*param_1 + 0x1c))(*param_1,extraout_EDX,piVar4,param_1);
  }
  return;
}

