// name: FUN_00446e8c
// address: 0x446e8c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00446e8c(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  if (*(int *)(*(int *)(param_1 + 4) + 0xc) == 0) {
    return;
  }
  iVar1 = param_2;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30) <= param_2) {
    iVar1 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30);
  }
  if (iVar1 < 0) {
    param_2 = 0;
  }
  else if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30) <= param_2) {
    param_2 = *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x30);
  }
  iVar1 = param_3;
  if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34) <= param_3) {
    iVar1 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34);
  }
  if (iVar1 < 0) {
    param_3 = 0;
  }
  else if (*(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34) <= param_3) {
    param_3 = *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x34);
  }
  if ((param_2 == *(int *)(param_1 + 8)) && (param_3 == *(int *)(param_1 + 0xc))) {
    return;
  }
  if (*(char *)(param_1 + 0x3a) == '\0') {
    if (*(int *)(param_1 + 0xc) - param_3 < 0) {
      iVar1 = -(*(int *)(param_1 + 0xc) - param_3);
    }
    else {
      iVar1 = *(int *)(param_1 + 0xc) - param_3;
    }
    if (iVar1 < *(int *)(param_1 + 0x34)) {
      if (*(int *)(param_1 + 8) - param_2 < 0) {
        iVar1 = -(*(int *)(param_1 + 8) - param_2);
      }
      else {
        iVar1 = *(int *)(param_1 + 8) - param_2;
      }
      if (iVar1 < *(int *)(param_1 + 0x30)) goto LAB_00446f56;
    }
    (**(code **)(*(int *)(*(int *)(param_1 + 4) + 8) + 0x68))();
  }
  else {
LAB_00446f56:
    ScrollWindow(*(HWND *)(*(int *)(param_1 + 4) + 0xc),
                 (*(int *)(param_1 + 8) - param_2) * *(int *)(param_1 + 0x20),
                 (*(int *)(param_1 + 0xc) - param_3) * *(int *)(param_1 + 0x24),(RECT *)0x0,
                 (RECT *)0x0);
  }
  *(int *)(param_1 + 8) = param_2;
  *(int *)(param_1 + 0xc) = param_3;
  UpdateWindow(*(HWND *)(*(int *)(param_1 + 4) + 0xc));
  return;
}

