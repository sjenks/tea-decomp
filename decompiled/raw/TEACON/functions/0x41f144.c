// name: FUN_0041f144
// address: 0x41f144
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0041f144(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = FUN_0041ef80(param_1);
  puVar2 = (undefined4 *)FUN_004155f0();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_0041eddc(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}

