// name: FUN_0048ffcc
// address: 0x48ffcc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0048ffcc(int param_1,int *param_2)

{
  undefined4 uVar1;
  
  if (((((*(byte *)(param_1 + 0x42) & 2) == 0) || (*param_2 < 0)) || (param_2[1] < 0)) ||
     ((*(int *)(param_1 + 0x12) - *(int *)(param_1 + 10) <= *param_2 ||
      (*(int *)(param_1 + 0x16) - *(int *)(param_1 + 0xe) <= param_2[1])))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}

