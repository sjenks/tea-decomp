// name: FUN_004b2980
// address: 0x4b2980
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004b2980(int param_1,int *param_2,int param_3,uint param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_50;
  
  FUN_004dce64(0x50d480);
  iVar2 = *(int *)((int)param_2 + 0x22);
  if (iVar2 == 0) {
    *in_FS_OFFSET = local_50;
    return (int *)0x0;
  }
  uVar3 = param_4 ^ *(uint *)(iVar2 + 0x14);
  if ((uVar3 & 0x80000000) == 0) {
    if (param_3 == 0) {
      iVar2 = FUN_004b5254(iVar2);
      if (iVar2 == 0) {
        *in_FS_OFFSET = local_50;
        return (int *)0x0;
      }
      iVar2 = (**(code **)(*(int *)(param_1 + 8) + 0x60))();
      if (iVar2 == 0) {
        if (param_2 != (int *)0x0) {
          (**(code **)*param_2)();
        }
        *in_FS_OFFSET = local_50;
        return (int *)0x0;
      }
    }
    (**(code **)(*param_2 + 0x20))();
    cVar1 = (**(code **)(*param_2 + 0x58))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      (**(code **)(*param_2 + 0x20))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *in_FS_OFFSET = local_50;
      return (int *)0x0;
    }
    if (((uVar3 & 0x8000000) != 0) && (cVar1 = (**(code **)(*param_2 + 0xc))(), cVar1 == '\0')) {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      (**(code **)(*param_2 + 0x20))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *in_FS_OFFSET = local_50;
      return (int *)0x0;
    }
  }
  else {
    (**(code **)(*param_2 + 0x20))();
    cVar1 = (**(code **)(*param_2 + 0x58))();
    if (cVar1 == '\0') {
      (**(code **)(*(int *)(param_1 + 8) + 0x4c))();
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
      *in_FS_OFFSET = local_50;
      return (int *)0x0;
    }
  }
  if (((uVar3 & 0x20000000) == 0) &&
     (iVar2 = FUN_004b2d18(param_1,(int)param_2,(int *)0x0), iVar2 == 0)) {
    if ((uVar3 & 0x40000000) != 0) {
      cVar1 = (**(code **)(*param_2 + 0x2c))();
      if (cVar1 != '\0') {
        (**(code **)(*param_2 + 0x10))();
      }
      if (param_2 != (int *)0x0) {
        (**(code **)*param_2)();
      }
    }
    param_2 = (int *)0x0;
    *in_FS_OFFSET = local_50;
  }
  else {
    (**(code **)(*(int *)(param_1 + 8) + 0x50))();
    *in_FS_OFFSET = local_50;
  }
  return param_2;
}

