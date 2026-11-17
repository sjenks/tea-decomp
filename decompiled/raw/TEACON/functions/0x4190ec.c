// name: FUN_004190ec
// address: 0x4190ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004190ec(int *param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)FUN_0041503c();
  uVar2 = param_2;
  if ((uint)param_1[1] < param_2) {
    uVar2 = param_1[1];
  }
  puVar3 = puVar1;
  for (puVar4 = (undefined4 *)*param_1; puVar4 != (undefined4 *)(*param_1 + uVar2 * 4);
      puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    puVar3 = puVar3 + 1;
  }
  puVar4 = puVar1 + uVar2;
  for (; uVar2 < param_2; uVar2 = uVar2 + 1) {
    *puVar4 = param_3;
    puVar4 = puVar4 + 1;
  }
  if (*param_1 != 0) {
    FUN_00414f88();
  }
  *param_1 = (int)puVar1;
  param_1[1] = param_2;
  return *param_1;
}

