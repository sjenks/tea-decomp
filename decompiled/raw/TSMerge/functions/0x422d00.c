// name: FUN_00422d00
// address: 0x422d00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00422d00(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x2c))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

