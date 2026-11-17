// name: FUN_0044ff60
// address: 0x44ff60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044ffc3) */

int * __cdecl FUN_0044ff60(int *param_1,int param_2,LPCSTR param_3)

{
  uint *puVar1;
  uint uVar2;
  FARPROC pFVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  undefined4 local_58;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  undefined *local_c;
  
  FUN_00467ba8(0x483220);
  pFVar3 = GetProcAddress(*(HMODULE *)(param_2 + 8),param_3);
  *param_1 = (int)pFVar3;
  if (*param_1 != 0) goto LAB_004501fa;
  local_c = &DAT_00485bd8;
  if ((short)((uint)param_3 >> 0x10) == 0) {
    FUN_004236bc((int)local_34,0x7ff4,(uint)param_3 & 0xffff,DAT_00484890);
    FUN_00459ad4((int)local_14,(int)local_34);
    if (local_2c != 0) {
      if (*(int *)(local_2c + -0xc) != -1) {
        piVar6 = (int *)(local_2c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00450148;
      }
      FUN_0045680c();
      local_2c = 0;
    }
  }
  else {
    FUN_004235b8((int)local_24,0x7ff5,param_3,DAT_00484890);
    FUN_00459ad4((int)local_14,(int)local_24);
    if (local_1c != 0) {
      if (*(int *)(local_1c + -0xc) != -1) {
        piVar6 = (int *)(local_1c + -0xc);
        if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else if (piVar6 == &DAT_00485bcc) {
          iVar4 = 1;
        }
        else {
          *piVar6 = *piVar6 + -1;
          iVar4 = *piVar6 + 1;
        }
        if (iVar4 != 0) goto LAB_00450148;
      }
      FUN_0045680c();
      local_1c = 0;
    }
  }
LAB_00450148:
  puVar1 = *(uint **)(param_2 + 4);
  uVar2 = *(uint *)(local_c + -4);
  pcVar5 = FUN_004677a0(puVar1);
  FUN_0045a224((int)local_14,uVar2,0,(uint)puVar1,(uint)pcVar5,0,(uint)pcVar5);
  FUN_00423384((int)local_14,0);
  if (local_c != (undefined *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar6 = (int *)(local_c + -0xc);
      if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else if (piVar6 == &DAT_00485bcc) {
        iVar4 = 1;
      }
      else {
        *piVar6 = *piVar6 + -1;
        iVar4 = *piVar6 + 1;
      }
      if (iVar4 != 0) goto LAB_004501fa;
    }
    FUN_0045680c();
  }
LAB_004501fa:
  *in_FS_OFFSET = local_58;
  return param_1;
}

