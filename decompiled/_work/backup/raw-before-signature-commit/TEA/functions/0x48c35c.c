// name: FUN_0048c35c
// address: 0x48c35c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0048c35c(void)

{
  undefined *puVar1;
  
  if (DAT_005057da == '\0') {
    puVar1 = FUN_0048c1e4();
    FUN_004c1b80((int *)&DAT_0051b229,(int)puVar1,s_GetOpenFileNameA_0050583b);
    DAT_005057da = DAT_005057da + '\x01';
  }
  (*DAT_0051b229)();
  return;
}

