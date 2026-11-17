// name: FUN_00414278
// address: 0x414278
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004142b9) */
/* WARNING: Removing unreachable block (ram,0x00414554) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffff4c : 0x00414562 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * __cdecl FUN_00414278(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  HANDLE hFindFile;
  int iVar4;
  BOOL BVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  _WIN32_FIND_DATAA local_204;
  uint local_c4;
  undefined4 *local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined1 *local_a8;
  undefined4 local_a4;
  int local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  uint local_94;
  uint local_90;
  int *local_8c;
  int *local_88;
  int *local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined2 local_50;
  int local_44;
  undefined **local_3c;
  uint local_38;
  undefined1 local_34 [8];
  int local_2c;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_c;
  
  FUN_004dce64(0x4ed74c);
  local_20 = 0;
  local_1c = 0;
  local_c = 0;
  local_64 = 0x40;
  local_68 = 1;
  local_24 = 0x40;
  local_44 = local_44 + 1;
  local_50 = 0x20;
  hFindFile = FindFirstFileA(*(LPCSTR *)(param_2 + 8),&local_204);
  if (hFindFile != (HANDLE)0xffffffff) {
    do {
      local_50 = 0x2c;
      iVar4 = FUN_004cf628((int)local_34,(uint *)local_204.cFileName);
      local_44 = local_44 + 1;
      if (local_1c == local_c) {
        FUN_0040e240((int)&local_24,local_1c,iVar4);
      }
      else {
        local_74 = local_1c;
        local_38 = local_1c;
        if (local_1c != 0) {
          local_50 = 0x38;
          local_78 = 0;
          *(undefined4 *)(local_1c + 8) = 0;
          iVar1 = *(int *)(*(int *)(iVar4 + 8) + -0xc);
          if (iVar1 == -1 || iVar1 + 1 < 0) {
            uVar2 = *(uint *)(*(int *)(iVar4 + 8) + -4);
            local_8c = FUN_004cf7b0(local_1c,uVar2,uVar2);
            local_88 = local_8c + 3;
            *(int **)(local_38 + 8) = local_88;
            local_90 = local_38;
            local_98 = *(undefined4 **)(iVar4 + 8);
            local_9c = *(undefined4 **)(local_38 + 8);
            local_94 = uVar2;
            FUN_004dc7d4(local_9c,local_98,uVar2);
          }
          else {
            local_7c = *(undefined4 *)(iVar4 + 8);
            *(undefined4 *)(local_1c + 8) = local_7c;
            local_80 = local_1c;
            local_84 = (int *)(*(int *)(local_1c + 8) + -0xc);
            if (local_84 != &DAT_00513d58) {
              *local_84 = *local_84 + 1;
            }
          }
          local_50 = 0x2c;
        }
        local_1c = local_1c + 0x10;
      }
      local_44 = local_44 + -1;
      if (local_2c != 0) {
        if (*(int *)(local_2c + -0xc) != -1) {
          piVar6 = (int *)(local_2c + -0xc);
          if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else if (piVar6 == &DAT_00513d58) {
            iVar4 = 1;
          }
          else {
            *piVar6 = *piVar6 + -1;
            iVar4 = *piVar6 + 1;
          }
          if (iVar4 != 0) goto LAB_004144b8;
        }
        local_a0 = local_2c + -0xc;
        FUN_004cc0bc();
        local_a4 = 0;
        local_a8 = local_34;
        local_2c = 0;
      }
LAB_004144b8:
      local_50 = 0x20;
      BVar5 = FindNextFileA(hFindFile,&local_204);
    } while (BVar5 != 0);
    FindClose(hFindFile);
  }
  uVar3 = local_1c;
  uVar2 = local_20;
  if (local_1c != local_20) {
    FUN_00414bd8(local_20,local_1c);
    FUN_004146a0(uVar2,uVar3);
  }
  local_50 = 0x5c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  local_b4 = 0x40;
  local_b8 = 1;
  *param_1 = 0x40;
  local_bc = local_1c - local_20;
  if (local_bc < 0) {
    local_bc = local_bc + 0xf;
  }
  local_bc = local_bc >> 4;
  iVar4 = FUN_004cc0f0();
  if (iVar4 == 0) {
    local_3c = &PTR_FUN_004eac74;
    local_44 = local_44 + 2;
    FUN_004e7cc4((uint *)&DAT_004040dc,&local_3c,0,&LAB_00404134,1,0,0,0);
  }
  param_1[1] = iVar4;
  iVar4 = FUN_0040a988(local_20,local_1c,param_1[1]);
  param_1[2] = iVar4;
  local_c0 = param_1 + 2;
  param_1[6] = *local_c0;
  local_50 = 0x74;
  FUN_0040b4f0(&local_24,local_20,local_1c);
  local_c4 = local_20;
  FUN_004cc0bc();
  *in_FS_OFFSET = local_60;
  return param_1;
}

