// name: FUN_0045611e
// address: 0x45611e
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_0045611e(int param_1,int *param_2,undefined4 *param_3,int *param_4,int param_5,int *param_6,
            uint *param_7,int param_8)

{
  int *piVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_18;
  int local_14;
  undefined4 *local_10;
  uint local_c;
  
  local_c = 0;
  local_10 = (undefined4 *)0x0;
  local_14 = 0;
  if ((param_2 == (int *)0x0) || ((*(byte *)(param_2 + 1) & 1) == 0)) {
    FUN_0045d2c4(s_topTypPtr____0____IS_STRUC_topTy_0047432b,s_xxtype_cpp_00474359,0x34f);
  }
  if ((param_4 == (int *)0x0) || ((*(byte *)(param_4 + 1) & 1) == 0)) {
    FUN_0045d2c4(s_tgtTypPtr____0____IS_STRUC_tgtTy_00474364,s_xxtype_cpp_00474392,0x350);
  }
  if ((param_6 != (int *)0x0) && ((*(byte *)(param_6 + 1) & 1) == 0)) {
    FUN_0045d2c4(s_srcTypPtr____0____IS_STRUC_srcTy_0047439d,s_xxtype_cpp_004743cb,0x351);
  }
  if (param_6 != (int *)0x0) {
    iVar3 = FUN_00456460(param_6,param_4);
    if (iVar3 != 0) {
      FUN_0045d2c4(s___isSameTypeID_srcTypPtr__tgtTyp_004743d6,s_xxtype_cpp_00474400,0x355);
    }
    iVar3 = FUN_00456460(param_6,param_2);
    if (iVar3 != 0) {
      return (undefined4 *)0x0;
    }
  }
  if ((param_4 == (int *)0x0) || (iVar3 = FUN_00456460(param_2,param_4), iVar3 != 0)) {
    FUN_0045d2c4(s_tgtTypPtr____0______isSameTypeID_0047440b,s_xxtype_cpp_00474447,0x35b);
  }
  if ((*(byte *)(param_2 + 3) & 4) == 0) {
    return (undefined4 *)0x0;
  }
  bVar2 = false;
  puVar5 = (undefined4 *)((uint)*(ushort *)((int)param_2 + 0x12) + (int)param_2);
  do {
    while (piVar1 = (int *)*puVar5, piVar1 == (int *)0x0) {
      if (bVar2) {
        *param_7 = local_c;
        if (local_14 == 1) {
          return local_10;
        }
        return (undefined4 *)0x0;
      }
      bVar2 = true;
      puVar5 = (undefined4 *)((uint)*(ushort *)(param_2 + 4) + (int)param_2);
    }
    if ((*(byte *)(puVar5 + 2) & 8) == 0) {
      if ((param_8 == 0) || ((puVar5[2] & 3) != 3)) {
        local_18 = 0;
      }
      else {
        local_18 = 1;
      }
      puVar6 = (undefined4 *)(param_1 + puVar5[1]);
      if ((*(byte *)(puVar5 + 2) & 4) != 0) {
        puVar6 = (undefined4 *)*puVar6;
      }
      iVar3 = FUN_00456460(param_4,piVar1);
      if (iVar3 == 0) {
        if (((*(byte *)(piVar1 + 3) & 4) != 0) &&
           (puVar6 = FUN_0045611e((int)puVar6,piVar1,param_3,param_4,param_5,param_6,param_7,
                                  local_18), puVar6 != (undefined4 *)0x0)) {
          local_18 = *param_7;
          goto LAB_00456329;
        }
      }
      else if (param_3 == (undefined4 *)0x0) {
        if (param_5 != 0) {
          if (param_6 == (int *)0x0) {
            FUN_0045d2c4(s_srcTypPtr_00474452,s_xxtype_cpp_0047445c,0x3d0);
          }
          puVar4 = FUN_0045611e((int)puVar6,piVar1,(undefined4 *)param_5,param_6,0,(int *)0x0,
                                param_7,0);
          if (puVar4 == (undefined4 *)0x0) goto LAB_00456348;
        }
LAB_00456329:
        if ((local_14 == 0) || (puVar6 != local_10)) {
          local_14 = local_14 + 1;
          local_c = local_18;
          local_10 = puVar6;
        }
        else {
          local_c = local_c | local_18;
        }
      }
      else if (puVar6 == param_3) {
        return puVar6;
      }
    }
LAB_00456348:
    puVar5 = puVar5 + 3;
  } while( true );
}

