// name: FUN_0043ec40
// address: 0x43ec40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0043ec40(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46e1fc);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x14) + -4);
    piVar3 = FUN_0044d2a4(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar3 + 3;
    FUN_004559d0(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 0x14),uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x14);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

