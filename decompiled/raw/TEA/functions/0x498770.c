// name: FUN_00498770
// address: 0x498770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00498770(int *param_1,int *param_2)

{
  int iVar1;
  
  FUN_00491a58(param_1,param_2);
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    iVar1 = GetSystemMetrics(DAT_00509df0);
    param_2[1] = param_2[1] + iVar1;
  }
  return;
}

