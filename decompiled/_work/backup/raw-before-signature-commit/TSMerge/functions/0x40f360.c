// name: FUN_0040f360
// address: 0x40f360
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040f360(int *param_1,undefined4 *param_2)

{
  int iVar1;
  BOOL BVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  char local_5;
  
  FUN_00455f04(0x464320);
  FUN_00414cb8(&local_5,*(HWND *)(*param_1 + 0xc),'\x01');
  if (local_5 != '\0') {
    iVar1 = CountClipboardFormats();
    if (iVar1 != 0) {
      BVar2 = IsClipboardFormatAvailable(1);
      if (BVar2 == 0) {
        BVar2 = IsClipboardFormatAvailable(7);
        if (BVar2 == 0) {
          BVar2 = IsClipboardFormatAvailable(0xd);
          if (BVar2 == 0) goto LAB_0040f3ee;
        }
      }
      (**(code **)*param_2)();
      goto LAB_0040f3f8;
    }
  }
LAB_0040f3ee:
  (**(code **)*param_2)();
LAB_0040f3f8:
  FUN_00414e0c(&local_5,2);
  *in_FS_OFFSET = local_28;
  return;
}

