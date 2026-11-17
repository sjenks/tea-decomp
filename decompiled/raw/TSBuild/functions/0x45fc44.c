// name: FUN_0045fc44
// address: 0x45fc44
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0045fc44(int *param_1,uint *param_2)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  undefined4 *in_FS_OFFSET;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined2 local_38;
  int local_2c;
  undefined4 local_24 [8];
  
  FUN_00467ba8(0x486d70);
  local_4c = 0;
  if (param_2 == (uint *)0x0) {
    local_4c = 1;
  }
  else {
    local_38 = 0x14;
    FUN_0045c2d8(local_24,param_1);
    local_2c = local_2c + 1;
    local_38 = 0x20;
    cVar1 = FUN_0045f768((int)local_24);
    if (cVar1 != '\0') {
      iVar4 = FUN_00459d68(param_2);
      iVar5 = FUN_0045f6bc(*param_1);
      iVar5 = iVar5 - iVar4;
      uVar6 = FUN_0045bdd8(*param_1);
      if (((uVar6 & 0xb0) == 0) || (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x80) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fd26;
          local_54 = FUN_0045b17c();
          piVar8 = &local_54;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_50 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_50,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fd26:
      bVar2 = FUN_0045be3c(*param_1);
      if ((bVar2) && (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x10) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fd95;
          local_5c = FUN_0045b17c();
          piVar8 = &local_5c;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_58 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_58,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fd95:
      bVar2 = FUN_0045be3c(*param_1);
      if (((bVar2) && (iVar4 != 0)) && (iVar7 = FUN_0045bea8(*param_1), iVar7 != 0)) {
        piVar8 = (int *)FUN_0045bea8(*param_1);
        iVar7 = FUN_0045fc28(piVar8);
        if (iVar4 != iVar7) {
          local_4c = 1;
        }
      }
      bVar2 = FUN_0045be3c(*param_1);
      if ((bVar2) && (uVar6 = FUN_0045bdd8(*param_1), (uVar6 & 0x20) != 0)) {
        do {
          iVar5 = iVar5 + -1;
          if (iVar5 < 0) goto LAB_0045fe4a;
          local_64 = FUN_0045b17c();
          piVar8 = &local_64;
          uVar3 = FUN_0045f800(*param_1);
          piVar9 = (int *)FUN_0045bea8(*param_1);
          local_60 = FUN_0045de6c(piVar9,uVar3);
          bVar2 = FUN_0045bde4(&local_60,piVar8);
        } while (!bVar2);
        local_4c = 1;
      }
LAB_0045fe4a:
      FUN_0045f6c8(*param_1,0);
    }
    local_2c = local_2c + -1;
    FUN_0045c440(local_24,2);
  }
  local_38 = 0;
  if (local_4c != 0) {
    FUN_0045b7d4(*param_1,local_4c);
  }
  *in_FS_OFFSET = local_48;
  return param_1;
}

