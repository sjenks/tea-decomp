// name: FUN_00479b7c
// address: 0x479b7c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_00479b7c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_8;
  
  local_8 = 0;
  uVar3 = 0;
  while( true ) {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
    if (iVar1 < 0) {
      iVar1 = iVar1 + 3;
    }
    if ((uint)(iVar1 >> 2) <= uVar3) break;
    iVar1 = *(int *)(uVar3 * 4 + *(int *)(param_1 + 4));
    if (iVar1 != 0) {
      iVar1 = FUN_0043484c(iVar1);
      local_8 = local_8 + iVar1;
    }
    uVar3 = uVar3 + 1;
  }
  if (local_8 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

