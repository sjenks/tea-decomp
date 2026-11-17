// name: FUN_004ca69e
// address: 0x4ca69e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004ca69e(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  FUN_004dce64(0x5121d4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_00512280;
    *(undefined4 *)(unaff_EBP + -4) = puVar1[0xc];
    if (*(int *)(unaff_EBP + -4) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x14;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      FUN_004ca784(*(int *)(unaff_EBP + -4),'\x01');
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      if (*(int *)(*(int *)(unaff_EBP + -4) + 9) != 0) {
        FUN_004cc744();
      }
      FUN_004cc0bc();
      *(undefined2 *)(unaff_EBP + -0x24) = 8;
    }
    *(undefined4 *)(unaff_EBP + -8) = puVar1[7];
    if (*(int *)(unaff_EBP + -8) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x44;
      FUN_0049cc20(*(undefined4 **)(unaff_EBP + -8),3);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x38;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = puVar1[8];
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0xc) = **(undefined4 **)(unaff_EBP + -0x10);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x5c;
      (**(code **)**(undefined4 **)(unaff_EBP + -0x10))();
      *(undefined2 *)(unaff_EBP + -0x24) = 0x50;
    }
    FUN_004cc0bc();
    if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

