// name: FUN_0045634c
// address: 0x45634c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045634c(int param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f8a04);
  local_28 = 0x14;
  uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  FUN_00464a94((int)local_14,*(int *)(param_1 + 0x38),uVar1);
  local_1c = local_1c + 1;
  local_28 = 8;
  local_40 = (int)(short)param_3[3];
  local_3c = (int)(short)((uint)param_3[3] >> 0x10);
  FUN_0045e060(param_1,(int)local_14,*param_3,param_3[2],(undefined2 *)&local_40,(int)param_3);
  local_1c = local_1c + -1;
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
      if (iVar2 != 0) goto LAB_0045642b;
    }
    FUN_004cc0bc();
  }
LAB_0045642b:
  *in_FS_OFFSET = local_38;
  return;
}

