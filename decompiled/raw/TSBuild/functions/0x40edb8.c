// name: FUN_0040edb8
// address: 0x40edb8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0040edb8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *local_8;
  
  local_8 = param_2;
  for (; param_2 != (undefined4 *)0x0; param_2 = (undefined4 *)param_2[2]) {
    puVar1 = FUN_0040ee24(param_1,(int)(param_2 + 4));
    if (param_2 == local_8) {
      local_8 = puVar1;
    }
    param_3[2] = puVar1;
    puVar1[1] = param_3;
    *puVar1 = *param_2;
    puVar2 = FUN_0040edb8(param_1,(undefined4 *)param_2[3],puVar1);
    puVar1[3] = puVar2;
    param_3 = puVar1;
  }
  param_3[2] = 0;
  return local_8;
}

