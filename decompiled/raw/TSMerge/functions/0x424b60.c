// name: FUN_00424b60
// address: 0x424b60
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00424b60(int param_1,int *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 local_54;
  int *local_50;
  uint local_4c;
  int *local_48;
  undefined4 *local_44;
  char local_3d;
  int *local_3c;
  undefined4 *local_38;
  int *local_34;
  undefined4 *local_30;
  undefined2 *local_2c;
  uint *local_28;
  int local_24;
  uint *local_20;
  uint *local_1c;
  uint *local_18;
  uint *local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  iVar1 = *(int *)(param_1 + 8);
  local_8 = FUN_00422908(param_2);
  if ((local_8 & 1) == 0) {
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x7e) = 0;
    *(undefined4 *)(iVar1 + 0x7a) = 0;
    *(undefined4 *)(iVar1 + 0x48) = 0;
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x4c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    FUN_0042b948(iVar1);
    FUN_004457f0(param_2,(undefined4 *)(iVar1 + 0x70));
    local_c = 0;
    FUN_0042e2fc(param_2,&local_c);
    *(undefined4 *)(iVar1 + 0x10) = local_c;
    FUN_0042280c(param_2,iVar1 + 0x74,4);
    if ((*(byte *)(iVar1 + 0x74) & 4) == 0) {
      local_14 = (uint *)(iVar1 + 0x2c);
      local_18 = (uint *)(iVar1 + 0x28);
      local_1c = (uint *)(iVar1 + 0x24);
      local_20 = (uint *)(iVar1 + 0x20);
      local_24 = iVar1 + 0x1c;
      FUN_0042280c(param_2,iVar1 + 0x18,4);
      FUN_0042280c(param_2,local_24,4);
      uVar2 = FUN_00422908(param_2);
      *local_20 = uVar2;
      uVar2 = FUN_00422908(param_2);
      *local_1c = uVar2;
      uVar2 = FUN_00422908(param_2);
      *local_18 = uVar2;
      uVar2 = FUN_00422908(param_2);
      *local_14 = uVar2;
      FUN_0042280c(param_2,&local_10,4);
      *(undefined4 *)(iVar1 + 0x38) = local_10;
      *(code **)(iVar1 + 0x40) = DefWindowProcA;
    }
    else {
      *(code **)(iVar1 + 0x40) = DefWindowProcA;
      FUN_00455a40((undefined4 *)(iVar1 + 0x18),0,0x28);
    }
    puVar4 = (undefined4 *)(iVar1 + 0x3c);
    puVar7 = (undefined4 *)(iVar1 + 0x30);
    local_28 = (uint *)(iVar1 + 0x34);
    uVar2 = FUN_00422908(param_2);
    *local_28 = uVar2;
    piVar3 = FUN_0042e2fc(param_2,puVar7);
    FUN_0042e2fc(piVar3,puVar4);
    local_2c = (undefined2 *)(iVar1 + 0x78);
    uVar2 = FUN_0042292c(param_2);
    *local_2c = (short)uVar2;
    FUN_00424ae8(param_2,(undefined4 *)(iVar1 + 0x14));
    if (*(int *)(iVar1 + 0x14) == 0) {
      if (*(int *)(iVar1 + 0x70) == 0) {
        iVar8 = 0;
      }
      else {
        iVar8 = **(int **)(iVar1 + 0x70);
      }
      puVar4 = FUN_004567e4(*(int *)(iVar1 + 0x70),iVar8,(int *)&DAT_004056d8,(int *)&DAT_004043c8,0
                           );
      *(undefined4 **)(iVar1 + 0x6c) = puVar4;
      if (*(int *)(iVar1 + 0x6c) == 0) {
        iVar8 = 0;
        puVar4 = (undefined4 *)FUN_0041147c();
        uVar5 = FUN_004116c4(puVar4,iVar8);
        *(undefined4 *)(iVar1 + 0x6c) = uVar5;
      }
    }
    else {
      *(undefined4 *)(iVar1 + 0x6c) = *(undefined4 *)(*(int *)(iVar1 + 0x14) + 0x6c);
      if (param_3 == 1) {
        if ((local_8 & 2) != 0) {
          *(int *)(*(int *)(iVar1 + 0x14) + 0x7a) = iVar1;
        }
        local_30 = (undefined4 *)(iVar1 + 0x7a);
        local_34 = param_2;
        FUN_00424ae8(param_2,local_30);
        local_38 = (undefined4 *)(iVar1 + 0x7e);
        local_3c = param_2;
        FUN_00424ae8(param_2,local_38);
      }
      else {
        FUN_0042d05c(*(int *)(iVar1 + 0x14),iVar1);
        local_3d = DAT_00468f28;
        DAT_00468f28 = 1;
        local_44 = (undefined4 *)(iVar1 + 0x7a);
        local_48 = param_2;
        FUN_00424ae8(param_2,local_44);
        DAT_00468f28 = local_3d;
        if (local_3d != '\0') {
          DAT_00468f28 = 0;
          local_50 = param_2;
          local_4c = FUN_00422908(param_2);
          uVar2 = 0;
          if (local_4c != 0) {
            do {
              FUN_00424ae8(param_2,&local_54);
              uVar2 = uVar2 + 1;
            } while (uVar2 < local_4c);
          }
          DAT_00468f28 = '\x01';
        }
      }
    }
    FUN_0044743c(param_2,(undefined4 *)(iVar1 + 0x44));
    if (*(int *)(iVar1 + 0x44) != 0) {
      (**(code **)(**(int **)(iVar1 + 0x44) + 4))();
    }
    *(undefined4 *)(iVar1 + 0x58) = 0;
    puVar4 = (undefined4 *)(iVar1 + 0x54);
    piVar3 = FUN_004457f0(param_2,(undefined4 *)(iVar1 + 0x50));
    FUN_0042e2fc(piVar3,puVar4);
    FUN_0042d6f8(iVar1,*(int *)(iVar1 + 0x50),*(int *)(iVar1 + 0x54));
    FUN_0042280c(param_2,iVar1 + 0x5c,4);
    puVar6 = FUN_00423760(iVar1);
    *(undefined1 **)(iVar1 + 0x68) = puVar6;
  }
  else {
    *(undefined4 *)(iVar1 + 0x7a) = 0;
  }
  return iVar1;
}

