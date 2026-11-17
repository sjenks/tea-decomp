// name: FUN_004e7a74
// address: 0x4e7a74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_004e7a74(uint *param_1,undefined4 *param_2,undefined4 param_3,undefined *param_4,uint param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 *puVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  undefined2 in_FS;
  ULONG_PTR local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  uint local_30;
  uint *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x518ff0);
  iVar4 = FUN_00401140();
  *(uint *)(iVar4 + 4) = *(uint *)(iVar4 + 4) | 2;
  iVar4 = FUN_00401140();
  if (param_1 == (uint *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(ushort *)((int)param_1 + 6) + (int)param_1;
  }
  *(int *)(iVar4 + 0x10) = iVar6;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 0xc) = param_7;
  iVar4 = FUN_00401140();
  *(undefined4 *)(iVar4 + 8) = param_8;
  local_2c = param_1;
  uVar2 = (ushort)param_1[1];
  uVar3 = *param_1;
  if ((uVar2 & 2) == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_1[3];
  }
  if ((uVar2 & 0x30) != 0) {
    local_2c = (uint *)param_1[2];
  }
  local_34 = (undefined4 *)FUN_004e76a6(uVar3 + 0x52);
  *local_34 = 0;
  local_34[1] = param_1;
  local_34[3] = param_6;
  local_34[4] = uVar3;
  *(ushort *)(local_34 + 6) = uVar2;
  *(undefined2 *)((int)local_34 + 0x1a) = (undefined2)local_30;
  local_34[5] = local_2c;
  local_34[2] = param_3;
  local_34[10] = 0;
  local_34[0xb] = 0;
  local_34[7] = FUN_004e76f0;
  local_34[0xd] = param_7;
  local_34[0xe] = param_8;
  local_34[8] = param_4;
  local_34[9] = param_5;
  *(undefined1 *)((int)local_34 + 0x45) = 0;
  *(undefined1 *)(local_34 + 0x11) = 1;
  FUN_004dc7d4((undefined4 *)((int)local_34 + 0x52),param_2,uVar3);
  if ((*DAT_0051c478 == 1) || (*DAT_0051c478 == 2)) {
    pcVar5 = FUN_004dd388((int)param_1);
    FUN_004e78f1(pcVar5);
    FUN_004e7909(1,0xb);
  }
  if ((local_30 & 1) != 0) {
    if (param_4 == (undefined *)0x0) {
      FUN_004e5ce8(s_cctrAddr_0051919b,s_xx_cpp_005191a4,0x445);
    }
    local_38 = DAT_0051c474;
    local_18 = 8;
    FUN_004e77e3((int)local_34 + 0x52,param_2,param_4,param_5);
    local_18 = 0;
    DAT_0051c474 = local_38;
  }
  iVar4 = FUN_00401140();
  local_44 = *(ULONG_PTR *)(iVar4 + 0x10);
  local_40 = param_9;
  local_3c = local_34;
  RaiseException(0xeefface,1,3,&local_44);
  puVar1 = (undefined4 *)segment(in_FS,0);
  *puVar1 = local_28;
  return;
}

