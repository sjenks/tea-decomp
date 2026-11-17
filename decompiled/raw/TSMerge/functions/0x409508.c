// name: FUN_00409508
// address: 0x409508
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_00409508(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 *param_6)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 - param_1;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xf;
  }
  iVar1 = iVar1 >> 4;
  iVar2 = 7;
  FUN_004095a0(param_1,param_2,7,param_6);
  if (7 < iVar1) {
    do {
      FUN_004095fc(param_1,param_2,param_3,iVar2,param_6);
      FUN_004095fc(param_3,iVar1 * 0x10 + param_3,param_1,iVar2 * 2,param_6);
      iVar2 = iVar2 * 4;
    } while (iVar2 < iVar1);
  }
  return;
}

