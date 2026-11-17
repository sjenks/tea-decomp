// name: FUN_0041ed44
// address: 0x41ed44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0041ed44(int param_1,uint *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_1c [2];
  int local_14 [2];
  int local_c;
  undefined4 local_8;
  
  iVar1 = FUN_0041d038(param_2);
  local_c = *(int *)(param_1 + 0x15);
  local_8 = *(undefined4 *)(param_1 + 0x19);
  iVar1 = iVar1 / local_c;
  uVar2 = FUN_0041f10c(param_1,iVar1);
  if ((char)uVar2 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    FUN_0041d088(local_1c,param_2);
    piVar3 = local_1c;
    FUN_0041ec8c(local_14,param_1,*(int *)(param_1 + 0x25),0);
    FUN_0041effc(*(uint **)(param_1 + 4),param_2,local_14,piVar3,iVar4,iVar5);
    uVar2 = *(undefined4 *)(param_1 + 0x25);
    *(int *)(param_1 + 0x25) = *(int *)(param_1 + 0x25) + iVar1;
  }
  return uVar2;
}

