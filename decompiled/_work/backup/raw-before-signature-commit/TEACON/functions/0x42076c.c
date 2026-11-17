// name: thunk_FUN_0041ffa0
// address: 0x42076c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl thunk_FUN_0041ffa0(LPCSTR param_1,byte param_2)

{
  DWORD DVar1;
  undefined4 uVar2;
  
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    uVar2 = FUN_00421230();
    return uVar2;
  }
  if (((param_2 & 2) != 0) && ((DVar1 & 1) != 0)) {
    _DAT_004337d4 = 5;
    return 0xffffffff;
  }
  return 0;
}

