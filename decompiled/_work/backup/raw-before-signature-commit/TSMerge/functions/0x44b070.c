// name: FUN_0044b070
// address: 0x44b070
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044b070(void)

{
  undefined *puVar1;
  
  if (DAT_00470693 == '\0') {
    puVar1 = FUN_0044b018();
    FUN_00444dcc((int *)&DAT_004773ad,(int)puVar1,s_ShellExecuteA_0047074a);
    DAT_00470693 = DAT_00470693 + '\x01';
  }
  (*DAT_004773ad)();
  return;
}

