// name: FUN_00420a04
// address: 0x420a04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_00420a04(byte *param_1,undefined **param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU pHVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 **ppuVar5;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined1 *puStack_11;
  undefined1 *local_d;
  undefined1 uStack_9;
  int iStack_8;
  byte *pbStack_4;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  pbStack_4 = param_1;
  *param_3 = *param_3 | bVar2;
  iStack_8 = unaff_EDI + -1;
  local_d = &uStack_9;
  puVar4 = (undefined1 *)(unaff_EBP + -1);
  out(*unaff_ESI,(short)param_2);
  ppuVar5 = (undefined1 **)puVar4;
  if (puVar4 == (undefined1 *)0x0) {
    ppuVar5 = &puStack_11;
    puStack_11 = puVar4;
    FUN_00455f04(0x468354);
    param_2 = &PTR_FUN_0046858c;
  }
  **(undefined4 **)((int)ppuVar5 + 8) = param_2;
  pHVar3 = CreateMenu();
  *(HMENU *)(*(int *)((int)ppuVar5 + 8) + 4) = pHVar3;
  *(bool *)(*(int *)((int)ppuVar5 + 8) + 8) = *(int *)((int)ppuVar5 + 0x10) != 0;
  FUN_00420c24(*(int *)((int)ppuVar5 + 8),0x7fe8);
  FUN_00420c4c(*(int *)((int)ppuVar5 + 8),*(int **)((int)ppuVar5 + 0xc),0,-1);
  *in_FS_OFFSET = *(undefined4 *)((int)ppuVar5 + -0x24);
  return *(undefined4 *)((int)ppuVar5 + 8);
}

