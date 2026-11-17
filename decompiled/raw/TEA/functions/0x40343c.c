// name: FUN_0040343c
// address: 0x40343c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0040343c(int param_1,undefined4 *param_2,int *param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb0) = 0;
  FUN_004034c0(param_1);
  *param_2 = 1;
  iVar1 = *(int *)(param_1 + 200) - *(int *)(param_1 + 0xc4);
  if (iVar1 < 0) {
    iVar1 = iVar1 + 7;
  }
  *param_3 = iVar1 >> 3;
  return;
}

