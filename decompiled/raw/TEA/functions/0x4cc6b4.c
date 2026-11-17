// name: FUN_004cc6b4
// address: 0x4cc6b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004cc6b4(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA(s_borlndmm_00512c55);
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysGetMem_qqri_00512c5e);
      *param_1 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysFreeMem_qqrpv_00512c77);
      *param_2 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysReallocMem_qqrpvi_00512c92);
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

