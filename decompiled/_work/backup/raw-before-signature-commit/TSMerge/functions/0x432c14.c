// name: FUN_00432c14
// address: 0x432c14
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int * __cdecl FUN_00432c14(undefined4 param_1)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *in_FS_OFFSET;
  int iVar3;
  undefined4 local_30;
  
  FUN_00455f04(0x46bdd4);
  piVar1 = (int *)FUN_0044b300();
  if (piVar1 != (int *)0x0) {
    iVar3 = 0;
    puVar2 = (uint *)FUN_0044b300();
    if (puVar2 != (uint *)0x0) {
      FUN_0041a0b0(puVar2,10,'\0',0);
    }
    FUN_00415f60(piVar1,0,param_1,0,puVar2,iVar3);
  }
  *in_FS_OFFSET = local_30;
  return piVar1;
}

