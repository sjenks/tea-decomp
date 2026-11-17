// name: FUN_004b165c
// address: 0x4b165c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004b165c(int *param_1,int param_2,int param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  UINT UVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_78;
  int local_74;
  int local_70;
  undefined2 local_6c;
  ushort local_6a;
  undefined4 local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_40;
  int local_34;
  HDC local_2c;
  int local_27;
  
  FUN_004dce64(0x50d07c);
  local_40 = 8;
  FUN_004934c8(param_1);
  *(undefined ***)((int)param_1 + 5) = &PTR_FUN_0050d01c;
  local_78 = 0x28;
  local_74 = param_2;
  local_70 = param_3;
  local_6c = 1;
  uVar1 = FUN_0048c0e0(param_4);
  local_6a = (ushort)uVar1;
  local_68 = 0;
  uVar1 = (uVar1 & 0xffff) * param_2 + 0x1f & 0xffffffe0;
  if ((int)uVar1 < 0) {
    uVar1 = uVar1 + 7;
  }
  local_64 = ((int)uVar1 >> 3) * param_3;
  local_60 = 0;
  local_5c = 0;
  local_58 = param_4;
  if (8 < local_6a) {
    local_58 = 0;
  }
  local_54 = 0;
  FUN_004b0f1c(param_1,&local_78);
  *(undefined2 *)((int)param_1 + 0x1d) = param_5;
  if (*(short *)((int)param_1 + 0x1d) == 1) {
    uVar1 = 0;
    if (param_4 != 0) {
      do {
        *(short *)(*(int *)((int)param_1 + 0x11) + uVar1 * 2) = (short)uVar1;
        uVar1 = uVar1 + 1;
      } while (uVar1 < param_4);
    }
  }
  else if (param_4 != 0) {
    local_40 = 0x14;
    FUN_004a8760((int *)&local_2c);
    local_34 = local_34 + 3;
    local_40 = 0x20;
    uVar1 = (**(code **)(local_27 + 0xc))();
    if ((uVar1 & 0x100) != 0) {
      UVar2 = GetSystemPaletteEntries(local_2c,0,param_4,*(LPPALETTEENTRY *)((int)param_1 + 0x11));
      uVar1 = 0;
      if (UVar2 != 0) {
        do {
          pbVar4 = (byte *)(*(int *)((int)param_1 + 0x11) + uVar1 * 4);
          pbVar3 = (byte *)(*(int *)((int)param_1 + 0x11) + uVar1 * 4 + 2);
          *pbVar3 = *pbVar3 ^ *pbVar4;
          *pbVar4 = *pbVar4 ^ *pbVar3;
          *pbVar3 = *pbVar3 ^ *pbVar4;
          *(undefined1 *)(*(int *)((int)param_1 + 0x11) + 3 + uVar1 * 4) = 0;
          uVar1 = uVar1 + 1;
        } while (uVar1 < UVar2);
      }
    }
    local_34 = local_34 + -3;
    FUN_004a86dc((int *)&local_2c,0);
  }
  *in_FS_OFFSET = local_50;
  return param_1;
}

