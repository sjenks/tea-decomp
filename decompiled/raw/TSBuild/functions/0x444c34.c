// name: FUN_00444c34
// address: 0x444c34
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00444c34(int *param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 4) {
    uVar1 = (**(code **)(*param_1 + 0x20))();
    return uVar1;
  }
  if (param_2 == 5) {
    uVar1 = (**(code **)(*param_1 + 0x24))();
    return CONCAT31((int3)((uint)uVar1 >> 8),1);
  }
  return 0;
}

