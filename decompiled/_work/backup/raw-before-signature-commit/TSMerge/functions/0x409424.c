// name: FUN_00409424
// address: 0x409424
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00409424(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,undefined4 *param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  uVar2 = (iVar1 >> 4) + 1;
  iVar1 = (int)uVar2 >> 1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + (uint)((uVar2 & 1) != 0);
  }
  iVar4 = iVar1 * 0x10 + param_1;
  if (param_4 < iVar1) {
    FUN_00409424(param_1,iVar4,param_3,param_4,0,param_6);
    FUN_00409424(iVar4,param_2,param_3,param_4,0,param_6);
  }
  else {
    FUN_00409508(param_1,iVar4,param_3,0,0,param_6);
    FUN_00409508(iVar4,param_2,param_3,0,0,param_6);
  }
  iVar1 = param_2 - iVar4;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar3 = iVar4 - param_1;
  if (iVar3 < 0) {
    iVar3 = iVar3 + 0xf;
  }
  FUN_0040989c(param_1,iVar4,param_2,iVar3 >> 4,iVar1 >> 4,param_3,param_4,0,param_6);
  return;
}

