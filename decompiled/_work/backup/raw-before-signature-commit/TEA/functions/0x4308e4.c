// name: FUN_004308e4
// address: 0x4308e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004308e4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_2 == *(int *)(param_1 + 0xb0)) {
    puVar2 = *(undefined4 **)(param_1 + 0xb8);
  }
  else {
    if (param_2 != *(int *)(param_1 + 0xb0) + 1) {
      *(int *)(param_1 + 0xb0) = param_2;
      puVar2 = (undefined4 *)0x0;
      iVar3 = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0;
      while( true ) {
        if ((*(int *)(param_1 + 0x58) - *(int *)(param_1 + 0x54)) / 0xc <= *(int *)(param_1 + 0xb4))
        goto LAB_004309be;
        puVar1 = (undefined4 *)(*(int *)(param_1 + 0xb4) * 0xc + *(int *)(param_1 + 0x54));
        if ((iVar3 <= param_2) && (param_2 < puVar1[2] + iVar3)) break;
        iVar3 = iVar3 + puVar1[2];
        *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      }
      puVar2 = (undefined4 *)*puVar1;
      iVar3 = param_2 - iVar3;
      while (0 < iVar3) {
        puVar2 = (undefined4 *)*puVar2;
        iVar3 = iVar3 + -1;
      }
LAB_004309be:
      *(undefined4 **)(param_1 + 0xb8) = puVar2;
      return puVar2;
    }
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
    iVar3 = **(int **)(param_1 + 0xb8);
    *(int *)(param_1 + 0xb8) = iVar3;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
      *(undefined4 *)(param_1 + 0xb8) =
           *(undefined4 *)(*(int *)(param_1 + 0xb4) * 0xc + *(int *)(param_1 + 0x54));
    }
    puVar2 = *(undefined4 **)(param_1 + 0xb8);
  }
  return puVar2;
}

