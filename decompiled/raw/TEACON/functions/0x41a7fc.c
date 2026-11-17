// name: FUN_0041a7fc
// address: 0x41a7fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041a7fc(int param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_18 [16];
  int local_8;
  
  uVar1 = FUN_0041687c(param_1);
  uVar2 = FUN_0041687c(param_1);
  piVar3 = FUN_00416ffc(param_1,uVar2,uVar1);
  uVar1 = FUN_0041687c(param_1);
  puVar4 = (undefined4 *)FUN_004177ec(param_1);
  puVar5 = (undefined4 *)FUN_004172ec((int)piVar3);
  FUN_00416fa4(puVar5,puVar4,uVar1);
  FUN_0041669c(param_1);
  local_8 = FUN_004172ec((int)piVar3);
  FUN_004168a0((int)local_18,param_1,&local_8);
  return;
}

