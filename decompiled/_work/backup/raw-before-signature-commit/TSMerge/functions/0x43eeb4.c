// name: FUN_0043eeb4
// address: 0x43eeb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043eeb4(int param_1)

{
  BOOL BVar1;
  
  BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
  if (BVar1 == 0) {
    return 0;
  }
  return CONCAT31((int3)((uint)BVar1 >> 8),1);
}

