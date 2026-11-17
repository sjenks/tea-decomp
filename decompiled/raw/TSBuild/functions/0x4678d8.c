// name: FUN_004678d8
// address: 0x4678d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004678d8(byte *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  while (3 < param_3) {
    if ((((*param_2 != *param_1) || (param_2[1] != param_1[1])) || (param_2[2] != param_1[2])) ||
       (param_2[3] != param_1[3])) break;
    param_3 = param_3 + -4;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    if (param_3 < 4) break;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    do {
      bVar1 = *param_1;
      bVar2 = *param_2;
      if (bVar2 != bVar1) break;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
    iVar3 = (uint)bVar1 - (uint)bVar2;
  }
  return iVar3;
}

