// name: FUN_004519a8
// address: 0x4519a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004519a8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  int local_14;
  int local_c;
  int local_8;
  
  (**(code **)(*(int *)(param_1 + 0xc) + 0x24))();
  iVar2 = local_c;
  if ((param_2 <= local_c) && (iVar2 = param_2, param_2 < local_8)) {
    iVar2 = local_8;
  }
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x28))();
  if (iVar2 != iVar1) {
    FUN_004675f0(&local_28,0,0x1c);
    local_28 = 0x1c;
    local_24 = 4;
    local_14 = iVar2;
    (**(code **)(*(int *)(param_1 + 0xc) + 0x3c))();
  }
  return;
}

