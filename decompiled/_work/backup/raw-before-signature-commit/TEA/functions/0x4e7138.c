// name: FUN_004e7138
// address: 0x4e7138
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

WORD __stdcall FUN_004e7138(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

