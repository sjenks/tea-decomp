// name: FUN_00485770
// address: 0x485770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_00485770(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  *(undefined4 *)(param_1 + 4) = 0xb000000f;
  *(int *)(param_1 + 0xc) = *param_2 * -0x14;
  if (param_2[4] == 700) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1;
  }
  if ((char)param_2[5] != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 2;
  }
  if (*(char *)((int)param_2 + 0x16) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 8;
  }
  if (*(char *)((int)param_2 + 0x15) != '\0') {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 4;
  }
  *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)((int)param_2 + 0x1b);
  uVar2 = 0xffffffff;
  piVar5 = param_2 + 7;
  do {
    piVar6 = piVar5;
    if (uVar2 == 0) break;
    uVar2 = uVar2 - 1;
    piVar6 = (int *)((int)piVar5 + 1);
    iVar1 = *piVar5;
    piVar5 = piVar6;
  } while ((char)iVar1 != '\0');
  uVar2 = ~uVar2;
  puVar4 = (undefined4 *)((int)piVar6 - uVar2);
  puVar7 = (undefined4 *)(param_1 + 0x1a);
  for (uVar3 = uVar2 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar2 = uVar2 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar4;
    puVar4 = (undefined4 *)((int)puVar4 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  return (undefined4 *)(param_1 + 0x1a);
}

