// name: entry
// address: 0x401000
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __stdcall entry(void)

{
  undefined **ppuVar1;
  
  _DAT_004742d7 = _tls_index << 2;
  GetModuleHandleA((LPCSTR)0x0);
  FUN_00457bd8();
  FUN_00456f74();
  FUN_00457bdc();
  FUN_00468830((undefined4 *)0x0);
  ppuVar1 = &PTR_DAT_0047427c;
  _DAT_004742db = GetModuleHandleA((LPCSTR)0x0);
  FUN_004710cc((int)ppuVar1);
  return;
}

