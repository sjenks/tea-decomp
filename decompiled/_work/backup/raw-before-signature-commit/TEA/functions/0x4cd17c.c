// name: FUN_004cd17c
// address: 0x4cd17c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

SIZE_T __stdcall FUN_004cd17c(void)

{
  _MEMORYSTATUS local_20;
  
  local_20.dwLength = 0x20;
  GlobalMemoryStatus(&local_20);
  return local_20.dwAvailPhys;
}

