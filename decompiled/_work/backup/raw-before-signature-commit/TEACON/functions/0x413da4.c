// name: FUN_00413da4
// address: 0x413da4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00413da4(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  byte *pbVar3;
  int *piVar4;
  int iVar5;
  
  *param_2 = 0x65;
  *param_3 = 0;
  iVar5 = 1;
  do {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if (iVar1 >> 2 == 0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(param_1 + 4);
    }
    if (*(int *)(*(int *)(param_1 + 0x28) + -4) == 0) {
      pbVar3 = (byte *)0x0;
    }
    else {
      pbVar3 = *(byte **)(param_1 + 0x28);
    }
    uVar2 = FUN_0040a09c('\x01',0,iVar5,pbVar3,piVar4);
    if (uVar2 != 0) {
      if (*param_2 == 0x65) {
        *param_2 = iVar5;
      }
      *param_3 = iVar5;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x65);
  return;
}

