// name: FUN_00411790
// address: 0x411790
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00411790(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  uint uVar4;
  undefined3 extraout_var;
  undefined4 uVar5;
  
  *(int *)(param_1 + 0x47fc) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4808) = 0;
  *(undefined4 *)(param_1 + 0x4804) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x23fc) < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = 2;
  }
  *(undefined4 *)(param_1 + 0x4800) = uVar5;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  iVar3 = FUN_00408c68(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  if ((iVar3 != 0) && (0 < param_2)) {
    uVar2 = FUN_00408de0(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    if (param_2 < CONCAT22(extraout_var_00,uVar2)) {
      uVar5 = FUN_00408e80(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
      uVar2 = FUN_00408de0(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
      if (param_2 != CONCAT22(extraout_var_01,uVar2) + -1) {
        uVar4 = FUN_00408e80(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2 + 1);
        if (uVar4 <= *(uint *)(param_1 + 0x18)) goto LAB_00411872;
      }
      bVar1 = FUN_0041217c(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
    }
  }
LAB_00411872:
  FUN_004dc844((undefined4 *)(param_1 + 0x20),0,2000);
  *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x47fc)) = 0xff;
  return *(int *)(param_1 + 0x14) != -1;
}

