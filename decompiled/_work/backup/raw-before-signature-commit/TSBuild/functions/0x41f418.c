// name: FUN_0041f418
// address: 0x41f418
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041f418(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  
  FUN_00467ba8(0x479817);
  local_2c = 1;
  *param_3 = param_2;
  FUN_004675f0(param_3,0,200);
  iVar1 = FUN_0041f8a0();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),s_<no_module>_004799cc);
  }
  else {
    pcVar2 = thunk_FUN_004676d0(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_004799d8);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_0041f948();
  if (iVar1 == 0) {
    pcVar2 = s_<no_symbol>_004799e9;
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_0041f998();
    if (iVar1 == 0) {
      iVar1 = FUN_0041f9e8();
      if (iVar1 != 0) {
        pcVar2 = local_244;
      }
    }
    else {
      pcVar2 = local_244;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,s__s____d_bytes_004799db,pcVar2,param_3[1]);
      pcVar2 = local_344;
    }
  }
  local_18 = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),pcVar2,0x80);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

