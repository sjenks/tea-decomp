// name: FUN_0043c050
// address: 0x43c050
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043c050(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_004396f0();
  if (*piVar1 != 0) {
    FUN_0043bea9((int *)*piVar1);
  }
  return;
}

