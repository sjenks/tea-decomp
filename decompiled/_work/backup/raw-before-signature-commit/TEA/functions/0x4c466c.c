// name: FUN_004c466c
// address: 0x4c466c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c466c(int *param_1)

{
  LPCSTR lpString;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x510de8);
  FUN_004a6fd8(*param_1);
  FUN_004dc9f4(*(uint **)(*param_1 + 0x10));
  FUN_004dc9f4((uint *)param_1[6]);
  FUN_004dc9f4((uint *)param_1[7]);
  lpString = (LPCSTR)FUN_004cc180();
  FUN_004e0344(lpString,*(byte **)(*param_1 + 0x10));
  SetWindowTextA(*(HWND *)(*param_1 + 0xc),lpString);
  FUN_004cc0cc();
  *in_FS_OFFSET = local_2c;
  return;
}

