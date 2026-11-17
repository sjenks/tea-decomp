// name: FUN_0046142c
// address: 0x46142c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0046142c(int *param_1,int *param_2)

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
  
  FUN_00467ba8(0x4871b8);
  iVar2 = FUN_0045ae74();
  if (iVar2 == param_2[9]) {
    FUN_0045e370(param_1,-1);
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar3 = FUN_0045e370(local_44,-1);
    uVar4 = FUN_0045e464((int *)&stack0x0000000c,piVar3);
    if ((char)uVar4 == '\0') {
      local_1c = 8;
      FUN_0045deb8(&local_8,(int)param_2);
      local_10 = local_10 + 1;
      piVar3 = (int *)FUN_0045df50(&local_8);
      iVar2 = FUN_004613cc(piVar3);
      local_10 = local_10 + -1;
      FUN_00405004(&local_8,2);
      if (iVar2 < 1) {
        iVar2 = FUN_0045b7b8(param_2,param_2[9],0,2);
        iVar7 = 0;
        LVar5 = FUN_0045e3f0((undefined4 *)&stack0x0000000c);
        iVar7 = FUN_0045b7b8(param_2,param_2[9],LVar5,iVar7);
        if (iVar7 == -1) {
          FUN_0045e370(param_1,-1);
          *in_FS_OFFSET = local_2c;
        }
        else {
          FUN_0045c008((int)param_2,0,0);
          FUN_0045bfec((int)param_2,0,0,0);
          FUN_00461614(&local_30,(int)&stack0x0000000c);
          puVar6 = (undefined4 *)FUN_0045dde0((undefined4 *)param_2[0xf],&local_30);
          FUN_0045dde0((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_0045b17c();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_0045bde4(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_0045e3f0((undefined4 *)&stack0x0000000c), iVar7 < iVar2)) {
            FUN_0045e370(param_1,-1);
            *in_FS_OFFSET = local_2c;
            return param_1;
          }
          FUN_0045e414(param_1,(undefined4 *)&stack0x0000000c);
          *in_FS_OFFSET = local_2c;
        }
      }
      else {
        FUN_0045e3f0((undefined4 *)&stack0x0000000c);
        (**(code **)(*param_2 + 0xc))();
        *in_FS_OFFSET = local_2c;
      }
    }
    else {
      FUN_0045e370(param_1,-1);
      *in_FS_OFFSET = local_2c;
    }
  }
  return param_1;
}

