// name: FUN_0043a0b0
// address: 0x43a0b0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043a0b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(param_1 + 0x4d) == '\0') || (*(int *)(param_1 + 0x4e) == 0)) {
    FUN_0043c074(param_1,'\x01');
    puVar2 = (undefined4 *)FUN_00439654();
    uVar1 = (*(code *)*puVar2)();
    FUN_0043c074(param_1,'\0');
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x4e) + 0x31))();
  }
  return uVar1;
}

