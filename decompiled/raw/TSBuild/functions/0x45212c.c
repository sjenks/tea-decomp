// name: FUN_0045212c
// address: 0x45212c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045212c(int *param_1,undefined4 param_2,int param_3)

{
  switch(param_2) {
  case 0:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 1:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 2:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 3:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 4:
    if (0x7fff < param_1[5]) {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[5]) % 0x7fff,0x7fff,param_1,param_1[2],
                 (param_3 * param_1[5]) / 0x7fff);
      return;
    }
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 5:
    break;
  case 6:
    (**(code **)(*param_1 + 0x2c))();
    return;
  case 7:
    (**(code **)(*param_1 + 0x2c))();
    return;
  default:
    return;
  }
  if (*(char *)((int)param_1 + 0x39) != '\0') {
    if (param_1[5] < 0x8000) {
      (**(code **)(*param_1 + 0x2c))();
    }
    else {
      (**(code **)(*param_1 + 0x2c))
                (*param_1,(param_3 * param_1[5]) % 0x7fff,0x7fff,param_1,param_1[2],
                 (param_3 * param_1[5]) / 0x7fff);
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  if ((char)param_1[0xf] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x54))();
  return;
}

