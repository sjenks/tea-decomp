// name: FUN_00451f18
// address: 0x451f18
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00451f18(int *param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if ((param_1[1] != 0) && (*(int *)(param_1[1] + 0xc) != 0)) {
    if (*(char *)((int)param_1 + 0x3b) != '\0') {
      (**(code **)(*param_1 + 0x48))();
      if (param_1[4] + -1 < 0x7fff) {
        iVar1 = param_1[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (param_1[4] + -1 < 0x7fff) {
        iVar1 = param_1[4] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_c) || (local_8 != 0)) {
        (**(code **)(*param_1 + 0x4c))();
      }
    }
    if ((char)param_1[0xf] != '\0') {
      (**(code **)(*param_1 + 0x48))();
      if (param_1[5] + -1 < 0x7fff) {
        iVar1 = param_1[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      else if (param_1[5] + -1 < 0x7fff) {
        iVar1 = param_1[5] + -1;
      }
      else {
        iVar1 = 0x7fff;
      }
      if ((iVar1 != local_14) || (local_10 != 0)) {
        (**(code **)(*param_1 + 0x4c))();
      }
    }
  }
  return;
}

