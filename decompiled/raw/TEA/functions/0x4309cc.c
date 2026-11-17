// name: FUN_004309cc
// address: 0x4309cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004309cc(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  if (2 < (int)param_3) {
    uVar1 = FUN_0043c6a4((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8));
    uVar2 = FUN_0043c6a4((byte *)(param_2 + 9),(uint)*(byte *)(param_2 + 8));
    if (uVar2 != uVar1) {
      if ((int)param_3 < 5) {
        return uVar1 < uVar2;
      }
      return uVar2 < uVar1;
    }
  }
  iVar3 = FUN_0043c624((byte *)(param_1 + 9),(uint)*(byte *)(param_1 + 8),(byte *)(param_2 + 9),
                       (uint)*(byte *)(param_2 + 8));
  if ((param_3 & 1) == 0) {
    bVar4 = 0 < iVar3;
  }
  else {
    bVar4 = iVar3 < 0;
  }
  return bVar4;
}

