// name: FUN_004dbf0c
// address: 0x4dbf0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dbf0c(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_004dbdcc(param_1,local_14,&DAT_00516b58,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

