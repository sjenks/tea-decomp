// name: FUN_0040e920
// address: 0x40e920
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0040e920(int *param_1,int param_2,int param_3,int param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00455f04(0x463f88);
  *param_1 = param_3;
  param_1[1] = 0;
  while( true ) {
    if (param_4 == 0) {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    local_18 = 8;
    if (*param_1 == 1) {
      iVar1 = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,s_Position_00463f14 + 8,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(param_1 + 1),&local_2c);
    }
    else {
      iVar1 = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(param_1 + 1));
    }
    if (iVar1 == 0) break;
    if (param_4 == 0) {
      param_1[1] = 0;
      *in_FS_OFFSET = local_28;
LAB_0040e9d7:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = 0;
  }
  *in_FS_OFFSET = local_28;
  goto LAB_0040e9d7;
}

