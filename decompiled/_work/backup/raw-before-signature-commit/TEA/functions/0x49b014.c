// name: FUN_0049b014
// address: 0x49b014
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049b014(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x508890);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_005088b0;
    FUN_0048db40(param_1);
    if ((char)param_1[1] != '\0') {
      EndPaint(*(HWND *)((int)param_1 + 0x61),(PAINTSTRUCT *)((int)param_1 + 0x21));
    }
    FUN_0048d8bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

