// name: FUN_0045ff3c
// address: 0x45ff3c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0045ff3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *in_FS_OFFSET;
  undefined1 local_48 [8];
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_00467ba8(0x486e0c);
  if (*(int *)(param_2 + 0x2c) == 0) {
    local_18 = 8;
    FUN_00459238(local_30);
    FUN_0045aa98(param_1);
    *in_FS_OFFSET = local_28;
  }
  else {
    iVar1 = FUN_0045de3c(param_2);
    iVar2 = FUN_0045de48(param_2);
    if (iVar1 - iVar2 < *(int *)(param_2 + 0x2c)) {
      iVar1 = FUN_0045bf04(param_2);
      iVar2 = FUN_0045de54(param_2);
      if (iVar1 - iVar2 < *(int *)(param_2 + 0x2c)) {
        local_18 = 0x14;
        FUN_00459238(local_38);
        FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),*(uint *)(param_2 + 0x2c));
        *in_FS_OFFSET = local_28;
        return param_1;
      }
    }
    iVar1 = FUN_0045de3c(param_2);
    iVar2 = FUN_0045de48(param_2);
    iVar3 = FUN_0045bf04(param_2);
    iVar4 = FUN_0045de54(param_2);
    if (iVar3 - iVar4 < iVar1 - iVar2) {
      local_18 = 0x20;
      FUN_00459238(local_40);
      iVar1 = FUN_0045de3c(param_2);
      iVar2 = FUN_0045de48(param_2);
      FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),iVar1 - iVar2);
      *in_FS_OFFSET = local_28;
    }
    else {
      local_18 = 0x2c;
      FUN_00459238(local_48);
      iVar1 = FUN_0045bf04(param_2);
      iVar2 = FUN_0045de54(param_2);
      FUN_0045c644(param_1,*(undefined4 **)(param_2 + 0x24),iVar1 - iVar2);
      *in_FS_OFFSET = local_28;
    }
  }
  return param_1;
}

