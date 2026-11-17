// name: FUN_0045a014
// address: 0x45a014
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0045a014(uint *param_1,uint *param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
  char *pcVar3;
  int cchData;
  uint uVar4;
  uint local_204 [128];
  
  GetLocaleInfoA(param_1[1],0x1001,(LPSTR)local_204,0x200);
  FUN_00455ae4((char *)local_204,&DAT_004757cb);
  pcVar1 = FUN_00455bf0(local_204);
  cchData = 0x200 - (int)pcVar1;
  pcVar1 = FUN_00455bf0(local_204);
  GetLocaleInfoA(param_1[1],0x1002,pcVar1 + (int)local_204,cchData);
  FUN_00455ae4((char *)local_204,&DAT_004757cd);
  uVar4 = 10;
  pcVar1 = FUN_00455bf0(local_204);
  thunk_FUN_0045b7f8(*param_1,pcVar1 + (int)local_204,uVar4);
  if (param_1[9] == 0) {
    FUN_00455bf0(param_2);
    FUN_00455bf0(local_204);
    puVar2 = (undefined4 *)FUN_0044b944();
    param_1[9] = (uint)puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    pcVar1 = FUN_00455bf0(param_2);
    pcVar3 = FUN_00455bf0(local_204);
    FUN_00455a40(puVar2,0,(uint)(pcVar1 + (int)pcVar3 + 3));
  }
  else {
    FUN_00455bf0((uint *)param_1[9]);
    FUN_00455bf0(param_2);
    FUN_00455bf0(local_204);
    uVar4 = FUN_0044b964();
    param_1[9] = uVar4;
    if (param_1[9] == 0) {
      return 0;
    }
  }
  FUN_00455ae4((char *)param_1[9],(char *)param_2);
  FUN_00455ae4((char *)param_1[9],&DAT_004757cf);
  FUN_00455ae4((char *)param_1[9],(char *)local_204);
  FUN_00455ae4((char *)param_1[9],&DAT_004757d1);
  return 1;
}

