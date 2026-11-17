// name: FUN_0049a358
// address: 0x49a358
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049a358(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    puVar1 = (undefined4 *)FUN_004cc180();
    FUN_004dc7d4(puVar1,param_2,param_3);
    uVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (uVar2 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
    FUN_004cc0cc();
  }
  return;
}

