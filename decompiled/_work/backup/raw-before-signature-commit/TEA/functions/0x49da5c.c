// name: FUN_0049da5c
// address: 0x49da5c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049da5c(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = GetSystemMetrics(DAT_00509de8);
  if (*(int *)(param_1 + 0x52) == 1) {
    *param_4 = *param_4 - iVar1;
  }
  if (param_3 == (int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *param_3;
  }
  puVar2 = FUN_004dd744((int)param_3,iVar5,(int *)&DAT_00427ee4,(int *)&DAT_00490c00,0);
  if ((puVar2 == (undefined4 *)0x0) &&
     (uVar3 = FUN_0049da2c(param_1,(int)param_3), (char)uVar3 != '\0')) {
    iVar5 = *(int *)(param_1 + 0x56);
    if (iVar5 == 0) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a);
    }
    else if (iVar5 == 1) {
      uVar4 = FUN_004917ac(param_1,*(int *)(param_1 + 0x5a));
      *param_4 = *param_4 + uVar4;
    }
    else if (iVar5 == 2) {
      *param_4 = *param_4 + *(int *)(param_1 + 0x5a) * iVar1;
    }
  }
  return;
}

