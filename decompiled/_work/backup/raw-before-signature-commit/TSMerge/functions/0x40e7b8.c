// name: FUN_0040e7b8
// address: 0x40e7b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0040e7b8(LPCSTR param_1)

{
  uint iSize;
  undefined4 *in_FS_OFFSET;
  undefined4 uVar1;
  char local_4b4;
  char local_4b3;
  char local_4b2;
  uint local_b4;
  undefined4 local_b0;
  undefined2 local_a0;
  int local_94;
  int local_8c [34];
  
  FUN_00455f04(0x463ef0);
  local_a0 = 8;
  FUN_0044ecfc(local_8c,0,param_1,6,0x1b6);
  local_94 = local_94 + 8;
  local_a0 = 0x14;
  if (*(int *)(local_8c[0] + 0x30) == 0) {
    FUN_00451098(local_8c,&local_4b4,0x400);
    iSize = FUN_00451050((int)local_8c);
    if (iSize == 0) {
      uVar1 = 1;
      local_94 = local_94 + -8;
      FUN_0044edf4(local_8c,2);
      *in_FS_OFFSET = local_b0;
    }
    else {
      local_b4 = 0x1088;
      IsTextUnicode(&local_4b4,iSize,(LPINT)&local_b4);
      if (((local_b4 & 0x1088) == 0) &&
         ((((iSize < 3 || (local_4b4 != -0x11)) || (local_4b3 != -0x45)) || (local_4b2 != -0x41))))
      {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
      }
      local_94 = local_94 + -8;
      FUN_0044edf4(local_8c,2);
      *in_FS_OFFSET = local_b0;
    }
  }
  else {
    uVar1 = 0;
    FUN_0044edf4(local_8c,2);
    *in_FS_OFFSET = local_b0;
  }
  return uVar1;
}

