// name: FUN_0042d9c0
// address: 0x42d9c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042d9c0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_14 [4];
  
  FUN_004a5774(*param_1);
  FUN_0045c448(param_1[0x38],(int)param_1,1);
  if (param_1[0x44] == -1) {
    param_1[0x44] = 0;
    iVar1 = FUN_0042ba08((int)param_1);
    if (0 < iVar1) {
      FUN_0042ecfc(param_1);
    }
  }
  else {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    uVar2 = FUN_00430290(param_1,param_1[0x44],1,local_14);
    if ((char)uVar2 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  FUN_00430438(param_1);
  return;
}

