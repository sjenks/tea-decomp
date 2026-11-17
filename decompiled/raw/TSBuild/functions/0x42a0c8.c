// name: FUN_0042a0c8
// address: 0x42a0c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042a0c8(int *param_1)

{
  int local_8;
  
  local_8 = param_1[7];
  if (*param_1 != 0) {
    local_8 = local_8 + param_1[4] * *(int *)*param_1;
  }
  if (param_1[1] != 0) {
    local_8 = local_8 + param_1[5] * *(int *)param_1[1];
  }
  if (param_1[2] != 0) {
    local_8 = local_8 + param_1[6] * *(int *)param_1[2];
  }
  return local_8 >> 0x10;
}

