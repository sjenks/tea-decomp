// name: FUN_0042c9b8
// address: 0x42c9b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0042c9b8(void)

{
  BOOL BVar1;
  tagMSG local_20;
  
  do {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0,0,3);
    if (BVar1 == 0) {
      return;
    }
  } while (local_20.message != 0xf);
  return;
}

