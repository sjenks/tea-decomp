// name: FUN_00469f48
// address: 0x469f48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00469f48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_2 + 0x10)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        local_8 = param_1 + 0x58;
      }
      else if (iVar2 == 0) {
        local_8 = *(int *)(param_1 + 0x1c);
      }
      else {
        local_8 = *(int *)(param_1 + 0x3c);
      }
      iVar1 = *(int *)(param_2 + 0x20) - *(int *)(param_2 + 0x1c);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 0xf;
      }
      if (iVar1 >> 4 == 0) {
        local_c = param_2 + 0x58;
      }
      else if (iVar2 == 0) {
        local_c = *(int *)(param_2 + 0x1c);
      }
      else {
        local_c = *(int *)(param_2 + 0x3c);
      }
      iVar1 = FUN_00469e1c(local_8,local_c,&local_14);
      if (iVar1 != 0) {
        return iVar1 < 0;
      }
      iVar2 = iVar2 + 1;
      local_10 = 0;
    } while (iVar2 < 2);
    bVar3 = false;
  }
  else {
    bVar3 = *(int *)(param_1 + 0x10) - *(int *)(param_2 + 0x10) < 0;
  }
  return bVar3;
}

