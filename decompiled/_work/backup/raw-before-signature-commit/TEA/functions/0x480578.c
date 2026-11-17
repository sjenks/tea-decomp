// name: FUN_00480578
// address: 0x480578
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00480578(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a0 [39];
  
  if (0 < *(int *)(param_1 + 0x34)) {
    *(undefined4 *)(param_1 + 0x34) = 0;
    iVar2 = 0;
    puVar1 = (undefined4 *)(param_1 + 0xb8);
    do {
      *puVar1 = 0;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 1;
    } while (iVar2 < 0x20);
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__pard_00501d02);
      }
      puVar1 = (undefined4 *)FUN_00480608(param_1);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00481b70(local_a0,param_1);
        puVar3 = local_a0;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

