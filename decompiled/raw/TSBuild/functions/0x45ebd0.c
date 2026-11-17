// name: FUN_0045ebd0
// address: 0x45ebd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045ebd0(int *param_1,undefined1 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_c;
  uint local_8;
  
  if ((*(byte *)(param_1 + 1) & 8) == 0) {
    iVar2 = FUN_0045b17c();
  }
  else {
    iVar2 = FUN_0045de3c((int)param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_004568d0();
      FUN_0045c008((int)param_1,iVar2,iVar2 + 0x80);
      if ((*(byte *)(param_1 + 1) & 4) != 0) {
        FUN_0045bfec((int)param_1,iVar2,iVar2,iVar2);
      }
      param_1[9] = iVar2;
    }
    else {
      iVar2 = FUN_0045de3c((int)param_1);
      local_8 = iVar2 - param_1[9];
      iVar2 = local_8 + 0x80;
      puVar3 = (undefined4 *)FUN_004568d0();
      FUN_00459ea8(puVar3,(undefined4 *)param_1[9],local_8);
      FUN_0045c008((int)param_1,puVar3,iVar2 + (int)puVar3);
      FUN_0045c020((int)param_1,local_8);
      iVar2 = FUN_0045bef8((int)param_1);
      iVar4 = FUN_0045de54((int)param_1);
      iVar5 = FUN_0045de3c((int)param_1);
      FUN_0045bfec((int)param_1,puVar3,(iVar2 - iVar4) + (int)puVar3,iVar5 + 1);
      FUN_0045681c();
      param_1[9] = (int)puVar3;
    }
    local_c = FUN_0045b17c();
    bVar1 = FUN_0045bde4((int *)&param_2,&local_c);
    if (bVar1) {
      iVar2 = FUN_0045de24((int *)&param_2);
    }
    else {
      iVar2 = FUN_0045de6c(param_1,param_2);
    }
    iVar4 = FUN_0045de3c((int)param_1);
    iVar5 = FUN_0045de48((int)param_1);
    if (param_1[0xb] < iVar4 - iVar5) {
      iVar4 = FUN_0045de3c((int)param_1);
      iVar5 = FUN_0045de48((int)param_1);
      param_1[0xb] = iVar4 - iVar5;
    }
  }
  return iVar2;
}

