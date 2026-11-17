// name: FUN_004509f0
// address: 0x4509f0
// provider: Ghidra 12.1.4 (prepared project; borlandcpp)
// pseudocode: decompiler output; not original source

int __cdecl FUN_004509f0(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  HMODULE pHVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  FUN_00439490(param_2,(undefined4 *)(iVar1 + 4));
  iVar2 = FUN_0042db04(param_2);
  *(bool *)(iVar1 + 0xc) = iVar2 != 0;
  if (*(char *)(iVar1 + 0xc) != '\0') {
    pHVar3 = LoadLibraryA(*(LPCSTR *)(iVar1 + 4));
    *(HMODULE *)(iVar1 + 8) = pHVar3;
  }
  return iVar1;
}

