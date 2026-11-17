// name: FUN_0043ad9c
// address: 0x43ad9c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

undefined4 __cdecl FUN_0043ad9c(int param_1)

{
  undefined4 uVar1;
  char cVar2;
  DWORD DVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 local_7c;
  
  FUN_00467ba8(0x47f18c);
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
    FUN_0042c95c((int *)(param_1 + 0x11));
  }
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x16);
  *in_FS_OFFSET = local_7c;
  return uVar1;
}

