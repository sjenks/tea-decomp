// name: FUN_0044a100
// address: 0x44a100
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_0044a100(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00455b74((&PTR_s_View_Class_0047034c)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}

