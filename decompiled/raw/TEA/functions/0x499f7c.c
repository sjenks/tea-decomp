// name: FUN_00499f7c
// address: 0x499f7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00499f7c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_00499f48(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_00499da0(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

