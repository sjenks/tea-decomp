// name: FUN_00414924
// address: 0x414924
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00414924(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465958 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b66,(int)puVar1,s_SymGetSymFromAddr_00465bb2);
    DAT_00465958 = DAT_00465958 + '\x01';
  }
  uVar2 = (*DAT_00476b66)();
  return uVar2;
}

