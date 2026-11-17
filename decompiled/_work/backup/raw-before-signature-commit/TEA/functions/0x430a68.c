// name: FUN_00430a68
// address: 0x430a68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00430a68(int param_1,byte *param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  
  if (2 < (int)param_4) {
    iVar1 = FUN_0043c6a4((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    iVar2 = FUN_0043c6a4(param_2,param_3);
    iVar1 = iVar1 - iVar2;
    if (iVar1 != 0) {
      if ((int)param_4 < 5) {
        return iVar1;
      }
      return -iVar1;
    }
  }
  iVar2 = FUN_0043c624((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),param_2,param_3);
  if ((param_4 & 1) == 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}

