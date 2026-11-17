// name: FUN_004b52c0
// address: 0x4b52c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b52c0(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_004dce64(0x50dec4);
  if (param_1 != (int *)0x0) {
    *param_1 = (int)&PTR_FUN_0050d9bc;
    if (*(int **)((int)param_1 + 0x12) == param_1) {
      *in_FS_OFFSET = local_30;
    }
    else {
      FUN_004b5734((int)param_1,0);
      FUN_004b5da0(param_1 + 2);
      (**(code **)(*param_1 + 0x10))();
      while (*(int *)((int)param_1 + 0x26) != 0) {
        if (*(int *)((int)param_1 + 0x26) != 0) {
          (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x26) + 8))();
        }
      }
      while (*(int *)((int)param_1 + 0x2a) != 0) {
        if (*(undefined4 **)((int)param_1 + 0x2a) != (undefined4 *)0x0) {
          (**(code **)(*(int *)**(undefined4 **)((int)param_1 + 0x2a) + 0x60))();
          FUN_004cc0bc();
        }
      }
      if (*(int *)((int)param_1 + 0x12) == 0) {
        (**(code **)(*(int *)(*(int *)((int)param_1 + 0xe) + 8) + 0x50))();
        FUN_004b5d78((int *)(*(int *)((int)param_1 + 0xe) + 0x14),(int)param_1);
      }
      else {
        FUN_004b5d78((int *)(*(int *)((int)param_1 + 0x12) + 8),(int)param_1);
      }
      FUN_004cc0cc();
      FUN_004cc0cc();
    }
    FUN_004b5da0(param_1 + 2);
    FUN_00489c54(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_30;
  return;
}

