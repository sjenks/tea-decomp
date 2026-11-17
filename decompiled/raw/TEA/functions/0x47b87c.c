// name: FUN_0047b87c
// address: 0x47b87c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0047b8d2) */

void __cdecl FUN_0047b87c(int param_1)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x501150);
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  if ((uint)(iVar2 >> 4) <= *(uint *)(param_1 + 0x80)) goto LAB_0047ba0a;
  iVar2 = *(uint *)(param_1 + 0x80) * 0x10 + *(int *)(param_1 + 100);
  pcVar1 = thunk_FUN_004dc794(*(char **)(iVar2 + 8),' ',*(int *)(*(int *)(iVar2 + 8) + -4));
  uVar3 = DAT_005140ac;
  if (pcVar1 != (char *)0x0) {
    uVar3 = (int)pcVar1 - *(int *)(iVar2 + 8);
  }
  if (uVar3 < *(uint *)(*(int *)(iVar2 + 8) + -4)) {
    FUN_004d6118((int)local_14,iVar2,uVar3 + 1,DAT_005140ac);
    FUN_0041ac90(*(int **)(param_1 + 0x88),(int)local_14);
    iVar2 = FUN_004e39d0(*(char **)(iVar2 + 8));
    *(int *)(param_1 + 0x84) = iVar2;
    if (local_c != 0) {
      if (*(int *)(local_c + -0xc) != -1) {
        piVar4 = (int *)(local_c + -0xc);
        if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else if (piVar4 == &DAT_00513d58) {
          iVar2 = 1;
        }
        else {
          *piVar4 = *piVar4 + -1;
          iVar2 = *piVar4 + 1;
        }
        if (iVar2 != 0) goto LAB_0047b9e2;
      }
      FUN_004cc0bc();
    }
  }
LAB_0047b9e2:
  iVar2 = *(int *)(param_1 + 0x68) - *(int *)(param_1 + 100);
  if (iVar2 < 0) {
    iVar2 = iVar2 + 0xf;
  }
  *(uint *)(param_1 + 0x80) = (*(int *)(param_1 + 0x80) + 1U) % (uint)(iVar2 >> 4);
LAB_0047ba0a:
  *in_FS_OFFSET = local_38;
  return;
}

