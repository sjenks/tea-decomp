// name: FUN_004694c8
// address: 0x4694c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004694c8(int *param_1,undefined4 *param_2)

{
  BOOL BVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_004dce64(0x4fcee8);
  FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  BVar1 = IsClipboardFormatAvailable(1);
  if (BVar1 == 0) {
    BVar1 = IsClipboardFormatAvailable(7);
    if (BVar1 == 0) {
      (**(code **)*param_2)();
      goto LAB_0046953f;
    }
  }
  (**(code **)*param_2)();
LAB_0046953f:
  FUN_0048bbe0(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

