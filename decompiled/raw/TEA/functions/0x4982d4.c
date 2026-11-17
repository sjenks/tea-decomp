// name: FUN_004982d4
// address: 0x4982d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __stdcall FUN_004982d4(void)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_180 [55];
  LOGFONTA local_a4 [2];
  undefined4 local_2c;
  undefined2 local_1c;
  uint *local_8;
  
  FUN_004dce64(0x508098);
  local_180[0] = 0x154;
  SystemParametersInfoA(0x29,0x154,local_180,0);
  local_8 = (uint *)FUN_004cc0f0();
  if (local_8 != (uint *)0x0) {
    local_1c = 0x14;
    FUN_0048f7fc(local_8,local_a4);
  }
  *in_FS_OFFSET = local_2c;
  return local_8;
}

