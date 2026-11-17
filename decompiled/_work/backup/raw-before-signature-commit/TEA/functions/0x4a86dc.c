// name: FUN_004a86dc
// address: 0x4a86dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004a86dc(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x50b438);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0050b4e8;
    FUN_0048db40(param_1);
    if ((char)param_1[1] != '\0') {
      ReleaseDC(*(HWND *)((int)param_1 + 0x21),(HDC)*param_1);
    }
    *param_1 = 0;
    FUN_0048d8bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

