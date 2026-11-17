// name: FUN_004ce770
// address: 0x4ce770
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004ce770(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined1 local_c [8];
  
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 0x18);
  if (param_3 != '\0') {
    FUN_004ce7c4(local_c);
    iVar1 = FUN_004ce7ec(param_2);
    iVar1 = FUN_004ce7f8(local_c,iVar1);
    FUN_004ce800(local_c,iVar1);
  }
  *(int *)(param_1 + 0x18) = param_2;
  return;
}

