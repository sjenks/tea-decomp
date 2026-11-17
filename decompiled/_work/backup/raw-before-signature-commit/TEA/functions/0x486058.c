// name: FUN_00486058
// address: 0x486058
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00486058(int param_1,int param_2,int param_3)

{
  if (*(int *)(*(LPCSTR *)(param_1 + 8) + -4) != 0) {
    WritePrivateProfileStringA
              (s_License_00503970,s_LicenseOwner_00503978,*(LPCSTR *)(param_2 + 8),
               *(LPCSTR *)(param_1 + 8));
    WritePrivateProfileStringA
              (s_License_00503970,s_LicenseKey_00503985,*(LPCSTR *)(param_3 + 8),
               *(LPCSTR *)(param_1 + 8));
  }
  return;
}

