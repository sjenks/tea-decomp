// name: FUN_00421698
// address: 0x421698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421698(int *param_1,byte param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47a194);
  if (param_1 != (int *)0x0) {
    *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047a1b4;
    FUN_00421ef4(param_1);
    if (((char)param_1[1] != '\0') && (*param_1 != 0)) {
      DeleteDC((HDC)*param_1);
    }
    FUN_00421cb4(param_1,0);
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

