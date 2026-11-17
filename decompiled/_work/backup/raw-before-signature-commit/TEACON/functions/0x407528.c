// name: FUN_00407528
// address: 0x407528
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00407528(int param_1,int param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_474 [250];
  _SYSTEMTIME local_8c;
  undefined4 *local_74;
  undefined4 *local_70;
  undefined4 *local_6c;
  undefined4 *local_68;
  uint local_64;
  int local_60;
  int *local_5c;
  int *local_58;
  int local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  _FILETIME local_40;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_0041f3fc(0x42bafc);
  FileTimeToLocalFileTime((FILETIME *)(param_2 + 0x2008),&local_40);
  FileTimeToSystemTime(&local_40,&local_8c);
  GetDateFormatA(0x400,2,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  local_28 = 0x14;
  FUN_00416e74((int)local_14,local_474);
  local_1c = local_1c + 1;
  local_28 = 8;
  FUN_0041ae90((int)local_14,local_c[-1],0,1,0x20);
  GetTimeFormatA(0x400,0,&local_8c,(LPCSTR)0x0,(LPSTR)local_474,1000);
  uVar1 = local_c[-1];
  pcVar2 = FUN_0041ef80(local_474);
  FUN_00417320((int)local_14,uVar1,0,(uint)local_474,(uint)pcVar2,0,(uint)pcVar2);
  local_28 = 0x20;
  local_4c = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar1 = local_c[-1];
    local_5c = FUN_00416ffc(param_1,uVar1,uVar1);
    local_58 = local_5c + 3;
    *(int **)(param_1 + 8) = local_58;
    local_60 = param_1;
    local_68 = local_c;
    local_6c = *(undefined4 **)(param_1 + 8);
    local_64 = uVar1;
    FUN_0041eddc(local_6c,local_c,uVar1);
  }
  else {
    local_50 = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_54 = param_1;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_0042fab4) {
      *piVar4 = *piVar4 + 1;
    }
  }
  local_28 = 0x38;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_0042fab4) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_0040774c;
    }
    local_70 = local_c + -3;
    local_74 = local_c + -3;
    FUN_00414f78();
  }
LAB_0040774c:
  *in_FS_OFFSET = local_38;
  return param_1;
}

