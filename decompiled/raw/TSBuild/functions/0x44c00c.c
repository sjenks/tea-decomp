// name: FUN_0044c00c
// address: 0x44c00c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044c00c(int *param_1,int param_2)

{
  int iVar1;
  
  FUN_004675f0(param_1 + 7,0,0x28);
  param_1[7] = 0x28;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar1;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  *(uint *)param_1[0x11] = *(uint *)param_1[0x11] & 0xffffff87;
  param_1[10] = *(uint *)param_1[0x11] | 0x100;
  if (param_2 == 0) {
    param_1[10] = param_1[10] & 0xfffffdff;
  }
  else {
    param_1[0x10] = param_2;
    param_1[10] = param_1[10] | 0x200;
  }
  param_1[0xb] = *(int *)(param_1[0x11] + 0xc);
  *(undefined2 *)(param_1 + 0xd) = *(undefined2 *)(param_1[0x11] + 4);
  param_1[0xc] = *(int *)(param_1[0x11] + 0x10);
  *(undefined2 *)((int)param_1 + 0x36) = *(undefined2 *)(param_1[0x11] + 4);
  return;
}

