// name: FUN_004ae07c
// address: 0x4ae07c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_004ae07c(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_30;
  
  FUN_004dce64(0x50ca54);
  piVar1 = (int *)FUN_004cc0f0();
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)FUN_004cc0f0();
    if (puVar2 != (uint *)0x0) {
      FUN_00490fa8(puVar2,10,'\0',0);
    }
    FUN_0048ce64(piVar1,0,param_1,0,puVar2,iVar3);
  }
  *in_FS_OFFSET = local_30;
  return piVar1;
}

