// name: FUN_0042e748
// address: 0x42e748
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl
FUN_0042e748(int *param_1,int param_2,uint *param_3,undefined4 *param_4,undefined *param_5)

{
  uint uVar1;
  undefined *puVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  undefined4 local_28;
  
  FUN_00455f04(0x46add8);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x73;
    *(undefined4 *)((int)param_1 + 0x6f) = 0;
    *(undefined ***)((int)param_1 + 0x73) = &PTR_FUN_00462234;
  }
  cVar4 = '\x01';
  puVar2 = FUN_0042e6d8();
  FUN_00443c6c(param_1 + 1,param_3,DAT_00477190,*(undefined4 *)(puVar2 + 8),cVar4);
  FUN_004216ec((undefined4 *)((int)param_1 + 0x11));
  *(undefined ***)((int)param_1 + 0x1b) = &PTR_FUN_0046ae1c;
  param_1[1] = (int)&PTR_LAB_0046ae70;
  *(undefined ***)((int)param_1 + 0x11) = &PTR_LAB_0046ae80;
  *(undefined ***)*param_1 = &PTR_LAB_0046aea0;
  *(undefined4 *)((int)param_1 + 0x1f) = DAT_00477194;
  *(undefined4 *)((int)param_1 + 0x23) = DAT_00477198;
  *(undefined4 *)((int)param_1 + 0x27) = 0;
  *(undefined4 *)((int)param_1 + 0x2b) = 0;
  *(undefined2 *)((int)param_1 + 0x2f) = 0x400;
  *(undefined4 *)((int)param_1 + 0x31) = 0;
  puVar2 = FUN_0042e6d8();
  *(undefined4 *)((int)param_1 + 0x3d) = 0;
  if (*(int *)(*(int *)(puVar2 + 8) + -0xc) == -1 || *(int *)(*(int *)(puVar2 + 8) + -0xc) + 1 < 0)
  {
    uVar1 = *(uint *)(*(int *)(puVar2 + 8) + -4);
    piVar3 = FUN_0044d2a4((int)param_1 + 0x35,uVar1,uVar1);
    *(int **)((int)param_1 + 0x3d) = piVar3 + 3;
    FUN_004559d0(*(undefined4 **)((int)param_1 + 0x3d),*(undefined4 **)(puVar2 + 8),uVar1);
  }
  else {
    *(undefined4 *)((int)param_1 + 0x3d) = *(undefined4 *)(puVar2 + 8);
    piVar3 = (int *)(*(int *)((int)param_1 + 0x3d) + -0xc);
    if (piVar3 != &DAT_00471d5c) {
      *piVar3 = *piVar3 + 1;
    }
  }
  *(undefined4 *)((int)param_1 + 0x45) = 0;
  *(undefined4 *)((int)param_1 + 0x49) = 0;
  *(undefined1 *)((int)param_1 + 0x4d) = 0;
  *(undefined4 *)((int)param_1 + 0x4e) = 0;
  *(undefined1 *)((int)param_1 + 0x52) = 0;
  *(undefined4 *)((int)param_1 + 0x53) = 0;
  *(undefined4 *)((int)param_1 + 0x57) = 0;
  *(undefined4 *)((int)param_1 + 0x5b) = 0;
  *(undefined4 *)((int)param_1 + 0x5f) = 0;
  *(undefined4 *)((int)param_1 + 99) = 0;
  *(undefined4 *)((int)param_1 + 0x67) = 0;
  if (param_5 == (undefined *)0x0) {
    param_5 = FUN_0041147c();
  }
  *(undefined **)((int)param_1 + 0x6b) = param_5;
  FUN_004116f4(*(undefined4 **)((int)param_1 + 0x6b),param_1,0);
  *param_4 = param_1 + 1;
  *in_FS_OFFSET = local_28;
  return param_1;
}

