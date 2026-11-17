// name: FUN_004191cc
// address: 0x4191cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004191cc(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined4 *)(param_1 + 0x1a) = param_2;
  iVar1 = *(int *)(param_1 + 0x1a);
  if (iVar1 != 0) {
    if (iVar1 - 1U < 3) {
      uVar2 = 1;
      goto LAB_004191fa;
    }
    if (iVar1 - 4U < 6) {
      uVar2 = 2;
      goto LAB_004191fa;
    }
  }
  uVar2 = 0;
LAB_004191fa:
  *(undefined4 *)(param_1 + 0x2a) = uVar2;
  *(undefined4 *)(param_1 + 0x22) = uVar2;
  *(undefined4 *)(param_1 + 0x26) = uVar2;
  *(undefined4 *)(param_1 + 0x1e) = uVar2;
  if (*(int *)(param_1 + 6) != 0) {
    FUN_0041b748(*(int *)(param_1 + 6));
  }
  return;
}

