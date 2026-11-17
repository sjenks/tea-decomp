// name: FUN_00405414
// address: 0x405414
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __stdcall FUN_00405414(void)

{
  int *piVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int **ppiVar7;
  int local_418;
  int *local_414 [257];
  
  iVar6 = 0;
  uVar4 = 0;
  local_418 = 1;
  local_414[0] = &DAT_0048b950;
  ppiVar7 = local_414 + 1;
  do {
    if (*local_414[0] != 0) {
      piVar1 = (int *)FUN_00456840();
      *ppiVar7 = piVar1;
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = uVar4 & 0xff;
      iVar6 = iVar6 + 1;
      piVar1[3] = *local_414[0];
      piVar1[4] = 0;
      piVar1[5] = 0;
      ppiVar7 = ppiVar7 + 1;
    }
    uVar4 = uVar4 + 1;
    local_414[0] = local_414[0] + 1;
  } while ((int)uVar4 < 0x100);
  if (iVar6 == 0) {
    local_418 = -1;
  }
  else {
    _DAT_0048b44c = iVar6;
    for (iVar5 = 0; iVar5 < iVar6 + -1; iVar5 = iVar5 + 1) {
      uVar4 = iVar6 - iVar5;
      FUN_0047035c((undefined1 *)(local_414 + 1),uVar4,4,FUN_00405368);
      FUN_00405398((int *)(&local_418)[uVar4],0);
      FUN_00405398(local_414[uVar4],1);
      piVar1 = (int *)FUN_00456840();
      piVar1[3] = *(int *)((&local_418)[uVar4] + 0xc) + local_414[uVar4][3];
      piVar1[2] = 0;
      piVar1[4] = 0;
      piVar1[5] = 0;
      piVar1[1] = (int)local_414[uVar4];
      *piVar1 = (&local_418)[uVar4];
      (&local_418)[uVar4] = (int)piVar1;
      local_414[uVar4] = (int *)0x0;
    }
    FUN_004053d4(local_414[1]);
    iVar6 = 0;
    pbVar2 = &DAT_0048b850;
    do {
      if (0x20 < *pbVar2) break;
      iVar6 = iVar6 + 1;
      pbVar2 = pbVar2 + 1;
    } while (iVar6 < 0x100);
    if (iVar6 < 0x100) {
      iVar6 = 0;
      local_418 = 0;
      piVar1 = &DAT_0048b450;
      puVar3 = &DAT_0048b850;
      do {
        *puVar3 = 8;
        *piVar1 = iVar6;
        iVar6 = iVar6 + 1;
        piVar1 = piVar1 + 1;
        puVar3 = puVar3 + 1;
      } while (iVar6 < 0x100);
    }
  }
  return local_418;
}

