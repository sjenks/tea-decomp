// name: FUN_0045c368
// address: 0x45c368
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_0045c368(float *param_1,double *param_2,uint param_3)

{
  longdouble in_ST0;
  
  if ((param_3 & 4) == 0) {
    if ((param_3 & 8) == 0) {
      FUN_0045b600(0,*param_1,param_1[1],*(ushort *)(param_1 + 2));
      *(float *)param_2 = (float)in_ST0;
    }
    else {
      *(float *)param_2 = *param_1;
      *(float *)((int)param_2 + 4) = param_1[1];
      *(undefined2 *)(param_2 + 1) = *(undefined2 *)(param_1 + 2);
    }
  }
  else {
    FUN_0045b600(1,*param_1,param_1[1],*(ushort *)(param_1 + 2));
    *param_2 = (double)in_ST0;
  }
  return;
}

