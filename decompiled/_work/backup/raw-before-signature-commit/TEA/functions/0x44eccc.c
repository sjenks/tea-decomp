// name: FUN_0044eccc
// address: 0x44eccc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044eccc(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  uint local_448 [257];
  int local_44;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f74a8);
  FUN_0044f060(param_3,(undefined1 *)local_448);
  local_28 = 8;
  iVar1 = FUN_004cf628((int)local_14,local_448);
  local_1c = local_1c + 1;
  FUN_0044ec78(param_1,param_2,iVar1);
  local_1c = local_1c + -1;
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
      if (iVar1 != 0) goto LAB_0044ed96;
    }
    local_44 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_0044ed96:
  *in_FS_OFFSET = local_38;
  return;
}

