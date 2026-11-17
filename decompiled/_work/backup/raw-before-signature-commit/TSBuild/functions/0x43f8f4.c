// name: FUN_0043f8f4
// address: 0x43f8f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f8f4(int *param_1,uint param_2)

{
  int iVar1;
  HGLOBAL hMem;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x48005c);
  if (param_1 != (int *)0x0) {
    param_1[3] = (int)&PTR_FUN_0047ff60;
    *(undefined ***)param_1[1] = &PTR_LAB_0047ffa4;
    *(undefined ***)param_1[2] = &PTR_LAB_0047ffb0;
    *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047ffbc;
    if (param_1 == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *param_1;
    }
    if ((*(byte *)(iVar1 + 0x76) & 0xf) == 0) {
      if ((short)((uint)param_1[4] >> 0x10) != 0) {
        FUN_0045681c();
      }
    }
    else {
      if (param_1 == (int *)0x0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *param_1;
      }
      if ((*(byte *)(iVar1 + 0x76) & 10) != 0) {
        if (param_1 == (int *)0x0) {
          iVar1 = 0;
        }
        else {
          iVar1 = *param_1;
        }
        if ((*(byte *)(iVar1 + 0x76) & 2) == 0) {
          if (param_1 == (int *)0x0) {
            iVar1 = 0;
          }
          else {
            iVar1 = *param_1;
          }
          if ((*(byte *)(iVar1 + 0x76) & 1) != 0) {
            hMem = GlobalHandle((LPCVOID)param_1[4]);
            GlobalUnlock(hMem);
          }
        }
        else {
          GlobalFree((HGLOBAL)param_1[4]);
        }
      }
    }
    if ((param_2 & 2) != 0) {
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
      FUN_00435f74(param_1 + 10,0);
      *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
      FUN_0041e99c(param_1 + 8,0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

