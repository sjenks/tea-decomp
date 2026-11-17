// name: FUN_0041bc28
// address: 0x41bc28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0041bc28(int *param_1,int *param_2)

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
  
  FUN_0041f3fc(0x43071c);
  iVar2 = FUN_00417ee0();
  if (iVar2 == param_2[9]) {
    FUN_00419cd8(param_1,-1);
    *in_FS_OFFSET = local_2c;
  }
  else {
    piVar3 = FUN_00419cd8(local_44,-1);
    uVar4 = FUN_00419dcc((int *)&stack0x0000000c,piVar3);
    if ((char)uVar4 == '\0') {
      local_1c = 8;
      FUN_00419820(&local_8,(int)param_2);
      local_10 = local_10 + 1;
      piVar3 = (int *)FUN_004198b8(&local_8);
      iVar2 = FUN_0041bbc8(piVar3);
      local_10 = local_10 + -1;
      FUN_00409948(&local_8,2);
      if (iVar2 < 1) {
        iVar2 = FUN_00418748(param_2,param_2[9],0,2);
        iVar7 = 0;
        LVar5 = FUN_00419d58((undefined4 *)&stack0x0000000c);
        iVar7 = FUN_00418748(param_2,param_2[9],LVar5,iVar7);
        if (iVar7 == -1) {
          FUN_00419cd8(param_1,-1);
          *in_FS_OFFSET = local_2c;
        }
        else {
          FUN_00418dc4((int)param_2,0,0);
          FUN_00418da8((int)param_2,0,0,0);
          FUN_0041be10(&local_30,(int)&stack0x0000000c);
          puVar6 = (undefined4 *)FUN_00419748((undefined4 *)param_2[0xf],&local_30);
          FUN_00419748((undefined4 *)param_2[0xe],puVar6);
          local_38 = FUN_004181e8();
          piVar3 = &local_38;
          local_34 = (**(code **)(*param_2 + 0x1c))();
          bVar1 = FUN_00418bc0(&local_34,piVar3);
          if ((bVar1) && (iVar7 = FUN_00419d58((undefined4 *)&stack0x0000000c), iVar7 < iVar2)) {
            FUN_00419cd8(param_1,-1);
            *in_FS_OFFSET = local_2c;
            return param_1;
          }
          FUN_00419d7c(param_1,(undefined4 *)&stack0x0000000c);
          *in_FS_OFFSET = local_2c;
        }
      }
      else {
        FUN_00419d58((undefined4 *)&stack0x0000000c);
        (**(code **)(*param_2 + 0xc))();
        *in_FS_OFFSET = local_2c;
      }
    }
    else {
      FUN_00419cd8(param_1,-1);
      *in_FS_OFFSET = local_2c;
    }
  }
  return param_1;
}

