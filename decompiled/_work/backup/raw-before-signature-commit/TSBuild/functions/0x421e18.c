// name: FUN_00421e18
// address: 0x421e18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00421e18(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 9) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 9));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 9) = 0;
  }
  return;
}

