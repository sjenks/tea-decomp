// name: FUN_0041e6ec
// address: 0x41e6ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e6ec(int *param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_30;
  
  FUN_0041f3fc(0x43185c);
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    puVar4 = param_3;
    uVar3 = FUN_0041d890((int *)param_3);
    (**(code **)(*param_2 + 4))(uVar3,*param_2,puVar4,param_2,param_1);
    param_2[2] = param_2[2] | 1;
  }
  uVar1 = *param_3;
  if (*(uint *)(*param_1 + 0x14) <= uVar1) {
    FUN_004190ec((int *)(*param_1 + 0x10),uVar1 + 1,0);
  }
  puVar2 = *(undefined4 **)(*(int *)(*param_1 + 0x10) + uVar1 * 4);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = puVar2[1] + -1;
    if ((puVar2[1] == 0) && (puVar2 != (undefined4 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  *(int **)(*(int *)(*param_1 + 0x10) + uVar1 * 4) = param_2;
  param_2[1] = param_2[1] + 1;
  *in_FS_OFFSET = local_30;
  return;
}

