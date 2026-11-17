// name: FUN_00446b54
// address: 0x446b54
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void FUN_00446b54(undefined4 param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4[1] != 0) {
    if (*(char *)((int)param_4 + 0x3b) != '\0') {
      if (param_4[4] < 0x8000) {
        iVar1 = param_4[2];
      }
      else {
        param_3 = param_4[2];
        iVar1 = (param_3 * 0x7fff) / param_4[4];
        param_2 = (param_3 * 0x7fff) % param_4[4];
      }
      iVar2 = (**(code **)(*param_4 + 0x50))(*param_4,param_2,param_3,param_4,0);
      if (iVar1 != iVar2) {
        (**(code **)(*param_4 + 0x54))();
      }
    }
    if ((char)param_4[0xf] != '\0') {
      if (param_4[5] < 0x8000) {
        iVar1 = param_4[3];
      }
      else {
        iVar1 = (param_4[3] * 0x7fff) / param_4[5];
      }
      iVar2 = (**(code **)(*param_4 + 0x50))();
      if (iVar1 != iVar2) {
        (**(code **)(*param_4 + 0x54))();
      }
    }
  }
  return;
}

