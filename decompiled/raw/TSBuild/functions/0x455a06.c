// name: FUN_00455a06
// address: 0x455a06
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00455a06(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  FUN_00467ba8(0x484380);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_FUN_0048442c;
    *(undefined4 *)(unaff_EBP + -4) = puVar1[0xc];
    if (*(int *)(unaff_EBP + -4) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x14;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      FUN_00455aec(*(int *)(unaff_EBP + -4),'\x01');
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      *(int *)(unaff_EBP + -0x18) = *(int *)(unaff_EBP + -0x18) + -1;
      if (*(int *)(*(int *)(unaff_EBP + -4) + 9) != 0) {
        FUN_00456e94();
      }
      FUN_0045680c();
      *(undefined2 *)(unaff_EBP + -0x24) = 8;
    }
    *(undefined4 *)(unaff_EBP + -8) = puVar1[7];
    if (*(int *)(unaff_EBP + -8) != 0) {
      *(undefined2 *)(unaff_EBP + -0x24) = 0x44;
      FUN_0042f754(*(undefined4 **)(unaff_EBP + -8),3);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x38;
    }
    *(undefined4 *)(unaff_EBP + -0x10) = puVar1[8];
    if (*(int *)(unaff_EBP + -0x10) != 0) {
      *(undefined4 *)(unaff_EBP + -0xc) = **(undefined4 **)(unaff_EBP + -0x10);
      *(undefined2 *)(unaff_EBP + -0x24) = 0x5c;
      (**(code **)**(undefined4 **)(unaff_EBP + -0x10))();
      *(undefined2 *)(unaff_EBP + -0x24) = 0x50;
    }
    FUN_0045680c();
    if ((*(byte *)(unaff_EBP + 0xc) & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x34);
  return;
}

