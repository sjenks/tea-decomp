// name: FUN_00410bac
// address: 0x410bac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

PHKEY __cdecl FUN_00410bac(PHKEY param_1,HKEY param_2,uint *param_3,REGSAM param_4,int param_5)

{
  HKEY pHVar1;
  undefined4 *in_FS_OFFSET;
  DWORD local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00455f04(0x464f10);
  local_18 = 8;
  *param_1 = (HKEY)0x0;
  pHVar1 = (HKEY)FUN_0041fd2c(param_3);
  param_1[1] = pHVar1;
  if (param_5 == 0) {
    RegCreateKeyExA(param_2,(LPCSTR)param_1[1],0,s_HKEY_CLASSES_ROOT_00464df8 + 0x11,0,param_4,
                    (LPSECURITY_ATTRIBUTES)0x0,param_1,&local_2c);
  }
  else {
    RegOpenKeyExA(param_2,(LPCSTR)param_1[1],0,param_4,param_1);
  }
  if (*param_1 != (HKEY)0x0) {
    FUN_00410d7c(param_1,(LPSTR)0x0,(LPDWORD)0x0,(LPDWORD)(param_1 + 2),(LPDWORD)0x0,(DWORD *)0x0,
                 (DWORD *)(param_1 + 3),(LPDWORD)0x0,(LPDWORD)0x0,(LPDWORD)0x0,(PFILETIME)0x0);
  }
  *(undefined1 *)(param_1 + 4) = 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

