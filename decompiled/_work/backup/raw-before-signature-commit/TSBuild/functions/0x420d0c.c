// name: FUN_00420d0c
// address: 0x420d0c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00420d0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == -1) {
    return 0;
  }
  return param_2;
}

