// name: FUN_0045c9d8
// address: 0x45c9d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045c9d8(int param_1,int param_2)

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
  
  FUN_00467ba8(0x4866c4);
  local_18 = 8;
  FUN_00459238(local_34);
  local_2c = 0;
  FUN_0045ab08(param_1,&local_2c);
  piVar1 = (int *)FUN_00459080(param_2);
  iVar2 = FUN_00459094(piVar1);
  if (iVar2 < 1) {
    uVar3 = FUN_004591bc(param_2);
    piVar1 = FUN_00459f00(param_1,uVar3,uVar3);
    local_3c = FUN_0045a1f0((int)piVar1);
    FUN_004591e0((int)local_5c,param_1,&local_3c);
    puVar4 = (undefined4 *)FUN_00459b5c(param_2);
    puVar5 = (undefined4 *)FUN_00459074(param_1);
    FUN_00459ea8(puVar5,puVar4,uVar3);
  }
  else {
    local_38 = FUN_00459074(param_2);
    FUN_004591e0((int)local_4c,param_1,&local_38);
    piVar1 = (int *)FUN_00459080(param_1);
    FUN_00459b44(piVar1);
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

