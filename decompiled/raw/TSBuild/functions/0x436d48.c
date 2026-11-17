// name: FUN_00436d48
// address: 0x436d48
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl
FUN_00436d48(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  bVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x6c);
  piVar3 = (int *)(iVar2 + 0x57);
  local_14 = *piVar3;
  local_10 = *(undefined4 *)(iVar2 + 0x5b);
  local_c = *(undefined4 *)(iVar2 + 0x5f);
  local_8 = *(undefined4 *)(iVar2 + 99);
  *piVar3 = param_1;
  *(undefined4 *)(iVar2 + 0x5b) = param_2;
  *(undefined4 *)(iVar2 + 0x5f) = param_3;
  *(undefined4 *)(iVar2 + 99) = param_4;
  uVar1 = (**(code **)(*(int *)(param_1 + 8) + 0x40))();
  piVar4 = &local_14;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *piVar4;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  return uVar1;
}

