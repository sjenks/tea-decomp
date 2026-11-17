// name: FUN_0043cb2c
// address: 0x43cb2c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043cb2c(int *param_1,int param_2)

{
  if ((*(uint *)(*param_1 + 0x18) & 0xb) == 0xb) {
    if (param_2 == 1) {
      *(undefined1 *)((int)param_1 + 0x15) = 1;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
    else if (param_2 == 0) {
      *(undefined1 *)((int)param_1 + 0x15) = 0;
      (**(code **)(*(int *)(*param_1 + 8) + 0x68))();
    }
    else {
      FUN_00436428(*param_1);
    }
  }
  else {
    FUN_00436428(*param_1);
  }
  return 0;
}

