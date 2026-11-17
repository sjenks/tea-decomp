// name: FUN_0044fa64
// address: 0x44fa64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044fa64(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *in_FS_OFFSET;
  undefined1 local_5c [16];
  undefined1 local_4c [16];
  int local_3c;
  undefined4 local_38;
  undefined1 local_34 [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00455f04(0x472698);
  local_18 = 8;
  FUN_0044cc2c(local_34);
  local_2c = 0;
  FUN_0044deac(param_1,&local_2c);
  piVar1 = (int *)FUN_0044ca74(param_2);
  iVar2 = FUN_0044ca88(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_0044cbb0(param_2);
    piVar1 = FUN_0044d2a4(param_1,uVar3,uVar3);
    local_3c = FUN_0044d594((int)piVar1);
    FUN_0044cbd4((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_0044cf00(param_2);
    puVar5 = (undefined4 *)FUN_0044ca68(param_1);
    FUN_0044d24c(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_0044ca68(param_2);
    FUN_0044cbd4((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_0044ca74(param_1);
    FUN_0044cee8(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

