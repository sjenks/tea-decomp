// name: FUN_00428e48
// address: 0x428e48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428e48(int *param_1,undefined1 param_2)

{
  *(undefined1 *)((int)param_1 + 0x3d) = param_2;
  if (*(int *)(*param_1 + 0xc) != 0) {
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

