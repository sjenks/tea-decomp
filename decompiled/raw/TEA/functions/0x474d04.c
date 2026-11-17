// name: FUN_00474d04
// address: 0x474d04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00474d04(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_3b0;
  int local_38c [222];
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4ffa24);
  iVar3 = *(int *)(param_1 + 0x4c);
  puVar1 = (uint *)FUN_00466a90(iVar3);
  FUN_004cf628((int)local_14,puVar1);
  piVar2 = FUN_00434cd0(local_38c,0,*(undefined4 *)(param_1 + 4),iVar3,(int)local_14);
  (**(code **)(piVar2[3] + 0x14))();
  FUN_004350d4(local_38c,2);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar2 + 1;
      }
      if (iVar3 != 0) goto LAB_00474e07;
    }
    FUN_004cc0bc();
  }
LAB_00474e07:
  *in_FS_OFFSET = local_3b0;
  return;
}

