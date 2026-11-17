// name: FUN_00435534
// address: 0x435534
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Removing unreachable block (ram,0x00435557) */

int __cdecl FUN_00435534(int param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  undefined4 *in_FS_OFFSET;
  uint *puVar4;
  undefined4 local_38;
  undefined1 local_14 [8];
  int local_c;
  
  FUN_004dce64(0x4f33fc);
  pcVar1 = thunk_FUN_004dc794(*(char **)(param_2 + 8),' ',*(int *)(*(int *)(param_2 + 8) + -4));
  iVar2 = DAT_005140ac;
  if (pcVar1 != (char *)0x0) {
    iVar2 = (int)pcVar1 - *(int *)(param_2 + 8);
  }
  if (iVar2 == -1) {
    FUN_00435880(param_1,(uint *)&DAT_004f357f,param_2);
    *in_FS_OFFSET = local_38;
    return param_1;
  }
  puVar4 = (uint *)&DAT_004f357d;
  FUN_00435880((int)local_14,(uint *)&DAT_004f357c,param_2);
  FUN_00401d10(param_1,(int)local_14,puVar4);
  if (local_c != 0) {
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
      if (iVar2 != 0) goto LAB_00435644;
    }
    FUN_004cc0bc();
  }
LAB_00435644:
  *in_FS_OFFSET = local_38;
  return param_1;
}

