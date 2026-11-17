// name: FUN_00424cd8
// address: 0x424cd8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00424cd8(int *param_1,undefined4 *param_2)

{
  int iVar1;
  HDC pHVar2;
  uint uVar3;
  uint uVar4;
  tagRECT *ptVar5;
  int iVar6;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  uint local_8;
  
  if (((DAT_0047b01c & 1) != 0) && ((char)param_1[0x11] != '\0')) {
    if ((DAT_0047b01c & 0x10) == 0) {
      uVar4 = 0;
      local_8 = 4;
    }
    else {
      uVar4 = 0x4000;
      local_8 = 1;
    }
    if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\0') {
      local_20.left = 0;
      local_20.top = 0;
      local_20.right = 0;
      local_20.bottom = 0;
      FUN_004386fc(**(int **)((int)param_1 + 6),&local_20);
      local_c = DAT_0047d5f8;
      iVar1 = GetSystemMetrics(DAT_0047d5f8);
      FUN_004288b4(&local_20.left,0,-iVar1);
      iVar1 = 2;
      ptVar5 = &local_20;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x12) - *(int *)((int)param_1 + 10);
      local_20.right = (int)uVar3 >> 1;
      if (local_20.right < 0) {
        local_20.right = local_20.right + (uint)((uVar3 & 1) != 0);
      }
      local_20.left = local_20.right + -1;
      local_20.right = local_20.right + 1;
      FUN_00430d78(param_2,&local_20,local_8,uVar4 | 4);
    }
    else if (*(char *)(*(int *)((int)param_1 + 6) + 0x35) == '\x01') {
      local_30.left = 0;
      local_30.top = 0;
      local_30.right = 0;
      local_30.bottom = 0;
      FUN_004386fc(**(int **)((int)param_1 + 6),&local_30);
      iVar6 = 0;
      local_10 = DAT_0047d5f0;
      iVar1 = GetSystemMetrics(DAT_0047d5f0);
      FUN_004288b4(&local_30.left,-iVar1,iVar6);
      iVar1 = 2;
      ptVar5 = &local_30;
      pHVar2 = (HDC)(**(code **)(*(int *)((int)param_2 + 5) + 0x5c))();
      DPtoLP(pHVar2,(LPPOINT)ptVar5,iVar1);
      uVar3 = *(int *)((int)param_1 + 0x16) - *(int *)((int)param_1 + 0xe);
      local_30.bottom = (int)uVar3 >> 1;
      if (local_30.bottom < 0) {
        local_30.bottom = local_30.bottom + (uint)((uVar3 & 1) != 0);
      }
      local_30.top = local_30.bottom + -1;
      local_30.bottom = local_30.bottom + 1;
      FUN_00430d78(param_2,&local_30,local_8,uVar4 | 2);
    }
  }
  FUN_00424924(param_1);
  return;
}

