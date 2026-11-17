// name: FUN_0042292c
// address: 0x42292c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0042292c(int *param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 in_ECX;
  
  if (*(int *)(*param_1 + 8) == 0) {
    iVar2 = (**(code **)(**(int **)(*param_1 + 4) + 0x18))();
    if (iVar2 != 2) {
      iVar2 = *param_1;
      *(undefined4 *)(iVar2 + 8) = 4;
    }
    uVar1 = CONCAT22((short)((uint)iVar2 >> 0x10),(short)((uint)in_ECX >> 0x10));
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

