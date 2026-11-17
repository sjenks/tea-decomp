// name: FUN_0041b97c
// address: 0x41b97c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_0041b97c(int *param_1)

{
  BOOL BVar1;
  
  FUN_0042cad4(*param_1);
  if ((char)param_1[0x12] != '\0') {
    FUN_0041a798(param_1);
  }
  if ((char)param_1[0xd] != '\0') {
    (**(code **)(param_1[6] + 0x34))();
  }
  (**(code **)(param_1[6] + 0x38))();
  if (*(char *)((int)param_1 + 0x31) == '\0') {
LAB_0041b9d1:
    if ((*(char *)((int)param_1 + 0x32) == '\0') || (*(int *)(*param_1 + 0x2c) == 0))
    goto LAB_0041ba1d;
  }
  else if (*(int *)(*param_1 + 0x28) == 0) goto LAB_0041b9d1;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0;
  }
  if (*(char *)((int)param_1 + 0x32) != '\0') {
    *(undefined4 *)(*param_1 + 0x2c) = 0;
  }
  (**(code **)(param_1[6] + 0x34))();
  FUN_0042d59c(*param_1,(HWND)0x0,0,0,0,0,0x16);
LAB_0041ba1d:
  BVar1 = PostMessageA(*(HWND *)(*param_1 + 0xc),0x7ef2,0,0);
  return BVar1 != 0;
}

