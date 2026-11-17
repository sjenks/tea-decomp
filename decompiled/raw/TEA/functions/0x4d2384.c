// name: FUN_004d2384
// address: 0x4d2384
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004d2384(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined1 local_54 [24];
  undefined1 local_3c [8];
  undefined1 local_34 [8];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined2 local_18;
  
  FUN_004dce64(0x5148c4);
  FUN_004ceb88((int)(param_1 + 2));
  FUN_004cec58(local_34);
  local_2c = (undefined4 *)FUN_004d2494();
  local_18 = 8;
  FUN_004cec20(local_3c);
  iVar1 = FUN_004d2504();
  local_2c[2] = iVar1;
  local_18 = 0;
  piVar3 = param_1 + 2;
  uVar2 = FUN_004ceb94((int)piVar3);
  *local_2c = uVar2;
  local_2c[1] = *param_1;
  FUN_004ceba0((int)local_54,(int)piVar3,&local_2c);
  iVar1 = FUN_004ceb88((int)piVar3);
  iVar1 = *(int *)(iVar1 + 8);
  param_1[7] = iVar1;
  param_1[8] = iVar1 + *param_1 * 0x28;
  *in_FS_OFFSET = local_28;
  return;
}

