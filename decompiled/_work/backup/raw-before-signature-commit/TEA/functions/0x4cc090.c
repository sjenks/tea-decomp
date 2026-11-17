// name: FUN_004cc090
// address: 0x4cc090
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cc090(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004cc734();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004dc844(puVar1,0,param_1 * param_2);
  }
  return puVar1;
}

