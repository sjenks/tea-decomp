// name: FUN_004e3c5c
// address: 0x4e3c5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e3c5c(longlong *param_1,longdouble *param_2)

{
  if (*(short *)((int)param_2 + 8) != 0x403e) {
    *param_1 = (longlong)ROUND(*param_2);
    return;
  }
  *(undefined4 *)param_1 = *(undefined4 *)param_2;
  *(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_2 + 4);
  return;
}

