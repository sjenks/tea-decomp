// name: FUN_004536c4
// address: 0x4536c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004536c4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  piVar2 = (int *)FUN_00464af0(*(int *)(param_1 + 0x38));
  if (piVar2 != (int *)0x0) {
    iVar1 = piVar2[2];
    puVar4 = (undefined4 *)(param_1 + 0xcb8);
    puVar5 = (undefined4 *)(iVar1 + 0x38);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | *(uint *)(param_1 + 0xcb4) | 2;
    (**(code **)(*piVar2 + 8))();
    puVar4 = (undefined4 *)(iVar1 + 0x38);
    puVar5 = (undefined4 *)(param_1 + 0xcb8);
    for (iVar3 = 4; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  return;
}

