// name: FUN_00471250
// address: 0x471250
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

WORD __stdcall FUN_00471250(void)

{
  _STARTUPINFOA _Stack_44;
  
  GetStartupInfoA(&_Stack_44);
  if (((byte)_Stack_44.dwFlags & 1) == 0) {
    _Stack_44.wShowWindow = 10;
  }
  return _Stack_44.wShowWindow;
}

