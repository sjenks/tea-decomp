// name: FUN_0044eb80
// address: 0x44eb80
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x0044ebbe) */

uint __cdecl FUN_0044eb80(int param_1,int param_2,uint *param_3)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 local_38;
  undefined1 local_14 [8];
  char *local_c;
  
  FUN_004dce64(0x4f7460);
  local_c = &DAT_00513d64;
  uVar2 = FUN_0044e94c(param_1,param_2,(int)local_14);
  cVar1 = (char)uVar2;
  if (cVar1 == '\x01') {
    uVar2 = FUN_0044ef10(local_c,param_3);
  }
  uVar3 = CONCAT31((int3)((uint)uVar2 >> 8),cVar1);
  if (local_c != (char *)0x0) {
    if (*(int *)(local_c + -0xc) != -1) {
      piVar5 = (int *)(local_c + -0xc);
      if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else if (piVar5 == &DAT_00513d58) {
        iVar4 = 1;
      }
      else {
        *piVar5 = *piVar5 + -1;
        iVar4 = *piVar5 + 1;
      }
      if (iVar4 != 0) goto LAB_0044ec66;
    }
    FUN_004cc0bc();
  }
LAB_0044ec66:
  *in_FS_OFFSET = local_38;
  return uVar3;
}

