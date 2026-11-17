// name: FUN_0045d938
// address: 0x45d938
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045d938(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = FUN_00466b28(*(int *)(param_1 + 0x38));
  FUN_0041e940((undefined4 *)(param_1 + 0x800),(undefined4 *)(iVar1 + 0x70));
  FUN_0041e940((undefined4 *)(param_1 + 0x844),(undefined4 *)(iVar1 + 0xb0));
  uVar3 = 0;
  while( true ) {
    iVar2 = *(int *)(param_1 + 0x6b8) - *(int *)(param_1 + 0x6b4);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 3;
    }
    if ((uint)(iVar2 >> 2) <= uVar3) break;
    iVar2 = *(int *)(*(int *)(uVar3 * 4 + *(int *)(param_1 + 0x6b4)) + 8);
    FUN_0042dbdc(iVar2,(undefined4 *)(param_1 + 0x800),(undefined4 *)(param_1 + 0x844),
                 *(undefined4 *)(iVar1 + 0x70),*(undefined4 *)(iVar1 + 0xb0));
    (**(code **)(*(int *)(iVar2 + 0xc) + 0x24))();
    uVar3 = uVar3 + 1;
  }
  return;
}

