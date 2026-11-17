// name: FUN_004d03f4
// address: 0x4d03f4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d03f4(int param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined4 *in_FS_OFFSET;
  undefined1 local_40 [16];
  int local_30 [6];
  undefined2 local_18;
  
  FUN_004dce64(0x51418c);
  local_18 = 8;
  local_30[1] = 0;
  FUN_004d0480(param_1,local_30 + 1);
  puVar1 = FUN_004d01a8();
  local_30[0] = FUN_004d04bc((int)puVar1);
  FUN_004d02b4((int)local_40,param_1,local_30);
  piVar2 = (int *)FUN_004d01a8();
  FUN_004d04c8(piVar2);
  *in_FS_OFFSET = local_30[2];
  return param_1;
}

