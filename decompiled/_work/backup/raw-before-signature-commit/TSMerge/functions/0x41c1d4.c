// name: FUN_0041c1d4
// address: 0x41c1d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041c1d4(int *param_1,undefined4 param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x467538);
  if (*(int *)((int)param_1 + 0x3b) != 0) {
    if (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0) {
      if (*(int *)((int)param_1 + 0x3b) != 0) {
        (*(code *)**(undefined4 **)(*(int *)((int)param_1 + 0x3b) + 0xc))();
      }
    }
    else {
      FUN_0042d1a4(**(int **)((int)param_1 + 0x3b),0x10,0,0);
    }
  }
  *(undefined4 *)((int)param_1 + 0x3b) = param_2;
  if (((*(int *)((int)param_1 + 0x3b) != 0) && (*(int *)(*param_1 + 0xc) != 0)) &&
     (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) == 0)) {
    FUN_0042d484(**(int **)((int)param_1 + 0x3b),0,0x8000000,0);
    (**(code **)(*(int *)(**(int **)((int)param_1 + 0x3b) + 8) + 0x10))();
  }
  *in_FS_OFFSET = local_30;
  return;
}

