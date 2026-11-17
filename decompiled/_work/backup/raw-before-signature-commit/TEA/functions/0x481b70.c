// name: FUN_00481b70
// address: 0x481b70
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00481b70(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_a0 [39];
  
  FUN_00485870(local_a0,0);
  FUN_004858f4((int)local_a0,*(undefined2 *)(param_2 + 0x24));
  FUN_004858a4((int)local_a0,*(int *)(param_2 + 0x2c) + *(int *)(param_2 + 0x28),'\0');
  FUN_004858cc((int)local_a0,*(undefined4 *)(param_2 + 0x30));
  FUN_004858e0((int)local_a0,-*(int *)(param_2 + 0x28));
  FUN_00485908((int)local_a0,*(short *)(param_2 + 0x34),(undefined4 *)(param_2 + 0x38));
  puVar2 = local_a0;
  puVar3 = param_1;
  for (iVar1 = 0x27; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return param_1;
}

