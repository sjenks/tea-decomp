// name: FUN_00405984
// address: 0x405984
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00405984(int param_1,int param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar1 = *(byte **)(param_1 + 8);
  pbVar2 = *(byte **)(param_2 + 8);
  while( true ) {
    while ((pbVar1 != (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar1] == '\0'))) {
      pbVar1 = pbVar1 + 1;
    }
    while ((pbVar2 != (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)) &&
           ((&DAT_004631a0)[*pbVar2] == '\0'))) {
      pbVar2 = pbVar2 + 1;
    }
    if ((pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) ||
       (pbVar2 == (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)))) break;
    if ((&DAT_004631a0)[*pbVar1] != (&DAT_004631a0)[*pbVar2]) {
      return (int)(char)(&DAT_004631a0)[*pbVar2] - (int)(char)(&DAT_004631a0)[*pbVar1];
    }
    pbVar1 = pbVar1 + 1;
    pbVar2 = pbVar2 + 1;
  }
  if ((pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) &&
     (pbVar2 == (byte *)(*(int *)(param_2 + 8) + *(int *)(*(int *)(param_2 + 8) + -4)))) {
    return 0;
  }
  if (pbVar1 == (byte *)(*(int *)(param_1 + 8) + *(int *)(*(int *)(param_1 + 8) + -4))) {
    return 1;
  }
  return -1;
}

