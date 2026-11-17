// name: FUN_0045d324
// address: 0x45d324
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_0045d324(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  wsprintfA(&DAT_00477d94,s__02d__02d__04d__02d__02d__02d__0_00475db4,(uint)local_10.wMonth,
            (uint)local_10.wDay,(uint)local_10.wYear,(uint)local_10.wHour,(uint)local_10.wMinute,
            (uint)local_10.wSecond,(uint)local_10.wMilliseconds);
  return &DAT_00477d94;
}

