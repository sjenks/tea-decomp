// name: entry
// address: 0x401000
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_004612cb = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_0044c698();
  FUN_0044ba34();
  FUN_0044c69c();
  FUN_00456b8c((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_00461270;
  _DAT_004612cf = GetModuleHandleA((LPCSTR)0x0);
  FUN_0045e358((int)ppuVar1);
  return;
}

