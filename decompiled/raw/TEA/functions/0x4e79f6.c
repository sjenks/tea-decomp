// name: FUN_004e79f6
// address: 0x4e79f6
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e79f6(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_004e5ce8(s__mfnMask___0x0080_____0_00519166,s_xx_cpp_0051917e,0x2fc);
  }
  uVar1 = param_3 & 7;
  if (uVar1 == 1) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 2) {
    (*(code *)param_2)();
    return;
  }
  if (uVar1 == 3) {
    (*(code *)param_2)(param_1);
    return;
  }
  if (uVar1 == 5) {
    (*(code *)param_2)();
    return;
  }
  FUN_004e5ce8(s___what___0051918b,s_xx_cpp_00519194,0x323);
  return;
}

