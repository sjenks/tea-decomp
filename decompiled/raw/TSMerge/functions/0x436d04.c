// name: FUN_00436d04
// address: 0x436d04
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00436d04(int param_1,int *param_2,int param_3,int param_4,uint param_5)

{
  char cVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_5c;
  undefined **local_38 [2];
  undefined4 local_30;
  int local_2a;
  undefined ***local_26;
  
  FUN_00455f04(0x46c6f4);
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
        local_38[0] = &PTR_FUN_0046cca0;
        local_30 = 0;
        local_2a = param_1;
        local_26 = local_38;
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
        FUN_004397a0((int *)local_38,2);
      }
      else {
        piVar2 = (int *)(**(code **)(*param_2 + 4))();
      }
      if (piVar2 == (int *)0x0) {
        piVar2 = (int *)0x0;
        *in_FS_OFFSET = local_5c;
      }
      else {
        FUN_00439c14((int)piVar2,(int)param_2);
        piVar2 = FUN_00436e60(param_1,piVar2,param_3,param_5);
        *in_FS_OFFSET = local_5c;
      }
    }
  }
  return piVar2;
}

