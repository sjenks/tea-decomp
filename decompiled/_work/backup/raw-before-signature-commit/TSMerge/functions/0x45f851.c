// name: FUN_0045f851
// address: 0x45f851
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0045f851(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_00455f04(0x4760bc);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_0045d2c4(s_varType_>tpClass_tpcFlags___CF_H_0047643b,s_xx_cpp_00476463,0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_0045d2c4(s_varType_>tpClass_tpcDtorAddr_0047646a,s_xx_cpp_00476487,0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_0045d2c4(s__errPtr_>ERRcInitDtc_>__varType__0047648e,s_xx_cpp_004764ce,0xc28);
  }
  if ((param_3 & 2) == 0) {
    if (param_4 == 0) {
      iVar2 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar2 = *(int *)(param_2 + 0x20);
    }
    *(int *)(param_5 + 0x1c) = *(int *)(param_5 + 0x1c) - iVar2;
  }
  FUN_0045e9d6(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

