// name: FUN_00471607
// address: 0x471607
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00471607(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_0046fe00(s__ctorMask___0x0100_____0_____cto_0048ab8c,s_xx_cpp_0048abc1,0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_0046fe00(s__ctorMask___0x0080_____0_0048abc8,s_xx_cpp_0048abe1,0x207);
  }
  if ((param_4 & 0x1000) == 0) {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_0046fe00(s___what___0048ac04,s_xx_cpp_0048ac0d,0x25e);
    }
  }
  else {
    uVar1 = param_4 & 7;
    if (uVar1 == 1) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 2) {
      (*(code *)param_3)();
    }
    else if (uVar1 == 3) {
      (*(code *)param_3)(param_1,0,param_2);
    }
    else if (uVar1 == 5) {
      (*(code *)param_3)();
    }
    else {
      FUN_0046fe00(s___what___0048abee,s_xx_cpp_0048abf7,0x232);
    }
  }
  return;
}

