// name: FUN_004397a0
// address: 0x4397a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004397a0(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x46d1a8);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_0046cca0;
    if (*(int **)((int)param_1 + 0x12) == param_1) {
      *in_FS_OFFSET = local_30;
    }
    else {
      FUN_00439c14((int)param_1,0);
      FUN_0043a280(param_1 + 2);
      (**(code **)(*param_1 + 0x10))();
      while (*(int *)((int)param_1 + 0x26) != 0) {
        if (*(int *)((int)param_1 + 0x26) != 0) {
          (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x26) + 8))();
        }
      }
      while (*(int *)((int)param_1 + 0x2a) != 0) {
        if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
          (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x2a) + 0x60))();
          FUN_0044b2cc();
        }
      }
      if (*(int *)((int)param_1 + 0x12) == 0) {
        (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x50))();
        FUN_0043a258((int *)(*(int *)((int)param_1 + 0xe) + 0x14),(int)param_1);
      }
      else {
        FUN_0043a258((int *)(*(int *)((int)param_1 + 0x12) + 8),(int)param_1);
      }
      FUN_0044b2dc();
      FUN_0044b2dc();
    }
    FUN_0043a280(param_1 + 2);
    FUN_00413978(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

