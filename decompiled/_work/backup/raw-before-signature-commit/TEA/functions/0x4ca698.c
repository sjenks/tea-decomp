// name: FUN_004ca698
// address: 0x4ca698
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_004ca698(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  
  FUN_004dce64(0x5121d4);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_00512280;
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      FUN_004ca784(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_004cc744();
      }
      FUN_004cc0bc();
    }
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      FUN_0049cc20((undefined4 *)param_1[7],3);
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    FUN_004cc0bc();
    if ((param_2 & 1) != 0) {
      FUN_004cc0bc();
    }
  }
  *in_FS_OFFSET = uStack_38;
  return;
}

