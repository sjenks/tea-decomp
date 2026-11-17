// name: FUN_00409c78
// address: 0x409c78
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

char * __cdecl FUN_00409c78(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  bool bVar5;
  int *piVar6;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar7;
  uint uVar8;
  char *pcVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  char *local_28;
  char *local_24;
  int local_20;
  uint *local_c;
  uint *local_8;
  
  iVar13 = *(int *)(param_1 + 0x47f8);
  local_8 = *(uint **)(param_1 + 0x47f0);
  local_c = *(uint **)(param_1 + 0x47f4);
  iVar2 = *(int *)(param_1 + 0x10);
  iVar10 = iVar2 + 4;
  if (*(int *)(*(int *)(param_2 + 0x28) + -4) == 0) {
    pbVar11 = (byte *)0x0;
  }
  else {
    pbVar11 = *(byte **)(param_2 + 0x28);
  }
  if (**(char **)(param_2 + 0x28) == '\x03') {
    iVar12 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
    if (iVar12 < 0) {
      iVar12 = iVar12 + 3;
    }
    if (iVar12 >> 2 == 0) {
      piVar6 = (int *)0x0;
    }
    else {
      piVar6 = *(int **)(param_2 + 4);
    }
    iVar12 = *piVar6;
  }
  else {
    iVar12 = 0;
  }
  local_20 = 2000;
  if (iVar13 < 0x20) {
    uVar14 = *local_8 >> ((byte)iVar13 & 0x1f);
  }
  else {
    uVar14 = 0;
  }
  do {
    local_24 = (char *)(param_1 + 0x20);
    local_28 = (char *)(param_1 + 0x408);
LAB_00409d3a:
    iVar7 = *(int *)(iVar2 + 0x1804 + (uVar14 & 0xff) * 4);
    if (iVar7 < 0x100) {
      iVar3 = *(int *)(iVar10 + iVar7 * 8);
      if (0x20 < iVar3 + iVar13) {
LAB_00409d77:
        puVar1 = local_8 + 1;
        if (puVar1 < local_c) {
          uVar8 = *puVar1;
          iVar7 = *(int *)(iVar2 + 0x1804 +
                          ((uVar14 | uVar8 << (0x20U - (char)iVar13 & 0x1f)) & 0xff) * 4);
          local_8 = puVar1;
          if (iVar7 < 0x100) {
            iVar13 = *(int *)(iVar10 + iVar7 * 8) + -0x20 + iVar13;
            uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
            goto LAB_00409e6b;
          }
          iVar13 = iVar13 + -0x18;
          uVar14 = uVar8 >> ((byte)iVar13 & 0x1f);
        }
        else {
          iVar7 = 0x100;
        }
        goto joined_r0x00409ddb;
      }
      iVar13 = iVar13 + iVar3;
      uVar14 = uVar14 >> ((byte)iVar3 & 0x1f);
    }
    else {
      if (0x18 < iVar13) goto LAB_00409d77;
      iVar13 = iVar13 + 8;
      uVar14 = uVar14 >> 8;
joined_r0x00409ddb:
      for (; 0xff < iVar7; iVar7 = *(int *)(iVar10 + iVar7 * 8 + uVar8 * 4)) {
        if (0x1f < iVar13) {
          local_8 = local_8 + 1;
          if (local_c <= local_8) {
            bVar5 = FUN_0040a218(param_1);
            if (CONCAT31(extraout_var,bVar5) == 0) {
              *(undefined1 *)(param_1 + 0x20) = 0xff;
              *(undefined4 *)(param_1 + 0x47f8) = 0;
              *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
              return (char *)(param_1 + 0x20);
            }
            local_8 = *(uint **)(param_1 + 0x47f0);
            local_c = *(uint **)(param_1 + 0x47f4);
          }
          iVar13 = 0;
          uVar14 = *local_8;
        }
        uVar8 = uVar14 & 1;
        iVar13 = iVar13 + 1;
        uVar14 = uVar14 >> 1;
      }
    }
LAB_00409e6b:
    pcVar9 = local_28 + 1;
    cVar4 = (char)iVar7;
    *local_28 = cVar4;
    if (cVar4 != '\0') {
      if (cVar4 == '\n') {
        *local_28 = '\0';
        local_24 = (char *)0x0;
        local_28 = pcVar9;
      }
      else {
        local_28 = pcVar9;
        if ((local_24 != (char *)0x0) &&
           (cVar4 = *(char *)(iVar2 + 8 + iVar7 * 8), *local_24 = cVar4, cVar4 != -1)) {
          local_24 = local_24 + 1;
        }
      }
      goto LAB_00409d3a;
    }
    *pcVar9 = '\0';
    if ((char *)(param_1 + 0x20) == local_24) {
      *local_24 = -1;
      *(undefined4 *)(param_1 + 0x4808) = 0;
      *(undefined4 *)(param_1 + 0x4804) = 1;
      *(char *)(param_1 + 0x4800) = *(char *)(param_1 + 0x4800) + -1;
      *(int *)(param_1 + 0x47f8) = iVar13;
      *(uint **)(param_1 + 0x47f0) = local_8;
      *(uint **)(param_1 + 0x47f4) = local_c;
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (2000 - local_20);
      return (char *)(param_1 + 0x20);
    }
    if (*(char *)(param_1 + 0x4800) == '\x02') {
      if (0x1f < iVar13) {
        local_8 = local_8 + 1;
        if (local_c <= local_8) {
          bVar5 = FUN_0040a218(param_1);
          if (CONCAT31(extraout_var_00,bVar5) == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0xff;
            *(undefined4 *)(param_1 + 0x47f8) = 0;
            *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
            return (char *)(param_1 + 0x20);
          }
          local_8 = *(uint **)(param_1 + 0x47f0);
          local_c = *(uint **)(param_1 + 0x47f4);
        }
        iVar13 = 0;
        uVar14 = *local_8;
      }
      *(uint *)(param_1 + 0x4804) = uVar14 & 1;
      if ((uVar14 & 1) != 0) {
        *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
      }
      iVar13 = iVar13 + 1;
      uVar14 = uVar14 >> 1;
    }
    else {
      *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
    }
    if (iVar12 == 0) {
      if (pbVar11 == (byte *)0x0) {
LAB_0040a049:
        *(int *)(param_1 + 0x47f8) = iVar13;
        *(uint **)(param_1 + 0x47f0) = local_8;
        *(uint **)(param_1 + 0x47f4) = local_c;
        if (local_20 < 1) {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 2000;
          pcVar9 = (char *)0x0;
        }
        else {
          *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (0x7d1 - local_20);
          pcVar9 = (char *)(param_1 + 0x20);
        }
        return pcVar9;
      }
      iVar7 = *(int *)(param_2 + 8) - *(int *)(param_2 + 4);
      if (iVar7 < 0) {
        iVar7 = iVar7 + 3;
      }
      if (iVar7 >> 2 == 0) {
        piVar6 = (int *)0x0;
      }
      else {
        piVar6 = *(int **)(param_2 + 4);
      }
      uVar8 = FUN_0040a09c('\x02',param_1 + 0x20,*(int *)(param_1 + 0x47fc),pbVar11,piVar6);
    }
    else {
      bVar5 = FUN_0040d73c(iVar12,param_1 + 0x20);
      uVar8 = CONCAT31(extraout_var_01,bVar5);
    }
    if ((uVar8 != 0) || (local_20 = local_20 + -1, local_20 < 1)) goto LAB_0040a049;
  } while( true );
}

