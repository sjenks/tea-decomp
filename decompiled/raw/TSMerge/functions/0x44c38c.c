// name: FUN_0044c38c
// address: 0x44c38c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

SIZE_T __stdcall FUN_0044c38c(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

