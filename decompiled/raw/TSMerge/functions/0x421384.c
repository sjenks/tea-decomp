// name: FUN_00421384
// address: 0x421384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421384(int *param_1,int *param_2)

{
  int iVar1;
  
  FUN_0041ab6c(param_1,param_2);
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    iVar1 = GetSystemMetrics(DAT_00469744);
    param_2[1] = param_2[1] + iVar1;
  }
  return;
}

