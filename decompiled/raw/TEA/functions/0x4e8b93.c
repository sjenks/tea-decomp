// name: FUN_004e8b93
// address: 0x4e8b93
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004e8b93(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_004e5ce8(s_varType_>tpMask___TM_IS_ARRAY_00519558,s_xx_cpp_00519576,0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_004e5ce8(s_varType_>tpArr_tpaElemType_>tpCl_0051957d,s_xx_cpp_005195b8,0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_004e5ce8(s_vdtCount_005195bf,s_xx_cpp_005195c8,0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_004e5ce8(s_etdCount_<__elemCount____elemCou_005195cf,s_xx_cpp_005195f7,0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_004e5ce8(s_dtrCount_<__vdtCount_005195fe,s_xx_cpp_00519613,0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_004e88e3(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_004e88e3(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

