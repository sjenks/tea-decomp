// name: FUN_0046def0
// address: 0x46def0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0046def0(int param_1,undefined4 param_2,undefined4 param_3,ushort param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  
  if (param_1 == 0) {
    uVar2 = 0x407e;
    uVar4 = 0x3f6a;
  }
  else {
    uVar2 = 0x43fe;
    uVar4 = 0x3bcd;
  }
  uVar3 = param_4 & 0x7fff;
  if (uVar3 == 0x7fff) {
    return;
  }
  if (uVar3 <= uVar2) {
    if (uVar2 == uVar3) {
      uVar1 = FUN_0046dc04(0,0);
      FUN_0046dc04(0xc00,0xc00);
      FUN_0046dc04(uVar1,0xc00);
      return;
    }
    if (((((short)param_2 == 0 && uVar3 == 0) && param_2._2_2_ == 0) && (short)param_3 == 0) &&
        param_3._2_2_ == 0) {
      return;
    }
    if (uVar4 <= uVar3) {
      return;
    }
  }
  _DAT_0048a878 = 0x22;
  return;
}

