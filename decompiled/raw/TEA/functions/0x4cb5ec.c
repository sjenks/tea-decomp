// name: FUN_004cb5ec
// address: 0x4cb5ec
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

bool __cdecl FUN_004cb5ec(uint *param_1,uint param_2,char param_3)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = *param_1 | 2;
  param_1[6] = param_2;
  if (param_3 == '\0') {
    bVar2 = true;
  }
  else {
    iVar1 = FUN_004a76a8(*(int *)param_1[10],0x110d,0,(LPARAM)param_1);
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}

