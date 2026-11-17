// name: FUN_0042f5ac
// address: 0x42f5ac
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042f5ac(int *param_1,uint param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47cc5c);
  if (param_1 != (int *)0x0) {
    FUN_0042bcb0((undefined4 *)((int)param_1 + 0x86),0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + -0x11;
    FUN_00435f74(param_1,0);
    *(int *)(*param_1 + -4) = *(int *)(*param_1 + -4) + 0x11;
    if ((param_2 & 2) != 0) {
      FUN_0041e99c((undefined4 *)((int)param_1 + 0x9f),0);
    }
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = local_28;
  return;
}

