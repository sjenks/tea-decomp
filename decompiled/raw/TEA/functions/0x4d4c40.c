// name: FUN_004d4c40
// address: 0x4d4c40
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004d4c40(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x514d28);
  uVar1 = FUN_004d1758(*param_2);
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = FUN_004d1758(*param_2);
  if (iVar2 == 0) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  else {
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  *in_FS_OFFSET = local_28;
  return param_1;
}

