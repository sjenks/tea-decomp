// name: FUN_004803f0
// address: 0x4803f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004803f0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_c0 [39];
  uint local_24 [8];
  
  if (param_3 != *(int *)(param_1 + 0x24 + param_2 * 4)) {
    *(int *)(param_1 + 0x24 + param_2 * 4) = param_3;
    FUN_0047f9f8(param_1);
    if (*(int *)(param_1 + 4) == 0) {
      if (*(int *)(param_1 + 0x248) == 3) {
        if (param_2 == 0) {
          FUN_004e0344((undefined1 *)local_24,&DAT_00501ce8);
        }
        else {
          FUN_004e0344((undefined1 *)local_24,&DAT_00501cf2);
        }
        FUN_004d5374(*(int **)(param_1 + 0x244),local_24);
      }
      puVar1 = (undefined4 *)FUN_00480608(param_1);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_00481b70(local_c0,param_1);
        puVar3 = local_c0;
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

