// name: FUN_004307e4
// address: 0x4307e4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004307e4(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined1 local_14 [8];
  int local_c;
  
  if (*(int *)(param_1 + 0x104) != -1) {
    if (*(int *)(param_1 + 0x104) < *(int *)(param_1 + 0x110)) {
      iVar2 = *(int *)(param_1 + 0x104);
    }
    else {
      iVar2 = *(int *)(param_1 + 0x110);
    }
    if (*(int *)(param_1 + 0x110) < *(int *)(param_1 + 0x104)) {
      iVar3 = *(int *)(param_1 + 0x104);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x110);
    }
    if ((iVar2 <= param_2) && (param_2 <= iVar3)) {
      if (*(int *)(param_1 + 0x108) == 0) {
        return 0;
      }
      return 1;
    }
  }
  local_c = *(int *)(*(int *)(param_1 + 0x9c) + 8);
  while( true ) {
    if (*(int *)(param_1 + 0x9c) == local_c) {
      return 0;
    }
    if ((param_2 < *(int *)(local_c + 0x10)) ||
       (*(int *)(local_c + 0x10) + *(int *)(local_c + 0x14) <= param_2)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if (bVar1) break;
    FUN_0042ba94((int)local_14);
  }
  return 1;
}

