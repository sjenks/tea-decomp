// name: FUN_00434704
// address: 0x434704
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434704(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_0042ac60(*param_1,param_2,(uint *)0x0,param_4);
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffffffd;
  if ((short)((uint)*(undefined4 *)(*param_1 + 0x10) >> 0x10) != 0) {
    FUN_0044b2dc();
  }
  *(undefined4 *)(*param_1 + 0x10) = 0xffff;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) | 4;
  *(uint *)(*param_1 + 0x74) = *(uint *)(*param_1 + 0x74) & 0xfffff7ff;
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}

