// name: FUN_00462230
// address: 0x462230
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00462230(int param_1,undefined1 param_2)

{
  bool bVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    local_c = FUN_0045b17c();
    piVar2 = &local_c;
    local_8 = FUN_0045de6c(*(int **)(param_1 + 8),param_2);
    bVar1 = FUN_0045bde4(&local_8,piVar2);
    if (bVar1) {
      *(undefined1 *)(param_1 + 0xc) = 1;
    }
  }
  return param_1;
}

