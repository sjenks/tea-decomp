// name: FUN_0044e94c
// address: 0x44e94c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044e94c(int param_1,int param_2,int param_3)

{
  int iVar1;
  LSTATUS LVar2;
  uint auStackY_1000c [15352];
  undefined4 uStackY_102c;
  DWORD local_c [2];
  
  iVar1 = 0x10;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  if (*(int *)(param_1 + 4) != 0) {
    local_c[1] = 0x10000;
    local_c[0] = 1;
    uStackY_102c = 0x44e99e;
    LVar2 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_c,
                             (LPBYTE)auStackY_1000c,local_c + 1);
    if (LVar2 == 0) {
      iVar1 = FUN_004cf41c(param_3,auStackY_1000c);
      return CONCAT31((int3)((uint)iVar1 >> 8),1);
    }
  }
  return 0;
}

