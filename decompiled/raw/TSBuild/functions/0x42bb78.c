// name: FUN_0042bb78
// address: 0x42bb78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_0042bb78(byte *param_1,undefined **param_2,undefined4 *param_3)

{
  byte bVar1;
  byte bVar2;
  HMENU pHVar3;
  int unaff_EBP;
  undefined1 *puVar4;
  undefined1 *unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_c;
  
  bVar1 = *param_1;
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *param_1 = *param_1 + bVar2 + CARRY1(bVar1,bVar2);
  if (bVar2 != 0) {
    *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3 + '\x01';
    puVar4 = (undefined1 *)(unaff_EBP + -1);
    out(*unaff_ESI,(short)param_2);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = (undefined1 *)((int)&uStack_c + 3);
      uStack_c = uStack_c & 0xffffff;
      FUN_00467ba8(0x47c130);
      param_2 = &PTR_FUN_0047c368;
    }
    **(undefined4 **)(puVar4 + 8) = param_2;
    pHVar3 = CreateMenu();
    *(HMENU *)(*(int *)(puVar4 + 8) + 4) = pHVar3;
    *(bool *)(*(int *)(puVar4 + 8) + 8) = *(int *)(puVar4 + 0x10) != 0;
    FUN_0042bd98(*(int *)(puVar4 + 8),0x7fe8);
    FUN_0042bdc0(*(int *)(puVar4 + 8),*(int **)(puVar4 + 0xc),0,-1);
    *in_FS_OFFSET = *(undefined4 *)(puVar4 + -0x24);
    return *(undefined4 *)(puVar4 + 8);
  }
  *param_3 = param_2;
  pHVar3 = CreateMenu();
  *(HMENU *)(*(int *)(unaff_EBP + 8) + 4) = pHVar3;
  *(bool *)(*(int *)(unaff_EBP + 8) + 8) = *(int *)(unaff_EBP + 0xc) != 0;
  uStack_c = 0x42bb64;
  FUN_0042bd98(*(int *)(unaff_EBP + 8),0x7fe8);
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x24);
  return *(undefined4 *)(unaff_EBP + 8);
}

