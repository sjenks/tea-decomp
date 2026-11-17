// name: FUN_00493c34
// address: 0x493c34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00493c34(uint param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  uint local_c;
  undefined1 local_8;
  undefined1 local_7;
  
  FUN_004dce64(0x5072c0);
  FUN_0049389c();
  if (param_1 != 0) {
    iVar1 = FUN_00493ae0(param_1);
    if (iVar1 == 0) {
      local_c = param_1;
      local_8 = param_2;
      local_7 = 1;
      FUN_00493cc0(DAT_005071d0,&local_c);
    }
    else {
      *(char *)(iVar1 + 5) = *(char *)(iVar1 + 5) + '\x01';
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

