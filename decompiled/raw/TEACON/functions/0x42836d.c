// name: FUN_0042836d
// address: 0x42836d
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0042836d(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  bool bVar7;
  int *local_c;
  uint local_8;
  
  if (*(int *)(param_3 + 0x28) != param_2) {
    FUN_00426830(s_dscPtr_>xdERRaddr____errPtr_00433c15,s_xx_cpp_00433c31,0x722);
  }
  if (*(int *)(param_3 + 0x2c) != param_1) {
    FUN_00426830(s_dscPtr_>xdHtabAdr____hdtPtr_00433c38,s_xx_cpp_00433c54,0x723);
  }
  if (*(char *)(param_3 + 0x45) != '\0') {
    FUN_00426830(s_dscPtr_>xdArgCopy____0_00433c5b,s_xx_cpp_00433c72,0x725);
  }
  puVar6 = *(uint **)(param_1 + 4);
  *(uint **)(param_3 + 0x3c) = puVar6;
  if ((puVar6 != (uint *)0x0) && ((*(byte *)(param_1 + 8) & 0x80) == 0)) {
    bVar7 = (*(byte *)(param_1 + 8) & 1) == 0;
    local_c = (int *)(param_3 + 0x52);
    *(undefined1 *)(param_3 + 0x45) = 1;
    *(int *)(param_3 + 0x40) = *param_4 + param_5;
    uVar1 = (ushort)puVar6[1];
    uVar3 = *puVar6;
    uVar2 = uVar1;
    if ((uVar1 & 0x30) != 0) {
      puVar6 = (uint *)puVar6[2];
      uVar2 = (ushort)puVar6[1];
    }
    local_8 = (uint)uVar2;
    if (((uVar1 & 0x10) == 0) || ((*(byte *)(param_3 + 0xc) & 1) == 0)) {
      if (((uVar2 & 1) == 0) || ((uVar1 & 0x30) == 0)) {
        if ((*(byte *)(param_3 + 0x18) & 1) == 0) {
          if ((uVar1 & 0x20) == 0) {
            if (uVar3 != *(uint *)(param_3 + 0x10)) {
              FUN_00426830(s_dscPtr_>xdSize____size_00433d20,s_xx_cpp_00433d37,0x7f8);
            }
            FUN_0041eddc(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            FUN_0041eddc(*(undefined4 **)(param_3 + 0x40),&local_c,uVar3);
            bVar7 = true;
          }
        }
        else {
          if (*(int *)(param_3 + 4) != *(int *)(param_3 + 0x14)) {
            FUN_00426830(s_dscPtr_>xdTypeID____dscPtr_>xdBa_00433cdc,s_xx_cpp_00433cff,0x7b6);
          }
          iVar5 = FUN_0041f958(*(int **)(param_3 + 0x14),(int *)puVar6);
          if (iVar5 == 0) {
            local_c = (int *)FUN_0041fb44((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          }
          bVar7 = iVar5 == 0 || bVar7;
          if ((puVar6[3] & 1) == 0) {
            FUN_0041eddc(*(undefined4 **)(param_3 + 0x40),local_c,uVar3);
          }
          else {
            if (*(int *)(param_1 + 0xc) == 0) {
              FUN_00426830(s_hdtPtr_>HDcctrAddr_00433d06,s_xx_cpp_00433d19,2000);
            }
            FUN_00427bbf(*(undefined4 *)(param_3 + 0x40),local_c,*(undefined **)(param_1 + 0xc),
                         *(uint *)(param_1 + 0x10));
            bVar7 = true;
          }
        }
      }
      else {
        if ((uVar1 & 0x20) == 0) {
          if ((uVar1 & 0x10) == 0) {
            FUN_00426830(s_mask___TM_IS_PTR_00433ca2,s_xx_cpp_00433cb3,0x795);
          }
          if ((*(byte *)(param_3 + 0x18) & 0x10) == 0) {
            FUN_00426830(s_dscPtr_>xdMask___TM_IS_PTR_00433cba,s_xx_cpp_00433cd5,0x796);
          }
          local_c = (int *)*local_c;
        }
        else {
          if ((*(byte *)(param_3 + 0x18) & 0x10) != 0) {
            FUN_00426830(s__dscPtr_>xdMask___TM_IS_PTR_____0_00433c79,s_xx_cpp_00433c9b,0x782);
          }
          bVar7 = true;
        }
        iVar5 = FUN_0041f958(*(int **)(param_3 + 0x14),(int *)puVar6);
        piVar4 = local_c;
        if (iVar5 == 0) {
          local_c = (int *)FUN_0041fb44((int)local_c,*(int *)(param_3 + 0x14),(int *)puVar6);
          if (local_c != piVar4) {
            bVar7 = true;
          }
        }
        FUN_0041eddc(*(undefined4 **)(param_3 + 0x40),&local_c,uVar3);
      }
    }
    else {
      FUN_0041ee4c(*(undefined4 **)(param_3 + 0x40),0,uVar3);
      bVar7 = true;
    }
    if ((!bVar7) && ((local_8 & 3) != 0)) {
      if ((puVar6[3] & 2) != 0) {
        FUN_0042817f(local_c,(int)puVar6,(undefined *)puVar6[10],(uint)(ushort)puVar6[0xb]);
      }
      *(undefined1 *)(param_3 + 0x44) = 0;
    }
  }
  return;
}

