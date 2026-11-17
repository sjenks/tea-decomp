// name: FUN_004dc254
// address: 0x4dc254
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dc254(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte local_14 [16];
  
  uVar1 = FUN_004dc144(param_1,local_14,'L');
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar2 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

