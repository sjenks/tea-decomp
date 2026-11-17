// name: FUN_004e5d48
// address: 0x4e5d48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined * __stdcall FUN_004e5d48(void)

{
  _SYSTEMTIME local_10;
  
  GetLocalTime(&local_10);
  wsprintfA(&DAT_0051c3e0,s__02d__02d__04d__02d__02d__02d__0_00518bac,(uint)local_10.wMonth,
            (uint)local_10.wDay,(uint)local_10.wYear,(uint)local_10.wHour,(uint)local_10.wMinute,
            (uint)local_10.wSecond,(uint)local_10.wMilliseconds);
  return &DAT_0051c3e0;
}

