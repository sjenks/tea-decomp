// name: FUN_0042da58
// address: 0x42da58
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042da58(int *param_1)

{
  undefined4 uVar1;
  int local_14 [4];
  
  FUN_004a61cc(*param_1);
  FUN_0045c448(param_1[0x38],(int)param_1,0);
  if (param_1[0x44] != -1) {
    local_14[0] = 0;
    local_14[1] = 0;
    local_14[2] = 0;
    local_14[3] = 0;
    uVar1 = FUN_00430290(param_1,param_1[0x44],1,local_14);
    if ((char)uVar1 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
  }
  FUN_00430438(param_1);
  return;
}

