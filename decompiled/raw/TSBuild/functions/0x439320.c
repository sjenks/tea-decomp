// name: FUN_00439320
// address: 0x439320
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_00439320(char *param_1,byte *param_2,undefined4 param_3)

{
  char *pcVar1;
  byte bVar2;
  HDC pHVar3;
  int iVar4;
  int unaff_ESI;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  
  bVar2 = (byte)param_1;
  *param_1 = *param_1 + bVar2;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + (char)param_3;
  iVar4 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  pcVar1 = (char *)(CONCAT31((int3)(CONCAT22((short)((uint)param_1 >> 0x10),
                                             CONCAT11(bVar2 / 0x41,bVar2)) >> 8),bVar2 % 0x41) +
                   -0x74aa6f70);
  *pcVar1 = *pcVar1 + (char)param_2;
  in((short)param_2);
  FUN_00467ba8(0x47e9ac);
  *(undefined2 *)(iVar4 + -0x14) = 8;
  FUN_00421c70(*(undefined4 **)(iVar4 + 8));
  *(int *)(iVar4 + -8) = *(int *)(iVar4 + -8) + 1;
  *(undefined ***)(*(int *)(iVar4 + 8) + 5) = &PTR_FUN_0047ea80;
  *(undefined4 *)(*(int *)(iVar4 + 8) + 0x21) = *(undefined4 *)(iVar4 + 0xc);
  pHVar3 = GetWindowDC(*(HWND *)(*(int *)(iVar4 + 8) + 0x21));
  **(undefined4 **)(iVar4 + 8) = pHVar3;
  FUN_00427974(*(int **)(iVar4 + 8),0x7fe3);
  *in_FS_OFFSET = *(undefined4 *)(iVar4 + -0x24);
  return *(undefined4 *)(iVar4 + 8);
}

