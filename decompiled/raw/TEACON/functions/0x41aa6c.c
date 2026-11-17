// name: FUN_0041aa6c
// address: 0x41aa6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0041aa6c(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_00417ee0();
    if (iVar2 == param_1[9]) {
      if (param_2 == 0) {
        param_1[0xc] = param_3;
      }
      else {
        param_1[0xc] = param_3 + -1;
        param_1[0x10] = param_2;
        FUN_00418dc4((int)param_1,0,0);
        FUN_00418da8((int)param_1,0,0,0);
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    else {
      local_c = FUN_004181e8();
      piVar3 = &local_c;
      FUN_004181e8();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_00418bc0(&local_8,piVar3);
      if (!bVar1) {
        if (param_2 == 0) {
          param_1[0xc] = param_3;
          iVar2 = FUN_0041503c();
          FUN_00414f88();
          param_1[0x10] = iVar2;
        }
        else {
          FUN_00414f88();
          param_1[0xc] = param_3 + -1;
          param_1[0x10] = param_2;
        }
        FUN_00418dc4((int)param_1,0,0);
        FUN_00418da8((int)param_1,0,0,0);
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
      }
    }
  }
  return param_1;
}

