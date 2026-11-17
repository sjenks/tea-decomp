// name: FUN_0048cbec
// address: 0x48cbec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048cbec(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x30))();
  if (iVar1 == -1) {
    return 0;
  }
  return param_2;
}

