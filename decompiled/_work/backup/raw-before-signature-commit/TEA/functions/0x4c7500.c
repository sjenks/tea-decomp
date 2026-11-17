// name: FUN_004c7500
// address: 0x4c7500
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __stdcall FUN_004c7500(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00499da0(param_2,iVar1 + 8,4);
  FUN_00499da0(param_2,iVar1 + 0xc,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x20) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x24) = uVar2;
  FUN_00499da0(param_2,iVar1 + 0x10,4);
  FUN_00499da0(param_2,iVar1 + 0x14,4);
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x28) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x2c) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x30) = uVar2;
  uVar2 = FUN_00499e9c(param_2);
  *(uint *)(iVar1 + 0x34) = uVar2;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x38) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x39) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3a) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3b) = iVar3 != 0;
  iVar3 = FUN_00499f04(param_2);
  *(bool *)(iVar1 + 0x3c) = iVar3 != 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  return iVar1;
}

