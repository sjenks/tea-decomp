// name: FUN_0045f7b4
// address: 0x45f7b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045f7b4(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_00467ba8(0x486b24);
  uVar1 = FUN_0045bea8(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_0045bea8(*param_2);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

