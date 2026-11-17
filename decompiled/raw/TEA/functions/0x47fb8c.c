// name: FUN_0047fb8c
// address: 0x47fb8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0047fb8c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar3;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x502a48);
  if (*(int *)(param_1 + 4) != 0) goto LAB_0047fc8b;
  if (*(int *)(param_1 + 0x248) == 3) {
    FUN_00437bd4((int)local_14);
    puVar3 = local_14;
    piVar1 = FUN_004d5374(*(int **)(param_1 + 0x244),(uint *)s__cols_00501cdb);
    FUN_0047d0e8(piVar1,extraout_EDX,extraout_ECX,piVar1,(int)puVar3);
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar1 = (int *)(local_c + -0xc);
        if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar1 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar1 = *piVar1 + -1;
          iVar2 = *piVar1 + 1;
        }
        if (iVar2 != 0) goto LAB_0047fc64;
      }
      FUN_004cc0bc();
      local_c = 0;
    }
LAB_0047fc64:
    FUN_004d50d0(*(int **)(param_1 + 0x244),0x20);
  }
  iVar2 = FUN_00480608(param_1);
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xc4) = param_2;
  }
LAB_0047fc8b:
  *in_FS_OFFSET = local_38;
  return;
}

