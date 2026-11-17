// name: FUN_0040eaa4
// address: 0x40eaa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040eaa4(int param_1,int param_2,undefined4 *param_3)

{
  LSTATUS LVar1;
  DWORD local_10 [2];
  undefined4 local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_10[1] = 4;
    local_10[0] = 4;
    LVar1 = RegQueryValueExA(*(HKEY *)(param_1 + 4),*(LPCSTR *)(param_2 + 8),(LPDWORD)0x0,local_10,
                             (LPBYTE)&local_8,local_10 + 1);
    if (LVar1 == 0) {
      *param_3 = local_8;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
  }
  return 0;
}

