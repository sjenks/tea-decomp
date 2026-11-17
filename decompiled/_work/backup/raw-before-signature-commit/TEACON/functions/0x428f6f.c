// name: FUN_00428f6f
// address: 0x428f6f
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00428f6f(int param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint local_c;
  
  if ((*(byte *)(param_2 + 5) & 4) == 0) {
    FUN_00426830(s_varType_>tpMask___TM_IS_ARRAY_00433f60,s_xx_cpp_00433f7e,0xdcc);
  }
  if ((*(byte *)(*(int *)(param_2 + 8) + 0xc) & 2) == 0) {
    FUN_00426830(s_varType_>tpArr_tpaElemType_>tpCl_00433f85,s_xx_cpp_00433fc0,0xdcd);
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  piVar2 = *(int **)(param_2 + 8);
  uVar3 = piVar2[8];
  if (uVar3 == 0) {
    FUN_00426830(s_vdtCount_00433fc7,s_xx_cpp_00433fd0,0xdd6);
  }
  if (param_3 == 0) {
    param_3 = uVar3 * uVar1;
  }
  local_c = param_3 / uVar3;
  if ((uVar1 < local_c) && (uVar1 != 0)) {
    FUN_00426830(s_etdCount_<__elemCount____elemCou_00433fd7,s_xx_cpp_00433fff,0xddf);
  }
  uVar1 = param_3 - local_c * uVar3;
  if (uVar3 < uVar1) {
    FUN_00426830(s_dtrCount_<__vdtCount_00434006,s_xx_cpp_0043401b,0xde0);
  }
  iVar4 = param_1 + local_c * *piVar2;
  if (uVar1 != 0) {
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar1,1,param_4,param_5);
  }
  while (local_c != 0) {
    iVar4 = iVar4 - *piVar2;
    FUN_00428cbf(iVar4,(int)piVar2,0,uVar3,1,param_4,param_5);
    local_c = local_c - 1;
  }
  return;
}

