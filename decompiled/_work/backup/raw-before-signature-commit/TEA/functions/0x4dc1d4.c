// name: FUN_004dc1d4
// address: 0x4dc1d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004dc1d4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longdouble in_ST0;
  byte local_1c [24];
  
  uVar1 = FUN_004dc144(param_1,local_1c,'\0');
  FUN_004d91b4();
  if (in_ST0 == (longdouble)(double)CONCAT44(param_3,param_2)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  else {
    iVar2 = FUN_004e0344(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

