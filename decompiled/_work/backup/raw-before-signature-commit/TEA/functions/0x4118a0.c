// name: FUN_004118a0
// address: 0x4118a0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004118a0(int param_1,int param_2)

{
  uint *puVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  undefined3 extraout_var;
  uint uVar7;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  char *local_1c;
  char *local_18;
  uint *local_c;
  uint *local_8;
  
  iVar10 = *(int *)(param_1 + 0x47f8);
  local_8 = *(uint **)(param_1 + 0x47f0);
  local_c = *(uint **)(param_1 + 0x47f4);
  iVar3 = *(int *)(param_1 + 0x10);
  iVar8 = iVar3 + 4;
  if (iVar10 < 0x20) {
    uVar11 = *local_8 >> ((byte)iVar10 & 0x1f);
  }
  else {
    uVar11 = 0;
  }
  do {
    local_18 = (char *)(param_1 + 0x20);
    local_1c = (char *)(param_1 + 0x408);
LAB_00411907:
    iVar9 = *(int *)(iVar3 + 0x1804 + (uVar11 & 0xff) * 4);
    if (iVar9 < 0x100) {
      iVar4 = *(int *)(iVar8 + iVar9 * 8);
      if (0x20 < iVar4 + iVar10) {
LAB_00411944:
        puVar1 = local_8 + 1;
        if (puVar1 < local_c) {
          uVar7 = *puVar1;
          iVar9 = *(int *)(iVar3 + 0x1804 +
                          ((uVar11 | uVar7 << (0x20U - (char)iVar10 & 0x1f)) & 0xff) * 4);
          local_8 = puVar1;
          if (iVar9 < 0x100) {
            iVar10 = *(int *)(iVar8 + iVar9 * 8) + -0x20 + iVar10;
            uVar11 = uVar7 >> ((byte)iVar10 & 0x1f);
            goto LAB_00411a38;
          }
          iVar10 = iVar10 + -0x18;
          uVar11 = uVar7 >> ((byte)iVar10 & 0x1f);
        }
        else {
          iVar9 = 0x100;
        }
        goto joined_r0x004119a8;
      }
      iVar10 = iVar10 + iVar4;
      uVar11 = uVar11 >> ((byte)iVar4 & 0x1f);
    }
    else {
      if (0x18 < iVar10) goto LAB_00411944;
      iVar10 = iVar10 + 8;
      uVar11 = uVar11 >> 8;
joined_r0x004119a8:
      for (; 0xff < iVar9; iVar9 = *(int *)(iVar8 + iVar9 * 8 + uVar7 * 4)) {
        if (0x1f < iVar10) {
          local_8 = local_8 + 1;
          if (local_c <= local_8) {
            bVar6 = FUN_0041217c(param_1);
            if (CONCAT31(extraout_var,bVar6) == 0) {
              *(undefined1 *)(param_1 + 0x20) = 0xff;
              *(undefined4 *)(param_1 + 0x47f8) = 0;
              *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
              goto LAB_00411bd5;
            }
            local_8 = *(uint **)(param_1 + 0x47f0);
            local_c = *(uint **)(param_1 + 0x47f4);
          }
          iVar10 = 0;
          uVar11 = *local_8;
        }
        uVar7 = uVar11 & 1;
        iVar10 = iVar10 + 1;
        uVar11 = uVar11 >> 1;
      }
    }
LAB_00411a38:
    pcVar2 = local_1c + 1;
    cVar5 = (char)iVar9;
    *local_1c = cVar5;
    if (cVar5 != '\0') {
      if (cVar5 == '\n') {
        *local_1c = '\0';
        local_18 = (char *)0x0;
        local_1c = pcVar2;
      }
      else {
        local_1c = pcVar2;
        if ((local_18 != (char *)0x0) &&
           (cVar5 = *(char *)(iVar3 + 8 + iVar9 * 8), *local_18 = cVar5, cVar5 != -1)) {
          local_18 = local_18 + 1;
        }
      }
      goto LAB_00411907;
    }
    *pcVar2 = '\0';
    if ((char *)(param_1 + 0x20) == local_18) {
      *local_18 = -1;
      *(undefined4 *)(param_1 + 0x4808) = 0;
      *(undefined4 *)(param_1 + 0x4804) = 1;
      *(int *)(param_1 + 0x4800) = *(int *)(param_1 + 0x4800) + -1;
      *(int *)(param_1 + 0x47f8) = iVar10;
      *(uint **)(param_1 + 0x47f0) = local_8;
      *(uint **)(param_1 + 0x47f4) = local_c;
      goto LAB_00411bd5;
    }
    if (*(int *)(param_1 + 0x4800) == 2) {
      if (0x1f < iVar10) {
        local_8 = local_8 + 1;
        if (local_c <= local_8) {
          bVar6 = FUN_0041217c(param_1);
          if (CONCAT31(extraout_var_00,bVar6) == 0) {
            *(undefined1 *)(param_1 + 0x20) = 0xff;
            *(undefined4 *)(param_1 + 0x47f8) = 0;
            *(undefined4 *)(param_1 + 0x47f0) = *(undefined4 *)(param_1 + 0x47f4);
            goto LAB_00411bd5;
          }
          local_8 = *(uint **)(param_1 + 0x47f0);
          local_c = *(uint **)(param_1 + 0x47f4);
        }
        iVar10 = 0;
        uVar11 = *local_8;
      }
      *(uint *)(param_1 + 0x4804) = uVar11 & 1;
      if ((uVar11 & 1) != 0) {
        *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
      }
      iVar10 = iVar10 + 1;
      uVar11 = uVar11 >> 1;
    }
    else {
      *(int *)(param_1 + 0x4808) = *(int *)(param_1 + 0x4808) + 1;
    }
  } while ((param_2 != 0) &&
          (bVar6 = FUN_00434898(param_2,param_1 + 0x20), CONCAT31(extraout_var_01,bVar6) == 0));
  *(int *)(param_1 + 0x47f8) = iVar10;
  *(uint **)(param_1 + 0x47f0) = local_8;
  *(uint **)(param_1 + 0x47f4) = local_c;
LAB_00411bd5:
  return param_1 + 0x20;
}

