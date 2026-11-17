// name: FUN_004d47dc
// address: 0x4d47dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_004d47dc(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined1 uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    uVar3 = 0;
  }
  else {
    iVar4 = FUN_004d44f8(param_1);
    uVar3 = param_3;
    if (iVar4 <= (int)param_3) {
      uVar3 = FUN_004d44f8(param_1);
    }
    if (0 < (int)uVar3) {
      uVar6 = uVar3;
      puVar5 = (undefined4 *)FUN_004d17a8((int)param_1);
      puVar5 = FUN_004cf758(param_2,puVar5,uVar6);
      param_2 = (undefined4 *)((int)puVar5 + uVar3);
      FUN_004d1850((int)param_1,uVar3);
    }
    for (; (int)uVar3 < (int)param_3; uVar3 = uVar3 + 1) {
      local_c = FUN_004d0a2c();
      piVar7 = &local_c;
      local_8 = FUN_004d1804(param_1);
      bVar2 = FUN_004d1694(&local_8,piVar7);
      if (bVar2) {
        return uVar3;
      }
      uVar1 = FUN_004d2f44((undefined1 *)&local_8);
      *(undefined1 *)param_2 = uVar1;
      param_2 = (undefined4 *)((int)param_2 + 1);
    }
  }
  return uVar3;
}

