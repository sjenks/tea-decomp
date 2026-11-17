// name: FUN_004ab404
// address: 0x4ab404
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ab404(int param_1,undefined4 param_2)

{
  int *piVar1;
  
  *(undefined4 *)(param_1 + 0x16) = param_2;
  *(undefined1 *)(param_1 + 0x15) = 1;
  piVar1 = (int *)FUN_004a8a84();
  if (*piVar1 != 0) {
    FUN_004ab25d((int *)*piVar1);
  }
  return;
}

