// name: FUN_00477930
// address: 0x477930
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00477930(int *param_1)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  uint *local_c;
  
  FUN_004dce64(0x500644);
  FUN_004156f4(param_1);
  piVar1 = param_1 + 0x22;
  (**(code **)(param_1[3] + 0xb8))();
  (**(code **)(param_1[3] + 0xb8))();
  FUN_004215f0((int)piVar1,(int)(param_1 + 0x1e));
  FUN_0042116c((int)piVar1,(int)(param_1 + 0x1a));
  FUN_00420cbc((int)piVar1,0x1e96);
  FUN_00420cbc((int)piVar1,0x1ea0);
  (**(code **)(*(int *)(param_1[0x1c4] + 8) + 0x60))();
  (**(code **)(param_1[3] + 0xa8))();
  FUN_004b0c44(param_1,local_c);
  if (local_c != (uint *)0x0) {
    if (local_c[-3] != 0xffffffff) {
      puVar3 = local_c + -3;
      if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else if (puVar3 == &DAT_00513d58) {
        iVar2 = 1;
      }
      else {
        *puVar3 = *puVar3 - 1;
        iVar2 = *puVar3 + 1;
      }
      if (iVar2 != 0) goto LAB_00477a85;
    }
    FUN_004cc0bc();
  }
LAB_00477a85:
  *in_FS_OFFSET = local_38;
  return;
}

