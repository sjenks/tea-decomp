// name: FUN_00444b08
// address: 0x444b08
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_00444b08(undefined4 param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00467724((&PTR_s_Document_Class_00480df0)[iVar2],param_2);
    if (iVar1 == 0) {
      return iVar2 + 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  return 0;
}

