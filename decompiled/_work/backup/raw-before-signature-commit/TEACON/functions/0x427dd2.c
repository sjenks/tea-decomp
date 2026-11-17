// name: FUN_00427dd2
// address: 0x427dd2
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00427dd2(undefined4 param_1,undefined *param_2,uint param_3)

{
  uint uVar1;
  
  if ((param_3 & 0x80) != 0) {
    FUN_00426830(s__mfnMask___0x0080_____0_00433b6e,s_xx_cpp_00433b86,0x2fc);
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
  FUN_00426830(s___what___00433b93,s_xx_cpp_00433b9c,0x323);
  return;
}

