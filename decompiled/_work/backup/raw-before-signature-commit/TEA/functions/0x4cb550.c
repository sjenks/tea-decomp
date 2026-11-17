// name: FUN_004cb550
// address: 0x4cb550
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004cb550(uint *param_1,uint *param_2,char param_3)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  
  pcVar1 = FUN_004dc9f4(param_2);
  if ((char *)param_1[5] < pcVar1 + 1) {
    FUN_004cb794((int)param_1);
  }
  if (param_1[0xb] == 0) {
    FUN_004dc9f4(param_2);
    uVar2 = FUN_004cc180();
    FUN_004cc0cc();
    param_1[0xb] = uVar2;
  }
  pcVar1 = FUN_004dc9f4(param_2);
  FUN_004dcc40((undefined4 *)param_1[0xb],param_2,pcVar1 + 1);
  param_1[4] = param_1[0xb];
  param_1[5] = (uint)(pcVar1 + 1);
  *param_1 = *param_1 | 1;
  if (param_3 == '\0') {
    uVar2 = CONCAT31((int3)(param_1[0xb] >> 8),1);
  }
  else {
    iVar3 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    uVar2 = (uint)(iVar3 != 0);
  }
  return uVar2;
}

