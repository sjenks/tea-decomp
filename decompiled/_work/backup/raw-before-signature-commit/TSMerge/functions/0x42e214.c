// name: FUN_0042e214
// address: 0x42e214
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042e214(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x46abf4);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0046aca4;
    FUN_00416d80(param_1);
    if ((char)param_1[1] != '\0') {
      ReleaseDC(*(HWND *)((int)param_1 + 0x21),(HDC)*param_1);
    }
    *param_1 = 0;
    FUN_00416b40(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

