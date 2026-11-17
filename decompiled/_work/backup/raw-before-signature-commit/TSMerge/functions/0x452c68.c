// name: FUN_00452c68
// address: 0x452c68
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00452c68(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_0044cbb0(param_1);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  piVar2 = FUN_0044d2a4(param_1,param_2,uVar1);
  uVar1 = FUN_0044cbb0(param_1);
  puVar3 = (undefined4 *)FUN_0044da94(param_1);
  puVar4 = (undefined4 *)FUN_0044d594((int)piVar2);
  FUN_0044d24c(puVar4,puVar3,uVar1);
  FUN_0044c9d0(param_1);
  local_8 = FUN_0044d594((int)piVar2);
  FUN_0044cbd4((int)local_18,param_1,&local_8);
  return;
}

