// name: FUN_004c1e90
// address: 0x4c1e90
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __stdcall FUN_004c1e90(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  if (DAT_00510006 == '\0') {
    puVar1 = FUN_004c1e30();
    FUN_004c1b80((int *)&DAT_0051b8e9,(int)puVar1,s_LoadIconA_005100b4);
    DAT_00510006 = DAT_00510006 + '\x01';
  }
  uVar2 = (*DAT_0051b8e9)();
  return uVar2;
}

