// name: FUN_004cb490
// address: 0x4cb490
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 * __cdecl
FUN_004cb490(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54 [11];
  undefined4 local_28;
  undefined2 local_18;
  
  bVar4 = 0;
  FUN_004dce64(0x512770);
  local_5c = *(undefined4 *)(param_2 + 4);
  local_58 = param_4;
  puVar3 = local_54;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_3;
    param_3 = param_3 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  uVar1 = FUN_004a76a8(**(int **)(param_2 + 0x28),0x1100,0,(LPARAM)&local_5c);
  local_18 = 8;
  FUN_004cb3b4(param_1,*(undefined4 *)(param_2 + 0x28),uVar1);
  *in_FS_OFFSET = local_28;
  return param_1;
}

