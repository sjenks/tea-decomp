// name: FUN_0041193c
// address: 0x41193c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_0041193c(char *param_1,int param_2,char param_3,char param_4)

{
  HKEY hKey;
  int iVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0041f3fc(0x42df7c);
  *param_1 = param_3;
  param_1[4] = '\0';
  param_1[5] = '\0';
  param_1[6] = '\0';
  param_1[7] = '\0';
  while( true ) {
    if (param_4 == '\0') {
      hKey = (HKEY)0x80000001;
    }
    else {
      hKey = (HKEY)0x80000002;
    }
    local_18 = 8;
    if (*param_1 == '\x01') {
      iVar1 = RegCreateKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,&DAT_0042defe,0,0x2001f,
                              (LPSECURITY_ATTRIBUTES)0x0,(PHKEY)(param_1 + 4),&local_2c);
    }
    else {
      iVar1 = RegOpenKeyExA(hKey,*(LPCSTR *)(param_2 + 8),0,0x20019,(PHKEY)(param_1 + 4));
    }
    if (iVar1 == 0) break;
    if (param_4 == '\0') {
      param_1[4] = '\0';
      param_1[5] = '\0';
      param_1[6] = '\0';
      param_1[7] = '\0';
      *in_FS_OFFSET = local_28;
LAB_004119f3:
      *in_FS_OFFSET = local_28;
      return param_1;
    }
    param_4 = '\0';
  }
  *in_FS_OFFSET = local_28;
  goto LAB_004119f3;
}

