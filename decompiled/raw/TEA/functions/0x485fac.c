// name: FUN_00485fac
// address: 0x485fac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00485fac(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  uint local_804 [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      (s_License_00503970,s_LicenseOwner_00503978,s_License_00503970 + 7,
                       (LPSTR)local_404,0x3ff,*(LPCSTR *)(param_1 + 8));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          (s_License_00503970,s_LicenseKey_00503985,s_License_00503970 + 7,
                           (LPSTR)local_804,0x3ff,*(LPCSTR *)(param_1 + 8)), DVar2 != 0)) {
      FUN_004cf41c(param_2,local_404);
      FUN_004cf41c(param_3,local_804);
      return 2;
    }
    uVar1 = 1;
  }
  return uVar1;
}

