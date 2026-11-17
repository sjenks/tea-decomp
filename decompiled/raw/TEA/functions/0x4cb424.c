// name: FUN_004cb424
// address: 0x4cb424
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004cb424(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  param_1[10] = param_2[10];
  puVar3 = param_2;
  puVar4 = param_1;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_004cb794((int)param_1);
  if (param_2[0xb] != 0) {
    FUN_004dc9f4((uint *)param_2[0xb]);
    uVar1 = FUN_004cc180();
    FUN_004cc0cc();
    param_1[0xb] = uVar1;
    FUN_004dc9c4((char *)param_1[0xb],(char *)param_2[0xb]);
    param_1[4] = param_1[0xb];
  }
  return param_1;
}

