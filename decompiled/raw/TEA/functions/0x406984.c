// name: FUN_00406984
// address: 0x406984
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00406984(int param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  int iVar3;
  
  puVar1 = FUN_00407734(param_2);
  FUN_00408884(*(int *)(*(int *)(param_1 + 0x1f90) + 0x28));
  *(undefined4 **)(*(int *)(param_1 + 0x1f90) + 0x28) = puVar1;
  iVar3 = 1;
  puVar2 = (uint *)FUN_00408c8c(puVar1);
  FUN_0041c4f8(param_1 + 0x760,puVar2,iVar3);
  return;
}

