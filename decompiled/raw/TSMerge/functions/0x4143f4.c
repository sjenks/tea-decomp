// name: FUN_004143f4
// address: 0x4143f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004143f4(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

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
  
  FUN_00455f04(0x465a63);
  local_2c = 1;
  *param_3 = param_2;
  FUN_00455a40(param_3,0,200);
  iVar1 = FUN_0041487c();
  if (iVar1 == 0) {
    lstrcpyA((LPSTR)(param_3 + 2),s_<no_module>_00465c18);
  }
  else {
    pcVar2 = thunk_FUN_00455b20(local_544,'\\');
    if (pcVar2 == (char *)0x0) {
      lpString2 = local_544;
    }
    else {
      lpString2 = pcVar2 + 1;
    }
    lstrcpynA((LPSTR)(param_3 + 2),lpString2,0x40);
    lstrcatA((LPSTR)(param_3 + 2),&DAT_00465c24);
  }
  local_18 = 8;
  local_144 = 0x18;
  local_140 = param_2;
  local_134 = 0xff;
  iVar1 = FUN_00414924();
  if (iVar1 == 0) {
    pcVar2 = s_<no_symbol>_00465c35;
  }
  else {
    pcVar2 = local_130;
    iVar1 = FUN_00414974();
    if (iVar1 == 0) {
      iVar1 = FUN_004149c4();
      if (iVar1 != 0) {
        pcVar2 = local_244;
      }
    }
    else {
      pcVar2 = local_244;
    }
    if (param_3[1] != 0) {
      wsprintfA(local_344,s__s____d_bytes_00465c27,pcVar2,param_3[1]);
      pcVar2 = local_344;
    }
  }
  local_18 = 0;
  lstrcpynA((LPSTR)(param_3 + 0x12),pcVar2,0x80);
  *in_FS_OFFSET = local_28;
  return local_2c;
}

