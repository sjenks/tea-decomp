// name: FUN_004aa150
// address: 0x4aa150
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_004aa150(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  FUN_004dce64(0x50bbf4);
  *(undefined4 *)(param_1 + 0x16) = 0;
  while (*(char *)(param_1 + 0x15) == '\0') {
    cVar2 = (**(code **)(*(int *)(param_1 + 0x1b) + 0x14))();
    if (cVar2 == '\0') {
      DVar3 = MsgWaitForMultipleObjects
                        (*(DWORD *)(param_1 + 0x45),*(HANDLE **)(param_1 + 0x49),0,0xffffffff,0xff);
      if (DVar3 < *(uint *)(param_1 + 0x45)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
      else if ((0x7f < DVar3) && (DVar3 < *(int *)(param_1 + 0x45) + 0x80U)) {
        (**(code **)(*(int *)(param_1 + 0x1b) + 0x24))();
      }
    }
    FUN_00498d7c((int *)(param_1 + 0x11));
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x16);
  *in_FS_OFFSET = local_7c;
  return uVar1;
}

