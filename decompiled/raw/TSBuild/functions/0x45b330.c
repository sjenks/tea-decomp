// name: FUN_0045b330
// address: 0x45b330
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045b330(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
    *(undefined4 *)(param_1 + 0x30) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 4) = 0x1002;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 6;
  uVar1 = FUN_0045b380(param_1);
  *(char *)(param_1 + 0x2c) = (char)uVar1;
  return;
}

