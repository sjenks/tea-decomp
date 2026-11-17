// name: FUN_0042b110
// address: 0x42b110
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042b110(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 0) && (*(int *)(param_1 + 0x7a) != 0)) {
    for (iVar1 = *(int *)(param_1 + 0x7a);
        (*(int *)(param_1 + 0x7a) != *(int *)(iVar1 + 0x7e) && (param_2 != *(int *)(iVar1 + 0x7e)));
        iVar1 = *(int *)(iVar1 + 0x7e)) {
    }
    if (param_2 == *(int *)(iVar1 + 0x7e)) {
      if (iVar1 == *(int *)(iVar1 + 0x7e)) {
        *(undefined4 *)(param_1 + 0x7a) = 0;
        return;
      }
      if (*(int *)(param_1 + 0x7a) == *(int *)(iVar1 + 0x7e)) {
        *(int *)(param_1 + 0x7a) = iVar1;
      }
      *(undefined4 *)(iVar1 + 0x7e) = *(undefined4 *)(*(int *)(iVar1 + 0x7e) + 0x7e);
    }
  }
  return;
}

