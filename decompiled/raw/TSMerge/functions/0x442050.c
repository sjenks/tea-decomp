// name: FUN_00442050
// address: 0x442050
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00442050(int *param_1,HMENU param_2)

{
  BOOL BVar1;
  
  if ((*(byte *)(*param_1 + 0x74) & 0x10) != 0) {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x28))();
  }
  BVar1 = SetMenu(*(HWND *)(*param_1 + 0xc),param_2);
  return BVar1 != 0;
}

