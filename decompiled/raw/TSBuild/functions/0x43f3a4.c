// name: FUN_0043f3a4
// address: 0x43f3a4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043f3a4(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(int *)(param_1[1] + 0xc) != 0) && (*(int *)(*param_1 + 0x25) != 0)) {
    iVar1 = (**(code **)(*(int *)((int)param_1 + 0x35) + 0x14))();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = (**(code **)(**(int **)(*param_1 + 0x25) + 0xc))();
    }
    return CONCAT31((int3)((uint)uVar2 >> 8),1);
  }
  return 0;
}

