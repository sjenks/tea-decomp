// name: FUN_0044e474
// address: 0x44e474
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0044e474(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  HMENU pHVar3;
  BOOL BVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_40;
  int local_1c [3];
  int local_10 [3];
  
  FUN_00467ba8(0x482bd4);
  if ((*(int *)((int)param_1 + 0x21) == 0) || (*(int *)(*param_1 + 0xc) == 0)) {
    uVar2 = 0;
    *in_FS_OFFSET = local_40;
  }
  else {
    *(undefined4 *)((int)param_1 + 0x1d) = *(undefined4 *)((int)param_2 + 9);
    FUN_0042bc50(local_10,*(HWND *)(*param_1 + 0xc),0);
    FUN_0042bb1c(local_1c,0);
    FUN_0044e630(*(int **)((int)param_1 + 0x21),param_2,(int)local_1c);
    if ((*(byte *)(*param_1 + 0x74) & 0x10) != 0) {
      (**(code **)(local_1c[0] + 4))();
      (**(code **)(*(int *)(*(int *)(*param_1 + 0x6c) + 0x1b) + 0x28))();
    }
    (**(code **)(local_1c[0] + 4))();
    cVar1 = (**(code **)(param_1[3] + 8))();
    if (cVar1 == '\0') {
      pHVar3 = (HMENU)(**(code **)(local_1c[0] + 4))();
      DestroyMenu(pHVar3);
      uVar2 = 0;
      FUN_0042bcb0(local_1c,2);
      FUN_0042bcb0(local_10,2);
      *in_FS_OFFSET = local_40;
    }
    else {
      pHVar3 = (HMENU)(**(code **)(local_10[0] + 4))();
      BVar4 = DestroyMenu(pHVar3);
      uVar2 = CONCAT31((int3)((uint)BVar4 >> 8),1);
      FUN_0042bcb0(local_1c,2);
      FUN_0042bcb0(local_10,2);
      *in_FS_OFFSET = local_40;
    }
  }
  return uVar2;
}

