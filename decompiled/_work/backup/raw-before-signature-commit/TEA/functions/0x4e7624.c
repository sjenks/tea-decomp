// name: FUN_004e7624
// address: 0x4e7624
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e7624(int *param_1)

{
  int iVar1;
  _SYSTEMTIME local_14;
  
  GetLocalTime(&local_14);
  iVar1 = FUN_004e72bc(local_14.wYear - 0x76c,local_14.wMonth - 1,local_14.wDay - 1,
                       (uint)local_14.wHour,(uint)local_14.wMinute,(uint)local_14.wSecond,-1);
  if (param_1 != (int *)0x0) {
    *param_1 = iVar1;
  }
  return;
}

