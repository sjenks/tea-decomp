// name: FUN_004237cc
// address: 0x4237cc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004237cc(uint *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int cchData;
  uint uVar4;
  uint local_204 [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)local_204,0x200);
  FUN_0041eef0((char *)local_204,&DAT_004331c7);
  pcVar1 = FUN_0041ef80(local_204);
  cchData = 0x200 - (int)pcVar1;
  pcVar1 = FUN_0041ef80(local_204);
  GetLocaleInfoA(param_1[1],0x1002,pcVar1 + (int)local_204,cchData);
  FUN_0041eef0((char *)local_204,&DAT_004331c9);
  uVar4 = 10;
  pcVar1 = FUN_0041ef80(local_204);
  thunk_FUN_00424f88(*param_1,pcVar1 + (int)local_204,uVar4);
  if (param_1[9] == 0) {
    FUN_0041ef80(param_2);
    FUN_0041ef80(local_204);
    puVar2 = (undefined4 *)FUN_004155f0();
    param_1[9] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pcVar1 = FUN_0041ef80(param_2);
    pcVar3 = FUN_0041ef80(local_204);
    FUN_0041ee4c(puVar2,0,(uint)(pcVar1 + (int)pcVar3 + 3));
  }
  else {
    FUN_0041ef80((uint *)param_1[9]);
    FUN_0041ef80(param_2);
    FUN_0041ef80(local_204);
    uVar4 = FUN_00415610();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_0041eef0((char *)param_1[9],(char *)param_2);
  FUN_0041eef0((char *)param_1[9],&DAT_004331cb);
  FUN_0041eef0((char *)param_1[9],(char *)local_204);
  FUN_0041eef0((char *)param_1[9],&DAT_004331cd);
  return 1;
}

