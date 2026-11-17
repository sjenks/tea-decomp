// name: FUN_00434fdc
// address: 0x434fdc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00435129) */

int * __cdecl FUN_00434fdc(int *param_1,int param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47df8c);
  if (param_2 == 0) {
    *param_1 = (int)param_1 + 0x4f;
    *(int *)((int)param_1 + 0x4f) = (int)param_1 + 0x43;
    *(int *)((int)param_1 + 0x53) = (int)param_1 + 0x47;
    param_1[1] = (int)param_1 + 0x43;
    param_1[2] = (int)param_1 + 0x47;
    *(undefined4 *)((int)param_1 + 0x3f) = 0;
    *(undefined4 *)((int)param_1 + 0x4b) = 0;
    *(undefined ***)((int)param_1 + 0x43) = &PTR_FUN_00474f84;
    *(undefined ***)((int)param_1 + 0x47) = &PTR_FUN_00474f74;
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x96;
    FUN_00435d18((int *)((int)param_1 + 0x4f),1);
    *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x96;
  }
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + -0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x27;
  FUN_004530f4(param_1,1);
  *(int *)(param_1[1] + -4) = *(int *)(param_1[1] + -4) + 0x27;
  *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x27;
  param_1[3] = (int)&PTR_FUN_0047e020;
  *(undefined ***)param_1[1] = &PTR_LAB_0047e07c;
  *(undefined ***)param_1[2] = &PTR_LAB_0047e088;
  *(undefined ***)(*param_1 + 8) = &PTR_LAB_0047e094;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xd] = (int)&DAT_00485bd8;
  *in_FS_OFFSET = local_28;
  return param_1;
}

