// name: FUN_004c1f08
// address: 0x4c1f08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004c1f08(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510008 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8f1,(int)puVar1,s_GetClassInfoA_005100be);
    DAT_00510008 = DAT_00510008 + '\x01';
  }
  uVar2 = (*DAT_0051b8f1)();
  return uVar2;
}

