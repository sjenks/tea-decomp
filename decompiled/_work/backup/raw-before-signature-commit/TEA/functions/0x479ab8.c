// name: FUN_00479ab8
// address: 0x479ab8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00479ab8(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar2) break;
    iVar1 = *(int *)(uVar2 * 4 + *(int *)(param_1 + 4));
    if (iVar1 != 0) {
      FUN_004347e4(iVar1,param_2);
      FUN_00434818(iVar1,param_3);
    }
    uVar2 = uVar2 + 1;
  }
  return;
}

