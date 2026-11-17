// name: FUN_00456ae0
// address: 0x456ae0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00456ae0(void)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x474654);
  iVar1 = FUN_00401140();
  *(uint *)(iVar1 + 4) = *(uint *)(iVar1 + 4) & 0xfffffffd;
  if (*DAT_004779ec == 2) {
    FUN_0045e9b9(4,1);
  }
  FUN_00457614();
  (*DAT_00474548)();
  FUN_0045d628();
  *in_FS_OFFSET = local_28;
  return;
}

