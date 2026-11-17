// name: FUN_00403778
// address: 0x403778
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00403778(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *in_FS_OFFSET;
  char cVar4;
  int iVar5;
  undefined4 local_30;
  
  FUN_00467ba8(0x474cd4);
  piVar1 = (int *)FUN_00456840();
  if (piVar1 != (int *)0x0) {
    iVar5 = 0;
    cVar4 = '\x01';
    piVar2 = (int *)FUN_00456840();
    if (piVar2 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      FUN_00401294(piVar2,0,0,(uint *)0x66);
      iVar3 = *piVar2;
    }
    FUN_0044cb34(piVar1,0,0,(uint *)s_TEA_Sympathy_Dictionary_Builder_00474674,iVar3,cVar4,iVar5);
  }
  *(uint *)(*piVar1 + 0x18) = *(uint *)(*piVar1 + 0x18) & 0xfffaffff;
  FUN_0044d2f0(piVar1,param_1 + 4,0x6c);
  FUN_0043a224(param_1,piVar1);
  *in_FS_OFFSET = local_30;
  return;
}

