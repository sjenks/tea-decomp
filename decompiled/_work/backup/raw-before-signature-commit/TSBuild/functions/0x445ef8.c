// name: FUN_00445ef8
// address: 0x445ef8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00445ef8(int *param_1,undefined4 *param_2)

{
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_00467ba8(0x481384);
  FUN_0041fcdc(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  IsClipboardFormatAvailable(1);
  (**(code **)*param_2)();
  FUN_0041fe30(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

