// name: FUN_004502e8
// address: 0x4502e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004502e8(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00482c54 == '\0') {
    puVar1 = FUN_00450210();
    FUN_0044ff60((int *)&DAT_0048cd7d,(int)puVar1,s_GetClassInfoA_00482d0a);
    DAT_00482c54 = DAT_00482c54 + '\x01';
  }
  uVar2 = (*DAT_0048cd7d)();
  return uVar2;
}

