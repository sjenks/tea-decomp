// name: FUN_00445c00
// address: 0x445c00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00445c00(int *param_1,int param_2)

{
  undefined *puVar1;
  int iVar2;
  
  if (DAT_0046f710 == 0) {
    DAT_0046f710 = RegisterWindowMessageA(s_commdlg_ShareViolation_0046f6bc);
  }
  FUN_00455a40(param_1 + 7,0,0x58);
  puVar1 = FUN_00410934();
  if (*(uint *)(puVar1 + 4) < 5) {
    iVar2 = 0x4c;
  }
  else {
    iVar2 = 0x58;
  }
  param_1[7] = iVar2;
  if (*(int *)(*param_1 + 0x14) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(*(int *)(*param_1 + 0x14) + 0xc);
  }
  param_1[8] = iVar2;
  param_1[9] = *(int *)(*(int *)(*param_1 + 0x70) + 8);
  param_1[0x14] = *(uint *)param_1[0x1d] | 0x20;
  if (param_2 == 0) {
    param_1[0x14] = param_1[0x14] & 0xffffffbf;
  }
  else {
    param_1[0x19] = param_2;
    param_1[0x14] = param_1[0x14] | 0x40;
  }
  param_1[0x1c] = *(int *)(param_1[0x1d] + 0x24);
  param_1[0x18] = 0;
  param_1[10] = *(int *)(param_1[0x1d] + 0xc);
  param_1[0xd] = *(int *)(param_1[0x1d] + 0x14);
  param_1[0xe] = *(int *)(param_1[0x1d] + 8);
  param_1[0xf] = *(int *)(param_1[0x1d] + 0x20);
  param_1[0x12] = *(int *)(param_1[0x1d] + 0x18);
  param_1[0x16] = *(int *)(param_1[0x1d] + 0x1c);
  return;
}

