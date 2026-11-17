// name: FUN_00429b3c
// address: 0x429b3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00429b3c(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  if (*param_2 == '\0') {
    *param_2 = '\x01';
    if ((param_2[10] & 0xfU) == 0) {
      if ((param_2[9] & 0xfU) == 0) {
        *(undefined4 *)(param_2 + 0x31) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x20);
      }
      else {
        *(int *)(param_2 + 0x43) =
             *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[10] << 0x1c) >> 0x1c == 5) && ((param_2[9] & 0xfU) != 4)) {
      if ((param_2[10] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0xc);
      }
      else {
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0xc));
      }
      if ((param_2[9] & 0xfU) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = 2;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 5),0);
    }
    if ((param_2[0x15] & 0xfU) == 0) {
      if ((param_2[0x14] & 0xfU) == 1) {
        *(undefined4 *)(param_2 + 0x3a) = *(undefined4 *)(*(int *)(param_2 + 1) + 0x24);
      }
      else {
        *(int *)(param_2 + 0x4c) =
             *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1;
      }
    }
    else if (((int)((uint)(byte)param_2[0x15] << 0x1c) >> 0x1c == 5) &&
            ((param_2[0x14] & 0xfU) != 4)) {
      if ((param_2[0x15] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x17);
      }
      else {
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x17));
      }
      if ((param_2[0x14] & 0xfU) == 1) {
        iVar2 = 1;
      }
      else {
        iVar2 = 3;
      }
      *(int *)(param_2 + iVar2 * 9 + 0x31) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x10),1);
    }
    if (((param_2[0x1f] & 0xfU) == 2) &&
       (((param_2[0x20] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x20] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x20] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x20) + *(int *)(*(int *)(param_2 + 1) + 0x28) + -1
        ;
      }
      else if ((param_2[0x20] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x22);
      }
      else {
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x22));
      }
      *(int *)(param_2 + 0x43) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x1b),2);
    }
    if (((param_2[0x2a] & 0xfU) == 3) &&
       (((param_2[0x2b] & 0xfU) == 0 || ((int)((uint)(byte)param_2[0x2b] << 0x1c) >> 0x1c == 5)))) {
      if ((param_2[0x2b] & 0xfU) == 0) {
        iVar1 = *(int *)(*(int *)(param_2 + 1) + 0x24) + *(int *)(*(int *)(param_2 + 1) + 0x2c) + -1
        ;
      }
      else if ((param_2[0x2b] & 0xf0U) == 0) {
        iVar1 = *(int *)(param_2 + 0x2d);
      }
      else {
        iVar1 = FUN_00429d28((int)param_1,*(int *)(param_2 + 0x2d));
      }
      *(int *)(param_2 + 0x4c) = iVar1;
    }
    else {
      FUN_0042962c(param_1,(int)param_2,(int *)(param_2 + 0x26),3);
    }
  }
  return;
}

