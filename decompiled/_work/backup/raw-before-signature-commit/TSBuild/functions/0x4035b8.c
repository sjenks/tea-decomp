// name: FUN_004035b8
// address: 0x4035b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004035b8(int param_1,uint *param_2)

{
  char *pcVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint uVar5;
  undefined4 local_48;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  LPCSTR local_c;
  
  FUN_00467ba8(0x474c7c);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0xd6) + 0xc),(LPCSTR)param_2);
  pcVar1 = FUN_004677a0(param_2);
  puVar2 = thunk_FUN_00467a68(param_2,'.');
  if (puVar2 != (uint *)0x0) {
    pcVar1 = (char *)((int)puVar2 - (int)param_2);
  }
  uVar5 = 0;
  FUN_00459d78((int)local_24,param_2);
  FUN_0045c818((int)local_14,(int)local_24,uVar5,(uint)pcVar1);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar4 = (int *)(local_1c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_004036ab;
    }
    FUN_0045680c();
    local_1c = 0;
  }
LAB_004036ab:
  uVar5 = *(uint *)(local_c + -4);
  pcVar1 = FUN_004677a0((uint *)&DAT_00474358);
  FUN_0045a224((int)local_14,uVar5,0,0x474358,(uint)pcVar1,0,(uint)pcVar1);
  SetWindowTextA(*(HWND *)(*(int *)(param_1 + 0x188) + 0xc),local_c);
  FUN_004029e8(param_1);
  if (local_c != (LPCSTR)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar4 = (int *)(local_c + -0xc);
      if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00485bcc) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00403764;
    }
    FUN_0045680c();
  }
LAB_00403764:
  *in_FS_OFFSET = local_48;
  return;
}

