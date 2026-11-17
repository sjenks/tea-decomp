// name: FUN_0046c4e4
// address: 0x46c4e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0046c4e4(int *param_1,LPMSG param_2)

{
  WPARAM WVar1;
  bool bVar2;
  
  if ((param_2->message == 0x100) &&
     (((WVar1 = param_2->wParam, WVar1 == 0x73 || (WVar1 == 0x74)) || (WVar1 == 0x75)))) {
    FUN_00466370(param_1[0xe],WVar1,*(int *)(*(int *)(*param_1 + 0x14) + 0x14));
    return true;
  }
  bVar2 = FUN_004167d8(param_1,param_2);
  return bVar2;
}

