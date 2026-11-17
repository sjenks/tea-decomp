// name: FUN_0045d9e8
// address: 0x45d9e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d9e8(int param_1)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 0xc88) - *(int *)(param_1 + 0xc84);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    piVar2 = (int *)(*(int *)(param_1 + 0xc84) + uVar3 * 4);
    if (*piVar2 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(*piVar2 + 8);
    }
    piVar2 = FUN_004dd744(*piVar2,iVar1,(int *)&DAT_0040299c,(int *)&DAT_0045da64,0);
    if (piVar2 != (int *)0x0) {
      FUN_00473488(piVar2);
    }
    uVar3 = uVar3 + 1;
  }
  return;
}

