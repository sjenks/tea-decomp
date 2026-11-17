// name: FUN_004e87a1
// address: 0x4e87a1
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e87a1(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined2 in_FS;
  undefined4 local_28;
  
  FUN_004dce64(0x519078);
  if ((*(byte *)(param_2 + 0xc) & 2) == 0) {
    FUN_004e5ce8(s_varType_>tpClass_tpcFlags___CF_H_005193f7,s_xx_cpp_0051941f,0xc1c);
  }
  if (*(int *)(param_2 + 0x28) == 0) {
    FUN_004e5ce8(s_varType_>tpClass_tpcDtorAddr_00519426,s_xx_cpp_00519443,0xc1d);
  }
  if ((*(uint *)(param_5 + 0x1c) < *(uint *)(param_2 + 0x20)) && (param_3 == 0)) {
    FUN_004e5ce8(s__errPtr_>ERRcInitDtc_>__varType__0051944a,s_xx_cpp_0051948a,0xc28);
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
  FUN_004e7926(param_1,param_2,(byte)param_3,*(undefined **)(param_2 + 0x28),
               (uint)*(ushort *)(param_2 + 0x2c),param_4);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

