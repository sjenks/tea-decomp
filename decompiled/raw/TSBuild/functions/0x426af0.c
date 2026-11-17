// name: FUN_00426af0
// address: 0x426af0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00426af0(int *param_1)

{
  BOOL BVar1;
  
  FUN_00437c68(*param_1);
  if ((char)param_1[0x12] != '\0') {
    FUN_0042590c(param_1);
  }
  if ((char)param_1[0xd] != '\0') {
    (**(code **)(param_1[6] + 0x34))();
  }
  (**(code **)(param_1[6] + 0x38))();
  if (*(char *)((int)param_1 + 0x31) == '\0') {
LAB_00426b45:
    if ((*(char *)((int)param_1 + 0x32) == '\0') || (*(int *)(*param_1 + 0x2c) == 0))
    goto LAB_00426b91;
  }
  else if (*(int *)(*param_1 + 0x28) == 0) goto LAB_00426b45;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0;
  }
  if (*(char *)((int)param_1 + 0x32) != '\0') {
    *(undefined4 *)(*param_1 + 0x2c) = 0;
  }
  (**(code **)(param_1[6] + 0x34))();
  FUN_00438730(*param_1,(HWND)0x0,0,0,0,0,0x16);
LAB_00426b91:
  BVar1 = PostMessageA(*(HWND *)(*param_1 + 0xc),0x7ef2,0,0);
  return BVar1 != 0;
}

