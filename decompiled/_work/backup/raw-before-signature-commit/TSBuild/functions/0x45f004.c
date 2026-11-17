// name: FUN_0045f004
// address: 0x45f004
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045f004(int *param_1,undefined1 *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined1 *)0x0) || (param_3 == 0)) {
    iVar2 = 0;
  }
  else if (param_1[0xc] < param_3) {
    local_c = FUN_0045b17c();
    piVar3 = &local_c;
    FUN_0045b17c();
    local_8 = (**(code **)(*param_1 + 0x24))();
    bVar1 = FUN_0045bde4(&local_8,piVar3);
    if (bVar1) {
      iVar2 = 0;
    }
    else {
      local_10 = FUN_0045de54((int)param_1);
      local_14 = FUN_0045bef8((int)param_1);
      local_18 = FUN_0045bf04((int)param_1);
      iVar2 = FUN_0045de48((int)param_1);
      local_1c = FUN_0045de3c((int)param_1);
      local_20 = FUN_0045de60((int)param_1);
      FUN_0045bfec((int)param_1,0,0,0);
      FUN_0045c008((int)param_1,param_2,param_2 + param_3);
      FUN_0045c020((int)param_1,param_3);
      local_28 = FUN_0045b17c();
      piVar3 = &local_28;
      FUN_0045b17c();
      local_24 = (**(code **)(*param_1 + 0x24))();
      bVar1 = FUN_0045bde4(&local_24,piVar3);
      if (bVar1) {
        iVar2 = 0;
      }
      else {
        FUN_0045bfec((int)param_1,local_10,local_14,local_18);
        FUN_0045c008((int)param_1,iVar2,local_20);
        FUN_0045c020((int)param_1,local_1c - iVar2);
        iVar2 = param_3;
      }
    }
  }
  else {
    for (iVar2 = 0; iVar2 < param_3; iVar2 = iVar2 + 1) {
      local_30 = FUN_0045b17c();
      piVar3 = &local_30;
      local_2c = FUN_0045de6c(param_1,*param_2);
      bVar1 = FUN_0045bde4(&local_2c,piVar3);
      if (bVar1) {
        return iVar2;
      }
      param_2 = param_2 + 1;
    }
  }
  return iVar2;
}

