// name: FUN_004d7854
// address: 0x4d7854
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl FUN_004d7854(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 local_d0 [6];
  undefined4 local_b8 [4];
  undefined4 local_a8 [6];
  undefined4 local_90 [4];
  undefined4 local_80 [6];
  undefined1 local_68 [16];
  undefined4 local_58 [2];
  int local_50;
  undefined4 local_48 [4];
  undefined4 local_38 [6];
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c [10];
  undefined1 local_12;
  undefined1 local_11;
  undefined1 local_10 [8];
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)param_2[9];
  local_8 = (undefined4 *)FUN_004cda08((int)param_2);
  local_8 = (undefined4 *)*local_8;
  bVar3 = true;
  while (bVar2 = FUN_004cda78((int *)&local_8), puVar1 = local_8, !bVar2) {
    piVar4 = (int *)FUN_004d2a94((int)local_8);
    piVar5 = (int *)FUN_004d2a8c(local_10,param_3);
    bVar3 = FUN_004d2ab8(param_2 + 0xc,piVar5,piVar4);
    puVar6 = puVar1;
    if (bVar3) {
      local_8 = (undefined4 *)FUN_004cd864((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
    else {
      local_8 = (undefined4 *)FUN_004cda90((int)local_8);
      local_8 = (undefined4 *)*local_8;
    }
  }
  if ((char)param_2[0xb] == '\0') {
    FUN_004cd870((int)local_58,puVar6);
    if (bVar3 != false) {
      FUN_004cd82c((int)local_68,(int)param_2);
      bVar3 = FUN_004cd9ec((int)local_58,(int)local_68);
      if (bVar3) {
        local_12 = 1;
        puVar7 = &local_12;
        FUN_004d26e0((int)local_90,param_2,local_8,(int)puVar6,param_3);
        FUN_004d7a5c(local_80,local_90,puVar7);
        FUN_004d7a9c(param_1,local_80);
        return param_1;
      }
      FUN_004d2628((int)local_58);
    }
    piVar4 = (int *)FUN_004d2a8c(local_1c,param_3);
    piVar5 = (int *)FUN_004d2a94(local_50);
    bVar3 = FUN_004d2ab8(param_2 + 0xc,piVar5,piVar4);
    if (bVar3) {
      local_1d = 1;
      puVar7 = &local_1d;
      FUN_004d26e0((int)local_b8,param_2,local_8,(int)puVar6,param_3);
      FUN_004d7a5c(local_a8,local_b8,puVar7);
      FUN_004d7a9c(param_1,local_a8);
    }
    else {
      local_1e = 0;
      FUN_004d7a5c(local_d0,local_58,&local_1e);
      FUN_004d7a9c(param_1,local_d0);
    }
  }
  else {
    local_11 = 1;
    puVar7 = &local_11;
    FUN_004d26e0((int)local_48,param_2,local_8,(int)puVar6,param_3);
    FUN_004d7a5c(local_38,local_48,puVar7);
    FUN_004d7a9c(param_1,local_38);
  }
  return param_1;
}

