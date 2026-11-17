// name: FUN_0048a629
// address: 0x48a629
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

HMODULE __stdcall FUN_0048a629(HANDLE param_1,LPCVOID param_2)

{
  int iVar1;
  SIZE_T SVar2;
  undefined4 *puVar3;
  CHAR *pCVar4;
  CHAR local_360 [260];
  _MEMORY_BASIC_INFORMATION local_25c;
  HMODULE local_23c;
  
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    SVar2 = VirtualQueryEx(param_1,param_2,&local_25c,0x1c);
    if (SVar2 == 0) {
      local_23c = (HMODULE)0x0;
    }
    else {
      puVar3 = &DAT_00504fd3;
      pCVar4 = local_360;
      for (iVar1 = 0x41; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)pCVar4 = *puVar3;
        puVar3 = puVar3 + 1;
        pCVar4 = pCVar4 + 4;
      }
      GetModuleFileNameA(local_25c.AllocationBase,local_360,0x104);
      FUN_0048ab9c();
      local_23c = local_25c.AllocationBase;
    }
  }
  return local_23c;
}

