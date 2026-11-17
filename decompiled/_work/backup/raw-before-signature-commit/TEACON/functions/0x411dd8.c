// name: FUN_00411dd8
// address: 0x411dd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00411dd8(char *param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  FUN_0041ee4c(param_2,0,0x40);
  FUN_00411d78(param_1,param_2);
  uVar1 = FUN_00411910();
  param_2[1] = uVar1;
  uVar1 = FUN_00411910();
  param_2[2] = uVar1;
  uVar1 = FUN_00411910();
  param_2[3] = uVar1;
  uVar1 = FUN_00411910();
  param_2[4] = uVar1;
  uVar1 = FUN_00411910();
  param_2[5] = uVar1;
  iVar2 = FUN_00411910();
  *(char *)(param_2 + 6) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x19) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1a) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1b) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)(param_2 + 7) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1d) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1e) = (char)iVar2;
  iVar2 = FUN_00411910();
  *(char *)((int)param_2 + 0x1f) = (char)iVar2;
  puVar3 = (uint *)FUN_0041f304((char *)0x0,PTR_DAT_0042def8);
  if (puVar3 == (uint *)0x0) {
    *(undefined1 *)(param_2 + 8) = 0;
  }
  else {
    FUN_0041f1c0(param_2 + 8,puVar3,(char *)0x20);
  }
  return;
}

