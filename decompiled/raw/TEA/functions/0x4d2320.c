// name: FUN_004d2320
// address: 0x4d2320
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d2320(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_004d2384(param_1);
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
    else {
      puVar2 = (undefined4 *)param_1[7];
      param_1[7] = param_1[7] + 0x28;
    }
  }
  else {
    param_1[6] = *(int *)(param_1[6] + 0xc);
  }
  uVar1 = FUN_004cdab0();
  puVar2[1] = uVar1;
  uVar1 = FUN_004cdab0();
  puVar2[2] = uVar1;
  uVar1 = FUN_004cdab0();
  puVar2[3] = uVar1;
  *puVar2 = 0;
  return puVar2;
}

