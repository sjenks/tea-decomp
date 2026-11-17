// name: FUN_00495098
// address: 0x495098
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00495098(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  iVar1 = FUN_004952f8(param_1,param_2);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puVar4 = (undefined4 *)(iVar1 + 5);
    for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
      *param_3 = *puVar4;
      puVar4 = puVar4 + 1;
      param_3 = param_3 + 1;
    }
    uVar2 = CONCAT31((int3)((uint)iVar1 >> 8),1);
  }
  return uVar2;
}

