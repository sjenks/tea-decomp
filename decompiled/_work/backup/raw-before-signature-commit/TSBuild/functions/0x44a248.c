// name: FUN_0044a248
// address: 0x44a248
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044a248(int param_1,DWORD param_2,DWORD param_3)

{
  BOOL BVar1;
  
  BVar1 = UnlockFile(*(HANDLE *)(param_1 + 4),param_2,0,param_3,0);
  if (BVar1 != 0) {
    return CONCAT31((int3)((uint)BVar1 >> 8),1);
  }
  return 0;
}

