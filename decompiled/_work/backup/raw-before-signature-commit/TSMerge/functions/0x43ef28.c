// name: FUN_0043ef28
// address: 0x43ef28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043ef28(int *param_1)

{
  int iVar1;
  BOOL BVar2;
  int extraout_EDX;
  
  iVar1 = (**(code **)(*param_1 + 0x3c))();
  if ((extraout_EDX == 0) && (iVar1 == -1)) {
    return 0;
  }
  BVar2 = SetEndOfFile((HANDLE)param_1[1]);
  if (BVar2 != 0) {
    return CONCAT31((int3)((uint)BVar2 >> 8),1);
  }
  return 0;
}

