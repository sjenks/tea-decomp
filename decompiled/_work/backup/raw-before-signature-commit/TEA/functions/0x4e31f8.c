// name: FUN_004e31f8
// address: 0x4e31f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004e31f8(LPSTR param_1,ushort param_2)

{
  int iVar1;
  BOOL local_8;
  
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (*(int *)(PTR_DAT_00518658 + 8) != 0) {
    if (0xff < param_2) {
      return -1;
    }
    *param_1 = (CHAR)param_2;
    return 1;
  }
  local_8 = 0;
  iVar1 = WideCharToMultiByte(*(UINT *)PTR_DAT_00518658,0x220,(LPCWSTR)&param_2,1,param_1,2,
                              (LPCSTR)0x0,&local_8);
  if ((iVar1 != 0) && (local_8 == 0)) {
    return iVar1;
  }
  return -1;
}

