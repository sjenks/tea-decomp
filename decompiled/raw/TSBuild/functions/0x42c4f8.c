// name: FUN_0042c4f8
// address: 0x42c4f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042c4f8(int *param_1,int *param_2)

{
  int iVar1;
  
  FUN_00425ce0(param_1,param_2);
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    iVar1 = GetSystemMetrics(DAT_0047d520);
    param_2[1] = param_2[1] + iVar1;
  }
  return;
}

