// name: FUN_0044f4a8
// address: 0x44f4a8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_0044f4a8(int param_1)

{
  int iVar1;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x3d) == '\0') {
    *(undefined1 *)(param_1 + 0x3d) = 1;
    iVar1 = *(int *)(param_1 + 4);
    if ((iVar1 != 0) && (*(int *)(iVar1 + 0xc) != 0)) {
      if (*(char *)(param_1 + 0x3b) != '\0') {
        FUN_004a7fdc(iVar1,0,&local_8,&local_c);
        if (*(int *)(param_1 + 0x10) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(param_1 + 0x10) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x10);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_c) || (local_8 != 0)) {
          FUN_004a802c(*(int *)(param_1 + 4),0,0,iVar1,*(byte *)(param_1 + 0x3e));
        }
      }
      if (*(char *)(param_1 + 0x3c) != '\0') {
        FUN_004a7fdc(*(int *)(param_1 + 4),1,&local_10,&local_14);
        if (*(int *)(param_1 + 0x14) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if (iVar1 < 0) {
          iVar1 = 0;
        }
        else if (*(int *)(param_1 + 0x14) < 0x7fff) {
          iVar1 = *(int *)(param_1 + 0x14);
        }
        else {
          iVar1 = 0x7fff;
        }
        if ((iVar1 != local_14) || (local_10 != 0)) {
          FUN_004a802c(*(int *)(param_1 + 4),1,0,iVar1,*(byte *)(param_1 + 0x3e));
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
  }
  return;
}

