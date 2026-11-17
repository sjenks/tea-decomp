// name: FUN_004a8294
// address: 0x4a8294
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004a8294(undefined4 *param_1)

{
  BOOL BVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  BVar1 = IsBadReadPtr(param_1,8);
  if (BVar1 != 0) {
    return (undefined4 *)0x0;
  }
  if (param_1[1] != 0x69777264) {
    return (undefined4 *)0x0;
  }
  BVar1 = IsBadReadPtr((void *)*param_1,4);
  if (BVar1 != 0) {
    return (undefined4 *)0x0;
  }
  return param_1;
}

