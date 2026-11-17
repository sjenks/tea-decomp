// name: FUN_0043a064
// address: 0x43a064
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void __cdecl FUN_0043a064(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 *puVar5;
  undefined **local_3c0;
  undefined4 local_190;
  undefined1 local_16c [8];
  int local_164;
  undefined1 local_15c [8];
  int local_154;
  undefined1 local_14c [8];
  int local_144;
  undefined1 local_13c [8];
  int local_134;
  undefined1 local_12c [8];
  int local_124;
  undefined1 local_11c [8];
  int local_114;
  undefined1 local_10c [8];
  int local_104;
  undefined1 local_fc [8];
  int local_f4;
  undefined1 local_ec [8];
  int local_e4;
  undefined1 local_dc [8];
  int local_d4;
  undefined1 local_cc [8];
  int local_c4;
  undefined1 local_bc [8];
  int local_b4;
  undefined1 local_ac [8];
  int local_a4;
  undefined1 local_9c [8];
  int local_94;
  undefined1 local_8c [8];
  int local_84;
  undefined1 local_7c [8];
  int local_74;
  undefined1 local_6c [8];
  int local_64;
  undefined1 local_5c [8];
  int local_54;
  undefined1 local_4c [8];
  int local_44;
  undefined1 local_3c [8];
  int local_34;
  undefined1 local_2c [8];
  int local_24;
  undefined1 local_1c [8];
  int local_14;
  int local_c [2];
  
  FUN_004dce64(0x4f4858);
  FUN_0044e83c(local_c,param_1 + 0x1e0,1,0);
  switch(param_2) {
  case 0:
    break;
  case 1:
    FUN_004cf628((int)local_5c,(uint *)s_ViewShowAnnotations_004f3e92);
    FUN_0044eca8((int)local_c,(int)local_5c);
    if (local_54 != 0) {
      if (*(int *)(local_54 + -0xc) != -1) {
        piVar3 = (int *)(local_54 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043a4d7;
      }
      FUN_004cc0bc();
      local_54 = 0;
    }
LAB_0043a4d7:
    FUN_004cf628((int)local_6c,(uint *)s_ViewShowBalances_004f3ea6);
    FUN_0044eca8((int)local_c,(int)local_6c);
    if (local_64 != 0) {
      if (*(int *)(local_64 + -0xc) != -1) {
        piVar3 = (int *)(local_64 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043a5a8;
      }
      FUN_004cc0bc();
      local_64 = 0;
    }
LAB_0043a5a8:
    FUN_004cf628((int)local_7c,(uint *)s_ViewDoubleClick_004f3e82);
    FUN_0044eca8((int)local_c,(int)local_7c);
    if (local_74 != 0) {
      if (*(int *)(local_74 + -0xc) != -1) {
        piVar3 = (int *)(local_74 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043a679;
      }
      FUN_004cc0bc();
      local_74 = 0;
    }
LAB_0043a679:
    uVar4 = 0;
    local_3c0 = &PTR_s_OutputLower_004f3d78;
    do {
      FUN_004cf628((int)local_8c,(uint *)*local_3c0);
      FUN_0044eca8((int)local_c,(int)local_8c);
      if (local_84 != 0) {
        if (*(int *)(local_84 + -0xc) != -1) {
          piVar3 = (int *)(local_84 + -0xc);
          if (piVar3 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else if (piVar3 == &DAT_00513d58) {
            iVar2 = 1;
          }
          else {
            *piVar3 = *piVar3 + -1;
            iVar2 = *piVar3 + 1;
          }
          if (iVar2 != 0) goto LAB_0043a771;
        }
        FUN_004cc0bc();
        local_84 = 0;
      }
LAB_0043a771:
      uVar4 = uVar4 + 1;
      local_3c0 = local_3c0 + 1;
    } while (uVar4 < 4);
    goto switchD_0043a0b5_default;
  case 2:
    FUN_004cf628((int)local_9c,(uint *)s_ViewSorting_004f3e36);
    FUN_0044eca8((int)local_c,(int)local_9c);
    if (local_94 != 0) {
      if (*(int *)(local_94 + -0xc) != -1) {
        piVar3 = (int *)(local_94 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043a87a;
      }
      FUN_004cc0bc();
      local_94 = 0;
    }
LAB_0043a87a:
    FUN_004cf628((int)local_ac,(uint *)s_ViewSortingAscending_004f3e42);
    FUN_0044eca8((int)local_c,(int)local_ac);
    if (local_a4 != 0) {
      if (*(int *)(local_a4 + -0xc) != -1) {
        piVar3 = (int *)(local_a4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043a966;
      }
      FUN_004cc0bc();
      local_a4 = 0;
    }
LAB_0043a966:
    FUN_004cf628((int)local_bc,(uint *)s_ViewLengthGrouping_004f3e57);
    FUN_0044eca8((int)local_c,(int)local_bc);
    if (local_b4 != 0) {
      if (*(int *)(local_b4 + -0xc) != -1) {
        piVar3 = (int *)(local_b4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043aa52;
      }
      FUN_004cc0bc();
      local_b4 = 0;
    }
LAB_0043aa52:
    FUN_004cf628((int)local_cc,(uint *)s_ViewLengthGroupingSense_004f3e6a);
    FUN_0044eca8((int)local_c,(int)local_cc);
    if (local_c4 != 0) {
      if (*(int *)(local_c4 + -0xc) != -1) {
        piVar3 = (int *)(local_c4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      FUN_004cc0bc();
      local_c4 = 0;
    }
    goto switchD_0043a0b5_default;
  case 3:
    FUN_004cf628((int)local_dc,(uint *)s_ViewMultipleDictionaries_004f3eb7);
    FUN_0044eca8((int)local_c,(int)local_dc);
    if (local_d4 != 0) {
      if (*(int *)(local_d4 + -0xc) != -1) {
        piVar3 = (int *)(local_d4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043ac2c;
      }
      FUN_004cc0bc();
      local_d4 = 0;
    }
LAB_0043ac2c:
    puVar1 = (uint *)FUN_00408c8c(*(undefined4 **)(param_1 + 0x28));
    FUN_004cf628((int)local_ec,puVar1);
    puVar5 = local_ec;
    FUN_004cf628((int)local_fc,(uint *)s_ViewDefinitionDictionary_004f3ed0);
    FUN_0044ec78((int)local_c,(int)local_fc,(int)puVar5);
    if (local_f4 != 0) {
      if (*(int *)(local_f4 + -0xc) != -1) {
        piVar3 = (int *)(local_f4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043ad3c;
      }
      FUN_004cc0bc();
      local_f4 = 0;
    }
LAB_0043ad3c:
    if (local_e4 != 0) {
      if (*(int *)(local_e4 + -0xc) != -1) {
        piVar3 = (int *)(local_e4 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      FUN_004cc0bc();
      local_e4 = 0;
    }
    goto switchD_0043a0b5_default;
  case 4:
    iVar2 = param_1 + 0x30;
    FUN_004cf628((int)local_10c,(uint *)s_FontPattern_004f3dfd);
    FUN_0044eccc((int)local_c,(int)local_10c,iVar2);
    if (local_104 != 0) {
      if (*(int *)(local_104 + -0xc) != -1) {
        piVar3 = (int *)(local_104 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043aef2;
      }
      FUN_004cc0bc();
      local_104 = 0;
    }
LAB_0043aef2:
    iVar2 = param_1 + 0x70;
    FUN_004cf628((int)local_11c,(uint *)s_FontOutput_004f3e09);
    FUN_0044eccc((int)local_c,(int)local_11c,iVar2);
    if (local_114 != 0) {
      if (*(int *)(local_114 + -0xc) != -1) {
        piVar3 = (int *)(local_114 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043aff7;
      }
      FUN_004cc0bc();
      local_114 = 0;
    }
LAB_0043aff7:
    iVar2 = param_1 + 0xb0;
    FUN_004cf628((int)local_12c,(uint *)s_FontOutputAnnotation_004f3e14);
    FUN_0044eccc((int)local_c,(int)local_12c,iVar2);
    if (local_124 != 0) {
      if (*(int *)(local_124 + -0xc) != -1) {
        piVar3 = (int *)(local_124 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043b0ff;
      }
      FUN_004cc0bc();
      local_124 = 0;
    }
LAB_0043b0ff:
    iVar2 = param_1 + 0xf0;
    FUN_004cf628((int)local_13c,(uint *)s_FontPrinting_004f3e29);
    FUN_0044eccc((int)local_c,(int)local_13c,iVar2);
    if (local_134 != 0) {
      if (*(int *)(local_134 + -0xc) != -1) {
        piVar3 = (int *)(local_134 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043b207;
      }
      FUN_004cc0bc();
      local_134 = 0;
    }
LAB_0043b207:
    iVar2 = param_1 + 0x2c;
    FUN_004cf628((int)local_14c,(uint *)s_DefinitionBackgroundColor_004f3ee9);
    FUN_0044eda8((int)local_c,(int)local_14c,iVar2);
    if (local_144 != 0) {
      if (*(int *)(local_144 + -0xc) != -1) {
        piVar3 = (int *)(local_144 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043b30c;
      }
      FUN_004cc0bc();
      local_144 = 0;
    }
LAB_0043b30c:
    iVar2 = param_1 + 0x130;
    FUN_004cf628((int)local_15c,(uint *)s_DefinitionDefaultFont_004f3f1b);
    FUN_0044eccc((int)local_c,(int)local_15c,iVar2);
    if (local_154 != 0) {
      if (*(int *)(local_154 + -0xc) != -1) {
        piVar3 = (int *)(local_154 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_0043b414;
      }
      FUN_004cc0bc();
      local_154 = 0;
    }
LAB_0043b414:
    iVar2 = param_1 + 0x170;
    FUN_004cf628((int)local_16c,(uint *)s_DefinitionHighlightFont_004f3f03);
    FUN_0044eccc((int)local_c,(int)local_16c,iVar2);
    if (local_164 != 0) {
      if (*(int *)(local_164 + -0xc) != -1) {
        piVar3 = (int *)(local_164 + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto switchD_0043a0b5_default;
      }
      FUN_004cc0bc();
      local_164 = 0;
    }
  default:
    goto switchD_0043a0b5_default;
  }
  iVar2 = param_1;
  FUN_004cf628((int)local_1c,(uint *)s_ExpansionAt_004f3db8);
  FUN_0044ec78((int)local_c,(int)local_1c,iVar2);
  if (local_14 != 0) {
    if (*(int *)(local_14 + -0xc) != -1) {
      piVar3 = (int *)(local_14 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043a195;
    }
    FUN_004cc0bc();
    local_14 = 0;
  }
LAB_0043a195:
  iVar2 = param_1 + 0x10;
  FUN_004cf628((int)local_2c,(uint *)s_ExpansionHash_004f3dc4);
  FUN_0044ec78((int)local_c,(int)local_2c,iVar2);
  if (local_24 != 0) {
    if (*(int *)(local_24 + -0xc) != -1) {
      piVar3 = (int *)(local_24 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043a263;
    }
    FUN_004cc0bc();
    local_24 = 0;
  }
LAB_0043a263:
  FUN_004cf628((int)local_3c,(uint *)s_VariablesExclusive_004f3dd2);
  FUN_0044eca8((int)local_c,(int)local_3c);
  if (local_34 != 0) {
    if (*(int *)(local_34 + -0xc) != -1) {
      piVar3 = (int *)(local_34 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_0043a333;
    }
    FUN_004cc0bc();
    local_34 = 0;
  }
LAB_0043a333:
  FUN_004cf628((int)local_4c,(uint *)s_IgnoreUnusedPunctuation_004f3de5);
  FUN_0044eca8((int)local_c,(int)local_4c);
  if (local_44 != 0) {
    if (*(int *)(local_44 + -0xc) != -1) {
      piVar3 = (int *)(local_44 + -0xc);
      if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (piVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *piVar3 = *piVar3 + -1;
        iVar2 = *piVar3 + 1;
      }
      if (iVar2 != 0) goto switchD_0043a0b5_default;
    }
    FUN_004cc0bc();
    local_44 = 0;
  }
switchD_0043a0b5_default:
  FUN_0044e920((int)local_c,2);
  *in_FS_OFFSET = local_190;
  return;
}

