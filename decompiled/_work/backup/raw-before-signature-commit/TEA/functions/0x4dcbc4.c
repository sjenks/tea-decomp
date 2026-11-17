// name: FUN_004dcbc4
// address: 0x4dcbc4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004dcbc4(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = FUN_004dc9f4(param_1);
  puVar2 = (undefined4 *)FUN_004cc734();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004dc7d4(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}

