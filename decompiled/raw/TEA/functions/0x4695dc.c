// name: FUN_004695dc
// address: 0x4695dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __stdcall FUN_004695dc(void)

{
  int iVar1;
  char *pcVar2;
  char cVar3;
  
  cVar3 = '\0';
  FUN_00469604();
  iVar1 = FUN_00469b1c(cVar3);
  if (iVar1 < 2) {
    pcVar2 = s_RICHEDIT_004fcc1e;
  }
  else {
    pcVar2 = s_RichEdit20A_004fcc12;
  }
  return pcVar2;
}

