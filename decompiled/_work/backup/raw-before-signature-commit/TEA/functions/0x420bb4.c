// name: FUN_00420bb4
// address: 0x420bb4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00420bb4(int param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4efbb4);
  puVar1 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x14));
  FUN_004cf628((int)local_14,puVar1);
  (**(code **)(*(int *)(*(int *)(param_1 + 0x160) + 0xc) + 0x94))();
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00420c7d;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_00420c7d:
  FUN_00420cbc(param_1,*(int *)(param_1 + 0x228) + 0x1e96);
  FUN_00420cbc(param_1,*(int *)(param_1 + 0x228) + 0x1ea0);
  *in_FS_OFFSET = local_38;
  return;
}

