// name: FUN_0043dda8
// address: 0x43dda8
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_0043dda8(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_30;
  
  FUN_00467ba8(0x47fbb0);
  piVar1 = (int *)FUN_00456840();
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)FUN_00456840();
    if (puVar2 != (uint *)0x0) {
      FUN_00425224(puVar2,10,'\0',0);
    }
    FUN_00420f84(piVar1,0,param_1,0,puVar2,iVar3);
  }
  *in_FS_OFFSET = local_30;
  return piVar1;
}

