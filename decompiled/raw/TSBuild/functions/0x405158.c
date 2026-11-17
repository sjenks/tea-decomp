// name: FUN_00405158
// address: 0x405158
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00405158(undefined4 *param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if (0xf < (int)param_1[2]) {
    FUN_00405118((int *)*param_1);
    param_1[2] = 0;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  *(ushort *)(param_1 + 1) = *(ushort *)(param_1 + 1) | (short)param_3 << ((byte)param_1[2] & 0x1f);
  iVar1 = 0x10 - param_1[2];
  if (iVar1 < param_2) {
    iVar2 = param_2 - iVar1;
    uVar3 = param_3 >> ((byte)iVar1 & 0x1f);
    FUN_00405118((int *)*param_1);
    *(short *)(param_1 + 1) = (short)uVar3;
    if (0x10 < iVar2) {
      FUN_00405118((int *)*param_1);
      iVar2 = iVar2 + -0x10;
      *(short *)(param_1 + 1) = (short)(uVar3 >> 0x10);
    }
    param_1[2] = iVar2;
  }
  else {
    param_1[2] = param_1[2] + param_2;
  }
  return;
}

