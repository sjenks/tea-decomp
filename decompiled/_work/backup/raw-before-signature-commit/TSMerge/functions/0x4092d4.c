// name: FUN_004092d4
// address: 0x4092d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004092d4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            int param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00455f04(0x462ad0);
  while (iVar4 = param_6, iVar3 = param_2, iVar3 != param_3) {
    param_2 = iVar3 + 0x10;
    param_6 = iVar4 + 0x10;
    if (iVar4 != 0) {
      *(undefined4 *)(iVar4 + 8) = 0;
      iVar1 = *(int *)(*(int *)(iVar3 + 8) + -0xc);
      if (iVar1 == -1 || iVar1 + 1 < 0) {
        uVar2 = *(uint *)(*(int *)(iVar3 + 8) + -4);
        piVar5 = FUN_0044d2a4(iVar4,uVar2,uVar2);
        *(int **)(iVar4 + 8) = piVar5 + 3;
        FUN_004559d0(*(undefined4 **)(iVar4 + 8),*(undefined4 **)(iVar3 + 8),uVar2);
      }
      else {
        *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
        piVar5 = (int *)(*(int *)(iVar4 + 8) + -0xc);
        if (piVar5 != &DAT_00471d5c) {
          *piVar5 = *piVar5 + 1;
        }
      }
    }
  }
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = iVar4;
  *in_FS_OFFSET = local_2c;
  return param_1;
}

