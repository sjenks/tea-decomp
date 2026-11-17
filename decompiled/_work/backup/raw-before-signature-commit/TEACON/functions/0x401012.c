// name: FUN_00401012
// address: 0x401012
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall FUN_00401012(void)

{
  undefined **ppuVar1;
  
  _DAT_0042a16f = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00416344();
  FUN_004156e0();
  FUN_00416348();
  FUN_0041fd38((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0042a114;
  _DAT_0042a173 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0042785c((int)ppuVar1);
  return;
}

