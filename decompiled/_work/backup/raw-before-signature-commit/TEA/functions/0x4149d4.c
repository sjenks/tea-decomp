// name: FUN_004149d4
// address: 0x4149d4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004149d4(int param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  int iVar1;
  byte *pbVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_28;
  
  FUN_004dce64(0x4ed858);
  while( true ) {
    iVar1 = FUN_0043c624(param_4,*(int *)(param_4 + -4),*(byte **)(param_1 + -8),
                         *(int *)(*(int *)(param_1 + -8) + -4));
    if (-1 < iVar1) break;
    FUN_004cf384(param_1,param_1 + -0x10);
    param_1 = param_1 + -0x10;
  }
  FUN_004cf384(param_1,(int)&param_2);
  if (param_4 != (byte *)0x0) {
    if (*(int *)(param_4 + -0xc) != -1) {
      pbVar2 = param_4 + -0xc;
      if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else if (pbVar2 == (byte *)&DAT_00513d58) {
        iVar1 = 1;
      }
      else {
        *(int *)pbVar2 = *(int *)pbVar2 + -1;
        iVar1 = *(int *)pbVar2 + 1;
      }
      if (iVar1 != 0) goto LAB_00414ab3;
    }
    FUN_004cc0bc();
  }
LAB_00414ab3:
  *in_FS_OFFSET = local_28;
  return;
}

