// name: FUN_00455d60
// address: 0x455d60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00455d60(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = FUN_00455bf0(param_1);
  puVar2 = (undefined4 *)FUN_0044b944();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_004559d0(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}

