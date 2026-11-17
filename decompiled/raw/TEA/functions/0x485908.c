// name: FUN_00485908
// address: 0x485908
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00485908(int param_1,short param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10;
  *(short *)(param_1 + 0x1a) = param_2;
  puVar2 = (undefined4 *)(param_1 + 0x1c);
  for (iVar3 = 0; iVar3 < param_2; iVar3 = iVar3 + 1) {
    uVar1 = *param_3;
    param_3 = param_3 + 1;
    *puVar2 = uVar1;
    puVar2 = puVar2 + 1;
  }
  return;
}

