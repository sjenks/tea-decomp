// name: FUN_004018d4
// address: 0x4018d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004018d4(int *param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  uint *lpString;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_68;
  undefined1 local_44 [8];
  int local_3c;
  undefined1 local_34 [8];
  int local_2c;
  undefined1 local_24 [8];
  int local_1c;
  undefined1 local_14 [8];
  uint *local_c;
  
  FUN_004dce64(0x4ea494);
  FUN_004156f4(param_1);
  pCVar1 = (LPCSTR)FUN_00408c98(param_1[0x18],param_1[0x19]);
  FUN_0041b1ec(param_1 + 0x45,pCVar1);
  FUN_00408d0c(local_24,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0x74,(int)local_24);
  if (local_1c != 0) {
    if (*(int *)(local_1c + -0xc) != -1) {
      piVar3 = (int *)(local_1c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_004019b8;
    }
    FUN_004cc0bc();
    local_1c = 0;
  }
LAB_004019b8:
  iVar2 = GetWindowTextLengthA(*(HWND *)(*param_1 + 0xc));
  lpString = (uint *)FUN_004cc180();
  GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)lpString,iVar2 + 1);
  *(CHAR *)((int)lpString + iVar2) = '\0';
  FUN_00408cbc(local_34,param_1[0x18],param_1[0x19]);
  FUN_00401d10((int)local_14,(int)local_34,lpString);
  if (local_2c != 0) {
    if (*(int *)(local_2c + -0xc) != -1) {
      piVar3 = (int *)(local_2c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00401a92;
    }
    FUN_004cc0bc();
    local_2c = 0;
  }
LAB_00401a92:
  FUN_004b0c44(param_1,local_c);
  FUN_004cc0cc();
  FUN_00408d5c(local_44,param_1[0x18],param_1[0x19]);
  FUN_0041b474(param_1 + 0xa3,(int)local_44);
  if (local_3c != 0) {
    if (*(int *)(local_3c + -0xc) != -1) {
      piVar3 = (int *)(local_3c + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00401b5f;
    }
    FUN_004cc0bc();
    local_3c = 0;
  }
LAB_00401b5f:
  iVar2 = FUN_00408c68(param_1[0x18],param_1[0x19]);
  if (iVar2 != 0) {
    FUN_00408e24(param_1[0x18],param_1[0x19]);
    FUN_0041b24c(param_1 + 0x180);
    FUN_0041b24c(param_1 + 0x1af);
    FUN_0041b24c(param_1 + 0x1de);
    FUN_0041b24c(param_1 + 0x20d);
  }
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      local_c = local_c + -3;
      if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (local_c == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *local_c = *local_c - 1;
        iVar2 = *local_c + 1;
      }
      if (iVar2 != 0) goto LAB_00401c7a;
    }
    FUN_004cc0bc();
  }
LAB_00401c7a:
  *in_FS_OFFSET = local_68;
  return;
}

