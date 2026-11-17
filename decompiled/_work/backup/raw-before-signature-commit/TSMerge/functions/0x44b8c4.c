// name: FUN_0044b8c4
// address: 0x44b8c4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044b8c4(int *param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  HMODULE hModule;
  FARPROC pFVar2;
  
  if (((param_1 == (int *)0x0) || (param_2 == (int *)0x0)) || (param_3 == (int *)0x0)) {
    uVar1 = 0;
  }
  else {
    hModule = GetModuleHandleA(s_borlndmm_00470c99);
    if (hModule == (HMODULE)0x0) {
      uVar1 = 0;
    }
    else {
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysGetMem_qqri_00470ca2);
      *param_1 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysFreeMem_qqrpv_00470cbb);
      *param_2 = (int)pFVar2;
      pFVar2 = GetProcAddress(hModule,s__Borlndmm_SysReallocMem_qqrpvi_00470cd6);
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

