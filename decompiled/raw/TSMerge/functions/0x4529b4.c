// name: FUN_004529b4
// address: 0x4529b4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004529b4(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  LONG LVar5;
  undefined4 *puVar6;
  undefined4 *in_FS_OFFSET;
  int iVar7;
  int local_44 [3];
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined2 local_1c;
  int local_10;
  int local_8;
  
  FUN_00455f04(0x472d14);
  iVar2 = FUN_0044e218();
  if (iVar2 == param_2[9]) {
    FUN_0045075c(param_1,-1);
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar3 = FUN_0045075c(local_44,-1);
    uVar4 = FUN_00450850((int *)&stack0x0000000c,piVar3);
    if ((char)uVar4 == '\0') {
      local_1c = 8;
      FUN_004502a4(&local_8,(int)param_2);
      local_10 = local_10 + 1;
      piVar3 = (int *)FUN_0045033c(&local_8);
      iVar2 = FUN_00452954(piVar3);
      local_10 = local_10 + -1;
      FUN_0040b7b0(&local_8,2);
      if (iVar2 < 1) {
        iVar2 = FUN_0044eb5c(param_2,param_2[9],0,2);
        iVar7 = 0;
        LVar5 = FUN_004507dc((undefined4 *)&stack0x0000000c);
        iVar7 = FUN_0044eb5c(param_2,param_2[9],LVar5,iVar7);
        if (iVar7 == -1) {
          FUN_0045075c(param_1,-1);
          *in_FS_OFFSET = local_2c;
        }
        else {
          FUN_0044f38c((int)param_2,0,0);
          FUN_0044f370((int)param_2,0,0,0);
          FUN_00452b9c(&local_30,(int)&stack0x0000000c);
          puVar6 = (undefined4 *)FUN_004501cc((undefined4 *)param_2[0xf],&local_30);
          FUN_004501cc((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_0044e520();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_0044f188(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_004507dc((undefined4 *)&stack0x0000000c), iVar7 < iVar2)) {
            FUN_0045075c(param_1,-1);
            *in_FS_OFFSET = local_2c;
            return param_1;
          }
          FUN_00450800(param_1,(undefined4 *)&stack0x0000000c);
          *in_FS_OFFSET = local_2c;
        }
      }
      else {
        FUN_004507dc((undefined4 *)&stack0x0000000c);
        (**(code **)(*param_2 + 0xc))();
        *in_FS_OFFSET = local_2c;
      }
    }
    else {
      FUN_0045075c(param_1,-1);
      *in_FS_OFFSET = local_2c;
    }
  }
  return param_1;
}

