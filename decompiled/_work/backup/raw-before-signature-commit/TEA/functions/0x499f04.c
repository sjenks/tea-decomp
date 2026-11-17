// name: FUN_00499f04
// address: 0x499f04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00499f04(int *param_1)

{
  int iVar1;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != 4) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  else {
    in_ECX = 0;
  }
  return in_ECX;
}

