// name: FUN_004ca29c
// address: 0x4ca29c
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004ca29c(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_004dc978((&PTR_s_View_Class_00511fd0)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

