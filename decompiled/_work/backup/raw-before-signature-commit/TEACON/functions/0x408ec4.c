// name: FUN_00408ec4
// address: 0x408ec4
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00408ec4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  uint local_43c [250];
  undefined4 *local_54;
  undefined4 *local_50;
  uint local_4c;
  int local_48;
  int *local_44;
  int *local_40;
  undefined4 local_34;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_0041f3fc(0x42c2b0);
  sVar3 = GetFileTitleA(*(LPCSTR *)(param_2 + 8),(LPSTR)local_43c,1000);
  if (sVar3 == 0) {
    local_18 = 8;
    FUN_00416e74(param_1,local_43c);
    *in_FS_OFFSET = local_28;
  }
  else {
    local_18 = 0x14;
    local_34 = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    iVar1 = *(int *)(*(int *)(param_2 + 8) + -0xc);
    if (iVar1 == -1 || iVar1 + 1 < 0) {
      uVar2 = *(uint *)(*(int *)(param_2 + 8) + -4);
      local_44 = FUN_00416ffc(param_1,uVar2,uVar2);
      local_40 = local_44 + 3;
      *(int **)(param_1 + 8) = local_40;
      local_48 = param_1;
      local_50 = *(undefined4 **)(param_2 + 8);
      local_54 = *(undefined4 **)(param_1 + 8);
      local_4c = uVar2;
      FUN_0041eddc(local_54,local_50,uVar2);
    }
    else {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      piVar4 = (int *)(*(int *)(param_1 + 8) + -0xc);
      if (piVar4 != &DAT_0042fab4) {
        *piVar4 = *piVar4 + 1;
      }
    }
    *in_FS_OFFSET = local_28;
  }
  return param_1;
}

