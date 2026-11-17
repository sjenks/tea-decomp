// name: FUN_00467b68
// address: 0x467b68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

short * __cdecl FUN_00467b68(short *param_1,short *param_2)

{
  uint uVar1;
  uint uVar2;
  short *psVar3;
  
  uVar1 = FUN_00467b50(param_2);
  uVar2 = 0;
  psVar3 = param_1;
  if (uVar1 != 0) {
    do {
      *psVar3 = *param_2;
      uVar2 = uVar2 + 1;
      psVar3 = psVar3 + 1;
      param_2 = param_2 + 1;
    } while (uVar2 < uVar1);
  }
  param_1[uVar1] = 0;
  return param_1;
}

