// name: FUN_004a8654
// address: 0x4a8654
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 FUN_004a8654(char *param_1,byte *param_2,undefined4 param_3)

{
  HDC pHVar1;
  int unaff_EBX;
  int iVar2;
  int unaff_ESI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + (char)param_3;
  *(undefined1 *)(unaff_EBX + 0x40) = *(undefined1 *)(unaff_EBX + 0x40);
  iVar2 = *(int *)(unaff_ESI + 100) * 0x4344776f;
  *param_2 = *param_2 & (byte)((uint)param_3 >> 8);
  param_1[-0x74aa6f70] = param_1[-0x74aa6f70] + (char)param_2;
  in((short)param_2);
  FUN_004dce64(0x50b414);
  *(undefined2 *)(iVar2 + -0x14) = 8;
  FUN_0048d82c(*(undefined4 **)(iVar2 + 8));
  *(int *)(iVar2 + -8) = *(int *)(iVar2 + -8) + 1;
  *(undefined ***)(*(int *)(iVar2 + 8) + 5) = &PTR_FUN_0050b4e8;
  *(undefined4 *)(*(int *)(iVar2 + 8) + 0x21) = *(undefined4 *)(iVar2 + 0xc);
  pHVar1 = GetWindowDC(*(HWND *)(*(int *)(iVar2 + 8) + 0x21));
  **(undefined4 **)(iVar2 + 8) = pHVar1;
  FUN_00493530(*(int **)(iVar2 + 8),0x7fe3);
  *in_FS_OFFSET = *(undefined4 *)(iVar2 + -0x24);
  return *(undefined4 *)(iVar2 + 8);
}

