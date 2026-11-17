// name: FUN_0044215c
// address: 0x44215c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044215c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_EAX;
  BOOL BVar1;
  
  if ((*(int *)((int)param_1 + 0x42) != 0) && (*(int *)((int)param_1 + 0x2a) != 0)) {
    FUN_0044511c();
    in_EAX = 0;
    *(undefined4 *)((int)param_1 + 0x42) = 0;
  }
  *(undefined4 *)((int)param_1 + 0x2a) = param_2;
  *(undefined4 *)((int)param_1 + 0x2e) = param_3;
  if (*(int *)((int)param_1 + 0x2a) != 0) {
    in_EAX = *(undefined4 *)((int)param_1 + 0x2a);
  }
  if (*(int *)((int)param_1 + 0x2e) != 0) {
    in_EAX = FUN_004450dc();
    *(undefined4 *)((int)param_1 + 0x42) = in_EAX;
  }
  if (*(int *)((int)param_1 + 0x42) != 0) {
    BVar1 = IsWindow(*(HWND *)(*param_1 + 0xc));
    in_EAX = 0;
    if (BVar1 != 0) {
      in_EAX = FUN_0042d1a4(*param_1,0x80,1,*(LPARAM *)((int)param_1 + 0x42));
    }
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

