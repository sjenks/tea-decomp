// name: FUN_00421ec8
// address: 0x421ec8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421ec8(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x1d) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x1d));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x1d) = 0;
  }
  return;
}

