// name: FUN_00496d48
// address: 0x496d48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00496d48(uint *param_1)

{
  char *pcVar1;
  
  if (param_1 == (uint *)0x0) {
    param_1 = (uint *)&DAT_0050798c;
  }
  FUN_004dc9f4(param_1);
  pcVar1 = (char *)FUN_004cc180();
  FUN_004dc9c4(pcVar1,(char *)param_1);
  return;
}

