// name: FUN_0048c8fc
// address: 0x48c8fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0048c8fc(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  if ((uint)(*(int *)(param_1 + 5) - *(int *)(param_1 + 0xd)) < param_2) {
    iVar1 = FUN_0048c948(param_1);
    if (iVar1 == 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 0xd) = 0;
  }
  iVar1 = *(int *)(param_1 + 0xd);
  *(int *)(param_1 + 0xd) = *(int *)(param_1 + 0xd) + param_2;
  return *(int *)(param_1 + 1) + iVar1;
}

