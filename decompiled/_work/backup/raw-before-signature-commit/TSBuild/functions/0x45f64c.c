// name: FUN_0045f64c
// address: 0x45f64c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045f64c(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_004591bc(param_1);
  uVar2 = FUN_004591bc(param_1);
  piVar3 = FUN_00459f00(param_1,uVar2,uVar1);
  uVar1 = FUN_004591bc(param_1);
  puVar4 = (undefined4 *)FUN_0045a6f0(param_1);
  puVar5 = (undefined4 *)FUN_0045a1f0((int)piVar3);
  FUN_00459ea8(puVar5,puVar4,uVar1);
  FUN_00458fdc(param_1);
  local_8 = FUN_0045a1f0((int)piVar3);
  FUN_004591e0((int)local_18,param_1,&local_8);
  return;
}

