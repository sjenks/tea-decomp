// name: FUN_00458fdc
// address: 0x458fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_00458fdc(WCHAR param_1,uint param_2)

{
  uint uVar1;
  ushort local_6;
  
  uVar1 = param_2;
  if (param_1 == L'\xffff') {
    uVar1 = 0;
  }
  else if ((*(int *)(PTR_DAT_00475910 + 8) == 0) || (L'ÿ' < param_1)) {
    GetStringTypeW(1,&param_1,1,&local_6);
    uVar1 = local_6 & uVar1;
  }
  else {
    uVar1 = *(ushort *)(&DAT_0047522e + (short)param_1 * 2) & param_2;
  }
  return uVar1;
}

