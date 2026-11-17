// name: FUN_0045a354
// address: 0x45a354
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0045a354(LCID param_1,undefined2 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined **ppuVar20;
  undefined4 local_34 [12];
  
  ppuVar20 = &PTR_DAT_00475a34;
  puVar18 = local_34;
  for (iVar19 = 0xc; iVar19 != 0; iVar19 = iVar19 + -1) {
    *puVar18 = *ppuVar20;
    ppuVar20 = ppuVar20 + 1;
    puVar18 = puVar18 + 1;
  }
  uVar1 = FUN_0045a1b4(param_1,0x16,(undefined4 *)(param_2 + 0xc));
  uVar2 = FUN_0045a1b4(param_1,0x17,(undefined4 *)(param_2 + 10));
  uVar3 = FUN_0045a1b4(param_1,0x14,(undefined4 *)(param_2 + 0xe));
  uVar4 = FUN_0045a1b4(param_1,0x15,(undefined4 *)(param_2 + 0x10));
  uVar5 = FUN_0045a1b4(param_1,0x18,(undefined4 *)(param_2 + 0x12));
  uVar6 = FUN_0045a1b4(param_1,0x50,(undefined4 *)(param_2 + 0x14));
  uVar7 = FUN_0045a1b4(param_1,0x51,(undefined4 *)(param_2 + 0x16));
  uVar8 = FUN_0045a210(param_1,0x19,param_2,3);
  uVar9 = FUN_0045a210(param_1,0x1a,param_2 + 1,3);
  uVar10 = FUN_0045a210(param_1,0x1b,param_2 + 2,2);
  uVar11 = FUN_0045a210(param_1,0x1c,param_2 + 3,3);
  uVar12 = FUN_0045a210(param_1,0x52,param_2 + 4,2);
  uVar13 = FUN_0045a210(param_1,0x53,param_2 + 5,3);
  uVar14 = FUN_0045a210(param_1,0x54,param_2 + 6,2);
  uVar15 = FUN_0045a210(param_1,0x55,param_2 + 7,2);
  uVar16 = FUN_0045a210(param_1,0x56,param_2 + 8,2);
  uVar17 = FUN_0045a210(param_1,0x57,param_2 + 9,2);
  puVar18 = FUN_00455d60((uint *)local_34[(short)param_2[3]]);
  *(undefined4 **)(param_2 + 0x18) = puVar18;
  return (uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
          uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17) != 0;
}

