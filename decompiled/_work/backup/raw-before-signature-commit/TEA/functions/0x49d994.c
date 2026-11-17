// name: FUN_0049d994
// address: 0x49d994
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0049d994(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  byte bVar5;
  int local_3c [4];
  undefined4 local_2c;
  undefined2 local_1c;
  int *local_8;
  
  bVar5 = 0;
  FUN_004dce64(0x5091b4);
  local_8 = (int *)FUN_004cc0f0();
  if (local_8 != (int *)0x0) {
    local_1c = 0x14;
    FUN_00490ab0(local_8,0x7537);
    local_1c = 8;
  }
  piVar1 = local_8;
  FUN_00492644(param_1,(int)local_8,1,0);
  piVar3 = (int *)((int)piVar1 + 10);
  piVar4 = local_3c;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  FUN_00494470(local_3c,1,1);
  (**(code **)(*piVar1 + 0xc))();
  *(int *)((int)param_1 + 0x5e) = *(int *)((int)param_1 + 0x5e) + 1;
  *in_FS_OFFSET = local_2c;
  return;
}

