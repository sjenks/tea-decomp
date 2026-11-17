// name: FUN_00430ebc
// address: 0x430ebc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430ebc(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_0042e55c();
  if (*piVar1 != 0) {
    FUN_00430d15((int *)*piVar1);
  }
  return;
}

