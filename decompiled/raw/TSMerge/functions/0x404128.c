// name: FUN_00404128
// address: 0x404128
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00404128(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int iVar5;
  undefined4 local_30;
  
  FUN_00455f04(0x461ea4);
  piVar1 = (int *)FUN_0044b300();
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    cVar4 = '\x01';
    piVar2 = (int *)FUN_0044b300();
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      FUN_004016c0(piVar2,0,0,(uint *)0x66);
      iVar3 = *piVar2;
    }
    FUN_004419a0(piVar1,0,0,(uint *)s_TEA_Sympathy_Word_List_Merge_00461790,iVar3,cVar4,iVar5);
  }
  DAT_00461e80 = piVar1;
  *(uint *)(*piVar1 + 0x18) = *(uint *)(*piVar1 + 0x18) & 0xfffaffff;
  FUN_0044215c(DAT_00461e80,param_1 + 4,0x6c);
  FUN_0042f090(param_1,DAT_00461e80);
  *in_FS_OFFSET = local_30;
  return;
}

