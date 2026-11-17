// name: FUN_004154b8
// address: 0x4154b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004154b8(void)

{
  undefined *puVar1;
  
  if (DAT_00465ead == '\0') {
    puVar1 = FUN_004153f8();
    FUN_00444dcc((int *)&DAT_00476c35,(int)puVar1,s_GetFileTitleA_00465f01);
    DAT_00465ead = DAT_00465ead + '\x01';
  }
  (*DAT_00476c35)();
  return;
}

