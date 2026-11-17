// name: FUN_0042eca0
// address: 0x42eca0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined1 __cdecl FUN_0042eca0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar2 = *(int *)(*(int *)(*(int *)(param_1 + 0x9c) + 8) + 0x10);
  }
  else {
    iVar2 = *(int *)(param_1 + 0x110);
  }
  puVar1 = FUN_004308e4(param_1,iVar2);
  FUN_004cf41c(param_3,(uint *)((int)puVar1 + 9));
  *param_4 = puVar1[1];
  return *(undefined1 *)(puVar1 + 2);
}

