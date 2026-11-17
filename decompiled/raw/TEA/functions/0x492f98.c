// name: FUN_00492f98
// address: 0x492f98
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00492f98(int *param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 local_2c;
  
  FUN_004dce64(0x506f10);
  if (*(int *)((int)param_1 + 0x3b) == 0) {
    iVar2 = *param_1;
    do {
      if (*(int *)(iVar2 + 0x14) == 0) break;
      iVar2 = *(int *)(iVar2 + 0x14);
    } while ((*(byte *)(iVar2 + 0x74) & 0x10) == 0);
    piVar1 = (int *)FUN_004cc0f0();
    if (piVar1 != (int *)0x0) {
      FUN_0049f628(piVar1,0,iVar2,'\x01',0);
    }
    FUN_0049304c(param_1,piVar1);
  }
  else if (*(int *)(**(int **)((int)param_1 + 0x3b) + 0xc) != 0) {
    FUN_004a76a8(**(int **)((int)param_1 + 0x3b),0x401,(uint)param_2,0);
  }
  *in_FS_OFFSET = local_2c;
  return;
}

