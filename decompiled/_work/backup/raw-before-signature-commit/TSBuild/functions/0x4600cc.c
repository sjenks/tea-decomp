// name: FUN_004600cc
// address: 0x4600cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004600cc(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_0045ae74();
    if (iVar2 == param_1[9]) {
      if (param_2 == 0) {
        param_1[0xc] = param_3;
      }
      else {
        param_1[0xc] = param_3 + -1;
        param_1[0x10] = param_2;
        FUN_0045c008((int)param_1,0,0);
        FUN_0045bfec((int)param_1,0,0,0);
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    else {
      local_c = FUN_0045b17c();
      piVar3 = &local_c;
      FUN_0045b17c();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_0045bde4(&local_8,piVar3);
      if (!bVar1) {
        if (param_2 == 0) {
          param_1[0xc] = param_3;
          iVar2 = FUN_004568d0();
          FUN_0045681c();
          param_1[0x10] = iVar2;
        }
        else {
          FUN_0045681c();
          param_1[0xc] = param_3 + -1;
          param_1[0x10] = param_2;
        }
        FUN_0045c008((int)param_1,0,0);
        FUN_0045bfec((int)param_1,0,0,0);
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
      }
    }
  }
  return param_1;
}

