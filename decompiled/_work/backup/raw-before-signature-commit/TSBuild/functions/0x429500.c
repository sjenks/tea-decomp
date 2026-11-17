// name: FUN_00429500
// address: 0x429500
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429500(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x20) != 0) {
    if (*(int *)(param_1 + 0x1c) == 0) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x20);
    }
    else {
      for (iVar1 = *(int *)(param_1 + 0x1c); *(int *)(iVar1 + 0x20) != 0;
          iVar1 = *(int *)(iVar1 + 0x20)) {
      }
      *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(param_1 + 0x20);
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

