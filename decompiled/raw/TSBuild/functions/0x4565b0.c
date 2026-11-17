// name: FUN_004565b0
// address: 0x4565b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004565b0(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_004844c3 == '\0') {
    puVar1 = FUN_00456558();
    FUN_0044ff60((int *)&DAT_0048ce55,(int)puVar1,s_ShellExecuteA_0048457a);
    DAT_004844c3 = DAT_004844c3 + '\x01';
  }
  uVar2 = (*DAT_0048ce55)();
  return uVar2;
}

