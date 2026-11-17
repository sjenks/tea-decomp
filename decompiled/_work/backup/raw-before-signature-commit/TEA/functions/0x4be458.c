// name: FUN_004be458
// address: 0x4be458
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004be4a1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_004be458(int *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  BOOL BVar2;
  char *pcVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_48 [3];
  uint local_3c;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  BVar2 = FUN_004dce64(0x50f9bc);
  if (-1 < (int)param_3) {
    local_c = &DAT_00513d64;
    local_1c = local_1c + 1;
    local_28 = 0x20;
    if ((*(int *)(*param_1 + 0x10) != 0) && (**(char **)(*param_1 + 0x10) != '\0')) {
      FUN_004cf41c((int)local_14,*(uint **)(*param_1 + 0x10));
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4((uint *)&DAT_0050f7e9);
      FUN_004cfad4((int)local_14,uVar1,0,0x50f7e9,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (param_2 != (uint *)0x0) {
      local_3c = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4(param_2);
      FUN_004cfad4((int)local_14,local_3c,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (0 < (int)param_3) {
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4((uint *)&DAT_0050f7ed);
      FUN_004cfad4((int)local_14,uVar1,0,0x50f7ed,(uint)pcVar3,0,(uint)pcVar3);
      FUN_004e3f60(param_3,(char *)local_48,10);
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004dc9f4(local_48);
      FUN_004cfad4((int)local_14,uVar1,0,(uint)local_48,(uint)pcVar3,0,(uint)pcVar3);
    }
    BVar2 = SetWindowTextA(*(HWND *)(*param_1 + 0xc),local_c);
    local_1c = local_1c + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          BVar2 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          BVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          BVar2 = *piVar4 + 1;
        }
        if (BVar2 != 0) goto LAB_004be60f;
      }
      FUN_004cc0bc();
      BVar2 = 0;
    }
  }
LAB_004be60f:
  *in_FS_OFFSET = local_38;
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

