// name: FUN_00461d70
// address: 0x461d70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00461d70(int param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004591bc(param_1);
  if (param_2 < uVar1) {
    uVar1 = param_2;
  }
  piVar2 = FUN_00459f00(param_1,param_2,uVar1);
  uVar1 = FUN_004591bc(param_1);
  puVar3 = (undefined4 *)FUN_0045a6f0(param_1);
  puVar4 = (undefined4 *)FUN_0045a1f0((int)piVar2);
  FUN_00459ea8(puVar4,puVar3,uVar1);
  FUN_00458fdc(param_1);
  local_8 = FUN_0045a1f0((int)piVar2);
  FUN_004591e0((int)local_18,param_1,&local_8);
  return;
}

