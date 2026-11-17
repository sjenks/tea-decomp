// name: FUN_0040e0cc
// address: 0x40e0cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040e0cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ec42c);
  iVar1 = param_1;
  while (param_1 = iVar1, iVar2 = param_2 + -1, param_2 != 0) {
    iVar1 = param_1 + 0x10;
    param_2 = iVar2;
    if (param_1 != 0) {
      *(undefined4 *)(param_1 + 8) = 0;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + -0xc);
      if (iVar2 == -1 || iVar2 + 1 < 0) {
        uVar3 = *(uint *)(*(int *)(param_3 + 8) + -4);
        piVar4 = FUN_004cf7b0(param_1,uVar3,uVar3);
        *(int **)(param_1 + 8) = piVar4 + 3;
        FUN_004dc7d4(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_3 + 8),uVar3);
      }
      else {
        *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_3 + 8);
        piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
        if (piVar4 != &DAT_00513d58) {
          *piVar4 = *piVar4 + 1;
        }
      }
    }
  }
  *in_FS_OFFSET = local_2c;
  return;
}

