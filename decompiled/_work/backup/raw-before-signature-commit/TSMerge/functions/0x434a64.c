// name: FUN_00434a64
// address: 0x434a64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434a64(int *param_1,HDC param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if ((*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') &&
     (iVar1 = (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x19))(), iVar1 != 0)) {
    return;
  }
  FUN_0042c49c(*param_1,param_2,param_3,param_4);
  return;
}

