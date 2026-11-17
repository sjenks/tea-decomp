// name: FUN_004307ec
// address: 0x4307ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004307ec(undefined4 *param_1,int *param_2,undefined *param_3)

{
  undefined4 uVar1;
  
  if (*(int *)((int)param_1 + 0x27) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*(int *)(*(int *)((int)param_1 + 0x27) + 8) + 0x6c))();
  }
  if ((char)uVar1 == '\0') {
    param_2[2] = (int)param_1;
    uVar1 = FUN_004179f4(*param_1,(int *)&DAT_0046b4a4,param_2,param_3);
    if (((char)uVar1 == '\0') && (uVar1 = FUN_004179c4(), (char)uVar1 == '\0')) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

