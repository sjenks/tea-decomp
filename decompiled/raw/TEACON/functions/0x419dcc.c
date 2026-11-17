// name: FUN_00419dcc
// address: 0x419dcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00419dcc(int *param_1,int *param_2)

{
  bool bVar1;
  undefined4 in_EAX;
  undefined4 uVar2;
  
  if (((char)param_1[2] == '\0') && ((char)param_2[2] == '\0')) {
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  else {
    if ((*param_1 == *param_2) &&
       ((bVar1 = FUN_00419e18(param_1 + 1,param_2 + 1), bVar1 &&
        ((char)param_1[2] == (char)param_2[2])))) {
      return 1;
    }
    uVar2 = 0;
  }
  return uVar2;
}

