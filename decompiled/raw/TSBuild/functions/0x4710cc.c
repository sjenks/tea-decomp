// name: FUN_004710cc
// address: 0x4710cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_004710cc(int param_1)

{
  char cVar1;
  int *piVar2;
  UINT UVar3;
  char cVar4;
  int *piVar5;
  char *pcVar6;
  int local_10;
  undefined1 local_c [8];
  
  DAT_0048aa90 = *(uint *)(param_1 + 0x10) & 1;
  FUN_0046dd94();
  FUN_0046e1dc(*(undefined **)(param_1 + 0x1c),*(undefined **)(param_1 + 0x20));
  FUN_004697a4(*(undefined **)(param_1 + 0x28));
  FUN_004697b4(*(undefined4 **)(param_1 + 0x44));
  _DAT_0048d8d8 = 1;
  _DAT_0048d8dc = param_1;
  DAT_0048d8c4 = local_c;
  FUN_00468a18();
  DAT_0048d8b4 = GetEnvironmentStrings();
  DAT_0048d8b0 = GetCommandLineA();
  FUN_004704ac(*(undefined4 **)(param_1 + 0x2c),*(undefined4 **)(param_1 + 0x30));
  FUN_004704f0(*(undefined **)(param_1 + 0x34),*(undefined **)(param_1 + 0x38),
               *(undefined **)(param_1 + 0x3c),*(undefined **)(param_1 + 0x40));
  piVar2 = (int *)FUN_00470f84();
  if (piVar2 != (int *)0x0) {
    piVar2[*piVar2 + 1] = -1;
    FUN_00470f8c(piVar2,0);
    piVar5 = piVar2;
    for (local_10 = 0; piVar5 = piVar5 + 1, local_10 < *piVar2; local_10 = local_10 + 1) {
      (**(code **)(*piVar5 + 0x18))();
    }
  }
  FUN_00470f8c((int *)&DAT_0048d8d8,0);
  pcVar6 = DAT_0048d8b0;
  if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_00470404(UVar3);
  }
  else {
    for (; (*pcVar6 == ' ' || (*pcVar6 == '\t')); pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      cVar4 = '\"';
      pcVar6 = pcVar6 + 1;
    }
    else {
      cVar4 = ' ';
    }
    for (; ((cVar1 = *pcVar6, cVar1 != '\0' && (cVar4 != cVar1)) && (cVar1 != '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    if (*pcVar6 == '\"') {
      pcVar6 = pcVar6 + 1;
    }
    for (; ((cVar4 = *pcVar6, cVar4 != '\0' && (cVar4 == ' ')) || (cVar4 == '\t'));
        pcVar6 = pcVar6 + 1) {
    }
    FUN_00471250();
    GetModuleHandleA((LPCSTR)0x0);
    UVar3 = (**(code **)(param_1 + 0x18))();
    FUN_00470404(UVar3);
  }
  return;
}

