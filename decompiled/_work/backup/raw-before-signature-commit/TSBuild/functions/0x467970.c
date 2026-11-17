// name: FUN_00467970
// address: 0x467970
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00467970(uint *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  
  pcVar1 = FUN_004677a0(param_1);
  puVar2 = (undefined4 *)FUN_00456e84();
  if (puVar2 != (undefined4 *)0x0) {
    FUN_00467580(puVar2,param_1,(uint)(pcVar1 + 1));
  }
  return puVar2;
}

