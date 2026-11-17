// name: FUN_004393a8
// address: 0x4393a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004393a8(int *param_1,byte param_2)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  piVar1 = (int *)FUN_00467ba8(0x47e9d0);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047ea80;
    FUN_00421ef4(param_1);
    if ((char)param_1[1] != '\0') {
      ReleaseDC(*(HWND *)((int)param_1 + 0x21),(HDC)*param_1);
    }
    *param_1 = 0;
    FUN_00421cb4(param_1,0);
    piVar1 = param_1;
    if ((param_2 & 1) != 0) {
      piVar1 = (int *)FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return piVar1;
}

