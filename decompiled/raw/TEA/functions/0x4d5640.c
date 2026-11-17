// name: FUN_004d5640
// address: 0x4d5640
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004d5640(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_c;
  int local_8;
  
  if (0 < param_3) {
    iVar2 = FUN_004d0724();
    if (iVar2 == param_1[9]) {
      if (param_2 == 0) {
        param_1[0xc] = param_3;
      }
      else {
        param_1[0xc] = param_3 + -1;
        param_1[0x10] = param_2;
        FUN_004d1898((int)param_1,0,0);
        FUN_004d187c((int)param_1,0,0,0);
        *(undefined1 *)((int)param_1 + 0x29) = 0;
        *(undefined1 *)(param_1 + 10) = 0;
      }
    }
    else {
      local_c = FUN_004d0a2c();
      piVar3 = &local_c;
      FUN_004d0a2c();
      local_8 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_004d1694(&local_8,piVar3);
      if (!bVar1) {
        if (param_2 == 0) {
          param_1[0xc] = param_3;
          iVar2 = FUN_004cc180();
          FUN_004cc0cc();
          param_1[0x10] = iVar2;
        }
        else {
          FUN_004cc0cc();
          param_1[0xc] = param_3 + -1;
          param_1[0x10] = param_2;
        }
        FUN_004d1898((int)param_1,0,0);
        FUN_004d187c((int)param_1,0,0,0);
        *(undefined1 *)(param_1 + 10) = 0;
        *(undefined1 *)((int)param_1 + 0x29) = 0;
      }
    }
  }
  return param_1;
}

