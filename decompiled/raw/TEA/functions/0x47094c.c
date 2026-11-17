// name: FUN_0047094c
// address: 0x47094c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0047094c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,int param_10)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  int in_stack_00000044;
  int in_stack_00000048;
  int in_stack_00000068;
  int in_stack_00000078;
  undefined4 in_stack_00000080;
  code *in_stack_00000088;
  undefined4 local_28;
  
  FUN_004dce64(0x4fe7e0);
  while( true ) {
    cVar1 = (*in_stack_00000088)();
    if (cVar1 == '\0') break;
    FUN_004cf384(param_1,param_1 + -0x80);
    FUN_0040ab88(param_1 + 0x18,param_1 + -0x68);
    FUN_0040ab88(param_1 + 0x38,param_1 + -0x48);
    FUN_004cf384(param_1 + 0x58,param_1 + -0x28);
    FUN_004cf384(param_1 + 0x68,param_1 + -0x18);
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + -0x70);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_1 + -8);
    param_1 = param_1 + -0x80;
  }
  FUN_004cf384(param_1,(int)&param_2);
  FUN_0040ab88(param_1 + 0x18,(int)&param_8);
  FUN_0040ab88(param_1 + 0x38,(int)&stack0x00000040);
  FUN_004cf384(param_1 + 0x58,(int)&stack0x00000060);
  FUN_004cf384(param_1 + 0x68,(int)&stack0x00000070);
  *(undefined4 *)(param_1 + 0x10) = param_6;
  *(undefined4 *)(param_1 + 0x78) = in_stack_00000080;
  if (in_stack_00000078 != 0) {
    if (*(int *)(in_stack_00000078 + -0xc) != -1) {
      piVar3 = (int *)(in_stack_00000078 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470ab7;
    }
    FUN_004cc0bc();
    in_stack_00000078 = 0;
  }
LAB_00470ab7:
  if (in_stack_00000068 != 0) {
    if (*(int *)(in_stack_00000068 + -0xc) != -1) {
      piVar3 = (int *)(in_stack_00000068 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470b2a;
    }
    FUN_004cc0bc();
    in_stack_00000068 = 0;
  }
LAB_00470b2a:
  FUN_0040b4f0(&stack0x00000040,in_stack_00000044,in_stack_00000048);
  FUN_004cc0bc();
  FUN_0040b4f0(&param_8,param_9,param_10);
  FUN_004cc0bc();
  if (param_4 != 0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      piVar3 = (int *)(param_4 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00470bd9;
    }
    FUN_004cc0bc();
  }
LAB_00470bd9:
  *in_FS_OFFSET = local_28;
  return;
}

