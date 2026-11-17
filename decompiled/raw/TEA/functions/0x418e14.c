// name: FUN_00418e14
// address: 0x418e14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00418e14(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  char cVar3;
  undefined4 local_128;
  int local_104 [55];
  undefined1 local_28 [8];
  int local_20;
  undefined4 local_18 [2];
  uint local_10;
  undefined *local_c;
  undefined4 local_8;
  
  FUN_004dce64(0x4ee4bc);
  local_8 = 0;
  local_18[0] = 9;
  local_c = &DAT_004ee30c;
  local_10 = param_1[8];
  FUN_00413990((int)local_28,param_1[10]);
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  piVar1 = FUN_0048b0c0(local_104,0,*param_1,(int)local_18,0,local_20,0);
  iVar2 = (**(code **)(piVar1[3] + 0x14))();
  cVar3 = iVar2 == 1;
  FUN_0048b2c4(local_104,2);
  if (cVar3 != '\0') {
    GetDlgCtrlID(*(HWND *)(*param_1 + 0xc));
    FUN_0048c12c(&local_10);
    (**(code **)(*(int *)(param_1[6] + 0xc) + 0x6c))();
  }
  (**(code **)(*(int *)(param_1[6] + 0xc) + 0xa4))();
  if (local_20 != 0) {
    if (*(int *)(local_20 + -0xc) != -1) {
      piVar1 = (int *)(local_20 + -0xc);
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
      if (iVar2 != 0) goto LAB_00418fd3;
    }
    FUN_004cc0bc();
    local_20 = 0;
  }
LAB_00418fd3:
  FUN_004cc0cc();
  *in_FS_OFFSET = local_128;
  return;
}

