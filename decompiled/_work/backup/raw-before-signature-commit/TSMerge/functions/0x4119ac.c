// name: FUN_004119ac
// address: 0x4119ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004119ac(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  puVar2 = *(undefined4 **)(param_1 + 8);
  *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 10;
  puVar3 = FUN_00411970(*(int *)(param_1 + 4));
  *(undefined4 **)(param_1 + 8) = puVar3;
  FUN_004559d0(*(undefined4 **)(param_1 + 8),puVar2,iVar1 << 3);
  FUN_0041199c();
  return iVar1 * 8 + *(int *)(param_1 + 8);
}

