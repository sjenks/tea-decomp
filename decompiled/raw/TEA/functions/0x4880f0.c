// name: FUN_004880f0
// address: 0x4880f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004880f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_004880b4(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  FUN_004dc7d4(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_004880e0();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

