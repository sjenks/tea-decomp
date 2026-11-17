// name: FUN_0041e068
// address: 0x41e068
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Unable to track spacebase fully for stack */

void FUN_0041e068(char *param_1,int param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_EDI;
  undefined4 *in_FS_OFFSET;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  *(char *)(unaff_EDI + 0x57) = *(char *)(unaff_EDI + 0x57) + param_3;
  iVar3 = *(int *)(param_2 + 0x20) * -0x74aaffd6;
  in((short)param_2);
  *(undefined4 *)(iVar3 + -0x30) = 0x41e090;
  FUN_00467ba8(0x47934c);
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -8) != 0) {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(*(int *)(unaff_EBP + -8) + 5);
    *(undefined2 *)(unaff_EBP + -0x1c) = 0x14;
    *(undefined4 *)(iVar3 + -0x30) = 3;
    iVar1 = *(int *)(unaff_EBP + -8);
    *(int *)(iVar3 + -0x34) = iVar1;
    pcVar2 = (code *)**(undefined4 **)(iVar1 + 5);
    *(undefined4 *)(iVar3 + -0x38) = 0x41e0b6;
    (*pcVar2)();
    *(undefined2 *)(unaff_EBP + -0x1c) = 8;
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x2c);
  return;
}

