// name: FUN_00405368
// address: 0x405368
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00405368(int *param_1,int *param_2)

{
  if (*(uint *)(*param_1 + 0xc) < *(uint *)(*param_2 + 0xc)) {
    return 1;
  }
  if (*(uint *)(*param_2 + 0xc) < *(uint *)(*param_1 + 0xc)) {
    return 0xffffffff;
  }
  return 0;
}

