// name: FUN_004be1e0
// address: 0x4be1e0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004be1e0(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL BVar1;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_004c1ed0();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_004c1e90();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (BVar1 != 0) {
      in_EAX = FUN_004a76a8(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

