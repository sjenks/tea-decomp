// name: FUN_00492868
// address: 0x492868
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00492868(int *param_1)

{
  BOOL BVar1;
  
  FUN_004a6fd8(*param_1);
  if ((char)param_1[0x12] != '\0') {
    FUN_00491668(param_1);
  }
  if ((char)param_1[0xd] != '\0') {
    (**(code **)(param_1[6] + 0x34))();
  }
  (**(code **)(param_1[6] + 0x38))();
  if (*(char *)((int)param_1 + 0x31) == '\0') {
LAB_004928bd:
    if ((*(char *)((int)param_1 + 0x32) == '\0') || (*(int *)(*param_1 + 0x2c) == 0))
    goto LAB_00492909;
  }
  else if (*(int *)(*param_1 + 0x28) == 0) goto LAB_004928bd;
  if (*(char *)((int)param_1 + 0x31) != '\0') {
    *(undefined4 *)(*param_1 + 0x28) = 0;
  }
  if (*(char *)((int)param_1 + 0x32) != '\0') {
    *(undefined4 *)(*param_1 + 0x2c) = 0;
  }
  (**(code **)(param_1[6] + 0x34))();
  FUN_004a7aa0(*param_1,(HWND)0x0,0,0,0,0,0x16);
LAB_00492909:
  BVar1 = PostMessageA(*(HWND *)(*param_1 + 0xc),0x7ef2,0,0);
  return BVar1 != 0;
}

