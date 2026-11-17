// name: FUN_0048d3a4
// address: 0x48d3a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048d3a4(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x505d40);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_00505d60;
    FUN_0048db40(param_1);
    if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
      DeleteDC((HDC)*param_1);
    }
    FUN_0048d8bc(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

