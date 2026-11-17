// name: FUN_00487964
// address: 0x487964
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

LSTATUS __cdecl
FUN_00487964(undefined4 *param_1,LPSTR param_2,LPDWORD param_3,LPDWORD param_4,LPDWORD param_5,
            DWORD *param_6,DWORD *param_7,LPDWORD param_8,LPDWORD param_9,LPDWORD param_10,
            PFILETIME param_11)

{
  LSTATUS LVar1;
  _FILETIME local_28;
  DWORD local_20 [7];
  
  local_20[6] = 0;
  local_20[5] = 0;
  local_20[4] = 0;
  local_20[3] = 0;
  local_20[2] = 0;
  local_20[1] = 0;
  local_20[0] = 0;
  if (param_11 == (PFILETIME)0x0) {
    param_11 = &local_28;
  }
  if (param_10 == (LPDWORD)0x0) {
    param_10 = local_20;
  }
  if (param_9 == (LPDWORD)0x0) {
    param_9 = local_20 + 1;
  }
  if (param_8 == (LPDWORD)0x0) {
    param_8 = local_20 + 2;
  }
  if (param_7 == (DWORD *)0x0) {
    param_7 = local_20 + 3;
  }
  if (param_6 == (DWORD *)0x0) {
    param_6 = local_20 + 4;
  }
  if (param_5 == (LPDWORD)0x0) {
    param_5 = local_20 + 5;
  }
  if (param_4 == (LPDWORD)0x0) {
    param_4 = local_20 + 6;
  }
  LVar1 = RegQueryInfoKeyA((HKEY)*param_1,param_2,param_3,(LPDWORD)0x0,param_4,param_5,param_6,
                           param_7,param_8,param_9,param_10,param_11);
  return LVar1;
}

