// name: FUN_00466f80
// address: 0x466f80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00466f80(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  longdouble in_ST0;
  byte local_1c [24];
  
  uVar1 = FUN_00466ef0(param_1,local_1c,'\0');
  FUN_00463f60();
  if (in_ST0 == (longdouble)(double)CONCAT44(param_3,param_2)) {
    *(undefined1 *)(param_1 + 0x28) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  if ((char)uVar1 == '\0') {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  else {
    iVar2 = FUN_0046a5c8(*(undefined1 **)(param_1 + 0x2c),local_1c);
  }
  *(int *)(param_1 + 0x30) = iVar2 + *(int *)(param_1 + 0x2c);
  return;
}

