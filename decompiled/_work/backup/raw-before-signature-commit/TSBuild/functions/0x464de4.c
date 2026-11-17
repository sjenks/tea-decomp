// name: FUN_00464de4
// address: 0x464de4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00464de4(undefined4 *param_1,LPCSTR param_2)

{
  HMODULE pHVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_00467ba8(0x488164);
  piVar2 = param_1 + 2;
  param_1[6] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[0xe] = local_30;
  param_1[0xf] = local_2c;
  *piVar2 = 1;
  param_1[6] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  puVar3 = (undefined4 *)param_1[8];
  if (param_1[8] == 0) {
    if (param_1[9] == param_1[10]) {
      FUN_0045cd5c(piVar2);
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
    else {
      puVar3 = (undefined4 *)param_1[9];
      param_1[9] = param_1[9] + 0x28;
    }
  }
  else {
    param_1[8] = *(undefined4 *)(param_1[8] + 0xc);
  }
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  *puVar3 = 0;
  param_1[0xb] = puVar3;
  puVar3[1] = 0;
  puVar3[2] = puVar3;
  puVar3[3] = puVar3;
  *piVar2 = 0x2a;
  if (param_2 == (LPCSTR)0x0) {
    pHVar1 = GetModuleHandleA((LPCSTR)0x0);
    *param_1 = pHVar1;
  }
  else {
    pHVar1 = LoadLibraryA(param_2);
    *param_1 = pHVar1;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

