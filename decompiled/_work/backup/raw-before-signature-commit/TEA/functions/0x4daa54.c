// name: FUN_004daa54
// address: 0x4daa54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004daa54(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x516660);
  puVar1 = DAT_0051bbf8;
  if (DAT_0051664c != '\0') {
    DAT_0051bbf8[1] = DAT_0051bbf8[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_0051664c = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

