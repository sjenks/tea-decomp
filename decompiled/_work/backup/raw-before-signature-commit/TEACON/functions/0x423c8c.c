// name: FUN_00423c8c
// address: 0x423c8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00423c8c(LCID param_1,undefined4 *param_2)

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
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  undefined4 *puVar53;
  uint local_44 [16];
  
  uVar1 = FUN_0042396c(param_1,0x1d,param_2);
  uVar2 = FUN_0042396c(param_1,0x1e,param_2 + 1);
  uVar3 = FUN_0042396c(param_1,0x1003,param_2 + 2);
  uVar4 = FUN_0042396c(param_1,0x1f,param_2 + 3);
  uVar5 = FUN_0042396c(param_1,0x20,param_2 + 4);
  uVar6 = FUN_0042396c(param_1,0x28,param_2 + 5);
  uVar7 = FUN_0042396c(param_1,0x29,param_2 + 6);
  uVar8 = FUN_0042396c(param_1,0x2a,param_2 + 0xb);
  uVar9 = FUN_0042396c(param_1,0x2b,param_2 + 0xc);
  uVar10 = FUN_0042396c(param_1,0x2c,param_2 + 0xd);
  uVar11 = FUN_0042396c(param_1,0x2d,param_2 + 0xe);
  uVar12 = FUN_0042396c(param_1,0x2e,param_2 + 0xf);
  uVar13 = FUN_0042396c(param_1,0x2f,param_2 + 0x10);
  uVar14 = FUN_0042396c(param_1,0x30,param_2 + 0x11);
  uVar15 = FUN_0042396c(param_1,0x31,param_2 + 0x12);
  uVar16 = FUN_0042396c(param_1,0x32,param_2 + 0x13);
  uVar17 = FUN_0042396c(param_1,0x33,param_2 + 0x14);
  uVar18 = FUN_0042396c(param_1,0x34,param_2 + 0x15);
  uVar19 = FUN_0042396c(param_1,0x35,param_2 + 0x16);
  uVar20 = FUN_0042396c(param_1,0x36,param_2 + 0x17);
  uVar21 = FUN_0042396c(param_1,0x37,param_2 + 0x18);
  uVar22 = FUN_0042396c(param_1,0x38,param_2 + 0x19);
  uVar23 = FUN_0042396c(param_1,0x39,param_2 + 0x1a);
  uVar24 = FUN_0042396c(param_1,0x3a,param_2 + 0x1b);
  uVar25 = FUN_0042396c(param_1,0x3b,param_2 + 0x1c);
  uVar26 = FUN_0042396c(param_1,0x3c,param_2 + 0x1d);
  uVar27 = FUN_0042396c(param_1,0x3d,param_2 + 0x1e);
  uVar28 = FUN_0042396c(param_1,0x3e,param_2 + 0x1f);
  uVar29 = FUN_0042396c(param_1,0x3f,param_2 + 0x20);
  uVar30 = FUN_0042396c(param_1,0x40,param_2 + 0x21);
  uVar31 = FUN_0042396c(param_1,0x41,param_2 + 0x22);
  uVar32 = FUN_0042396c(param_1,0x42,param_2 + 0x23);
  uVar33 = FUN_0042396c(param_1,0x43,param_2 + 0x24);
  uVar34 = FUN_0042396c(param_1,0x44,param_2 + 0x25);
  uVar35 = FUN_0042396c(param_1,0x45,param_2 + 0x26);
  uVar36 = FUN_0042396c(param_1,0x46,param_2 + 0x27);
  uVar37 = FUN_0042396c(param_1,0x47,param_2 + 0x28);
  uVar38 = FUN_0042396c(param_1,0x48,param_2 + 0x29);
  uVar39 = FUN_0042396c(param_1,0x49,param_2 + 0x2a);
  uVar40 = FUN_0042396c(param_1,0x4a,param_2 + 0x2b);
  uVar41 = FUN_0042396c(param_1,0x4b,param_2 + 0x2c);
  uVar42 = FUN_0042396c(param_1,0x4c,param_2 + 0x2d);
  uVar43 = FUN_0042396c(param_1,0x4d,param_2 + 0x2e);
  uVar44 = FUN_0042396c(param_1,0x4e,param_2 + 0x2f);
  uVar45 = FUN_0042396c(param_1,0x4f,param_2 + 0x30);
  uVar46 = FUN_004239c8(param_1,0x21,(undefined2 *)(param_2 + 7),2);
  uVar47 = FUN_004239c8(param_1,0x22,(undefined2 *)((int)param_2 + 0x1e),2);
  uVar48 = FUN_004239c8(param_1,0x23,(undefined2 *)(param_2 + 8),2);
  uVar49 = FUN_004239c8(param_1,0x24,(undefined2 *)((int)param_2 + 0x22),1);
  uVar50 = FUN_004239c8(param_1,0x25,(undefined2 *)(param_2 + 9),2);
  uVar51 = FUN_004239c8(param_1,0x26,(undefined2 *)((int)param_2 + 0x26),2);
  uVar52 = FUN_004239c8(param_1,0x27,(undefined2 *)(param_2 + 10),2);
  uVar52 = uVar1 & 1 & uVar2 & uVar3 & uVar4 & uVar5 & uVar6 & uVar7 & uVar8 & uVar9 & uVar10 &
           uVar11 & uVar12 & uVar13 & uVar14 & uVar15 & uVar16 & uVar17 & uVar18 & uVar19 & uVar20 &
           uVar21 & uVar22 & uVar23 & uVar24 & uVar25 & uVar26 & uVar27 & uVar28 & uVar29 & uVar30 &
           uVar31 & uVar32 & uVar33 & uVar34 & uVar35 & uVar36 & uVar37 & uVar38 & uVar39 & uVar40 &
           uVar41 & uVar42 & uVar43 & uVar44 & uVar45 & uVar46 & uVar47 & uVar48 & uVar49 & uVar50 &
           uVar51 & uVar52;
  if (uVar52 != 0) {
    FUN_00422230((char *)param_2[2],(char *)local_44,0x40);
    FUN_00415600();
    puVar53 = FUN_0041f144(local_44);
    param_2[2] = puVar53;
    FUN_00422230((char *)param_2[3],(char *)local_44,0x40);
    FUN_00415600();
    puVar53 = FUN_0041f144(local_44);
    param_2[3] = puVar53;
    FUN_00422230((char *)param_2[4],(char *)local_44,0x40);
    FUN_00415600();
    puVar53 = FUN_0041f144(local_44);
    param_2[4] = puVar53;
  }
  return uVar52 != 0;
}

