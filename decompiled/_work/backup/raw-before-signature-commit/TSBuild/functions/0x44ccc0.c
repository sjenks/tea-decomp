// name: FUN_0044ccc0
// address: 0x44ccc0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044ccc0(int *param_1,undefined4 param_2)

{
  uint *puVar1;
  
  *(undefined4 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 0x15) = param_2;
  *(undefined4 *)((int)param_1 + 0x21) = 0;
  *(undefined4 *)((int)param_1 + 0x25) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  *(undefined4 *)((int)param_1 + 0x1d) = 0;
  *(undefined4 *)((int)param_1 + 0x42) = 0;
  *(undefined4 *)((int)param_1 + 0x46) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  FUN_0044d2f0(param_1,DAT_00484890,32000);
  FUN_0044d37c(param_1,DAT_00484890,0x7d01);
  *(undefined4 *)((int)param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x3e) = 0xffffffff;
  if (*(int *)((int)param_1 + 0x15) != 0) {
    (**(code **)(*(int *)(*(int *)((int)param_1 + 0x15) + 8) + 0x34))();
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x15) + 0x74);
    *puVar1 = *puVar1 | 2;
    *(undefined4 *)(*param_1 + 0x5c) = DAT_0048c658;
  }
  return;
}

