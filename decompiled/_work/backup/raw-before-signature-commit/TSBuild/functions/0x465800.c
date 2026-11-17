// name: FUN_00465800
// address: 0x465800
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00465800(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00467ba8(0x488394);
  puVar1 = DAT_0048d074;
  if (DAT_00488380 != '\0') {
    DAT_0048d074[1] = DAT_0048d074[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00488380 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

