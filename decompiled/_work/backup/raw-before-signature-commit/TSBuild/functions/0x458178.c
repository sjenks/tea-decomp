// name: FUN_00458178
// address: 0x458178
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_00458178(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  while( true ) {
    bVar2 = FUN_004581c8(&param_2);
    if (bVar2) break;
    piVar3 = (int *)FUN_004581e0(param_2);
    FUN_00458178(param_1,*piVar3);
    piVar3 = (int *)FUN_00457fb4(param_2);
    iVar1 = *piVar3;
    FUN_00458ec0(param_1,param_2,'\x01');
    param_2 = iVar1;
  }
  return;
}

