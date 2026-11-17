// name: FUN_004095fc
// address: 0x4095fc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004095fc(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int local_8;
  
  iVar1 = param_4;
  iVar3 = param_4 * 2;
  while( true ) {
    iVar2 = param_2 - param_1;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 0xf;
    }
    if (iVar2 >> 4 < iVar3) break;
    iVar2 = param_4 * 0x10 + param_1;
    param_3 = FUN_004096a0(param_1,iVar2,iVar2,iVar1 * 0x20 + param_1,param_3,param_5);
    param_1 = param_1 + iVar1 * 0x20;
  }
  iVar3 = param_2 - param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  local_8 = iVar3 >> 4;
  if (iVar3 >> 4 < param_4) {
    piVar4 = &local_8;
  }
  else {
    piVar4 = &param_4;
  }
  param_4 = *piVar4;
  iVar3 = param_4 * 0x10 + param_1;
  FUN_004096a0(param_1,iVar3,iVar3,param_2,param_3,param_5);
  return;
}

