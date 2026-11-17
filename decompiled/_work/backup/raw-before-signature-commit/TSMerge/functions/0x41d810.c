// name: FUN_0041d810
// address: 0x41d810
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041d810(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((((*param_2 == 0) && (param_2[2] == 0)) && (param_2[1] == 0)) && (param_2[3] == 0)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if (!bVar1) {
    if (((*param_1 == 0) && (param_1[2] == 0)) && ((param_1[1] == 0 && (param_1[3] == 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    if (bVar1) {
      for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
        *param_1 = *param_2;
        param_2 = param_2 + 1;
        param_1 = param_1 + 1;
      }
    }
    else {
      if (*param_1 < *param_2) {
        iVar2 = *param_1;
      }
      else {
        iVar2 = *param_2;
      }
      *param_1 = iVar2;
      if (param_1[1] < param_2[1]) {
        iVar2 = param_1[1];
      }
      else {
        iVar2 = param_2[1];
      }
      param_1[1] = iVar2;
      if (param_2[2] < param_1[2]) {
        iVar2 = param_1[2];
      }
      else {
        iVar2 = param_2[2];
      }
      param_1[2] = iVar2;
      if (param_2[3] < param_1[3]) {
        iVar2 = param_1[3];
      }
      else {
        iVar2 = param_2[3];
      }
      param_1[3] = iVar2;
    }
  }
  return;
}

