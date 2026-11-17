// name: FUN_0043b980
// address: 0x43b980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043b980(undefined4 *param_1,int *param_2,undefined *param_3)

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
    uVar1 = FUN_00422b68(*param_1,(int *)&DAT_0047f280,param_2,param_3);
    if (((char)uVar1 == '\0') && (uVar1 = FUN_00422b38(), (char)uVar1 == '\0')) {
      return 0;
    }
    uVar1 = 1;
  }
  return uVar1;
}

