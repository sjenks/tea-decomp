// name: FUN_00401be0
// address: 0x401be0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00401be0(int *param_1,int param_2)

{
  bool bVar1;
  uint uVar2;
  DWORD DVar3;
  undefined3 extraout_var;
  int iVar4;
  
  param_1[0x378] = param_1[0x378] + 1;
  if (param_1[0x378] < param_1[0x379]) {
    uVar2 = CONCAT31((int3)((uint)param_1[0x378] >> 8),1);
  }
  else {
    param_1[0x378] = 0;
    DVar3 = GetTickCount();
    if (DVar3 - param_1[0x37a] < 0x4c) {
      iVar4 = param_1[0x379];
      if (iVar4 < 0x3fffffff) {
        if (iVar4 < 0) {
          iVar4 = iVar4 + 3;
        }
        param_1[0x379] = param_1[0x379] + (iVar4 >> 2);
      }
    }
    else if ((0x7c < DVar3 - param_1[0x37a]) && (iVar4 = param_1[0x379], 8 < iVar4)) {
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      param_1[0x379] = param_1[0x379] - (iVar4 >> 3);
    }
    param_1[0x37a] = DVar3;
    if (param_2 < 0) {
      iVar4 = param_1[0x37b];
      param_1[0x37b] = param_1[0x37b] + 1;
      param_2 = iVar4 % 0x65;
    }
    else {
      param_1[0x37b] = 0;
    }
    bVar1 = FUN_004031f4(param_1,param_2);
    uVar2 = (uint)(CONCAT31(extraout_var,bVar1) != 0);
  }
  return uVar2;
}

