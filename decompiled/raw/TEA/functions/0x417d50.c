// name: FUN_00417d50
// address: 0x417d50
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00417d50(int *param_1,char param_2)

{
  int iVar1;
  uint local_3ec [250];
  
  if ((param_2 == '\0') || (*(int *)(param_1[10] + -4) == 0)) {
    if (param_2 == '\0') {
      if (*(int *)(param_1[10] + -4) == 0) {
        iVar1 = GetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPSTR)local_3ec,1000);
        if (iVar1 < 0x3e6) {
          FUN_004cf41c((int)(param_1 + 8),local_3ec);
        }
      }
      if (*(int *)(param_1[10] + -4) != 0) {
        SetWindowTextA(*(HWND *)(*param_1 + 0xc),s_Beta_Test_Expiry_004ed29c + 0x10);
      }
    }
  }
  else {
    SetWindowTextA(*(HWND *)(*param_1 + 0xc),(LPCSTR)param_1[10]);
  }
  FUN_004a5774(*param_1);
  return;
}

