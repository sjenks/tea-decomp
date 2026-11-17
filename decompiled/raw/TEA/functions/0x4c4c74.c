// name: FUN_004c4c74
// address: 0x4c4c74
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004c4c74(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_FS_OFFSET;
  int iVar2;
  undefined4 local_2c;
  
  FUN_004dce64(0x511000);
  *param_1 = (int)&PTR_FUN_004ea93c;
  *param_1 = (int)&PTR_FUN_00511310;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  *(undefined4 *)((int)param_1 + 0x1a) = 0;
  *(undefined4 *)((int)param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x22) = 0;
  *(undefined4 *)((int)param_1 + 0x26) = 0;
  *(undefined4 *)((int)param_1 + 0x2a) = 0;
  *(undefined4 *)((int)param_1 + 0x2e) = 0;
  *(undefined4 *)((int)param_1 + 0x32) = 0;
  puVar1 = (undefined4 *)FUN_004cc0f0();
  if (puVar1 != (undefined4 *)0x0) {
    FUN_004c3ce4(puVar1);
  }
  param_1[2] = (int)puVar1;
  param_1[1] = 0;
  if (param_2 == 0) {
    iVar2 = 0;
    puVar1 = (undefined4 *)FUN_00487bc0();
    param_2 = FUN_00487e08(puVar1,iVar2);
  }
  param_1[3] = param_2;
  (**(code **)(*param_1 + 0x18))();
  *in_FS_OFFSET = local_2c;
  return param_1;
}

