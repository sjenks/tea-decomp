// name: FUN_00414974
// address: 0x414974
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_00414974(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00465959 == '\0') {
    puVar1 = FUN_004147e4();
    FUN_00444dcc((int *)&DAT_00476b6a,(int)puVar1,s_UnDecorateSymbolName_00465bc4);
    DAT_00465959 = DAT_00465959 + '\x01';
  }
  uVar2 = (*DAT_00476b6a)();
  return uVar2;
}

