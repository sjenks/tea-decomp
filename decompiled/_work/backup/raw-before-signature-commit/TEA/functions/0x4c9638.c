// name: FUN_004c9638
// address: 0x4c9638
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004c9638(int *param_1)

{
  BOOL BVar1;
  HDC pHVar2;
  char *c;
  uint uVar3;
  int *piVar4;
  RECT *pRVar5;
  int *piVar6;
  undefined4 *in_FS_OFFSET;
  byte bVar7;
  LPCSTR lpString;
  int iVar8;
  tagSIZE *psizl;
  int local_140 [4];
  int local_130 [4];
  int local_120 [4];
  RECT local_110;
  int local_100 [4];
  RECT local_f0;
  int local_e0 [4];
  RECT local_d0;
  int local_c0 [4];
  int local_b0 [4];
  int local_a0 [4];
  int local_90 [4];
  RECT local_80;
  tagSIZE local_70;
  LONG local_68;
  LONG local_64;
  undefined4 local_58;
  undefined2 local_48;
  int local_3c;
  HBRUSH local_34 [2];
  HDC local_2c;
  int local_27;
  
  bVar7 = 0;
  FUN_004dce64(0x511ddc);
  local_48 = 8;
  FUN_004a8674((int *)&local_2c,*(undefined4 *)(*param_1 + 0xc));
  local_3c = local_3c + 2;
  local_48 = 0x14;
  FUN_004c9a24(&local_80.left,param_1);
  (**(code **)(local_27 + 0x24))();
  (**(code **)(local_27 + 0x20))();
  BVar1 = ExtTextOutA(local_2c,0,0,2,&local_80,(LPCSTR)0x0,0,(INT *)0x0);
  (**(code **)(local_27 + 0x14))
            (&local_2c,local_27,BVar1 != 0,&local_2c,*(undefined4 *)((int)param_1 + 0x26));
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  if (pHVar2 != local_2c) {
    SetBkMode(local_2c,1);
  }
  iVar8 = 1;
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  SetBkMode(pHVar2,iVar8);
  c = FUN_004dc9f4(*(uint **)(*param_1 + 0x10));
  lpString = *(LPCSTR *)(*param_1 + 0x10);
  local_70.cx = 0;
  local_70.cy = 0;
  psizl = &local_70;
  pHVar2 = (HDC)(**(code **)(local_27 + 0x5c))();
  GetTextExtentPoint32A(pHVar2,lpString,(int)c,psizl);
  local_68 = local_70.cx;
  local_64 = local_70.cy;
  uVar3 = GetWindowLongA(*(HWND *)(*param_1 + 0xc),-0x10);
  if ((uVar3 & 0x20000) != 0) {
    FUN_004c9b28(local_90,param_1);
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004c9b94(local_a0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_b0,param_1);
  }
  if (((uVar3 & 0x80000) != 0) || ((char)param_1[8] != '\0')) {
    FUN_004c9ad8(local_c0,param_1);
  }
  FUN_004dc9f4(*(uint **)(*param_1 + 0x10));
  (**(code **)(local_27 + 0x48))();
  (**(code **)(local_27 + 0x1c))();
  (**(code **)(local_27 + 0x18))();
  if ((char)param_1[8] == '\0') {
    if ((uVar3 & 0x80000) != 0) {
      FUN_004c9ad8(local_100,param_1);
      piVar4 = local_100;
      pRVar5 = &local_f0;
      for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
        pRVar5->left = *piVar4;
        piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
        pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
      }
      FUN_004c9178(param_1,&local_2c,&local_f0);
    }
  }
  else {
    FUN_004c9ad8(local_e0,param_1);
    piVar4 = local_e0;
    pRVar5 = &local_d0;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c8fe0(param_1,&local_2c,&local_d0,'\0');
  }
  if ((uVar3 & 0x20000) != 0) {
    FUN_004c9b28(local_120,param_1);
    piVar4 = local_120;
    pRVar5 = &local_110;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      pRVar5->left = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      pRVar5 = (RECT *)((int)pRVar5 + ((uint)bVar7 * -2 + 1) * 4);
    }
    FUN_004c93c0(param_1,&local_2c,&local_110,'\0');
  }
  if ((uVar3 & 0x10000) != 0) {
    FUN_004c9b94(local_140,param_1);
    piVar4 = local_140;
    piVar6 = local_130;
    for (iVar8 = 4; iVar8 != 0; iVar8 = iVar8 + -1) {
      *piVar6 = *piVar4;
      piVar4 = piVar4 + (uint)bVar7 * -2 + 1;
      piVar6 = piVar6 + (uint)bVar7 * -2 + 1;
    }
    FUN_004c9490(param_1,&local_2c,local_130,'\0');
  }
  local_48 = 0x20;
  FUN_004ab84c((uint *)local_34,(uint *)&DAT_0051b1bc,'\x01');
  local_3c = local_3c + 2;
  local_48 = 0x14;
  FrameRect(local_2c,(RECT *)&stack0xfffffeb0,local_34[0]);
  local_3c = local_3c + -2;
  FUN_004ab9b4((uint *)local_34,2);
  local_3c = local_3c + -2;
  FUN_004a86dc((int *)&local_2c,2);
  *in_FS_OFFSET = local_58;
  return;
}

