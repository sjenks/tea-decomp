// name: FUN_0045143c
// address: 0x45143c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045143c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_0044cbb0(param_1);
  uVar2 = FUN_0044cbb0(param_1);
  piVar3 = FUN_0044d2a4(param_1,uVar2,uVar1);
  uVar1 = FUN_0044cbb0(param_1);
  puVar4 = (undefined4 *)FUN_0044da94(param_1);
  puVar5 = (undefined4 *)FUN_0044d594((int)piVar3);
  FUN_0044d24c(puVar5,puVar4,uVar1);
  FUN_0044c9d0(param_1);
  local_8 = FUN_0044d594((int)piVar3);
  FUN_0044cbd4((int)local_18,param_1,&local_8);
  return;
}

