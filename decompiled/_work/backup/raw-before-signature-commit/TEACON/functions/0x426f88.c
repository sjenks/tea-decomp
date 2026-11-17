// name: FUN_00426f88
// address: 0x426f88
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00426f88(int *param_1,int *param_2)

{
  byte bVar1;
  
  if ((*(char *)*param_2 == '\\') && (((char *)*param_2)[1] == '\"')) {
    *(undefined1 *)*param_1 = 0x22;
    *param_2 = *param_2 + 2;
  }
  else if ((DAT_004338a4 == 0) || ((*(char *)*param_2 != '\\' || (((char *)*param_2)[1] != '\\'))))
  {
    bVar1 = *(byte *)*param_2;
    if ((((&DAT_00434e79)[bVar1] & 4) != 0) && (((byte *)*param_2)[1] != 0)) {
      *(byte *)*param_1 = bVar1;
      *param_2 = *param_2 + 1;
      *param_1 = *param_1 + 1;
    }
    *(undefined1 *)*param_1 = *(undefined1 *)*param_2;
    *param_2 = *param_2 + 1;
  }
  else {
    *(undefined1 *)*param_1 = 0x5c;
    *param_2 = *param_2 + 2;
  }
  *param_1 = *param_1 + 1;
  return;
}

