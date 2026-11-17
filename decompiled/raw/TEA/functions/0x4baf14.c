// name: FUN_004baf14
// address: 0x4baf14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004baf14(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = (**(code **)(*param_1 + 0x40))();
  if (iVar1 == -1) {
    return 0;
  }
  BVar2 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar2 != 0) {
    return CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  return 0;
}

