// name: FUN_0048a6d0
// address: 0x48a6d0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048a6d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  LPCSTR lpString2;
  char *pcVar2;
  undefined4 *in_FS_OFFSET;
  char local_544 [512];
  CHAR local_344 [256];
  CHAR local_244 [256];
  undefined4 local_144;
  undefined4 local_140;
  undefined4 local_134;
  CHAR local_130 [260];
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x5050d7);
  local_2c = 1;
  *param_3 = param_2;
  FUN_004dc844(param_3,0,200);
  iVar1 = FUN_0048ab58();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),s_<no_module>_0050528c);
  }
  else {
    pcVar2 = thunk_FUN_004dc924(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00505298);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_0048ac00();
  if (iVar1 == 0) {
    pcVar2 = s_<no_symbol>_005052a9;
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_0048ac50();
    if (iVar1 == 0) {
      iVar1 = FUN_0048aca0();
      if (iVar1 != 0) {
        pcVar2 = local_244;
      }
    }
    else {
      pcVar2 = local_244;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,s__s____d_bytes_0050529b,pcVar2,param_3[1]);
      pcVar2 = local_344;
    }
  }
  local_18 = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),pcVar2,0x80);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

