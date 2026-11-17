// name: FUN_0043f398
// address: 0x43f398
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0043f454) */

int __cdecl FUN_0043f398(int param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  byte bVar10;
  char local_114;
  char local_113 [19];
  undefined *local_100;
  undefined4 *local_f0;
  undefined4 *local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  uint local_e0;
  int local_dc;
  int *local_d8;
  int *local_d4;
  int local_d0;
  undefined4 *local_cc;
  undefined4 local_c8;
  undefined1 local_c2;
  undefined1 local_c1;
  uint *local_c0;
  uint *local_bc;
  char *local_b8;
  char local_b4 [76];
  uint *local_68;
  uint *local_64;
  char *local_60;
  uint local_5c;
  uint *local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  undefined4 local_38;
  undefined2 local_28;
  int local_1c;
  undefined1 local_14 [8];
  undefined4 *local_c;
  
  bVar10 = 0;
  FUN_004dce64(0x4f5bd4);
  local_40 = DAT_004f5b30;
  local_3c = DAT_004f5b34;
  local_3a = DAT_004f5b36;
  uVar2 = FUN_004dcac0((byte *)param_2,(byte *)&local_40,6);
  if (uVar2 != 0) {
    pcVar3 = FUN_004dc9f4(param_2);
    if ((pcVar3 != (char *)0x0) && (pcVar3[(int)param_2 + -1] == '\n')) {
      pcVar3 = pcVar3 + -1;
    }
    local_28 = 8;
    FUN_004d1c6c(param_1,param_2,(uint)pcVar3);
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  local_c = (undefined4 *)&DAT_00513d64;
  local_100 = &DAT_00513d64;
  local_1c = local_1c + 1;
  local_28 = 0x2c;
  local_4c = 2;
  iVar7 = 0;
  local_50 = 0;
  local_54 = 0;
  while ((cVar1 = (char)*param_2, cVar1 != '\n' && (cVar1 != '\0'))) {
    puVar5 = param_2;
    if (iVar7 == 2) {
      local_54 = local_54 + -1;
    }
    else if (cVar1 == '\\') {
      puVar5 = (uint *)((int)param_2 + 1);
      cVar1 = *(char *)puVar5;
      if (cVar1 < ']') {
        if (cVar1 == '\\') {
LAB_0043f4ef:
          local_5c = local_c[-1];
          local_58 = puVar5;
          local_60 = FUN_004dc9f4(puVar5);
          FUN_004cfad4((int)local_14,local_5c,0,(uint)local_58,(uint)local_60,0,(uint)local_60);
        }
        else if (cVar1 == '\'') {
          iVar7 = 1;
        }
        else if (cVar1 != '*') {
          if (cVar1 != '-') goto LAB_0043f54b;
          goto LAB_0043f52d;
        }
      }
      else if (cVar1 == '_') {
LAB_0043f52d:
        FUN_004d5c40((int)local_14,local_c[-1],0,1,0x2d);
      }
      else {
        if ((cVar1 == '{') || (cVar1 == '}')) goto LAB_0043f4ef;
LAB_0043f54b:
        iVar4 = FUN_004e133c((int)*(char *)puVar5);
        if (iVar4 == 0) {
          puVar5 = (uint *)((int)param_2 + 2);
        }
        else {
          local_28 = 0x2c;
          local_64 = puVar5;
          do {
            puVar6 = puVar5;
            puVar5 = (uint *)((int)puVar6 + 1);
            iVar4 = FUN_004e133c((int)*(char *)puVar5);
          } while (iVar4 != 0);
          if (*(char *)puVar5 == '-') {
            puVar5 = (uint *)((int)puVar6 + 2);
          }
          local_28 = 0x2c;
          local_68 = puVar5;
          while (iVar4 = FUN_004e1368((int)(char)*puVar5), iVar4 != 0) {
            puVar5 = (uint *)((int)puVar5 + 1);
          }
          if ((int)puVar5 - (int)local_64 < 10) {
            local_114 = '|';
            FUN_004dcc40((undefined4 *)local_113,local_64,(char *)((int)puVar5 - (int)local_64));
            *(char *)((int)puVar5 + ((int)local_113 - (int)local_64)) = '|';
            *(char *)((int)puVar5 + (int)(local_113 + (1 - (int)local_64))) = '\0';
            pcVar3 = s__bin_par_line_tab_emdash_endash__004f5b37;
            pcVar8 = local_b4;
            for (iVar4 = 0x12; iVar4 != 0; iVar4 = iVar4 + -1) {
              *(undefined4 *)pcVar8 = *(undefined4 *)pcVar3;
              pcVar3 = pcVar3 + ((uint)bVar10 * -2 + 1) * 4;
              pcVar8 = pcVar8 + ((uint)bVar10 * -2 + 1) * 4;
            }
            *(undefined2 *)pcVar8 = *(undefined2 *)pcVar3;
            local_28 = 0x2c;
            local_b8 = thunk_FUN_004dcd18(local_b4,&local_114);
            if ((local_b8 != (char *)0x0) &&
               (FUN_004d5c40((int)local_14,local_c[-1],0,1,0x20), local_b4 == local_b8)) {
              local_bc = local_68;
              local_54 = FUN_004e39d0((char *)local_68);
            }
          }
          if ((char)*puVar5 != ' ') {
            puVar5 = (uint *)((int)puVar5 + -1);
          }
        }
      }
    }
    else if ((cVar1 != '{') && (cVar1 != '}')) {
      if (iVar7 == 0) {
        uVar2 = FUN_004dcb98((char *)param_2,&DAT_004f5d62);
        local_28 = 0x2c;
        local_c0 = param_2;
        FUN_004cfad4((int)local_14,local_c[-1],0,(uint)param_2,uVar2,0,uVar2);
        puVar5 = (uint *)((int)param_2 + (uVar2 - 1));
      }
      else {
        local_50 = local_50 * 0x10;
        iVar4 = (int)(char)*param_2;
        if ((iVar4 < 0x30) || (0x39 < iVar4)) {
          iVar4 = (int)(char)*param_2;
          if ((iVar4 < 0x61) || (0x66 < iVar4)) {
            iVar4 = (int)(char)*param_2;
            if ((0x40 < iVar4) && (iVar4 < 0x47)) {
              local_50 = local_50 + iVar4 + -0x37;
            }
          }
          else {
            local_50 = local_50 + iVar4 + -0x57;
          }
        }
        else {
          local_50 = local_50 + iVar4 + -0x30;
        }
        local_4c = local_4c + -1;
        if (local_4c == 0) {
          local_c1 = (undefined1)local_50;
          local_28 = 0x2c;
          local_c2 = (undefined1)local_50;
          FUN_004d5c40((int)local_14,local_c[-1],0,1,(undefined1)local_50);
          local_4c = 2;
          iVar7 = 0;
          local_50 = 0;
        }
      }
    }
    param_2 = (uint *)((int)puVar5 + 1);
  }
  local_28 = 0x38;
  local_c8 = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  if (local_c[-3] == -1 || local_c[-3] + 1 < 0) {
    uVar2 = local_c[-1];
    local_d8 = FUN_004cf7b0(param_1,uVar2,uVar2);
    local_d4 = local_d8 + 3;
    *(int **)(param_1 + 8) = local_d4;
    local_dc = param_1;
    local_e4 = local_c;
    local_e8 = *(undefined4 **)(param_1 + 8);
    local_e0 = uVar2;
    FUN_004dc7d4(local_e8,local_c,uVar2);
  }
  else {
    local_cc = local_c;
    *(undefined4 **)(param_1 + 8) = local_c;
    local_d0 = param_1;
    piVar9 = (int *)(*(int *)(param_1 + 8) + -0xc);
    if (piVar9 != &DAT_00513d58) {
      *piVar9 = *piVar9 + 1;
    }
  }
  local_28 = 0x50;
  if (local_c != (undefined4 *)0x0) {
    if (local_c[-3] != -1) {
      piVar9 = local_c + -3;
      if (piVar9 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else if (piVar9 == &DAT_00513d58) {
        iVar7 = 1;
      }
      else {
        *piVar9 = *piVar9 + -1;
        iVar7 = *piVar9 + 1;
      }
      if (iVar7 != 0) goto LAB_0043f8f5;
    }
    local_ec = local_c + -3;
    local_f0 = local_c + -3;
    FUN_004cc0bc();
  }
LAB_0043f8f5:
  *in_FS_OFFSET = local_38;
  return param_1;
}

