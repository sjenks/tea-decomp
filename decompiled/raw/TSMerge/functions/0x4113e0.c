// name: FUN_004113e0
// address: 0x4113e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004113e0(int *param_1)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_30;
  
  FUN_00455f04(0x465061);
  if (*param_1 == 0) {
    if (param_1[1] != 0) {
      (*(code *)**(undefined4 **)(param_1[1] + 0x1b))();
    }
    param_1[1] = 0;
  }
  *in_FS_OFFSET = local_30;
  return;
}

