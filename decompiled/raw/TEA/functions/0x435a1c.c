// name: FUN_00435a1c
// address: 0x435a1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00435a1c(int param_1,int param_2,int param_3)

{
  int iVar1;
  BOOL BVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 uVar5;
  _PROCESS_INFORMATION local_f8;
  _STARTUPINFOA local_e8;
  LPSTR local_a0;
  LPSTR local_98;
  BOOL local_94;
  BOOL local_90;
  undefined1 *local_8c;
  int local_88;
  undefined1 *local_84;
  undefined4 local_80;
  int local_7c;
  undefined1 *local_78;
  undefined4 local_74;
  int local_70;
  int local_6c;
  undefined4 local_68;
  undefined2 local_58;
  int local_4c;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPSTR local_c;
  
  FUN_004dce64(0x4f3728);
  FUN_004dc844(&local_e8.cb,0,0x44);
  local_e8.cb = 0x44;
  local_58 = 0x14;
  puVar4 = (uint *)&DAT_004f357d;
  FUN_00435880((int)local_24,(uint *)&DAT_004f357d,param_1);
  local_4c = local_4c + 1;
  FUN_00401d10((int)local_14,(int)local_24,puVar4);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00435b05;
    }
    local_6c = local_1c + -0xc;
    local_70 = local_1c + -0xc;
    FUN_004cc0bc();
    local_74 = 0;
    local_78 = local_24;
    local_1c = 0;
  }
LAB_00435b05:
  if (param_2 != 0) {
    local_58 = 0x2c;
    FUN_00435534((int)local_34,param_2);
    local_4c = local_4c + 1;
    FUN_004d573c((int)local_14,(int)local_34);
    local_4c = local_4c + -1;
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar3 = (int *)(local_2c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435bb3;
      }
      local_7c = local_2c + -0xc;
      FUN_004cc0bc();
      local_80 = 0;
      local_84 = local_34;
      local_2c = 0;
    }
  }
LAB_00435bb3:
  if (param_3 != 0) {
    local_58 = 0x44;
    FUN_00435534((int)local_44,param_3);
    local_4c = local_4c + 1;
    FUN_004d573c((int)local_14,(int)local_44);
    local_4c = local_4c + -1;
    if (local_3c != 0) {
      if (*(int *)(local_3c + -0xc) != -1) {
        piVar3 = (int *)(local_3c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435c60;
      }
      local_88 = local_3c + -0xc;
      FUN_004cc0bc();
      local_8c = local_44;
      local_3c = 0;
    }
  }
LAB_00435c60:
  local_58 = 8;
  BVar2 = CreateProcessA((LPCSTR)0x0,local_c,(LPSECURITY_ATTRIBUTES)0x0,(LPSECURITY_ATTRIBUTES)0x0,0
                         ,0,(LPVOID)0x0,(LPCSTR)0x0,&local_e8,&local_f8);
  if (BVar2 == 0) {
    uVar5 = 0;
    local_4c = local_4c + -1;
    if (local_c != (LPSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar1 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar1 = *piVar3 + 1;
        }
        if (iVar1 != 0) goto LAB_00435dce;
      }
      local_a0 = local_c + -0xc;
      FUN_004cc0bc();
    }
LAB_00435dce:
    *in_FS_OFFSET = local_68;
    return uVar5;
  }
  if (local_f8.hThread != (HANDLE)0x0) {
    local_90 = CloseHandle(local_f8.hThread);
  }
  if (local_f8.hProcess != (HANDLE)0x0) {
    local_94 = CloseHandle(local_f8.hProcess);
  }
  uVar5 = 1;
  local_4c = local_4c + -1;
  if (local_c != (LPSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar3 = (int *)(local_c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar1 = *piVar3 + 1;
      }
      if (iVar1 != 0) goto LAB_00435d42;
    }
    local_98 = local_c + -0xc;
    FUN_004cc0bc();
  }
LAB_00435d42:
  *in_FS_OFFSET = local_68;
  return uVar5;
}

