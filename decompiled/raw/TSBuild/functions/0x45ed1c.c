// name: FUN_0045ed1c
// address: 0x45ed1c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045ed1c(int param_1,int param_2)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined1 *puVar6;
  char *pcVar7;
  int local_10;
  char local_9;
  int local_8;
  
  local_8 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&param_2,&local_8);
  if (!bVar1) {
    uVar3 = FUN_0045bef8(param_1);
    uVar4 = FUN_0045de54(param_1);
    if (uVar4 < uVar3) {
      local_9 = FUN_0045d91c((undefined1 *)&param_2);
      pcVar7 = &local_9;
      iVar5 = FUN_0045bef8(param_1);
      bVar1 = FUN_00459d40((char *)(iVar5 + -1),pcVar7);
      if (bVar1) {
        FUN_0045bfa0(param_1,-1);
        return param_2;
      }
      if ((*(byte *)(param_1 + 4) & 8) != 0) {
        FUN_0045bfa0(param_1,-1);
        uVar2 = FUN_0045d91c((undefined1 *)&param_2);
        puVar6 = (undefined1 *)FUN_0045bef8(param_1);
        *puVar6 = uVar2;
        return param_2;
      }
    }
  }
  local_10 = FUN_0045b17c();
  bVar1 = FUN_0045bde4(&param_2,&local_10);
  if (bVar1) {
    uVar3 = FUN_0045bef8(param_1);
    uVar4 = FUN_0045de54(param_1);
    if (uVar4 < uVar3) {
      FUN_0045bfa0(param_1,-1);
      iVar5 = FUN_0045de24(&param_2);
      return iVar5;
    }
  }
  iVar5 = FUN_0045b17c();
  return iVar5;
}

