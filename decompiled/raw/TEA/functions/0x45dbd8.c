// name: FUN_0045dbd8
// address: 0x45dbd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045dbd8(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = param_1[0x322] - param_1[0x321];
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    if (param_2 != *(int *)(uVar2 * 4 + param_1[0x321])) {
      (**(code **)(*(int *)(*(int *)(uVar2 * 4 + param_1[0x321]) + 8) + 0x60))();
    }
    uVar2 = uVar2 + 1;
  }
  if (param_2 != *param_1) {
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x14) + 8) + 0x60))();
  }
  return;
}

