// name: FUN_004e532c
// address: 0x4e532c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_004e532c(char *param_1,int *param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int local_c;
  int local_8;
  
  piVar1 = param_2;
  local_8 = 0;
  local_c = 0;
  while( true ) {
    iVar2 = FUN_004e5b18((int)*param_1);
    if (iVar2 == 0) break;
    param_1 = param_1 + 1;
    local_8 = local_8 + 1;
  }
  _DAT_00518bd0 = 0;
  uVar3 = FUN_004dfed8(FUN_004e5304,FUN_004e5320,&param_1,param_3,0x7fff,&local_8,&local_c);
  if (local_c < 1) {
    param_1 = param_1 + -local_8;
  }
  else if (local_c == 2) {
    uVar3 = 0xffffffff;
    _DAT_00518bd0 = 0x22;
  }
  if (piVar1 != (int *)0x0) {
    *piVar1 = (int)param_1;
  }
  return uVar3;
}

