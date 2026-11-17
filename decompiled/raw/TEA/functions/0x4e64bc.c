// name: FUN_004e64bc
// address: 0x4e64bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e64bc(uint *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  if (DAT_0051c440 == DAT_0051c40c) {
    DAT_0051c40c = DAT_0051c40c + 0x10;
    DAT_0051c408 = FUN_004cc754();
    if (DAT_0051c408 == 0) {
      FUN_004e5f84((uint *)s_No_space_for_command_line_argume_00518c70);
    }
  }
  puVar1 = param_1;
  if (param_2 != 0) {
    FUN_004dc9f4(param_1);
    puVar1 = (uint *)FUN_004cc734();
    if (puVar1 == (uint *)0x0) {
      FUN_004e5f84((uint *)s_No_space_for_command_line_argume_00518c9a);
    }
    uVar2 = 0xffffffff;
    do {
      puVar4 = param_1;
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      puVar4 = (uint *)((int)param_1 + 1);
      uVar3 = *param_1;
      param_1 = puVar4;
    } while ((char)uVar3 != '\0');
    uVar2 = ~uVar2;
    puVar4 = (uint *)((int)puVar4 - uVar2);
    puVar5 = puVar1;
    for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
    for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(char *)puVar5 = (char)*puVar4;
      puVar4 = (uint *)((int)puVar4 + 1);
      puVar5 = (uint *)((int)puVar5 + 1);
    }
  }
  *(uint **)(DAT_0051c408 + DAT_0051c440 * 4) = puVar1;
  DAT_0051c440 = DAT_0051c440 + 1;
  return;
}

