// name: FUN_0045f564
// address: 0x45f564
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

uint __cdecl FUN_0045f564(int *param_1,undefined4 *param_2,uint param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int local_c;
  int local_8;
  
  if ((param_2 == (undefined4 *)0x0) || (param_3 == 0)) {
    uVar5 = 0;
  }
  else {
    iVar2 = FUN_0045de60((int)param_1);
    iVar3 = FUN_0045de3c((int)param_1);
    if ((iVar2 - iVar3) + 0x80 < (int)param_3) {
      FUN_0045de3c((int)param_1);
      FUN_0045de48((int)param_1);
      iVar2 = (**(code **)(*param_1 + 8))();
      if (iVar2 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = param_3;
        puVar4 = (undefined4 *)FUN_0045de3c((int)param_1);
        FUN_00459ea8(puVar4,param_2,uVar5);
        FUN_0045c020((int)param_1,param_3);
        iVar2 = FUN_0045de3c((int)param_1);
        iVar3 = FUN_0045de48((int)param_1);
        param_1[0xb] = iVar2 - iVar3;
        uVar5 = param_3;
      }
    }
    else {
      for (uVar5 = 0; (int)uVar5 < (int)param_3; uVar5 = uVar5 + 1) {
        local_c = FUN_0045b17c();
        piVar6 = &local_c;
        local_8 = FUN_0045de6c(param_1,*(undefined1 *)param_2);
        bVar1 = FUN_0045bde4(&local_8,piVar6);
        if (bVar1) {
          return uVar5;
        }
        param_2 = (undefined4 *)((int)param_2 + 1);
      }
    }
  }
  return uVar5;
}

