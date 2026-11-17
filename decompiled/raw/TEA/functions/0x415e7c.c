// name: FUN_00415e7c
// address: 0x415e7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00415ed3) */
/* WARNING: Removing unreachable block (ram,0x00415f42) */
/* WARNING: Removing unreachable block (ram,0x0041602e) */
/* WARNING: Removing unreachable block (ram,0x00415fda) */
/* WARNING: Removing unreachable block (ram,0x00416021) */
/* WARNING: Removing unreachable block (ram,0x004160c5) */
/* WARNING: Removing unreachable block (ram,0x004160e9) */
/* WARNING: Removing unreachable block (ram,0x004160f4) */
/* WARNING: Removing unreachable block (ram,0x00416134) */
/* WARNING: Removing unreachable block (ram,0x0041610d) */
/* WARNING: Removing unreachable block (ram,0x0041612d) */
/* WARNING: Removing unreachable block (ram,0x0041611a) */
/* WARNING: Removing unreachable block (ram,0x00416139) */
/* WARNING: Removing unreachable block (ram,0x0041613d) */
/* WARNING: Removing unreachable block (ram,0x0041618b) */

void __cdecl FUN_00415e7c(int *param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_f0 [80];
  uint *local_a0;
  uint local_9c;
  undefined1 local_95;
  int local_94;
  undefined4 local_90;
  undefined2 local_80;
  int local_74;
  undefined4 local_44 [12];
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4edbe8);
  local_80 = 0x14;
  uVar1 = GetDlgCtrlID(*(HWND *)(*param_2 + 0xc));
  FUN_00464a94((int)local_14,param_1[0xe],uVar1);
  local_74 = local_74 + 1;
  local_80 = 8;
  local_95 = 10;
  local_9c = local_c[-1];
  local_a0 = local_c;
  pcVar2 = thunk_FUN_004dc794((char *)local_c,'\n',local_9c);
  local_94 = DAT_005140ac;
  if (pcVar2 != (char *)0x0) {
    local_94 = (int)pcVar2 - (int)local_c;
  }
  if (local_94 != -1) {
    local_f0[0] = 0;
    uVar1 = local_94 + 1U;
    if (local_c[-1] <= local_94 + 1U) {
      uVar1 = local_c[-1];
    }
    FUN_004cfad4((int)local_14,0,uVar1,(uint)local_f0,0,0,0);
  }
  local_80 = 0x5c;
  FUN_0049f498(local_44,*(undefined4 *)(*param_1 + 0xc),*(undefined4 *)(*param_2 + 0xc),local_c);
  local_74 = local_74 + 2;
  local_80 = 8;
  FUN_004a76a8(*(int *)param_1[0x16],0x404,0,(LPARAM)local_44);
  local_74 = local_74 + -2;
  FUN_004cc0cc();
  local_74 = local_74 + -1;
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar3 = *local_c + 1;
      }
      if (iVar3 != 0) goto LAB_004162a9;
    }
    FUN_004cc0bc();
  }
LAB_004162a9:
  *in_FS_OFFSET = local_90;
  return;
}

