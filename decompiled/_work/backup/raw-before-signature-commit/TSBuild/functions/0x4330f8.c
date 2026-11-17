// name: FUN_004330f8
// address: 0x4330f8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004330f8(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_00467ba8(0x47d900);
  if (param_1 == (int *)0x0) goto LAB_004332c6;
  param_1[3] = (int)&PTR_FUN_0047e020;
  *(undefined ***)param_1[1] = &PTR_LAB_0047e07c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047e088;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047e094;
  if ((uint *)param_1[6] != (uint *)0x0) {
    FUN_004284a8((uint *)param_1[6],0);
    FUN_0045680c();
  }
  if (param_1[0xd] != 0) {
    if (*(int *)(param_1[0xd] + -0xc) != -1) {
      piVar2 = (int *)(param_1[0xd] + -0xc);
      if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else if (piVar2 == &DAT_00485bcc) {
        iVar1 = 1;
      }
      else {
        *piVar2 = *piVar2 + -1;
        iVar1 = *piVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00433204;
    }
    FUN_0045680c();
    param_1[0xd] = 0;
  }
LAB_00433204:
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -4;
  FUN_0043d704(param_1,0);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 4;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 4;
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  if ((param_2 & 2) != 0) {
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435f74((undefined4 *)((int)param_1 + 0x4f),0);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
    FUN_0041e99c((undefined4 *)((int)param_1 + 0x47),0);
  }
  if ((param_2 & 1) != 0) {
    FUN_0045680c();
  }
LAB_004332c6:
  *in_FS_OFFSET = local_2c;
  return;
}

