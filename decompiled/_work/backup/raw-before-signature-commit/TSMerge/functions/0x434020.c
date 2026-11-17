// name: FUN_00434020
// address: 0x434020
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00434020(int *param_1,int param_2,int param_3)

{
  *(uint *)(param_2 + 0x18) = *(uint *)(param_2 + 0x18) & 0xfffff0ff | param_3 << 8;
  FUN_0042d484(param_1[1],0,0x4000000,0);
  (**(code **)(*(int *)(param_2 + 8) + 0x34))();
  FUN_0041e11c((int)(param_1 + 1),param_2);
  if ((*(byte *)(param_2 + 0x1b) & 0x10) != 0) {
    switch(param_3) {
    case 1:
      FUN_0043381c((int)param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 2:
      FUN_004339a0(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 3:
      FUN_00433b64(param_1,param_2,*(int *)(*param_1 + 0x15));
      break;
    case 4:
      FUN_00433da0(param_1,param_2,*(int *)(*param_1 + 0x15));
    }
  }
  return;
}

