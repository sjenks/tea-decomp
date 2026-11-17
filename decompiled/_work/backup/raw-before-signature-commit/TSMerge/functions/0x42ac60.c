// name: FUN_0042ac60
// address: 0x42ac60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042ac60(int param_1,undefined4 param_2,uint *param_3,int param_4)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    uVar1 = FUN_0041fd2c(param_3);
    *(undefined4 *)(param_1 + 0x10) = uVar1;
    FUN_0042acb4(param_1,param_2,param_4);
    *(uint *)(param_1 + 0x74) = *(uint *)(param_1 + 0x74) | 2;
    *(undefined4 *)(param_1 + 0x18) = 0x50000000;
    *(undefined4 *)(param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  return;
}

