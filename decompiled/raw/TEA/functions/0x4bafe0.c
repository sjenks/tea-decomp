// name: FUN_004bafe0
// address: 0x4bafe0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004bafe0(int param_1)

{
  BOOL BVar1;
  
  BVar1 = FlushFileBuffers(*(HANDLE *)(param_1 + 4));
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

