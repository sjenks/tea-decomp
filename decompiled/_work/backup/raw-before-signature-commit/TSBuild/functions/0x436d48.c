// name: FUN_00436d48
// address: 0x436d48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00436d48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  byte bVar4;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x6c);
  piVar2 = (int *)(iVar1 + 0x57);
  local_14 = *piVar2;
  local_10 = *(undefined4 *)(iVar1 + 0x5b);
  local_c = *(undefined4 *)(iVar1 + 0x5f);
  local_8 = *(undefined4 *)(iVar1 + 99);
  *piVar2 = param_1;
  *(undefined4 *)(iVar1 + 0x5b) = param_2;
  *(undefined4 *)(iVar1 + 0x5f) = param_3;
  *(undefined4 *)(iVar1 + 99) = param_4;
  (**(code **)(*(int *)(param_1 + 8) + 0x40))();
  piVar3 = &local_14;
  for (iVar1 = 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = *piVar3;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
    piVar2 = piVar2 + (uint)bVar4 * -2 + 1;
  }
  return;
}

