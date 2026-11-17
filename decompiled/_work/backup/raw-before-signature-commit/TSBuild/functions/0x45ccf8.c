// name: FUN_0045ccf8
// address: 0x45ccf8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045ccf8(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[6];
  if (puVar2 == (undefined4 *)0x0) {
    if (param_1[7] == param_1[8]) {
      FUN_0045cd5c(param_1);
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
  uVar1 = FUN_00458200();
  puVar2[1] = uVar1;
  uVar1 = FUN_00458200();
  puVar2[2] = uVar1;
  uVar1 = FUN_00458200();
  puVar2[3] = uVar1;
  *puVar2 = 0;
  return puVar2;
}

