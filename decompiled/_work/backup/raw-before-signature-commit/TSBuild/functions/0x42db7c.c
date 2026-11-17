// name: FUN_0042db7c
// address: 0x42db7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0042db7c(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  if (*(int *)(*param_1 + 8) == 0) {
    uVar1 = FUN_0042db48(param_1);
    if ((uVar1 == 0xffffffff) || (param_3 - 1U < uVar1)) {
      param_2 = 0;
    }
    else {
      FUN_0042d9a0(param_1,param_2,uVar1);
      *(undefined1 *)(param_2 + uVar1) = 0;
    }
  }
  else {
    param_2 = 0;
  }
  return param_2;
}

