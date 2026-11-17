// name: FUN_0044c894
// address: 0x44c894
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0044c894(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4f70b4);
  puVar3 = (undefined4 *)param_1[6];
  if (puVar3 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_0044b428(param_1);
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  if (puVar3 + 4 != (undefined4 *)0x0) {
    puVar3[6] = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      piVar4 = FUN_004cf7b0(puVar3 + 4,uVar2,uVar2);
      puVar3[6] = piVar4 + 3;
      FUN_004dc7d4((undefined4 *)puVar3[6],*(undefined4 **)(param_2 + 8),uVar2);
    }
    else {
      puVar3[6] = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(puVar3[6] + -0xc);
      if (piVar4 != &DAT_00513d58) {
        *piVar4 = *piVar4 + 1;
      }
    }
    puVar3[8] = *(undefined4 *)(param_2 + 0x10);
  }
  *in_FS_OFFSET = local_2c;
  return puVar3;
}

