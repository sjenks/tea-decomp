// name: FUN_00421230
// address: 0x421230
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00421230(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetLastError();
  uVar2 = FUN_004211cc(DVar1 & 0xffff);
  return uVar2;
}

