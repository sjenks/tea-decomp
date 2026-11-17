// name: FUN_00414ea8
// address: 0x414ea8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00414ea8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  DWORD DVar2;
  int iVar3;
  uint local_804 [256];
  uint local_404 [256];
  
  if (*(int *)(*(int *)(param_1 + 8) + -4) == 0) {
    uVar1 = 0;
  }
  else {
    DVar2 = GetPrivateProfileStringA
                      (s_License_0042e714,s_LicenseOwner_0042e71c,&DAT_0042e763,(LPSTR)local_404,
                       0x3ff,*(LPCSTR *)(param_1 + 8));
    if ((DVar2 != 0) &&
       (DVar2 = GetPrivateProfileStringA
                          (s_License_0042e714,s_LicenseKey_0042e729,&DAT_0042e764,(LPSTR)local_804,
                           0x3ff,*(LPCSTR *)(param_1 + 8)), DVar2 != 0)) {
      FUN_00416c68(param_2,local_404);
      iVar3 = FUN_00416c68(param_3,local_804);
      return CONCAT31((int3)((uint)iVar3 >> 8),2);
    }
    uVar1 = 1;
  }
  return uVar1;
}

