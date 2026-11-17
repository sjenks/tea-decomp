// name: FUN_004ccfa4
// address: 0x4ccfa4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint * __cdecl FUN_004ccfa4(uint param_1)

{
  undefined *puVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_1 == 0) {
    puVar2 = (uint *)0x0;
  }
  else {
    if (param_1 < 0xc) {
      uVar6 = 0xc;
    }
    else {
      uVar6 = param_1 + 3 & 0xfffffffc;
    }
    if (DAT_00512cf8 == 0) {
      FUN_004cca54(1);
    }
    puVar1 = PTR_DAT_00512d08;
    if (uVar6 < DAT_00512ce4) {
      iVar3 = uVar6 * 2 + DAT_00512cf8;
      puVar4 = *(uint **)(iVar3 + -8);
      if ((uint *)(iVar3 + -0xc) != puVar4) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        *(uint *)(puVar4[2] + 4) = uVar6;
        return puVar4 + 1;
      }
      puVar4 = (uint *)PTR_DAT_00512d00;
      if ((undefined4 *)PTR_DAT_00512d00 == &DAT_00512cfc) {
        for (iVar3 = uVar6 * 2 + DAT_00512cf8 + -4; iVar3 == *(int *)(iVar3 + 4); iVar3 = iVar3 + 8)
        {
        }
        puVar4 = (uint *)PTR_DAT_00512d08;
        if (*(uint **)(iVar3 + 4) != (uint *)0x0) {
          puVar4 = *(uint **)(iVar3 + 4);
        }
      }
    }
    else {
      uVar8 = *(uint *)PTR_DAT_00512d08;
      puVar4 = (uint *)PTR_DAT_00512d08;
      if (uVar8 < uVar6) {
        *(undefined4 *)PTR_DAT_00512d08 = 0xfffffffd;
        for (puVar4 = *(uint **)(puVar1 + 4); *puVar4 < uVar6; puVar4 = (uint *)puVar4[1]) {
        }
        *(uint *)PTR_DAT_00512d08 = uVar8;
        if (puVar4 == (uint *)PTR_DAT_00512d08) {
          puVar4 = &DAT_00512cfc;
        }
      }
    }
    if (puVar4 == &DAT_00512cfc) {
      iVar3 = FUN_004cca54(param_1 + 0x40);
      if (iVar3 == 0) {
        puVar2 = FUN_004ccfa4(param_1);
      }
      else {
        puVar2 = (uint *)0x0;
      }
    }
    else {
      uVar8 = *puVar4;
      uVar7 = (uVar8 & 0xfffffffc) - uVar6;
      if (uVar7 < 0x10) {
        *puVar4 = *puVar4 & 0xfffffffe;
        puVar2 = (uint *)((int)puVar4 + (*puVar4 & 0xfffffffc) + 4);
        *puVar2 = *puVar2 & 0xfffffffd;
        if (DAT_00512ce4 <= (uVar8 & 0xfffffffc)) {
          PTR_DAT_00512d08 = (undefined *)puVar4[1];
        }
        uVar6 = puVar4[1];
        *(uint *)(uVar6 + 8) = puVar4[2];
        puVar2 = puVar4 + 1;
        *(uint *)(puVar4[2] + 4) = uVar6;
      }
      else {
        uVar8 = uVar7 - 4;
        *puVar4 = uVar6;
        piVar5 = (int *)((int)puVar4 + uVar6 + 4);
        *piVar5 = uVar7 - 3;
        *(uint *)((int)piVar5 + uVar8) = uVar7;
        if (uVar8 < DAT_00512ce4) {
          iVar3 = uVar8 * 2 + DAT_00512cf8;
          *(undefined4 *)((int)puVar4 + uVar6 + 8) = *(undefined4 *)(iVar3 + -8);
          *(int *)((int)puVar4 + uVar6 + 0xc) = iVar3 + -0xc;
          *(int **)(*(int *)((int)puVar4 + uVar6 + 8) + 8) = piVar5;
          *(int **)(iVar3 + -8) = piVar5;
          if (puVar4 == (uint *)PTR_DAT_00512d08) {
            PTR_DAT_00512d08 = (undefined *)puVar4[1];
          }
          uVar6 = puVar4[1];
          *(uint *)(uVar6 + 8) = puVar4[2];
          *(uint *)(puVar4[2] + 4) = uVar6;
        }
        else {
          uVar8 = puVar4[2];
          *(int **)(uVar8 + 4) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 0xc) = uVar8;
          uVar8 = puVar4[1];
          *(int **)(uVar8 + 8) = piVar5;
          *(uint *)((int)puVar4 + uVar6 + 8) = uVar8;
          PTR_DAT_00512d08 = (undefined *)piVar5;
        }
        puVar2 = puVar4 + 1;
      }
    }
  }
  return puVar2;
}

