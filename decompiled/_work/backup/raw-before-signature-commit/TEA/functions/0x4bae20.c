// name: FUN_004bae20
// address: 0x4bae20
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bae20(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
  if (BVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}

