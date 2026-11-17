// name: FUN_0041ab6c
// address: 0x41ab6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041ab6c(int *param_1,int *param_2)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  FUN_00418e38(param_1 + 10,&local_8,&local_c,&local_10,&local_14,(uint)*(byte *)(param_1 + 0xc));
  if (*(int *)(*param_1 + 0x28) == 0) {
    *param_2 = 0;
    param_2[2] = 0;
  }
  else {
    *param_2 = local_8;
    param_2[2] = *(int *)(*param_1 + 0x28) - local_c;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_00469744);
      param_2[2] = param_2[2] + iVar1 * -2;
    }
  }
  if (*(int *)(*param_1 + 0x2c) == 0) {
    param_2[1] = 0;
    param_2[3] = 0;
  }
  else {
    param_2[1] = local_10;
    param_2[3] = *(int *)(*param_1 + 0x2c) - local_14;
    if ((*(byte *)(*param_1 + 0x1a) & 0x80) != 0) {
      iVar1 = GetSystemMetrics(DAT_0046973c);
      param_2[3] = param_2[3] + iVar1 * -2;
    }
  }
  return;
}

