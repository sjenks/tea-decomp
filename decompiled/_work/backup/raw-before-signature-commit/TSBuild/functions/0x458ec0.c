// name: FUN_00458ec0
// address: 0x458ec0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00458ec0(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 local_c [8];
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  if (param_3 != '\0') {
    FUN_00458f14(local_c);
    iVar1 = FUN_00458f3c(param_2);
    iVar1 = FUN_00458f48(local_c,iVar1);
    FUN_00458f50(local_c,iVar1);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

