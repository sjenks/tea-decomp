// name: FUN_0042033c
// address: 0x42033c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042033c(undefined4 *param_1,byte param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined *puVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    if ((int)param_1[1] < 0) {
      FUN_0044b2dc();
    }
    else {
      puVar1 = (undefined4 *)*param_1;
      puVar3 = FUN_0041fb78();
      puVar2 = *(undefined4 **)(puVar3 + param_1[1] * 4 + 300);
      *puVar1 = *puVar2;
      *puVar2 = puVar1;
    }
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  return;
}

