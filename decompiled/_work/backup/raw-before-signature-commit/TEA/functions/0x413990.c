// name: FUN_00413990
// address: 0x413990
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x004139d1) */

int __cdecl FUN_00413990(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  LPSTR lpString;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  FUN_004dce64(0x4ed1f4);
  local_c = (undefined4 *)&DAT_00513d64;
  iVar3 = GetWindowTextLengthA(*(HWND *)(param_2 + 0xc));
  lpString = (LPSTR)FUN_004cc180();
  GetWindowTextA(*(HWND *)(param_2 + 0xc),lpString,iVar3 + 1);
  for (; *lpString != '\0'; lpString = lpString + 1) {
    cVar1 = *lpString;
    if ((cVar1 != ':') && (cVar1 != '&')) {
      FUN_004d5c40((int)local_14,local_c[-1],0,1,cVar1);
    }
  }
  FUN_004cc0cc();
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    piVar4 = FUN_004cf7b0(param_1,uVar2,uVar2);
    *(int **)(param_1 + 8) = piVar4 + 3;
    FUN_004dc7d4(*(undefined4 **)(param_1 + 8),local_c,uVar2);
  }
  else {
    *(undefined4 **)(param_1 + 8) = local_c;
    piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar4 != &DAT_00513d58) {
      *piVar4 = *piVar4 + 1;
    }
  }
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar4 = local_c + -3;
      if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else if (piVar4 == &DAT_00513d58) {
        iVar3 = 1;
      }
      else {
        *piVar4 = *piVar4 + -1;
        iVar3 = *piVar4 + 1;
      }
      if (iVar3 != 0) goto LAB_00413b7b;
    }
    FUN_004cc0bc();
  }
LAB_00413b7b:
  *in_FS_OFFSET = local_38;
  return param_1;
}

