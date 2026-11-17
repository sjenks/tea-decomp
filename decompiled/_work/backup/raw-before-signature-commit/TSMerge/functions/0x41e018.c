// name: FUN_0041e018
// address: 0x41e018
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0041e018(int param_1,int param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *in_FS_OFFSET;
  byte bVar4;
  undefined4 local_2c;
  
  bVar4 = 0;
  FUN_00455f04(0x467af8);
  *(undefined1 *)(param_1 + 0x28) = 1;
  if (*(int *)(param_1 + 0x18) != 0) {
    for (puVar1 = *(undefined1 **)(param_1 + 0x18); puVar1 != (undefined1 *)0x0;
        puVar1 = *(undefined1 **)(puVar1 + 0x55)) {
      if (param_2 == *(int *)(puVar1 + 1)) {
        *(int *)(puVar1 + 1) = param_2;
        puVar3 = (undefined4 *)(puVar1 + 5);
        for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar3 = *param_3;
          param_3 = param_3 + (uint)bVar4 * -2 + 1;
          puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
        }
        FUN_0041e954(param_1,puVar1);
        *in_FS_OFFSET = local_2c;
        return;
      }
    }
  }
  puVar1 = (undefined1 *)FUN_0044b300();
  if (puVar1 != (undefined1 *)0x0) {
    FUN_0041edf0(puVar1,param_2,param_3);
  }
  *(undefined4 *)(puVar1 + 0x55) = *(undefined4 *)(param_1 + 0x18);
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  *(int *)(param_1 + 0x29) = *(int *)(param_1 + 0x29) + 1;
  *in_FS_OFFSET = local_2c;
  return;
}

