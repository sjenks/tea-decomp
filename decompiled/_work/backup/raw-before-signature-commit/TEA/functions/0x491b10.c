// name: FUN_00491b10
// address: 0x491b10
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00491b10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  
  if ((*(int *)(param_2 + 0x1a) == 1) && (*(int *)(param_3 + 0x1a) == 1)) {
    if (*(char *)(param_1 + 0x35) == '\0') {
      iVar1 = GetSystemMetrics(DAT_00509de8);
      *param_4 = *param_4 - iVar1;
    }
    else {
      iVar1 = GetSystemMetrics(DAT_00509df0);
      param_4[1] = param_4[1] - iVar1;
    }
  }
  return;
}

