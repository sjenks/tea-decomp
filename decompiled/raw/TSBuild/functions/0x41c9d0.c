// name: FUN_0041c9d0
// address: 0x41c9d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0041c9d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_0041c994(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  FUN_00467580(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_0041c9c0();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

