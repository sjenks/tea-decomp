// name: FUN_004c1f4c
// address: 0x4c1f4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004c1f4c(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510009 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8f5,(int)puVar1,s_GetMenuStringA_005100cc);
    DAT_00510009 = DAT_00510009 + '\x01';
  }
  uVar2 = (*DAT_0051b8f5)();
  return uVar2;
}

