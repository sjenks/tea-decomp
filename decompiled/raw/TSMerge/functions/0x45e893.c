// name: FUN_0045e893
// address: 0x45e893
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045e893(undefined4 param_1,undefined4 param_2,undefined *param_3,uint param_4)

{
  uint uVar1;
  
  if (((param_4 & 0x100) == 0) && ((param_4 & 0x20) != 0)) {
    FUN_0045d2c4(s__ctorMask___0x0100_____0_____cto_004760ec,s_xx_cpp_00476121,0x205);
  }
  if ((param_4 & 0x80) != 0) {
    FUN_0045d2c4(s__ctorMask___0x0080_____0_00476128,s_xx_cpp_00476141,0x207);
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
      FUN_0045d2c4(s___what___00476164,s_xx_cpp_0047616d,0x25e);
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
      FUN_0045d2c4(s___what___0047614e,s_xx_cpp_00476157,0x232);
    }
  }
  return;
}

