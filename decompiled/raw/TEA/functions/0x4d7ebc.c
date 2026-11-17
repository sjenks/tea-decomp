// name: FUN_004d7ebc
// address: 0x4d7ebc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d7ebc(int *param_1)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 local_58;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_004dce64(0x5155f0);
  uVar1 = (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 6) = uVar1;
  piVar2 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xc))();
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  (**(code **)(*param_1 + 0x10))(local_14,*param_1,piVar2,local_14,param_1);
  FUN_004cf384((int)(param_1 + 8),(int)local_14);
  FUN_00402880((int)local_14,2);
  (**(code **)(*param_1 + 0x18))();
  FUN_004cf384((int)(param_1 + 0x10),(int)local_24);
  FUN_00402880((int)local_24,2);
  (**(code **)(*param_1 + 0x14))();
  FUN_004cf384((int)(param_1 + 0xc),(int)local_34);
  FUN_00402880((int)local_34,2);
  FUN_004d7e24((int)(param_1 + 4));
  *in_FS_OFFSET = local_58;
  return;
}

