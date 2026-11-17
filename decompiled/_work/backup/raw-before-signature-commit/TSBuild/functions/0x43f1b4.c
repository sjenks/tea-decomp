// name: FUN_0043f1b4
// address: 0x43f1b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0043f1b4(int *param_1,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffff0ff | param_3 << 8;
  FUN_00438618(param_1[1],0,0x4000000,0);
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  FUN_00429290((int)(param_1 + 1),param_2);
  if ((*(byte *)(param_2 + 0x1b) & 0x10) != 0) {
    switch(param_3) {
    case 1:
      FUN_0043e9b0((int)param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 2:
      FUN_0043eb34(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 3:
      FUN_0043ecf8(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 4:
      FUN_0043ef34(param_1,param_2,*(int *)(*param_1 + 0x15));
    }
  }
  return;
}

