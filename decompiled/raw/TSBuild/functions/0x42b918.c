// name: FUN_0042b918
// address: 0x42b918
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0042b918(int *param_1,undefined4 *param_2)

{
  HDC pHVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x47c028);
  FUN_00421638(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0047c090;
  pHVar1 = CreateCompatibleDC((HDC)*param_2);
  *param_1 = (int)pHVar1;
  FUN_00427974(param_1,0x7fe3);
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

