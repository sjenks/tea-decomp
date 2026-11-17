// name: FUN_0044efa4
// address: 0x44efa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044efa4(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  FUN_004dc844(param_2,0,0x40);
  FUN_0044ef10(param_1,param_2);
  uVar1 = FUN_0044e810();
  param_2[1] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[2] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[3] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[4] = uVar1;
  uVar1 = FUN_0044e810();
  param_2[5] = uVar1;
  iVar2 = FUN_0044e810();
  *(char *)(param_2 + 6) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x19) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1a) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1b) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)(param_2 + 7) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1d) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1e) = (char)iVar2;
  iVar2 = FUN_0044e810();
  *(char *)((int)param_2 + 0x1f) = (char)iVar2;
  puVar3 = (uint *)FUN_004dcd6c((char *)0x0,PTR_DAT_004f735c);
  if (puVar3 == (uint *)0x0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    FUN_004dcc40(param_2 + 8,puVar3,(char *)0x20);
  }
  return;
}

