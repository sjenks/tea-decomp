// name: FUN_00441e98
// address: 0x441e98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00441e98(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined **local_38 [2];
  undefined4 local_30;
  int local_2a;
  undefined ***local_26;
  
  FUN_00467ba8(0x4804d0);
  if (param_2 == (int *)0x0) {
    piVar2 = (int *)0x0;
    *in_FS_OFFSET = local_5c;
  }
  else {
    cVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x68))();
    if (cVar1 == '\0') {
      piVar2 = (int *)0x0;
      *in_FS_OFFSET = local_5c;
    }
    else {
      if (param_4 == 0) {
        local_38[0] = &PTR_FUN_00480a7c;
        local_30 = 0;
        local_2a = param_1;
        local_26 = local_38;
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
        FUN_00444934((int *)local_38,2);
      }
      else {
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
      }
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
        *in_FS_OFFSET = local_5c;
      }
      else {
        FUN_00444da8((int)piVar2,(int)param_2);
        piVar2 = FUN_00441ff4(param_1,piVar2,param_3,param_5);
        *in_FS_OFFSET = local_5c;
      }
    }
  }
  return piVar2;
}

