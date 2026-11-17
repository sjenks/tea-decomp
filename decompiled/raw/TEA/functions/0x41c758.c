// name: FUN_0041c758
// address: 0x41c758
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041c758(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0xc) + 0x6c))();
  if (iVar1 < 0) {
    return 0;
  }
  uVar2 = FUN_0041c740(param_1);
  return uVar2;
}

