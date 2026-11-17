// name: FUN_0048da38
// address: 0x48da38
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0048da38(undefined4 *param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(int *)((int)param_1 + 0xd) != 0) {
    pvVar1 = SelectObject((HDC)*param_1,*(HGDIOBJ *)((int)param_1 + 0xd));
    FUN_00493eb4((uint)pvVar1);
    *(undefined4 *)((int)param_1 + 0xd) = 0;
  }
  return;
}

