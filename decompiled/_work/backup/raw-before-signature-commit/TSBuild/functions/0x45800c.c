// name: FUN_0045800c
// address: 0x45800c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_0045800c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 **ppuVar6;
  undefined4 *puVar7;
  undefined4 in_stack_ffffff90;
  undefined1 *puVar8;
  undefined4 *local_54 [4];
  undefined4 local_44 [4];
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined4 local_14 [4];
  
  FUN_00457fec((int)local_14,param_2);
  FUN_00457f7c((int)local_24,param_2);
  bVar1 = FUN_0045813c((int)&stack0x0000000c,(int)local_24);
  if (bVar1) {
    FUN_00457fec((int)local_34,param_2);
    bVar1 = FUN_0045813c((int)&stack0x0000001c,(int)local_34);
    if ((bVar1) && (*(int *)(param_2 + 0x28) != 0)) {
      piVar2 = (int *)FUN_00458158(param_2);
      FUN_00458178(param_2,*piVar2);
      puVar3 = (undefined4 *)FUN_004581ec(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      puVar3 = (undefined4 *)FUN_00458158(param_2);
      uVar4 = FUN_00458200();
      *puVar3 = uVar4;
      puVar3 = (undefined4 *)FUN_00458204(param_2);
      *puVar3 = *(undefined4 *)(param_2 + 0x24);
      *(undefined4 *)(param_2 + 0x28) = 0;
      FUN_00457fec((int)local_44,param_2);
      puVar3 = local_44;
      puVar7 = local_14;
      for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar7 = *puVar3;
        puVar3 = puVar3 + 1;
        puVar7 = puVar7 + 1;
      }
      goto LAB_00458120;
    }
  }
  while( true ) {
    puVar8 = &stack0x0000000c;
    uVar4 = 0x458119;
    bVar1 = FUN_00458218((int)puVar8,(int)&stack0x0000001c);
    if (!bVar1) break;
    FUN_00458234((undefined4 *)&stack0xffffff90,(undefined4 *)&stack0x0000000c);
    FUN_00458308(local_54,param_2,in_stack_ffffff90,uVar4,puVar8);
    local_54[1] = param_1;
    ppuVar6 = local_54;
    puVar3 = local_14;
    for (iVar5 = 4; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar3 = *ppuVar6;
      ppuVar6 = ppuVar6 + 1;
      puVar3 = puVar3 + 1;
    }
  }
LAB_00458120:
  *param_1 = local_14[0];
  param_1[1] = local_14[1];
  param_1[2] = local_14[2];
  return param_1;
}

