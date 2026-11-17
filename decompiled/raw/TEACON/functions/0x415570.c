// name: FUN_00415570
// address: 0x415570
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00415570(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA(s_borlndmm_0042e9f1);
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysGetMem_qqri_0042e9fa);
      *param_1 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysFreeMem_qqrpv_0042ea13);
      *param_2 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysReallocMem_qqrpvi_0042ea2e);
      *param_3 = (int)pFVar2;
      if (((*param_1 == 0) || (*param_2 == 0)) || (*param_3 == 0)) {
        uVar1 = 0;
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}

