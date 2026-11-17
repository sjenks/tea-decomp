// name: FUN_0045680c
// address: 0x45680c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045680c(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8b34);
  iVar1 = (**(code **)(param_1[0x59] + 0x6c))();
  if (iVar1 < 0) goto LAB_004568df;
  FUN_0041c780((int)local_14,(int)(param_1 + 0x56),iVar1);
  FUN_004cf384((int)(param_1 + 0x1a6),(int)local_14);
  if (local_c != 0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar2 = (int *)(local_c + -0xc);
      if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_004568d8;
    }
    FUN_004cc0bc();
    local_c = 0;
  }
LAB_004568d8:
  FUN_0045269c(param_1);
LAB_004568df:
  *in_FS_OFFSET = local_38;
  return;
}

