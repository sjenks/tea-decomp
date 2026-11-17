// name: FUN_00417b94
// address: 0x417b94
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00417b94(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_0041f3fc(0x42fd90);
  local_18 = 8;
  local_30[1] = 0;
  FUN_00417c04(param_1,local_30 + 1);
  puVar1 = FUN_00416784();
  local_30[0] = FUN_004172ec((int)puVar1);
  FUN_004168a0((int)local_40,param_1,local_30);
  piVar2 = FUN_00416784();
  FUN_00416c40(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

