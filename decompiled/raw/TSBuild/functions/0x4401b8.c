// name: FUN_004401b8
// address: 0x4401b8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004401b8(int *param_1)

{
  if (*(char *)(*(int *)(*param_1 + 0x6c) + 0x52) != '\0') {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x53) + 0x1d))();
  }
  FUN_004402b8(param_1,*(uint **)(*param_1 + 0x10));
  FUN_00437c68(*param_1);
  return;
}

