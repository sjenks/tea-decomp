// name: FUN_00430968
// address: 0x430968
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00430968(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x67) != 0)) {
    iVar1 = 0;
    if (param_2 != *(int *)(param_1 + 0x67)) {
      for (iVar1 = *(int *)(param_1 + 0x67); param_2 != *(int *)(iVar1 + 0x7e);
          iVar1 = *(int *)(iVar1 + 0x7e)) {
        if (*(int *)(iVar1 + 0x7e) == 0) {
          return;
        }
      }
    }
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(param_2 + 0x7e);
      return;
    }
    *(undefined4 *)(param_1 + 0x67) = *(undefined4 *)(param_2 + 0x7e);
  }
  return;
}

