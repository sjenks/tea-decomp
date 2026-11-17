// name: FUN_0045d3f0
// address: 0x45d3f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_0045d3f0(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  code *lpfn;
  int *lParam;
  int local_4;
  
  lParam = &local_4;
  local_4 = 0;
  DVar1 = GetVersion();
  if ((DVar1 >> 0x10 & 0x8000) == 0) {
    return 0x2000;
  }
  lpfn = FUN_0045d3dc;
  DVar1 = GetCurrentThreadId();
  EnumThreadWindows(DVar1,lpfn,(LPARAM)lParam);
  if (local_4 == 0) {
    uVar2 = 0x1000;
  }
  else {
    uVar2 = 0x2000;
  }
  return uVar2;
}

