// name: FUN_00449dd4
// address: 0x449dd4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00449dd4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x481fd8);
  *(undefined4 *)(param_1 + 8) = 0;
  iVar1 = *(int *)(*(int *)(param_2 + 0x14) + -0xc);
  if (iVar1 == -1 || iVar1 + 1 < 0) {
    uVar2 = *(uint *)(*(int *)(param_2 + 0x14) + -4);
    piVar3 = FUN_00459f00(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar3 + 3;
    FUN_00467580(*(undefined4 **)(param_1 + 8),*(undefined4 **)(param_2 + 0x14),uVar2);
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 0x14);
    piVar3 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar3 != &DAT_00485bcc) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

