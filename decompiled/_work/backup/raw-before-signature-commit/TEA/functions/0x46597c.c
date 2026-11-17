// name: FUN_0046597c
// address: 0x46597c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0046597c(int param_1,uint *param_2,uint *param_3)

{
  BOOL BVar1;
  char *pcVar2;
  HGLOBAL pvVar3;
  LPSTR pCVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_004dce64(0x4fc0b0);
  FUN_0048ba8c(&local_5,*(HWND *)(**(int **)(param_1 + 0x10) + 0xc),'\x01');
  BVar1 = EmptyClipboard();
  if (BVar1 != 0) {
    if (param_2 != (uint *)0x0) {
      pcVar2 = FUN_004dc9f4(param_2);
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)(pcVar2 + 1));
      pCVar4 = GlobalLock(pvVar3);
      lstrcpyA(pCVar4,(LPCSTR)param_2);
      GlobalUnlock(pvVar3);
      SetClipboardData(1,pvVar3);
    }
    if (param_3 != (uint *)0x0) {
      pcVar2 = FUN_004dc9f4(param_3);
      pvVar3 = GlobalAlloc(0x42,(SIZE_T)(pcVar2 + 1));
      pCVar4 = GlobalLock(pvVar3);
      lstrcpyA(pCVar4,(LPCSTR)param_3);
      GlobalUnlock(pvVar3);
      SetClipboardData(0x81,pvVar3);
    }
  }
  FUN_0048bc08(&local_5);
  FUN_0048bbe0(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

