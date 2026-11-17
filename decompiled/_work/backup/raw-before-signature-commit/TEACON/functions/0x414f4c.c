// name: FUN_00414f4c
// address: 0x414f4c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00414f4c(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_004155f0();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_0041ee4c(puVar1,0,param_1 * param_2);
  }
  return puVar1;
}

