// name: FUN_0042d9a0
// address: 0x42d9a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d9a0(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  if ((*(int *)(*param_1 + 8) == 0) && (param_3 != 0)) {
    iVar1 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar1 != param_3) {
      *(undefined4 *)(*param_1 + 8) = 4;
    }
  }
  return;
}

