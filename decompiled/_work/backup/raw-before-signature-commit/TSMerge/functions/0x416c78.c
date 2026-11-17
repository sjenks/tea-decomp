// name: FUN_00416c78
// address: 0x416c78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00416c78(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_0041d184((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

