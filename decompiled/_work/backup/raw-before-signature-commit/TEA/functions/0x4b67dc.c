// name: FUN_004b67dc
// address: 0x4b67dc
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004b67dc(int *param_1)

{
  uint *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x50e29c);
  if (param_1[6] != 0) {
    (**(code **)(param_1[3] + 0x34))();
    puVar1 = (uint *)FUN_004b6ba0(param_1,0);
    FUN_004cf628((int)local_14,puVar1);
    iVar2 = (**(code **)(*(int *)param_1[6] + 0x14))();
    if (iVar2 != 0) {
      FUN_004dc9c4((char *)puVar1,local_c);
    }
    FUN_004b6c5c(param_1,(LPCSTR)puVar1,iVar2 != 0);
    (**(code **)(param_1[3] + 0x3c))();
    if (local_c != (char *)0x0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar3 = (int *)(local_c + -0xc);
        if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar3 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar3 = *piVar3 + -1;
          iVar2 = *piVar3 + 1;
        }
        if (iVar2 != 0) goto LAB_004b68fb;
      }
      FUN_004cc0bc();
    }
  }
LAB_004b68fb:
  *in_FS_OFFSET = local_38;
  return 0;
}

