// name: FUN_0045e7c8
// address: 0x45e7c8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045e7c8(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  FUN_00452bdc(param_2,param_3,(int *)(param_1 + 0x60),(int *)(param_1 + 100),
               (int *)(param_1 + 0x68));
  if (*(int *)(param_1 + 0x68) < 1) {
    uVar1 = *(undefined4 *)(param_1 + 100);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}

