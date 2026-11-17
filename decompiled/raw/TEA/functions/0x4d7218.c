// name: FUN_004d7218
// address: 0x4d7218
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d7218(int param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_c = FUN_004d0a2c();
    piVar2 = &local_c;
    local_8 = FUN_004d34bc(*(int **)(param_1 + 8),param_2);
    bVar1 = FUN_004d1694(&local_8,piVar2);
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return param_1;
}

