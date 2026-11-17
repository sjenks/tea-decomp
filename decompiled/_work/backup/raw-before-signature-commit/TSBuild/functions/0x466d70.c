// name: FUN_00466d70
// address: 0x466d70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00466d70(int param_1)

{
  int iVar1;
  byte local_14 [16];
  
  FUN_00466b78(param_1,local_14,&DAT_0048888e,'\0');
  if (*(int *)(param_1 + 0x1c) == 0) {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  else {
    iVar1 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_14);
  }
  *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x2c);
  return;
}

