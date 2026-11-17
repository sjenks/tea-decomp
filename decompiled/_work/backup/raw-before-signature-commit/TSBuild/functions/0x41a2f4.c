// name: FUN_0041a2f4
// address: 0x41a2f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041a2f4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_00467ba8(0x4780d4);
  FUN_0041fcdc(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  if (local_5 != '\0') {
    iVar1 = CountClipboardFormats();
    if (iVar1 != 0) {
      BVar2 = IsClipboardFormatAvailable(1);
      if (BVar2 == 0) {
        BVar2 = IsClipboardFormatAvailable(7);
        if (BVar2 == 0) {
          BVar2 = IsClipboardFormatAvailable(0xd);
          if (BVar2 == 0) goto LAB_0041a382;
        }
      }
      (**(code **)*param_2)();
      goto LAB_0041a38c;
    }
  }
LAB_0041a382:
  (**(code **)*param_2)();
LAB_0041a38c:
  FUN_0041fe30(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

