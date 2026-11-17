// name: FUN_0042ba5c
// address: 0x42ba5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ba5c(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0x21) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0x21));
    FUN_004282f8((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0x21) = 0;
  }
  return;
}

