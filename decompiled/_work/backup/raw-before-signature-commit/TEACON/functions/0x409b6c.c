// name: FUN_00409b6c
// address: 0x409b6c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_00409b6c(int param_1,int param_2)

{
  bool bVar1;
  undefined2 uVar2;
  int iVar3;
  undefined2 extraout_var_00;
  undefined4 uVar4;
  undefined2 extraout_var_01;
  uint uVar5;
  undefined3 extraout_var;
  undefined1 uVar6;
  
  *(int *)(param_1 + 0x47fc) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x4808) = 0;
  *(undefined4 *)(param_1 + 0x4804) = 0;
  if (*(int *)(*(int *)(param_1 + 0x10) + 0x23fc) < 1) {
    uVar6 = 0;
  }
  else {
    uVar6 = 2;
  }
  *(undefined1 *)(param_1 + 0x4800) = uVar6;
  if (*(HANDLE *)(param_1 + 0x14) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 0x14));
  }
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  iVar3 = FUN_004066fc(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
  if ((iVar3 != 0) && (0 < param_2)) {
    uVar2 = FUN_00406744(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
    if (param_2 < CONCAT22(extraout_var_00,uVar2)) {
      uVar4 = FUN_00406760(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2);
      *(undefined4 *)(param_1 + 0x18) = uVar4;
      uVar2 = FUN_00406744(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc));
      if (param_2 != CONCAT22(extraout_var_01,uVar2) + -1) {
        uVar5 = FUN_00406760(*(int *)(param_1 + 8),*(int *)(param_1 + 0xc),param_2 + 1);
        if (uVar5 <= *(uint *)(param_1 + 0x18)) goto LAB_00409c4b;
      }
      bVar1 = FUN_0040a218(param_1);
      if (CONCAT31(extraout_var,bVar1) == 0) {
        CloseHandle(*(HANDLE *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
    }
  }
LAB_00409c4b:
  FUN_0041ee4c((undefined4 *)(param_1 + 0x20),0,2000);
  *(undefined1 *)(param_1 + 0x20 + *(int *)(param_1 + 0x47fc)) = 0xff;
  return *(int *)(param_1 + 0x14) != -1;
}

