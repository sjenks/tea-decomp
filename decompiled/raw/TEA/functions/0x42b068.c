// name: FUN_0042b068
// address: 0x42b068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042b068(int param_1,int param_2)

{
  int iVar1;
  
  while (param_2 != 0) {
    FUN_0042b068(param_1,*(int *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = param_2;
    param_2 = iVar1;
  }
  return;
}

