// name: FUN_0044c18c
// address: 0x44c18c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_0044c18c(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_0044c150(param_1);
    return puVar1;
  }
  puVar1 = FUN_0044c1b4(param_1);
  return puVar1;
}

