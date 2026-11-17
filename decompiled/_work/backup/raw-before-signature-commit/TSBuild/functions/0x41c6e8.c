// name: FUN_0041c6e8
// address: 0x41c6e8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041c6e8(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    GetCurrentProcessId();
  }
  iVar1 = (**(code **)(*(int *)*param_1 + 0xc))();
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

