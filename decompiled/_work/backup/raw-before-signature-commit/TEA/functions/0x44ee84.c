// name: FUN_0044ee84
// address: 0x44ee84
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

void __cdecl
FUN_0044ee84(char *param_1,int *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  char *pcVar1;
  int iVar2;
  
  pcVar1 = FUN_004dcd6c(param_1,PTR_DAT_004f735c);
  if (pcVar1 == (char *)0x0) {
    *param_2 = 0;
  }
  else {
    iVar2 = FUN_004e39d0(pcVar1);
    *param_2 = iVar2;
  }
  iVar2 = FUN_0044e810();
  *param_3 = iVar2;
  iVar2 = FUN_0044e810();
  *param_4 = iVar2;
  iVar2 = FUN_0044e810();
  *param_5 = iVar2;
  iVar2 = FUN_0044e810();
  *param_6 = iVar2;
  return;
}

