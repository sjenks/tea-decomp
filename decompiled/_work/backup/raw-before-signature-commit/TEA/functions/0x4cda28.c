// name: FUN_004cda28
// address: 0x4cda28
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl FUN_004cda28(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int *piVar3;
  
  while( true ) {
    bVar2 = FUN_004cda78(&param_2);
    if (bVar2) break;
    piVar3 = (int *)FUN_004cda90(param_2);
    FUN_004cda28(param_1,*piVar3);
    piVar3 = (int *)FUN_004cd864(param_2);
    iVar1 = *piVar3;
    FUN_004ce770(param_1,param_2,'\x01');
    param_2 = iVar1;
  }
  return;
}

