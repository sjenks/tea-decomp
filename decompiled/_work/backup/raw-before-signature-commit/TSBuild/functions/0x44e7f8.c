// name: FUN_0044e7f8
// address: 0x44e7f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044e7f8(DWORD *param_1,ushort param_2)

{
  DWORD DVar1;
  uint local_10c [65];
  uint *local_8;
  
  local_8 = (uint *)0x0;
  DVar1 = FormatMessageA(0x1100,(LPCVOID)0x0,*param_1,(uint)param_2,(LPSTR)&local_8,0,(va_list *)0x0
                        );
  if (DVar1 == 0) {
    wsprintfA((LPSTR)local_10c,s_Error____X_occurred__no_further_i_00482c6b,*param_1);
    FUN_00459b6c((int)(param_1 + 1),local_10c);
  }
  else {
    FUN_00459b6c((int)(param_1 + 1),local_8);
    LocalFree(local_8);
  }
  return;
}

