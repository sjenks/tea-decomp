// name: FUN_00416674
// address: 0x416674
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416674(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00455f04(0x4663e0);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00466400;
    FUN_00416d80(param_1);
    if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
      DeleteDC((HDC)*param_1);
    }
    FUN_00416b40(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

