// name: FUN_004217e4
// address: 0x4217e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004217e4(uint param_1,uint param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (param_2 != 0) {
    if ((param_1 == 0) || (0xc < param_1)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) {
      uVar3 = (uint)(byte)(&DAT_0047a31b)[param_1];
      iVar2 = FUN_004218bc(param_3);
      if ((iVar2 != 0) && (param_1 == 2)) {
        uVar3 = uVar3 + 1;
      }
      return param_2 <= uVar3;
    }
  }
  return false;
}

