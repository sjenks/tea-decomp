// name: FUN_00408ef4
// address: 0x408ef4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl
FUN_00408ef4(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint *puVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint local_460 [128];
  uint local_260 [128];
  int *local_60;
  uint *local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint *local_48;
  uint *local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  char *local_28;
  int local_24;
  uint local_20;
  int *local_1c;
  uint local_18;
  int *local_14;
  LPCSTR local_10;
  int *local_c;
  uint local_8;
  
  local_8 = 1;
  local_c = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  local_10 = (LPCSTR)(**(code **)(*local_c + 0x18))();
  iVar2 = (**(code **)(*local_c + 0xc))();
  if ((iVar2 != 0) && (local_14 = FUN_004deb10(local_10,&DAT_004eb416), local_14 != (int *)0x0)) {
    local_18 = 0;
    if (param_6 == 2) {
      local_1c = (int *)local_c[param_4 + 0xb80];
      if (local_1c == (int *)0x0) {
        local_20 = local_c[param_4 + 0xa98];
        pcVar3 = (char *)FUN_004cc180();
        iVar2 = FUN_004dedd8(local_14,local_c[param_4 + 0xa33],0);
        if ((iVar2 == 0) && (uVar4 = FUN_004ded48(pcVar3,4,local_20,local_14), uVar4 == local_20)) {
          local_24 = 0;
          iVar2 = 0;
          if (0 < (int)local_20) {
            do {
              if ((pcVar3[iVar2 * 4 + 3] & 0x80U) == 0) {
                if (param_5 == local_24) {
                  local_28 = pcVar3 + iVar2 * 4;
                  if (*(int *)(param_7 + 8) == *(int *)(param_7 + 0x18)) {
                    FUN_004092e8(param_7,*(undefined4 **)(param_7 + 8),(undefined4 *)local_28);
                  }
                  else {
                    local_30 = *(undefined4 **)(param_7 + 8);
                    *local_30 = *(undefined4 *)local_28;
                    *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
                    local_2c = local_30;
                  }
                }
              }
              else {
                if (param_5 == local_24) {
                  local_18 = *(uint *)(pcVar3 + iVar2 * 4) & 0x7fffffff;
                }
                local_24 = local_24 + 1;
              }
              iVar2 = iVar2 + 1;
            } while (iVar2 < (int)local_20);
          }
          local_1c = (int *)FUN_004cc180();
          iVar2 = local_c[param_4 + 0xa33];
          *local_1c = iVar2;
          local_34 = 1;
          local_60 = local_1c + 1;
          for (iVar5 = 0; iVar2 = iVar2 + 4, iVar5 < (int)(local_20 - 1); iVar5 = iVar5 + 1) {
            if ((pcVar3[iVar5 * 4 + 3] & 0x80U) != 0) {
              *local_60 = iVar2;
              local_60 = local_60 + 1;
            }
          }
          local_c[param_4 + 0xb80] = (int)local_1c;
        }
        FUN_004cc0cc();
      }
      else {
        iVar2 = FUN_004dedd8(local_14,local_1c[param_5],0);
        if (iVar2 == 0) {
          do {
            local_38 = FUN_004ded48((char *)local_260,4,0x80,local_14);
            if (local_38 == 0) goto LAB_00409162;
            puVar6 = local_260;
            for (uVar4 = 0; uVar4 < local_38; uVar4 = uVar4 + 1) {
              local_18 = *puVar6;
              if ((local_18 & 0x80000000) != 0) break;
              puVar1 = *(uint **)(param_7 + 8);
              if (puVar1 == *(uint **)(param_7 + 0x18)) {
                FUN_004092e8(param_7,puVar1,&local_18);
              }
              else {
                local_3c = puVar1;
                local_40 = puVar1;
                *puVar1 = local_18;
                *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
              }
              puVar6 = puVar6 + 1;
            }
          } while ((local_18 & 0x80000000) == 0);
          local_18 = local_18 & 0x7fffffff;
        }
      }
LAB_00409162:
      if ((local_c[0x900] <= (int)local_18) && ((int)local_18 < local_c[0x902])) {
        if (*(int *)(param_7 + 8) == *(int *)(param_7 + 0x18)) {
          FUN_004092e8(param_7,*(undefined4 **)(param_7 + 8),&local_18);
        }
        else {
          local_48 = *(uint **)(param_7 + 8);
          *local_48 = local_18;
          *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
          local_44 = local_48;
        }
        local_18 = 0;
      }
    }
    else {
      local_4c = local_c[param_4 + 0x9ce] + param_5 * 4;
      iVar2 = FUN_004dedd8(local_14,local_4c,0);
      if ((iVar2 != 0) || (uVar4 = FUN_004ded48((char *)&local_18,4,1,local_14), uVar4 != 1)) {
        local_18 = 0;
      }
    }
    local_8 = (uint)(local_18 != 0x7fffffff);
    if (((param_3 != 0) && (local_8 != 0)) && (local_18 != 0)) {
      uVar4 = FUN_004dedd8(local_14,local_18,0);
      while (uVar4 == 0) {
        local_50 = FUN_004ded48((char *)local_460,4,0x80,local_14);
        if (local_50 == 0) break;
        uVar4 = 0;
        puVar6 = local_460;
        while ((uVar4 < local_50 && ((local_18 & 0x80000000) == 0))) {
          local_18 = *puVar6;
          local_54 = *puVar6 & 0x7fffffff;
          puVar1 = *(uint **)(param_7 + 8);
          if (puVar1 == *(uint **)(param_7 + 0x18)) {
            FUN_004092e8(param_7,puVar1,&local_54);
          }
          else {
            local_58 = puVar1;
            local_5c = puVar1;
            *puVar1 = local_54;
            *(int *)(param_7 + 8) = *(int *)(param_7 + 8) + 4;
          }
          uVar4 = uVar4 + 1;
          puVar6 = puVar6 + 1;
        }
        uVar4 = local_18 & 0x80000000;
      }
    }
    FUN_004de7cc(local_14);
  }
  return local_8;
}

