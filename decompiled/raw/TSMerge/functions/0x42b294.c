// name: FUN_0042b294
// address: 0x42b294
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042b294(int param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 local_2c;
  uint local_28;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  iVar4 = *(int *)(param_1 + 0x6c);
  piVar5 = (int *)(iVar4 + 0x57);
  if (*(int *)(iVar4 + 0x5b) == 0x7fff) {
    if (param_1 != *piVar5) {
      if (*(int *)(param_1 + 0x14) == 0) {
        puVar6 = (undefined4 *)*piVar5;
      }
      else {
        puVar6 = *(undefined4 **)(param_1 + 0x14);
      }
      local_18 = *(undefined4 *)(*(int *)(iVar4 + 99) + 4);
      local_1c = 0x7fff;
      local_10 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 != '\0') {
        uVar3 = FUN_004179cc(*puVar6,(int)&local_1c);
        return uVar3;
      }
    }
    uVar3 = 0;
  }
  else if ((*(int *)(iVar4 + 0x5b) == 0x111) || (*(int *)(iVar4 + 0x5b) == 0x4e)) {
    if (*(int *)(iVar4 + 0x5b) == 0x111) {
      local_8 = *(uint *)(iVar4 + 0x5f) >> 0x10;
      local_c = (uint)*(ushort *)(iVar4 + 0x5f);
      iVar4 = *(int *)(iVar4 + 99);
    }
    else {
      piVar1 = *(int **)(iVar4 + 99);
      local_8 = piVar1[2];
      local_c = piVar1[1];
      if ((piVar1[2] == -0x208) && ((*(byte *)(piVar1 + 0x19) & 1) != 0)) {
        local_c = GetDlgCtrlID((HWND)piVar1[1]);
      }
      iVar4 = *piVar1;
    }
    if (param_1 == *piVar5) {
      if (iVar4 == 0) {
        local_2c = 0;
        local_28 = local_c;
        local_20 = 0;
        puVar6 = *(undefined4 **)(param_1 + 0x6c);
        cVar2 = (**(code **)(*(int *)((int)puVar6 + 0x1b) + 0x2c))();
        if (cVar2 != '\0') {
          FUN_004179cc(*puVar6,(int)&local_2c);
          return 0;
        }
      }
      uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
    }
    else {
      if (iVar4 == 0) {
        if (*(int *)(param_1 + 0x14) == 0) {
          puVar6 = (undefined4 *)*piVar5;
        }
        else {
          puVar6 = *(undefined4 **)(param_1 + 0x14);
        }
        local_8 = 0;
      }
      else {
        puVar6 = (undefined4 *)*piVar5;
        if (((*(byte *)(puVar6 + 0x1d) & 1) != 0) || (local_c == 0)) {
          uVar3 = (**(code **)(puVar6[2] + 0x44))();
          return uVar3;
        }
      }
      local_3c = local_8;
      local_38 = local_c;
      local_30 = 0;
      cVar2 = (**(code **)(puVar6[2] + 0x84))();
      if (cVar2 == '\0') {
        uVar3 = FUN_0042b294((int)puVar6);
      }
      else {
        uVar3 = FUN_004179cc(*puVar6,(int)&local_3c);
      }
    }
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 8) + 0x44))();
  }
  return uVar3;
}

