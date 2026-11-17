// name: FUN_0042911a
// address: 0x42911a
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0042911a(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *local_20;
  int *local_1c;
  int local_18;
  int *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_c = 0;
  if (param_1 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    local_8 = *(int *)(param_3 + 0x1c) - param_2;
    if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
      if ((*(byte *)(param_1 + 1) & 0x11) == 0) {
        FUN_00426830(s_dttPtr_>dttFlags____DTCVF_PTRVAL_0043406f,s_xx_cpp_0043409e,0xe78);
      }
      if ((*(byte *)(*param_1 + 4) & 0x10) == 0) {
        FUN_00426830(s_dttPtr_>dttType_>tpMask___TM_IS__004340a5,s_xx_cpp_004340c9,0xe7c);
      }
      if ((*(byte *)(*(int *)(*param_1 + 8) + 0xc) & 2) == 0) {
        FUN_00426830(s_dttPtr_>dttType_>tpPtr_tppBaseTy_004340d0,s_xx_cpp_00434113,0xe7d);
      }
      local_8 = *(uint *)(*(int *)(*param_1 + 8) + 0x20);
    }
    if ((*(byte *)((int)param_1 + 5) & 1) == 0) {
      piVar5 = param_1;
      if (((int)local_8 < 1) && ((*(byte *)((int)param_1 + 5) & 4) == 0)) {
        if ((param_1[1] & 3U) != 3) {
          return 0;
        }
        local_c = local_c + 1;
      }
      else {
        for (; *piVar5 != 0; piVar5 = piVar5 + 3) {
          if ((*(byte *)((int)piVar5 + 5) & 0x10) == 0) {
            local_10 = *piVar5;
          }
          else {
            if ((*(byte *)(*piVar5 + 5) & 4) == 0) {
              FUN_00426830(s_dtvtPtr_>dttType_>tpMask___TM_IS_00434178,s_xx_cpp_0043419f,0xed7);
            }
            local_10 = *(int *)(*piVar5 + 8);
          }
          iVar8 = 1;
          if (((((*(byte *)(local_10 + 4) & 0x10) != 0) &&
               (local_10 = *(int *)(local_10 + 8), (*(byte *)(local_10 + 4) & 2) != 0)) &&
              ((*(byte *)(local_10 + 0xc) & 0x20) != 0)) && ((*(byte *)(piVar5 + 1) & 8) != 0)) {
            iVar6 = 0;
            if ((*(byte *)(local_10 + 0xc) & 2) == 0) {
              FUN_00426830(s_varType_>tpClass_tpcFlags___CF_H_004341a6,s_xx_cpp_004341ce,0xef7);
            }
            if ((*(byte *)(piVar5 + 1) & 4) == 0) {
              local_14 = (int *)piVar5[2];
            }
            else {
              local_14 = (int *)(param_4 + piVar5[2]);
            }
            iVar1 = *local_14;
            if ((*(byte *)((int)piVar5 + 5) & 0x10) != 0) {
              iVar6 = local_14[1];
            }
            local_14 = (int *)iVar1;
            if ((*(byte *)(piVar5 + 1) & 0x40) != 0) {
              local_14 = (int *)(iVar1 + 4);
            }
            local_14 = (int *)FUN_00429093((int)local_14,&local_10,iVar6);
          }
          iVar6 = local_10;
          if ((*(byte *)(local_10 + 5) & 4) != 0) {
            iVar8 = *(int *)(local_10 + 0xc);
            iVar6 = *(int *)(local_10 + 8);
          }
          if ((*(byte *)(iVar6 + 0xc) & 2) == 0) {
            FUN_00426830(s_elemType_>tpClass_tpcFlags___CF__004341d5,s_xx_cpp_004341fe,0xf22);
          }
          uVar7 = iVar8 * *(int *)(iVar6 + 0x20);
          if (local_8 <= uVar7) goto LAB_00429355;
          local_8 = local_8 - uVar7;
        }
        piVar5 = piVar5 + -3;
      }
LAB_00429355:
      do {
        local_18 = *piVar5;
        uVar7 = piVar5[1];
        if ((uVar7 & 4) == 0) {
          local_1c = (int *)piVar5[2];
        }
        else {
          local_1c = (int *)(param_4 + piVar5[2]);
        }
        if ((uVar7 & 0x1000) != 0) {
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00426830(s_varType_>tpMask___TM_IS_ARRAY_00434205,s_xx_cpp_00434223,0xf52);
          }
          local_18 = *(int *)(local_18 + 8);
        }
        if ((uVar7 & 0x11) != 0) {
          iVar8 = 0;
          if ((*(byte *)(local_18 + 4) & 0x10) == 0) {
            FUN_00426830(s_varType_>tpMask___TM_IS_PTR_0043422a,s_xx_cpp_00434246,0xf5c);
          }
          local_18 = *(int *)(local_18 + 8);
          local_20 = (int *)*local_1c;
          if ((uVar7 & 0x1000) != 0) {
            iVar8 = local_1c[1];
          }
          local_1c = local_20;
          if ((uVar7 & 0x48) == 0x40) {
            local_1c = local_20 + 1;
          }
          if ((((*(byte *)(local_18 + 4) & 2) != 0) && ((*(byte *)(local_18 + 0xc) & 0x20) != 0)) &&
             ((uVar7 & 8) != 0)) {
            local_20 = (int *)FUN_00429093((int)local_1c,&local_18,iVar8);
            local_1c = local_20;
          }
        }
        if (local_c == 0) {
          if ((uVar7 & 0x400) == 0) {
            uVar4 = 0;
          }
          else {
            if (*(short *)(local_18 + 0x10) == 0) {
              uVar4 = 0;
            }
            else {
              piVar9 = (int *)((uint)*(ushort *)(local_18 + 0x10) + local_18);
              if (piVar9 == (int *)0x0) {
                FUN_00426830(&DAT_0043424d,s_xx_cpp_00434250,0xf92);
              }
              uVar4 = *(uint *)(*piVar9 + 0x20);
            }
            if (local_8 < uVar4) {
              uVar4 = 2;
            }
            else {
              uVar4 = 1;
            }
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            FUN_00428cbf((int)local_1c,local_18,uVar4,local_8,1,param_4,param_3);
          }
          else {
            FUN_00428f6f((int)local_1c,local_18,local_8,param_4,param_3);
          }
          if ((((uVar7 & 0x400) != 0) && ((*(byte *)(param_3 + 0x20) & 1) != 0)) &&
             (*(char *)(param_3 + 0x20) != -1)) {
            (**(code **)(*local_1c + -8))(local_1c);
          }
        }
        if ((uVar7 & 3) == 3) {
          if ((uVar7 & 0x48) == 0x48) {
            local_20 = local_20 + -1;
          }
          if ((*(byte *)(local_18 + 5) & 4) == 0) {
            if (*(int *)(local_18 + 0x14) == 0) {
              FUN_00414f78();
            }
            else {
              FUN_00427dd2(local_20,*(undefined **)(local_18 + 0x14),
                           (uint)*(ushort *)(local_18 + 0x18));
            }
          }
          else {
            local_18 = *(int *)(local_18 + 8);
            if (*(int *)(local_18 + 0x1c) == 0) {
              FUN_00414f88();
            }
            else {
              FUN_00427dd2(local_20,*(undefined **)(local_18 + 0x1c),
                           (uint)*(ushort *)(local_18 + 0x1a));
            }
          }
        }
        local_8 = 0;
        bVar2 = param_1 < piVar5;
        piVar5 = piVar5 + -3;
      } while (bVar2);
      uVar3 = 0;
    }
    else {
      if (((*(byte *)(*param_1 + 4) & 2) == 0) || ((*(byte *)(*param_1 + 0xc) & 2) == 0)) {
        FUN_00426830(s_IS_CLASS_dttPtr_>dttType_>tpMask_0043411a,s_xx_cpp_00434171,0xe8b);
      }
      uVar3 = *(undefined4 *)(*param_1 + 0x24);
    }
  }
  return uVar3;
}

