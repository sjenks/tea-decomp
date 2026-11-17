// name: FUN_004213d8
// address: 0x4213d8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004213d8(int *param_1,uint *param_2)

{
  undefined4 uVar1;
  
  if (param_2 != *(uint **)((int)param_1 + 0x4e)) {
    FUN_0044b2dc();
    if ((param_2 == (uint *)0x0) || ((char)*param_2 == '\0')) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_0041fd2c(param_2);
    }
    *(undefined4 *)((int)param_1 + 0x4e) = uVar1;
    (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
  }
  return;
}

