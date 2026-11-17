// name: FUN_00413044
// address: 0x413044
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Unable to track spacebase fully for stack */

void FUN_00413044(char *param_1,int param_2,char param_3)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  int unaff_EBP;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000000;
  
  *param_1 = *param_1 + (char)param_1;
  *(char *)((int)param_1 * 2) = *(char *)((int)param_1 * 2) + param_3;
  *(int *)(in_stack_00000000 + -5) = in_stack_00000000 + -1;
  iVar3 = *(int *)(param_2 + 0x20) * -0x74aaffd6;
  in((short)param_2);
  *(undefined4 *)(iVar3 + -0x30) = 0x41306c;
  FUN_00455f04(0x465598);
  *(undefined4 *)(unaff_EBP + -8) = *(undefined4 *)(unaff_EBP + 0xc);
  if (*(int *)(unaff_EBP + -8) != 0) {
    *(undefined4 *)(unaff_EBP + -4) = *(undefined4 *)(*(int *)(unaff_EBP + -8) + 5);
    *(undefined2 *)(unaff_EBP + -0x1c) = 0x14;
    *(undefined4 *)(iVar3 + -0x30) = 3;
    iVar1 = *(int *)(unaff_EBP + -8);
    *(int *)(iVar3 + -0x34) = iVar1;
    pcVar2 = (code *)**(undefined4 **)(iVar1 + 5);
    *(undefined4 *)(iVar3 + -0x38) = 0x413092;
    (*pcVar2)();
    *(undefined2 *)(unaff_EBP + -0x1c) = 8;
  }
  *in_FS_OFFSET = *(undefined4 *)(unaff_EBP + -0x2c);
  return;
}

