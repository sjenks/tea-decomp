// name: FUN_0044d568
// address: 0x44d568
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044d5b1) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 __cdecl FUN_0044d568(int *param_1,uint *param_2,uint param_3)

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
  
  BVar2 = FUN_00467ba8(0x4829e0);
  if (-1 < (int)param_3) {
    local_c = &DAT_00485bd8;
    local_1c = local_1c + 1;
    local_28 = 0x20;
    if ((*(int *)(*param_1 + 0x10) != 0) && (**(char **)(*param_1 + 0x10) != '\0')) {
      FUN_00459b6c((int)local_14,*(uint **)(*param_1 + 0x10));
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004677a0((uint *)&DAT_00482831);
      FUN_0045a224((int)local_14,uVar1,0,0x482831,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (param_2 != (uint *)0x0) {
      local_3c = *(uint *)(local_c + -4);
      pcVar3 = FUN_004677a0(param_2);
      FUN_0045a224((int)local_14,local_3c,0,(uint)param_2,(uint)pcVar3,0,(uint)pcVar3);
    }
    if (0 < (int)param_3) {
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004677a0((uint *)&DAT_00482835);
      FUN_0045a224((int)local_14,uVar1,0,0x482835,(uint)pcVar3,0,(uint)pcVar3);
      FUN_0046e108(param_3,(char *)local_48,10);
      uVar1 = *(uint *)(local_c + -4);
      pcVar3 = FUN_004677a0(local_48);
      FUN_0045a224((int)local_14,uVar1,0,(uint)local_48,(uint)pcVar3,0,(uint)pcVar3);
    }
    BVar2 = SetWindowTextA(*(HWND *)(*param_1 + 0xc),local_c);
    local_1c = local_1c + -1;
    if (local_c != (LPCSTR)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00485bcc) {
          BVar2 = 1;
        }
        else if (piVar4 == &DAT_00485bcc) {
          BVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          BVar2 = *piVar4 + 1;
        }
        if (BVar2 != 0) goto LAB_0044d71f;
      }
      FUN_0045680c();
      BVar2 = 0;
    }
  }
LAB_0044d71f:
  *in_FS_OFFSET = local_38;
  return CONCAT31((int3)((uint)BVar2 >> 8),1);
}

