// name: FUN_00401012
// address: 0x401012
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_004ea32b = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_004cd488();
  FUN_004cc824();
  FUN_004cd48c();
  FUN_004ddaec((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_004ea2d0;
  _DAT_004ea32f = GetModuleHandleA((LPCSTR)0x0);
  FUN_004e6fb4((int)ppuVar1);
  return;
}

