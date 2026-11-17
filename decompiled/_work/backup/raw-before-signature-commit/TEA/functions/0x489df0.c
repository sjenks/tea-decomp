// name: FUN_00489df0
// address: 0x489df0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_00489df0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,int param_4,
            undefined4 param_5,int param_6)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x504de4);
  *param_1 = &PTR_FUN_00504fbc;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = 0;
  *(undefined4 *)((int)param_1 + 0x19) = 0;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 9) = 0;
  *(undefined4 *)((int)param_1 + 0xd) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = *param_2;
  *(undefined4 *)((int)param_1 + 0x19) = param_2[1];
  if (param_4 < 2) {
    param_4 = 1;
  }
  *(int *)((int)param_1 + 0x11) = param_4;
  *(undefined4 *)((int)param_1 + 0x1d) = param_5;
  *(undefined4 *)((int)param_1 + 0x2d) = 0;
  if (param_6 < 1) {
    param_6 = 1;
  }
  *(int *)((int)param_1 + 0x29) = param_6;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[1] = 0;
  FUN_0048a404((int)param_1,*(int *)((int)param_1 + 0x11));
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *in_FS_OFFSET = local_28;
  return param_1;
}

