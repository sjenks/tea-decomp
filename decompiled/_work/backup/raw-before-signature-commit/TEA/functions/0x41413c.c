// name: FUN_0041413c
// address: 0x41413c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041413c(int *param_1)

{
  int *piVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x4ed690);
  if ((param_1[0x15] != 0) && (param_1[0x16] == 0)) {
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,*(undefined4 *)(*param_1 + 0x14),'\x01',0);
    }
    param_1[0x16] = (int)piVar1;
    FUN_004a7910(*piVar1,2);
    (**(code **)(*(int *)(*(int *)param_1[0x16] + 8) + 0x10))();
    FUN_00417760(param_1,*(HWND *)(*(int *)param_1[0x16] + 0xc));
  }
  (**(code **)(*(int *)(*param_1 + 8) + 100))();
  BringWindowToTop(*(HWND *)(*param_1 + 0xc));
  param_1[0x10] = 1;
  *in_FS_OFFSET = local_2c;
  return;
}

