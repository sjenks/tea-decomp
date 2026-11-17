// name: FUN_0048d5c8
// address: 0x48d5c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048d5c8(uint param_1)

{
  undefined4 uVar1;
  
  if ((((param_1 & 3) == 0) && (param_1 % 100 != 0)) || (param_1 % 400 == 0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

