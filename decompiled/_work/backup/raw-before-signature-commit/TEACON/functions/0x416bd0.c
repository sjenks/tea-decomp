// name: FUN_00416bd0
// address: 0x416bd0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00416bd0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined1 local_18 [16];
  undefined4 local_8;
  
  if (param_2 != param_1) {
    piVar1 = (int *)FUN_00416740(param_2);
    iVar2 = FUN_00416754(piVar1);
    if (iVar2 < 1) {
      puVar3 = (uint *)FUN_00416c58(param_2);
      FUN_00416c68(param_1,puVar3);
    }
    else {
      piVar1 = (int *)FUN_00416740(param_2);
      FUN_00416c40(piVar1);
      FUN_0041669c(param_1);
      local_8 = FUN_00416734(param_2);
      FUN_004168a0((int)local_18,param_1,&local_8);
    }
  }
  return param_1;
}

