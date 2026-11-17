// name: FUN_004e77e3
// address: 0x4e77e3
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e77e3(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_004e5ce8(s__ctorMask___0x0100_____0_____cto_005190a8,s_xx_cpp_005190dd,0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_004e5ce8(s__ctorMask___0x0080_____0_005190e4,s_xx_cpp_005190fd,0x207);
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
      FUN_004e5ce8(s___what___00519120,s_xx_cpp_00519129,0x25e);
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
      FUN_004e5ce8(s___what___0051910a,s_xx_cpp_00519113,0x232);
    }
  }
  return;
}

