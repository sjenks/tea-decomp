// name: FUN_0044aae4
// address: 0x44aae4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044aae4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 in_EAX;
  
  iVar1 = *(int *)(param_2 + 8);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x3a) == 0x7538)) {
    iVar1 = *(int *)(iVar1 + 0x3e);
  }
  while (iVar1 != 0) {
    iVar1 = *(int *)(iVar1 + 0x3e);
    in_EAX = (**(code **)(*(int *)(param_2 + 0x18) + 0x1c))();
  }
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}

