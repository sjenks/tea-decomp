// name: FUN_00427bbf
// address: 0x427bbf
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427bbf(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_00426830(s__ctorMask___0x0100_____0_____cto_00433ab0,s_xx_cpp_00433ae5,0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_00426830(s__ctorMask___0x0080_____0_00433aec,s_xx_cpp_00433b05,0x207);
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
      FUN_00426830(s___what___00433b28,s_xx_cpp_00433b31,0x25e);
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
      FUN_00426830(s___what___00433b12,s_xx_cpp_00433b1b,0x232);
    }
  }
  return;
}

