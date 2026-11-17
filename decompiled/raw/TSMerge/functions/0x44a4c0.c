// name: FUN_0044a4c0
// address: 0x44a4c0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __stdcall FUN_0044a4c0(undefined4 *param_1,byte param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  
  FUN_00455f04(0x470550);
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = &PTR_FUN_004705fc;
    iVar1 = param_1[0xc];
    if (iVar1 != 0) {
      FUN_0044a5ac(iVar1,'\x01');
      if (*(int *)(iVar1 + 9) != 0) {
        FUN_0044b954();
      }
      FUN_0044b2cc();
    }
    if ((undefined4 *)param_1[7] != (undefined4 *)0x0) {
      FUN_004245c0((undefined4 *)param_1[7],3);
    }
    if ((undefined4 *)param_1[8] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[8])();
    }
    FUN_0044b2cc();
    if ((param_2 & 1) != 0) {
      FUN_0044b2cc();
    }
  }
  *in_FS_OFFSET = uStack_38;
  return;
}

