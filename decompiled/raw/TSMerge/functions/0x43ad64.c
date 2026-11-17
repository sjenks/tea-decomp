// name: FUN_0043ad64
// address: 0x43ad64
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043ad64(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_00455f04(0x46d5a8);
  FUN_00414cb8(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  IsClipboardFormatAvailable(1);
  (**(code **)*param_2)();
  FUN_00414e0c(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

