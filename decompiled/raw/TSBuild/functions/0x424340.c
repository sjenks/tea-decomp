// name: FUN_00424340
// address: 0x424340
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424340(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_0042436e;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_0042436e;
    }
  }
  uVar2 = 0;
LAB_0042436e:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_004268bc(*(int *)(param_1 + 6));
  }
  return;
}

