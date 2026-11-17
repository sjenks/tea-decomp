// name: FUN_0044d154
// address: 0x44d154
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044d154(undefined4 *param_1,undefined4 *param_2,undefined *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte bVar7;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined *local_8;
  
  bVar7 = 0;
  puVar2 = param_1;
  if (param_1 != param_2) {
    while (puVar1 = puVar2 + 4, puVar1 != param_2) {
      local_8 = param_3;
      local_18 = *puVar1;
      local_14 = puVar2[5];
      local_10 = puVar2[6];
      cVar3 = (*(code *)param_3)();
      if (cVar3 == '\0') {
        FUN_0044d1f0(puVar1);
        puVar2 = puVar1;
      }
      else {
        FUN_0044d0c8(param_1,puVar1,puVar2 + 8);
        puVar5 = &local_18;
        puVar6 = param_1;
        for (iVar4 = 4; puVar2 = puVar1, iVar4 != 0; iVar4 = iVar4 + -1) {
          *puVar6 = *puVar5;
          puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
          puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
  }
  return;
}

