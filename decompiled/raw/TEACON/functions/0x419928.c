// name: FUN_00419928
// address: 0x419928
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00419928(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char *pcVar10;
  int local_10;
  char local_9;
  int local_8;
  
  iVar3 = FUN_00417ee0();
  if (iVar3 == *(int *)(param_1 + 0x24)) {
    iVar3 = FUN_004181e8();
  }
  else {
    iVar3 = FUN_00418cd4(param_1);
    if ((iVar3 == 0) && (iVar3 = FUN_004197a4(param_1), iVar3 != 0)) {
      if (*(char *)(param_1 + 0x28) == '\0') {
        uVar4 = FUN_004197a4(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
      else {
        uVar4 = FUN_004197c8(param_1);
        uVar5 = FUN_004197a4(param_1);
        uVar6 = FUN_004197b0(param_1);
        FUN_00418da8(param_1,uVar6,uVar5,uVar4);
      }
    }
    local_8 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_8);
    if (!bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        local_9 = FUN_0041929c((undefined1 *)&param_2);
        pcVar10 = &local_9;
        iVar3 = FUN_00418cd4(param_1);
        bVar1 = FUN_00416e3c((char *)(iVar3 + -1),pcVar10);
        if (bVar1) {
          FUN_00418d7c(param_1,-1);
          return param_2;
        }
        FUN_00418d7c(param_1,-1);
        uVar2 = FUN_0041929c((undefined1 *)&param_2);
        puVar9 = (undefined1 *)FUN_00418cd4(param_1);
        *puVar9 = uVar2;
        return param_2;
      }
    }
    local_10 = FUN_004181e8();
    bVar1 = FUN_00418bc0(&param_2,&local_10);
    if (bVar1) {
      uVar7 = FUN_00418cd4(param_1);
      uVar8 = FUN_004197bc(param_1);
      if (uVar8 < uVar7) {
        FUN_00418d7c(param_1,-1);
        iVar3 = FUN_0041978c(&param_2);
        return iVar3;
      }
    }
    iVar3 = FUN_004181e8();
  }
  return iVar3;
}

