// name: FUN_0045439c
// address: 0x45439c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0045439c(void)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x473a14);
  puVar1 = DAT_004775c4;
  if (DAT_00473a00 != '\0') {
    DAT_004775c4[1] = DAT_004775c4[1] + -1;
    if ((puVar1[1] == 0) && (puVar1 != (undefined4 *)0x0)) {
      (**(code **)*puVar1)();
    }
    DAT_00473a00 = '\0';
  }
  *in_FS_OFFSET = local_30;
  return;
}

