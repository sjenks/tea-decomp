// name: FUN_0045424c
// address: 0x45424c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */

void __cdecl FUN_0045424c(int *param_1)

{
  int iVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  uint *puVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 *in_FS_OFFSET;
  int local_54 [8];
  HGLOBAL local_34;
  HCURSOR local_30;
  int local_2c;
  undefined4 local_28;
  undefined2 local_18;
  int local_c;
  char local_5;
  
  FUN_004dce64(0x4f87e0);
  iVar1 = *(int *)(*(int *)(param_1[0x1ad] + param_1[0x1b4] * 4) + 8);
  local_2c = FUN_0042ba14(iVar1);
  if (local_2c < 1) {
    *in_FS_OFFSET = local_28;
  }
  else {
    hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
    local_30 = SetCursor(hCursor);
    ShowCursor(1);
    local_18 = 8;
    FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
    local_c = local_c + 1;
    local_18 = 0x14;
    BVar2 = EmptyClipboard();
    if (BVar2 != 0) {
      pcVar6 = (char *)0x0;
      FUN_0043061c(local_54,iVar1);
      while( true ) {
        iVar4 = FUN_00430678(local_54);
        if (iVar4 < 0) break;
        puVar3 = (uint *)FUN_0042baf8(iVar1,iVar4);
        pcVar5 = FUN_004dc9f4(puVar3);
        pcVar6 = pcVar6 + (int)pcVar5;
      }
      if (1 < local_2c) {
        pcVar6 = pcVar6 + local_2c * 2;
      }
      local_34 = GlobalAlloc(0x42,(SIZE_T)(pcVar6 + 1));
      if (local_34 != (HGLOBAL)0x0) {
        pcVar6 = GlobalLock(local_34);
        local_18 = 0x14;
        FUN_00430730(local_54,0);
        while( true ) {
          iVar4 = FUN_00430678(local_54);
          if (iVar4 < 0) break;
          pcVar5 = (char *)FUN_0042baf8(iVar1,iVar4);
          local_18 = 0x14;
          for (; *pcVar5 != '\0'; pcVar5 = pcVar5 + 1) {
            *pcVar6 = *pcVar5;
            pcVar6 = pcVar6 + 1;
          }
          if (1 < local_2c) {
            *pcVar6 = '\r';
            pcVar6[1] = '\n';
            pcVar6 = pcVar6 + 2;
          }
        }
        GlobalUnlock(local_34);
        SetClipboardData(1,local_34);
      }
    }
    FUN_0048bc08(&local_5);
    ShowCursor(0);
    SetCursor(local_30);
    local_c = local_c + -1;
    FUN_0048bbe0(&local_5,2);
    *in_FS_OFFSET = local_28;
  }
  return;
}

