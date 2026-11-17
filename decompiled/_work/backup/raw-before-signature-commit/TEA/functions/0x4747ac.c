// name: FUN_004747ac
// address: 0x4747ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004747ac(int *param_1)

{
  HINSTANCE hmod;
  DWORD dwThreadId;
  
  FUN_004ae93c(param_1);
  if (*(int *)(param_1[0x12] + 0xa0) != 0) {
    FUN_004a7aa0(param_1[1],(HWND)0xffffffff,0,0,0,0,3);
  }
  DAT_0051ac80 = 0;
  DAT_0051ac7c = (HHOOK)0x0;
  DAT_0051ac8c = *(undefined4 *)(param_1[1] + 0xc);
  DAT_0051ac78 = RegisterWindowMessageA(s_commdlg_help_004ff3c4);
  if (DAT_0051ac78 != 0) {
    hmod = *(HINSTANCE *)(*(int *)(param_1[1] + 0x6c) + 0xc);
    dwThreadId = GetCurrentThreadId();
    DAT_0051ac7c = SetWindowsHookExA(-1,_MsgHookProc_qqsiuil,hmod,dwThreadId);
  }
  return;
}

