// name: FUN_00430438
// address: 0x430438
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00430438(int *param_1)

{
  undefined4 uVar1;
  int aiStack_74 [5];
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  int iStack_3c;
  int iStack_2c;
  int iStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  int iStack_c;
  
  iStack_1c = *(int *)(param_1[0x27] + 8);
  iStack_c = iStack_1c;
  while( true ) {
    iStack_3c = param_1[0x27];
    if (iStack_3c == iStack_c) break;
    aiStack_74[0] = 0;
    aiStack_74[1] = 0;
    aiStack_74[2] = 0;
    aiStack_74[3] = 0;
    iStack_2c = iStack_3c;
    uVar1 = FUN_00430290(param_1,*(int *)(iStack_c + 0x10),*(int *)(iStack_c + 0x14),aiStack_74);
    if ((char)uVar1 != '\0') {
      (**(code **)(*(int *)(*param_1 + 8) + 0x6c))();
    }
    uStack_54 = uStack_14;
    uStack_50 = uStack_10;
    iStack_4c = iStack_c;
    FUN_0042ba94((int)&uStack_14);
    aiStack_74[4] = uStack_54;
    uStack_60 = uStack_50;
    iStack_5c = iStack_4c;
  }
  return;
}

