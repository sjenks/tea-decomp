// name: FUN_00455a00
// address: 0x455a00
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_00455a00(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  
  FUN_00467ba8(0x484380);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_0048442c;
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      FUN_00455aec(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_00456e94();
      }
      FUN_0045680c();
    }
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      FUN_0042f754((undefined4 *)param_1[7],3);
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    FUN_0045680c();
    if ((param_2 & 1) != 0) {
      FUN_0045680c();
    }
  }
  *in_FS_OFFSET = uStack_38;
  return;
}

