// name: FUN_004576cc
// address: 0x4576cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004576cc(uint param_1)

{
  uint *puVar1;
  
  if (param_1 == 0) {
    return (uint *)0x0;
  }
  if (0xfffff < param_1) {
    puVar1 = (uint *)FUN_00457690(param_1);
    return puVar1;
  }
  puVar1 = FUN_004576f4(param_1);
  return puVar1;
}

