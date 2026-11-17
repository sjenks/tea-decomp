// name: FUN_004804b0
// address: 0x4804b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004804b0(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_a4 [39];
  undefined4 *local_8;
  
  if (*(int *)(param_1 + 0x34) < 0x20) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
    *(undefined4 *)(param_1 + 0x38 + iVar2 * 4) = param_2;
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)&DAT_00501cfe);
        FUN_004d4ca4(*(int **)(param_1 + 0x244));
      }
      local_8 = (undefined4 *)FUN_00480608(param_1);
      if (local_8 != (undefined4 *)0x0) {
        FUN_00481b70(local_a4,param_1);
        puVar3 = local_a4;
        puVar1 = local_8;
        for (iVar2 = 0x27; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar1 = *puVar3;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
        puVar3 = local_8 + 0x33;
        puVar1 = (undefined4 *)(param_1 + 0xb8);
        for (iVar2 = 0; iVar2 < *(short *)((int)local_8 + 0x1a); iVar2 = iVar2 + 1) {
          *puVar3 = *puVar1;
          puVar3 = puVar3 + 1;
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  return;
}

