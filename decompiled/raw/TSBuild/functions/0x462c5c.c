// name: FUN_00462c5c
// address: 0x462c5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00462c5c(int *param_1)

{
  undefined1 uVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  undefined4 local_58;
  undefined1 local_34 [16];
  undefined1 local_24 [16];
  undefined1 local_14 [16];
  
  FUN_00467ba8(0x4872c8);
  uVar1 = (**(code **)(*param_1 + 8))();
  *(undefined1 *)(param_1 + 6) = uVar1;
  piVar2 = param_1;
  uVar1 = (**(code **)(*param_1 + 0xc))();
  *(undefined1 *)((int)param_1 + 0x19) = uVar1;
  (**(code **)(*param_1 + 0x10))(local_14,*param_1,piVar2,local_14,param_1);
  FUN_00459ad4((int)(param_1 + 8),(int)local_14);
  FUN_0040473c((int)local_14,2);
  (**(code **)(*param_1 + 0x18))();
  FUN_00459ad4((int)(param_1 + 0x10),(int)local_24);
  FUN_0040473c((int)local_24,2);
  (**(code **)(*param_1 + 0x14))();
  FUN_00459ad4((int)(param_1 + 0xc),(int)local_34);
  FUN_0040473c((int)local_34,2);
  FUN_00462c04((int)(param_1 + 4));
  *in_FS_OFFSET = local_58;
  return;
}

