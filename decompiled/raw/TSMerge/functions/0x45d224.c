// name: FUN_0045d224
// address: 0x45d224
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

byte * __cdecl FUN_0045d224(byte *param_1,uint param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)0x0;
  do {
    if (((&DAT_00477b8d)[*param_1] & 4) == 0) {
      if (param_2 == *param_1) {
        pbVar2 = param_1;
      }
    }
    else {
      if (param_1[1] == 0) {
        if (param_2 != 0) {
          return pbVar2;
        }
        return param_1 + 1;
      }
      if (param_2 == CONCAT11(*param_1,param_1[1])) {
        pbVar2 = param_1;
      }
      param_1 = param_1 + 1;
    }
    bVar1 = *param_1;
    param_1 = param_1 + 1;
  } while (bVar1 != 0);
  return pbVar2;
}

