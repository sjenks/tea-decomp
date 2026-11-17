// name: FUN_004b69fc
// address: 0x4b69fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004b69fc(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_004dce64(0x50e2e8);
  FUN_0048ba8c(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  IsClipboardFormatAvailable(1);
  (**(code **)*param_2)();
  FUN_0048bbe0(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

