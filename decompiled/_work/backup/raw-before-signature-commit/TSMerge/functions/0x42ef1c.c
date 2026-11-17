// name: FUN_0042ef1c
// address: 0x42ef1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042ef1c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if ((*(char *)(param_1 + 0x4d) == '\0') || (*(int *)(param_1 + 0x4e) == 0)) {
    FUN_00430ee0(param_1,'\x01');
    puVar2 = (undefined4 *)FUN_0042e4c0();
    uVar1 = (*(code *)*puVar2)();
    FUN_00430ee0(param_1,'\0');
  }
  else {
    uVar1 = (**(code **)(*(int *)(param_1 + 0x4e) + 0x31))();
  }
  return uVar1;
}

