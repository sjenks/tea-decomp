// name: FUN_00424310
// address: 0x424310
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424310(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x1e);
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  if (*(int *)(param_1 + 6) != 0) {
    FUN_004268bc(*(int *)(param_1 + 6));
  }
  return;
}

