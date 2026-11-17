// name: FUN_004047bc
// address: 0x4047bc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_004047bc(int param_1,int param_2,int param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  
  if (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_3 + 4);
  }
  if (*(int *)(param_1 + 0x14) == *(int *)(param_2 + 0x14)) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_3 + 0x14);
  }
  if (*(char *)(param_1 + 0x18) == *(char *)(param_2 + 0x18)) {
    *(undefined1 *)(param_1 + 0x18) = *(undefined1 *)(param_3 + 0x18);
  }
  if (*(char *)(param_1 + 0x19) == *(char *)(param_2 + 0x19)) {
    *(undefined1 *)(param_1 + 0x19) = *(undefined1 *)(param_3 + 0x19);
  }
  if (*(char *)(param_1 + 0x1a) == *(char *)(param_2 + 0x1a)) {
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_3 + 0x1a);
  }
  if (*(char *)(param_1 + 0x1b) == *(char *)(param_2 + 0x1b)) {
    *(undefined1 *)(param_1 + 0x1b) = *(undefined1 *)(param_3 + 0x1b);
  }
  pcVar2 = (char *)(param_1 + 0x20);
  pcVar5 = (char *)(param_2 + 0x20);
  do {
    if (*pcVar2 != *pcVar5) {
      return pcVar2;
    }
    bVar7 = true;
    if (*pcVar2 == '\0') break;
    pcVar6 = pcVar2 + 1;
    if (*pcVar6 != pcVar5[1]) {
      return pcVar2;
    }
    pcVar2 = pcVar2 + 2;
    pcVar5 = pcVar5 + 2;
    bVar7 = *pcVar6 == '\0';
  } while (!bVar7);
  if (bVar7) {
    pcVar2 = (char *)(param_1 + 0x20);
    uVar3 = 0xffffffff;
    pcVar5 = (char *)(param_3 + 0x20);
    do {
      pcVar6 = pcVar5;
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      pcVar6 = pcVar5 + 1;
      cVar1 = *pcVar5;
      pcVar5 = pcVar6;
    } while (cVar1 != '\0');
    uVar3 = ~uVar3;
    pcVar5 = pcVar6 + -uVar3;
    pcVar6 = pcVar2;
    for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      *(undefined4 *)pcVar6 = *(undefined4 *)pcVar5;
      pcVar5 = pcVar5 + 4;
      pcVar6 = pcVar6 + 4;
    }
    for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
      *pcVar6 = *pcVar5;
      pcVar5 = pcVar5 + 1;
      pcVar6 = pcVar6 + 1;
    }
  }
  return pcVar2;
}

